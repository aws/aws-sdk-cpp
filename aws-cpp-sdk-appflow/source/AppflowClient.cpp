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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/appflow/AppflowClient.h>
#include <aws/appflow/AppflowErrorMarshaller.h>
#include <aws/appflow/AppflowEndpointProvider.h>
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
#include <aws/appflow/model/UpdateConnectorRegistrationRequest.h>
#include <aws/appflow/model/UpdateFlowRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Appflow;
using namespace Aws::Appflow::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppflowClient::SERVICE_NAME = "appflow";
const char* AppflowClient::ALLOCATION_TAG = "AppflowClient";

AppflowClient::AppflowClient(const Appflow::AppflowClientConfiguration& clientConfiguration,
                             std::shared_ptr<AppflowEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppflowClient::AppflowClient(const AWSCredentials& credentials,
                             std::shared_ptr<AppflowEndpointProviderBase> endpointProvider,
                             const Appflow::AppflowClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppflowClient::AppflowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AppflowEndpointProviderBase> endpointProvider,
                             const Appflow::AppflowClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppflowClient::AppflowClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppflowClient::AppflowClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppflowClient::AppflowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppflowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppflowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppflowClient::~AppflowClient()
{
}

std::shared_ptr<AppflowEndpointProviderBase>& AppflowClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppflowClient::init(const Appflow::AppflowClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Appflow");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppflowClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateConnectorProfileOutcome AppflowClient::CreateConnectorProfile(const CreateConnectorProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-connector-profile");
  return CreateConnectorProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConnectorProfileOutcomeCallable AppflowClient::CreateConnectorProfileCallable(const CreateConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::CreateConnectorProfileAsync(const CreateConnectorProfileRequest& request, const CreateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConnectorProfile(request), context);
    } );
}

CreateFlowOutcome AppflowClient::CreateFlow(const CreateFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/create-flow");
  return CreateFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowOutcomeCallable AppflowClient::CreateFlowCallable(const CreateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFlow(request), context);
    } );
}

DeleteConnectorProfileOutcome AppflowClient::DeleteConnectorProfile(const DeleteConnectorProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-connector-profile");
  return DeleteConnectorProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConnectorProfileOutcomeCallable AppflowClient::DeleteConnectorProfileCallable(const DeleteConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DeleteConnectorProfileAsync(const DeleteConnectorProfileRequest& request, const DeleteConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConnectorProfile(request), context);
    } );
}

DeleteFlowOutcome AppflowClient::DeleteFlow(const DeleteFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delete-flow");
  return DeleteFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowOutcomeCallable AppflowClient::DeleteFlowCallable(const DeleteFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DeleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFlow(request), context);
    } );
}

DescribeConnectorOutcome AppflowClient::DescribeConnector(const DescribeConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-connector");
  return DescribeConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorOutcomeCallable AppflowClient::DescribeConnectorCallable(const DescribeConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeConnectorAsync(const DescribeConnectorRequest& request, const DescribeConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnector(request), context);
    } );
}

DescribeConnectorEntityOutcome AppflowClient::DescribeConnectorEntity(const DescribeConnectorEntityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectorEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectorEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-connector-entity");
  return DescribeConnectorEntityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorEntityOutcomeCallable AppflowClient::DescribeConnectorEntityCallable(const DescribeConnectorEntityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorEntityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectorEntity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeConnectorEntityAsync(const DescribeConnectorEntityRequest& request, const DescribeConnectorEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnectorEntity(request), context);
    } );
}

DescribeConnectorProfilesOutcome AppflowClient::DescribeConnectorProfiles(const DescribeConnectorProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectorProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectorProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-connector-profiles");
  return DescribeConnectorProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorProfilesOutcomeCallable AppflowClient::DescribeConnectorProfilesCallable(const DescribeConnectorProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectorProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeConnectorProfilesAsync(const DescribeConnectorProfilesRequest& request, const DescribeConnectorProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnectorProfiles(request), context);
    } );
}

DescribeConnectorsOutcome AppflowClient::DescribeConnectors(const DescribeConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-connectors");
  return DescribeConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConnectorsOutcomeCallable AppflowClient::DescribeConnectorsCallable(const DescribeConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeConnectorsAsync(const DescribeConnectorsRequest& request, const DescribeConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeConnectors(request), context);
    } );
}

DescribeFlowOutcome AppflowClient::DescribeFlow(const DescribeFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-flow");
  return DescribeFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowOutcomeCallable AppflowClient::DescribeFlowCallable(const DescribeFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFlow(request), context);
    } );
}

