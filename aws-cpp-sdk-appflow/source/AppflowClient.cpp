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

#include <aws/appflow/AppflowClient.h>
#include <aws/appflow/AppflowEndpoint.h>
#include <aws/appflow/AppflowErrorMarshaller.h>
#include <aws/appflow/model/CreateConnectorProfileRequest.h>
#include <aws/appflow/model/CreateFlowRequest.h>
#include <aws/appflow/model/DeleteConnectorProfileRequest.h>
#include <aws/appflow/model/DeleteFlowRequest.h>
#include <aws/appflow/model/DescribeConnectorRequest.h>
#include <aws/appflow/model/DescribeConnectorEntityRequest.h>
#include <aws/appflow/model/DescribeConnectorProfilesRequest.h>
#include <aws/appflow/model/DescribeConnectorsRequest.h>
#include <aws/appflow/model/DescribeFlowRequest.h>
#include <aws/appflow/model/DescribeFlowExecutionRecordsRequest.h>
#include <aws/appflow/model/ListConnectorEntitiesRequest.h>
#include <aws/appflow/model/ListConnectorsRequest.h>
#include <aws/appflow/model/ListFlowsRequest.h>
#include <aws/appflow/model/ListTagsForResourceRequest.h>
#include <aws/appflow/model/RegisterConnectorRequest.h>
#include <aws/appflow/model/StartFlowRequest.h>
#include <aws/appflow/model/StopFlowRequest.h>
#include <aws/appflow/model/TagResourceRequest.h>
#include <aws/appflow/model/UnregisterConnectorRequest.h>
#include <aws/appflow/model/UntagResourceRequest.h>
#include <aws/appflow/model/UpdateConnectorProfileRequest.h>
#include <aws/appflow/model/UpdateFlowRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Appflow;
using namespace Aws::Appflow::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appflow";
static const char* ALLOCATION_TAG = "AppflowClient";

AppflowClient::AppflowClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppflowClient::AppflowClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppflowClient::AppflowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppflowClient::~AppflowClient()
{
}

void AppflowClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Appflow");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppflowEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppflowClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateConnectorProfileOutcome AppflowClient::CreateConnectorProfile(const CreateConnectorProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-connector-profile");
  return CreateConnectorProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorProfileOutcomeCallable AppflowClient::CreateConnectorProfileCallable(const CreateConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientCreateConnectorProfileAsyncHelper(AppflowClient const * const clientThis, const CreateConnectorProfileRequest& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConnectorProfile(request), context);
}

void AppflowClient::CreateConnectorProfileAsync(const CreateConnectorProfileRequest& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientCreateConnectorProfileAsyncHelper( this, request, handler, context ); } );
}

CreateFlowOutcome AppflowClient::CreateFlow(const CreateFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-flow");
  return CreateFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowOutcomeCallable AppflowClient::CreateFlowCallable(const CreateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientCreateFlowAsyncHelper(AppflowClient const * const clientThis, const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFlow(request), context);
}

void AppflowClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientCreateFlowAsyncHelper( this, request, handler, context ); } );
}

DeleteConnectorProfileOutcome AppflowClient::DeleteConnectorProfile(const DeleteConnectorProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-connector-profile");
  return DeleteConnectorProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectorProfileOutcomeCallable AppflowClient::DeleteConnectorProfileCallable(const DeleteConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDeleteConnectorProfileAsyncHelper(AppflowClient const * const clientThis, const DeleteConnectorProfileRequest& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConnectorProfile(request), context);
}

void AppflowClient::DeleteConnectorProfileAsync(const DeleteConnectorProfileRequest& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDeleteConnectorProfileAsyncHelper( this, request, handler, context ); } );
}

