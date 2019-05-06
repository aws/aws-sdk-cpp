/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/iot-data/model/GetThingShadowRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::IoTDataPlaneClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::IoTDataPlaneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<IoTDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTDataPlaneClient::~IoTDataPlaneClient()
{
}

void IoTDataPlaneClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/shadow";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteThingShadowOutcome(DeleteThingShadowResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return DeleteThingShadowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThingShadowAsyncHelper( request, handler, context ); } );
}

void IoTDataPlaneClient::DeleteThingShadowAsyncHelper(const DeleteThingShadowRequest& request, const DeleteThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThingShadow(request), context);
}

GetThingShadowOutcome IoTDataPlaneClient::GetThingShadow(const GetThingShadowRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThingShadow", "Required field: ThingName, is not set");
    return GetThingShadowOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/shadow";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetThingShadowOutcome(GetThingShadowResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetThingShadowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetThingShadowAsyncHelper( request, handler, context ); } );
}

void IoTDataPlaneClient::GetThingShadowAsyncHelper(const GetThingShadowRequest& request, const GetThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetThingShadow(request), context);
}

PublishOutcome IoTDataPlaneClient::Publish(const PublishRequest& request) const
{
  if (!request.TopicHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Publish", "Required field: Topic, is not set");
    return PublishOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Topic]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/topics/";
  ss << request.GetTopic();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PublishOutcome(NoResult());
  }
  else
  {
    return PublishOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PublishAsyncHelper( request, handler, context ); } );
}

void IoTDataPlaneClient::PublishAsyncHelper(const PublishRequest& request, const PublishResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Publish(request), context);
}

UpdateThingShadowOutcome IoTDataPlaneClient::UpdateThingShadow(const UpdateThingShadowRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThingShadow", "Required field: ThingName, is not set");
    return UpdateThingShadowOutcome(Aws::Client::AWSError<IoTDataPlaneErrors>(IoTDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/things/";
  ss << request.GetThingName();
  ss << "/shadow";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateThingShadowOutcome(UpdateThingShadowResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return UpdateThingShadowOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThingShadowAsyncHelper( request, handler, context ); } );
}

void IoTDataPlaneClient::UpdateThingShadowAsyncHelper(const UpdateThingShadowRequest& request, const UpdateThingShadowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThingShadow(request), context);
}

