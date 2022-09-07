/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/iot-data/IoTDataPlaneClient.h>
#include <aws/iot-data/IoTDataPlaneEndpoint.h>
#include <aws/iot-data/IoTDataPlaneErrorMarshaller.h>
#include <aws/iot-data/model/DeleteThingShadowRequest.h>
#include <aws/iot-data/model/GetRetainedMessageRequest.h>
#include <aws/iot-data/model/GetThingShadowRequest.h>
#include <aws/iot-data/model/ListNamedShadowsForThingRequest.h>
#include <aws/iot-data/model/ListRetainedMessagesRequest.h>
#include <aws/iot-data/model/PublishRequest.h>
#include <aws/iot-data/model/UpdateThingShadowRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTDataPlane;
using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iotdata";
static const char* ALLOCATION_TAG = "IoTDataPlaneClient";

IoTDataPlaneClient::IoTDataPlaneClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::IoTDataPlaneClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::IoTDataPlaneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::~IoTDataPlaneClient()
{
}

void IoTDataPlaneClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("IoT Data Plane");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTDataPlaneEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTDataPlaneClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

DeleteThingShadowOutcome IoTDataPlaneClient::DeleteThingShadow(const DeleteThingShadowRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThingShadow", "Required field: ThingName, is not set");
    return DeleteThingShadowOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/shadow");
  return DeleteThingShadowOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteThingShadowOutcomeCallable IoTDataPlaneClient::DeleteThingShadowCallable(const DeleteThingShadowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThingShadowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThingShadow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::DeleteThingShadowAsync(const DeleteThingShadowRequest& request, const DeleteThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteThingShadow(request), context);
    } );
}

GetRetainedMessageOutcome IoTDataPlaneClient::GetRetainedMessage(const GetRetainedMessageRequest& request) const
{
  if (!request.TopicHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRetainedMessage", "Required field: Topic, is not set");
    return GetRetainedMessageOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Topic]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/retainedMessage/");
  uri.AddPathSegment(request.GetTopic());
  return GetRetainedMessageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRetainedMessageOutcomeCallable IoTDataPlaneClient::GetRetainedMessageCallable(const GetRetainedMessageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRetainedMessageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRetainedMessage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::GetRetainedMessageAsync(const GetRetainedMessageRequest& request, const GetRetainedMessageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRetainedMessage(request), context);
    } );
}

GetThingShadowOutcome IoTDataPlaneClient::GetThingShadow(const GetThingShadowRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThingShadow", "Required field: ThingName, is not set");
    return GetThingShadowOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/shadow");
  return GetThingShadowOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetThingShadowOutcomeCallable IoTDataPlaneClient::GetThingShadowCallable(const GetThingShadowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThingShadowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThingShadow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::GetThingShadowAsync(const GetThingShadowRequest& request, const GetThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetThingShadow(request), context);
    } );
}

ListNamedShadowsForThingOutcome IoTDataPlaneClient::ListNamedShadowsForThing(const ListNamedShadowsForThingRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamedShadowsForThing", "Required field: ThingName, is not set");
    return ListNamedShadowsForThingOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/api/things/shadow/ListNamedShadowsForThing/");
  uri.AddPathSegment(request.GetThingName());
  return ListNamedShadowsForThingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNamedShadowsForThingOutcomeCallable IoTDataPlaneClient::ListNamedShadowsForThingCallable(const ListNamedShadowsForThingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamedShadowsForThingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamedShadowsForThing(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::ListNamedShadowsForThingAsync(const ListNamedShadowsForThingRequest& request, const ListNamedShadowsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListNamedShadowsForThing(request), context);
    } );
}

ListRetainedMessagesOutcome IoTDataPlaneClient::ListRetainedMessages(const ListRetainedMessagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/retainedMessage");
  return ListRetainedMessagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRetainedMessagesOutcomeCallable IoTDataPlaneClient::ListRetainedMessagesCallable(const ListRetainedMessagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRetainedMessagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRetainedMessages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::ListRetainedMessagesAsync(const ListRetainedMessagesRequest& request, const ListRetainedMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRetainedMessages(request), context);
    } );
}

PublishOutcome IoTDataPlaneClient::Publish(const PublishRequest& request) const
{
  if (!request.TopicHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Publish", "Required field: Topic, is not set");
    return PublishOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Topic]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/topics/");
  uri.AddPathSegment(request.GetTopic());
  return PublishOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishOutcomeCallable IoTDataPlaneClient::PublishCallable(const PublishRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Publish(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::PublishAsync(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Publish(request), context);
    } );
}

UpdateThingShadowOutcome IoTDataPlaneClient::UpdateThingShadow(const UpdateThingShadowRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThingShadow", "Required field: ThingName, is not set");
    return UpdateThingShadowOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/shadow");
  return UpdateThingShadowOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateThingShadowOutcomeCallable IoTDataPlaneClient::UpdateThingShadowCallable(const UpdateThingShadowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThingShadowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThingShadow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTDataPlaneClient::UpdateThingShadowAsync(const UpdateThingShadowRequest& request, const UpdateThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateThingShadow(request), context);
    } );
}