DeleteFlowOutcome AppflowClient::DeleteFlow(const DeleteFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-flow");
  return DeleteFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowOutcomeCallable AppflowClient::DeleteFlowCallable(const DeleteFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDeleteFlowAsyncHelper(AppflowClient const * const clientThis, const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFlow(request), context);
}

void AppflowClient::DeleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDeleteFlowAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectorOutcome AppflowClient::DescribeConnector(const DescribeConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-connector");
  return DescribeConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorOutcomeCallable AppflowClient::DescribeConnectorCallable(const DescribeConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeConnectorAsyncHelper(AppflowClient const * const clientThis, const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnector(request), context);
}

void AppflowClient::DescribeConnectorAsync(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeConnectorAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectorEntityOutcome AppflowClient::DescribeConnectorEntity(const DescribeConnectorEntityRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-connector-entity");
  return DescribeConnectorEntityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorEntityOutcomeCallable AppflowClient::DescribeConnectorEntityCallable(const DescribeConnectorEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectorEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeConnectorEntityAsyncHelper(AppflowClient const * const clientThis, const DescribeConnectorEntityRequest& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectorEntity(request), context);
}

void AppflowClient::DescribeConnectorEntityAsync(const DescribeConnectorEntityRequest& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeConnectorEntityAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectorProfilesOutcome AppflowClient::DescribeConnectorProfiles(const DescribeConnectorProfilesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-connector-profiles");
  return DescribeConnectorProfilesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorProfilesOutcomeCallable AppflowClient::DescribeConnectorProfilesCallable(const DescribeConnectorProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectorProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeConnectorProfilesAsyncHelper(AppflowClient const * const clientThis, const DescribeConnectorProfilesRequest& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectorProfiles(request), context);
}

void AppflowClient::DescribeConnectorProfilesAsync(const DescribeConnectorProfilesRequest& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeConnectorProfilesAsyncHelper( this, request, handler, context ); } );
}

DescribeConnectorsOutcome AppflowClient::DescribeConnectors(const DescribeConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-connectors");
  return DescribeConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorsOutcomeCallable AppflowClient::DescribeConnectorsCallable(const DescribeConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeConnectorsAsyncHelper(AppflowClient const * const clientThis, const DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConnectors(request), context);
}

void AppflowClient::DescribeConnectorsAsync(const DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeConnectorsAsyncHelper( this, request, handler, context ); } );
}

DescribeFlowOutcome AppflowClient::DescribeFlow(const DescribeFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-flow");
  return DescribeFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowOutcomeCallable AppflowClient::DescribeFlowCallable(const DescribeFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeFlowAsyncHelper(AppflowClient const * const clientThis, const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFlow(request), context);
}

void AppflowClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeFlowAsyncHelper( this, request, handler, context ); } );
}

DescribeFlowExecutionRecordsOutcome AppflowClient::DescribeFlowExecutionRecords(const DescribeFlowExecutionRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-flow-execution-records");
  return DescribeFlowExecutionRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowExecutionRecordsOutcomeCallable AppflowClient::DescribeFlowExecutionRecordsCallable(const DescribeFlowExecutionRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowExecutionRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowExecutionRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientDescribeFlowExecutionRecordsAsyncHelper(AppflowClient const * const clientThis, const DescribeFlowExecutionRecordsRequest& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFlowExecutionRecords(request), context);
}

void AppflowClient::DescribeFlowExecutionRecordsAsync(const DescribeFlowExecutionRecordsRequest& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientDescribeFlowExecutionRecordsAsyncHelper( this, request, handler, context ); } );
}

ListConnectorEntitiesOutcome AppflowClient::ListConnectorEntities(const ListConnectorEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-connector-entities");
  return ListConnectorEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorEntitiesOutcomeCallable AppflowClient::ListConnectorEntitiesCallable(const ListConnectorEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectorEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientListConnectorEntitiesAsyncHelper(AppflowClient const * const clientThis, const ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConnectorEntities(request), context);
}

void AppflowClient::ListConnectorEntitiesAsync(const ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientListConnectorEntitiesAsyncHelper( this, request, handler, context ); } );
}