DescribeFlowExecutionRecordsOutcome AppflowClient::DescribeFlowExecutionRecords(const DescribeFlowExecutionRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlowExecutionRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlowExecutionRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe-flow-execution-records");
  return DescribeFlowExecutionRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowExecutionRecordsOutcomeCallable AppflowClient::DescribeFlowExecutionRecordsCallable(const DescribeFlowExecutionRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowExecutionRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlowExecutionRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::DescribeFlowExecutionRecordsAsync(const DescribeFlowExecutionRecordsRequest& request, const DescribeFlowExecutionRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFlowExecutionRecords(request), context);
    } );
}

ListConnectorEntitiesOutcome AppflowClient::ListConnectorEntities(const ListConnectorEntitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectorEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectorEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-connector-entities");
  return ListConnectorEntitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorEntitiesOutcomeCallable AppflowClient::ListConnectorEntitiesCallable(const ListConnectorEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectorEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::ListConnectorEntitiesAsync(const ListConnectorEntitiesRequest& request, const ListConnectorEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnectorEntities(request), context);
    } );
}

ListConnectorsOutcome AppflowClient::ListConnectors(const ListConnectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-connectors");
  return ListConnectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConnectorsOutcomeCallable AppflowClient::ListConnectorsCallable(const ListConnectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConnectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConnectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::ListConnectorsAsync(const ListConnectorsRequest& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConnectors(request), context);
    } );
}

ListFlowsOutcome AppflowClient::ListFlows(const ListFlowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-flows");
  return ListFlowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFlowsOutcomeCallable AppflowClient::ListFlowsCallable(const ListFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::ListFlowsAsync(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFlows(request), context);
    } );
}

ListTagsForResourceOutcome AppflowClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppflowClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

RegisterConnectorOutcome AppflowClient::RegisterConnector(const RegisterConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/register-connector");
  return RegisterConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterConnectorOutcomeCallable AppflowClient::RegisterConnectorCallable(const RegisterConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::RegisterConnectorAsync(const RegisterConnectorRequest& request, const RegisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterConnector(request), context);
    } );
}

StartFlowOutcome AppflowClient::StartFlow(const StartFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start-flow");
  return StartFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartFlowOutcomeCallable AppflowClient::StartFlowCallable(const StartFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartFlow(request), context);
    } );
}

StopFlowOutcome AppflowClient::StopFlow(const StopFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop-flow");
  return StopFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFlowOutcomeCallable AppflowClient::StopFlowCallable(const StopFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::StopFlowAsync(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopFlow(request), context);
    } );
}

TagResourceOutcome AppflowClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppflowErrors>(AppflowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppflowClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UnregisterConnectorOutcome AppflowClient::UnregisterConnector(const UnregisterConnectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnregisterConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnregisterConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/unregister-connector");
  return UnregisterConnectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnregisterConnectorOutcomeCallable AppflowClient::UnregisterConnectorCallable(const UnregisterConnectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnregisterConnectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnregisterConnector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::UnregisterConnectorAsync(const UnregisterConnectorRequest& request, const UnregisterConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnregisterConnector(request), context);
    } );
}

UntagResourceOutcome AppflowClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppflowClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateConnectorProfileOutcome AppflowClient::UpdateConnectorProfile(const UpdateConnectorProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectorProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-connector-profile");
  return UpdateConnectorProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorProfileOutcomeCallable AppflowClient::UpdateConnectorProfileCallable(const UpdateConnectorProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectorProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::UpdateConnectorProfileAsync(const UpdateConnectorProfileRequest& request, const UpdateConnectorProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConnectorProfile(request), context);
    } );
}

UpdateConnectorRegistrationOutcome AppflowClient::UpdateConnectorRegistration(const UpdateConnectorRegistrationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConnectorRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConnectorRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-connector-registration");
  return UpdateConnectorRegistrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConnectorRegistrationOutcomeCallable AppflowClient::UpdateConnectorRegistrationCallable(const UpdateConnectorRegistrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConnectorRegistrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConnectorRegistration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::UpdateConnectorRegistrationAsync(const UpdateConnectorRegistrationRequest& request, const UpdateConnectorRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConnectorRegistration(request), context);
    } );
}

UpdateFlowOutcome AppflowClient::UpdateFlow(const UpdateFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/update-flow");
  return UpdateFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutcomeCallable AppflowClient::UpdateFlowCallable(const UpdateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppflowClient::UpdateFlowAsync(const UpdateFlowRequest& request, const UpdateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFlow(request), context);
    } );
}