ListConnectorsOutcome AppflowClient::ListConnectors(const ListConnectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-connectors");
  return ListConnectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorsOutcomeCallable AppflowClient::ListConnectorsCallable(const ListConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientListConnectorsAsyncHelper(AppflowClient const * const clientThis, const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConnectors(request), context);
}

void AppflowClient::ListConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientListConnectorsAsyncHelper( this, request, handler, context ); } );
}

ListFlowsOutcome AppflowClient::ListFlows(const ListFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-flows");
  return ListFlowsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFlowsOutcomeCallable AppflowClient::ListFlowsCallable(const ListFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientListFlowsAsyncHelper(AppflowClient const * const clientThis, const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFlows(request), context);
}

void AppflowClient::ListFlowsAsync(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientListFlowsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AppflowClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppflowClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientListTagsForResourceAsyncHelper(AppflowClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AppflowClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RegisterConnectorOutcome AppflowClient::RegisterConnector(const RegisterConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/register-connector");
  return RegisterConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterConnectorOutcomeCallable AppflowClient::RegisterConnectorCallable(const RegisterConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientRegisterConnectorAsyncHelper(AppflowClient const * const clientThis, const RegisterConnectorRequest& request, const RegisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterConnector(request), context);
}

void AppflowClient::RegisterConnectorAsync(const RegisterConnectorRequest& request, const RegisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientRegisterConnectorAsyncHelper( this, request, handler, context ); } );
}

StartFlowOutcome AppflowClient::StartFlow(const StartFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/start-flow");
  return StartFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFlowOutcomeCallable AppflowClient::StartFlowCallable(const StartFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientStartFlowAsyncHelper(AppflowClient const * const clientThis, const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartFlow(request), context);
}

void AppflowClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientStartFlowAsyncHelper( this, request, handler, context ); } );
}

StopFlowOutcome AppflowClient::StopFlow(const StopFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/stop-flow");
  return StopFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFlowOutcomeCallable AppflowClient::StopFlowCallable(const StopFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientStopFlowAsyncHelper(AppflowClient const * const clientThis, const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopFlow(request), context);
}

void AppflowClient::StopFlowAsync(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientStopFlowAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AppflowClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppflowClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientTagResourceAsyncHelper(AppflowClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AppflowClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UnregisterConnectorOutcome AppflowClient::UnregisterConnector(const UnregisterConnectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/unregister-connector");
  return UnregisterConnectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnregisterConnectorOutcomeCallable AppflowClient::UnregisterConnectorCallable(const UnregisterConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnregisterConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnregisterConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientUnregisterConnectorAsyncHelper(AppflowClient const * const clientThis, const UnregisterConnectorRequest& request, const UnregisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnregisterConnector(request), context);
}

void AppflowClient::UnregisterConnectorAsync(const UnregisterConnectorRequest& request, const UnregisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientUnregisterConnectorAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AppflowClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppflowClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientUntagResourceAsyncHelper(AppflowClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AppflowClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateConnectorProfileOutcome AppflowClient::UpdateConnectorProfile(const UpdateConnectorProfileRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-connector-profile");
  return UpdateConnectorProfileOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorProfileOutcomeCallable AppflowClient::UpdateConnectorProfileCallable(const UpdateConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientUpdateConnectorProfileAsyncHelper(AppflowClient const * const clientThis, const UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConnectorProfile(request), context);
}

void AppflowClient::UpdateConnectorProfileAsync(const UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientUpdateConnectorProfileAsyncHelper( this, request, handler, context ); } );
}

UpdateFlowOutcome AppflowClient::UpdateFlow(const UpdateFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-flow");
  return UpdateFlowOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutcomeCallable AppflowClient::UpdateFlowCallable(const UpdateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClientUpdateFlowAsyncHelper(AppflowClient const * const clientThis, const UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFlow(request), context);
}

void AppflowClient::UpdateFlowAsync(const UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppflowClientUpdateFlowAsyncHelper( this, request, handler, context ); } );
}

