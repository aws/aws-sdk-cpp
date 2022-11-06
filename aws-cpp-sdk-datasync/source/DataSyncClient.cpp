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

#include <aws/datasync/DataSyncClient.h>
#include <aws/datasync/DataSyncErrorMarshaller.h>
#include <aws/datasync/DataSyncEndpointProvider.h>
#include <aws/datasync/model/CancelTaskExecutionRequest.h>
#include <aws/datasync/model/CreateAgentRequest.h>
#include <aws/datasync/model/CreateLocationEfsRequest.h>
#include <aws/datasync/model/CreateLocationFsxLustreRequest.h>
#include <aws/datasync/model/CreateLocationFsxOntapRequest.h>
#include <aws/datasync/model/CreateLocationFsxOpenZfsRequest.h>
#include <aws/datasync/model/CreateLocationFsxWindowsRequest.h>
#include <aws/datasync/model/CreateLocationHdfsRequest.h>
#include <aws/datasync/model/CreateLocationNfsRequest.h>
#include <aws/datasync/model/CreateLocationObjectStorageRequest.h>
#include <aws/datasync/model/CreateLocationS3Request.h>
#include <aws/datasync/model/CreateLocationSmbRequest.h>
#include <aws/datasync/model/CreateTaskRequest.h>
#include <aws/datasync/model/DeleteAgentRequest.h>
#include <aws/datasync/model/DeleteLocationRequest.h>
#include <aws/datasync/model/DeleteTaskRequest.h>
#include <aws/datasync/model/DescribeAgentRequest.h>
#include <aws/datasync/model/DescribeLocationEfsRequest.h>
#include <aws/datasync/model/DescribeLocationFsxLustreRequest.h>
#include <aws/datasync/model/DescribeLocationFsxOntapRequest.h>
#include <aws/datasync/model/DescribeLocationFsxOpenZfsRequest.h>
#include <aws/datasync/model/DescribeLocationFsxWindowsRequest.h>
#include <aws/datasync/model/DescribeLocationHdfsRequest.h>
#include <aws/datasync/model/DescribeLocationNfsRequest.h>
#include <aws/datasync/model/DescribeLocationObjectStorageRequest.h>
#include <aws/datasync/model/DescribeLocationS3Request.h>
#include <aws/datasync/model/DescribeLocationSmbRequest.h>
#include <aws/datasync/model/DescribeTaskRequest.h>
#include <aws/datasync/model/DescribeTaskExecutionRequest.h>
#include <aws/datasync/model/ListAgentsRequest.h>
#include <aws/datasync/model/ListLocationsRequest.h>
#include <aws/datasync/model/ListTagsForResourceRequest.h>
#include <aws/datasync/model/ListTaskExecutionsRequest.h>
#include <aws/datasync/model/ListTasksRequest.h>
#include <aws/datasync/model/StartTaskExecutionRequest.h>
#include <aws/datasync/model/TagResourceRequest.h>
#include <aws/datasync/model/UntagResourceRequest.h>
#include <aws/datasync/model/UpdateAgentRequest.h>
#include <aws/datasync/model/UpdateLocationHdfsRequest.h>
#include <aws/datasync/model/UpdateLocationNfsRequest.h>
#include <aws/datasync/model/UpdateLocationObjectStorageRequest.h>
#include <aws/datasync/model/UpdateLocationSmbRequest.h>
#include <aws/datasync/model/UpdateTaskRequest.h>
#include <aws/datasync/model/UpdateTaskExecutionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataSync;
using namespace Aws::DataSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DataSyncClient::SERVICE_NAME = "datasync";
const char* DataSyncClient::ALLOCATION_TAG = "DataSyncClient";

DataSyncClient::DataSyncClient(const DataSync::DataSyncClientConfiguration& clientConfiguration,
                               std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const AWSCredentials& credentials,
                               std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider,
                               const DataSync::DataSyncClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider,
                               const DataSync::DataSyncClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DataSyncClient::DataSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DataSyncClient::~DataSyncClient()
{
}

std::shared_ptr<DataSyncEndpointProviderBase>& DataSyncClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DataSyncClient::init(const DataSync::DataSyncClientConfiguration& config)
{
  AWSClient::SetServiceClientName("DataSync");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DataSyncClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelTaskExecutionOutcome DataSyncClient::CancelTaskExecution(const CancelTaskExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelTaskExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelTaskExecutionOutcomeCallable DataSyncClient::CancelTaskExecutionCallable(const CancelTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CancelTaskExecutionAsync(const CancelTaskExecutionRequest& request, const CancelTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelTaskExecution(request), context);
    } );
}

CreateAgentOutcome DataSyncClient::CreateAgent(const CreateAgentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAgentOutcomeCallable DataSyncClient::CreateAgentCallable(const CreateAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateAgentAsync(const CreateAgentRequest& request, const CreateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAgent(request), context);
    } );
}

CreateLocationEfsOutcome DataSyncClient::CreateLocationEfs(const CreateLocationEfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationEfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationEfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationEfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationEfsOutcomeCallable DataSyncClient::CreateLocationEfsCallable(const CreateLocationEfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationEfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationEfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationEfsAsync(const CreateLocationEfsRequest& request, const CreateLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationEfs(request), context);
    } );
}

CreateLocationFsxLustreOutcome DataSyncClient::CreateLocationFsxLustre(const CreateLocationFsxLustreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationFsxLustre, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationFsxLustre, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationFsxLustreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationFsxLustreOutcomeCallable DataSyncClient::CreateLocationFsxLustreCallable(const CreateLocationFsxLustreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationFsxLustreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationFsxLustre(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationFsxLustreAsync(const CreateLocationFsxLustreRequest& request, const CreateLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationFsxLustre(request), context);
    } );
}

CreateLocationFsxOntapOutcome DataSyncClient::CreateLocationFsxOntap(const CreateLocationFsxOntapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationFsxOntap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationFsxOntap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationFsxOntapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationFsxOntapOutcomeCallable DataSyncClient::CreateLocationFsxOntapCallable(const CreateLocationFsxOntapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationFsxOntapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationFsxOntap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationFsxOntapAsync(const CreateLocationFsxOntapRequest& request, const CreateLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationFsxOntap(request), context);
    } );
}

CreateLocationFsxOpenZfsOutcome DataSyncClient::CreateLocationFsxOpenZfs(const CreateLocationFsxOpenZfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationFsxOpenZfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationFsxOpenZfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationFsxOpenZfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationFsxOpenZfsOutcomeCallable DataSyncClient::CreateLocationFsxOpenZfsCallable(const CreateLocationFsxOpenZfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationFsxOpenZfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationFsxOpenZfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationFsxOpenZfsAsync(const CreateLocationFsxOpenZfsRequest& request, const CreateLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationFsxOpenZfs(request), context);
    } );
}

CreateLocationFsxWindowsOutcome DataSyncClient::CreateLocationFsxWindows(const CreateLocationFsxWindowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationFsxWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationFsxWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationFsxWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationFsxWindowsOutcomeCallable DataSyncClient::CreateLocationFsxWindowsCallable(const CreateLocationFsxWindowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationFsxWindowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationFsxWindows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationFsxWindowsAsync(const CreateLocationFsxWindowsRequest& request, const CreateLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationFsxWindows(request), context);
    } );
}

CreateLocationHdfsOutcome DataSyncClient::CreateLocationHdfs(const CreateLocationHdfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationHdfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationHdfsOutcomeCallable DataSyncClient::CreateLocationHdfsCallable(const CreateLocationHdfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationHdfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationHdfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationHdfsAsync(const CreateLocationHdfsRequest& request, const CreateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationHdfs(request), context);
    } );
}

CreateLocationNfsOutcome DataSyncClient::CreateLocationNfs(const CreateLocationNfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationNfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationNfsOutcomeCallable DataSyncClient::CreateLocationNfsCallable(const CreateLocationNfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationNfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationNfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationNfsAsync(const CreateLocationNfsRequest& request, const CreateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationNfs(request), context);
    } );
}

CreateLocationObjectStorageOutcome DataSyncClient::CreateLocationObjectStorage(const CreateLocationObjectStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationObjectStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationObjectStorageOutcomeCallable DataSyncClient::CreateLocationObjectStorageCallable(const CreateLocationObjectStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationObjectStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationObjectStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationObjectStorageAsync(const CreateLocationObjectStorageRequest& request, const CreateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationObjectStorage(request), context);
    } );
}

CreateLocationS3Outcome DataSyncClient::CreateLocationS3(const CreateLocationS3Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationS3Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationS3OutcomeCallable DataSyncClient::CreateLocationS3Callable(const CreateLocationS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationS3Async(const CreateLocationS3Request& request, const CreateLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationS3(request), context);
    } );
}

CreateLocationSmbOutcome DataSyncClient::CreateLocationSmb(const CreateLocationSmbRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLocationSmbOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLocationSmbOutcomeCallable DataSyncClient::CreateLocationSmbCallable(const CreateLocationSmbRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLocationSmbOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLocationSmb(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateLocationSmbAsync(const CreateLocationSmbRequest& request, const CreateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLocationSmb(request), context);
    } );
}

CreateTaskOutcome DataSyncClient::CreateTask(const CreateTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTaskOutcomeCallable DataSyncClient::CreateTaskCallable(const CreateTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTask(request), context);
    } );
}

DeleteAgentOutcome DataSyncClient::DeleteAgent(const DeleteAgentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAgentOutcomeCallable DataSyncClient::DeleteAgentCallable(const DeleteAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteAgentAsync(const DeleteAgentRequest& request, const DeleteAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAgent(request), context);
    } );
}

DeleteLocationOutcome DataSyncClient::DeleteLocation(const DeleteLocationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLocation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLocationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLocationOutcomeCallable DataSyncClient::DeleteLocationCallable(const DeleteLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteLocationAsync(const DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLocation(request), context);
    } );
}

DeleteTaskOutcome DataSyncClient::DeleteTask(const DeleteTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTaskOutcomeCallable DataSyncClient::DeleteTaskCallable(const DeleteTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTask(request), context);
    } );
}

DescribeAgentOutcome DataSyncClient::DescribeAgent(const DescribeAgentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAgentOutcomeCallable DataSyncClient::DescribeAgentCallable(const DescribeAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeAgentAsync(const DescribeAgentRequest& request, const DescribeAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAgent(request), context);
    } );
}

DescribeLocationEfsOutcome DataSyncClient::DescribeLocationEfs(const DescribeLocationEfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationEfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationEfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationEfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationEfsOutcomeCallable DataSyncClient::DescribeLocationEfsCallable(const DescribeLocationEfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationEfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationEfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationEfsAsync(const DescribeLocationEfsRequest& request, const DescribeLocationEfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationEfs(request), context);
    } );
}

DescribeLocationFsxLustreOutcome DataSyncClient::DescribeLocationFsxLustre(const DescribeLocationFsxLustreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationFsxLustre, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationFsxLustre, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationFsxLustreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationFsxLustreOutcomeCallable DataSyncClient::DescribeLocationFsxLustreCallable(const DescribeLocationFsxLustreRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationFsxLustreOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationFsxLustre(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationFsxLustreAsync(const DescribeLocationFsxLustreRequest& request, const DescribeLocationFsxLustreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationFsxLustre(request), context);
    } );
}

DescribeLocationFsxOntapOutcome DataSyncClient::DescribeLocationFsxOntap(const DescribeLocationFsxOntapRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationFsxOntap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationFsxOntap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationFsxOntapOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationFsxOntapOutcomeCallable DataSyncClient::DescribeLocationFsxOntapCallable(const DescribeLocationFsxOntapRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationFsxOntapOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationFsxOntap(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationFsxOntapAsync(const DescribeLocationFsxOntapRequest& request, const DescribeLocationFsxOntapResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationFsxOntap(request), context);
    } );
}

DescribeLocationFsxOpenZfsOutcome DataSyncClient::DescribeLocationFsxOpenZfs(const DescribeLocationFsxOpenZfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationFsxOpenZfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationFsxOpenZfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationFsxOpenZfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationFsxOpenZfsOutcomeCallable DataSyncClient::DescribeLocationFsxOpenZfsCallable(const DescribeLocationFsxOpenZfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationFsxOpenZfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationFsxOpenZfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationFsxOpenZfsAsync(const DescribeLocationFsxOpenZfsRequest& request, const DescribeLocationFsxOpenZfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationFsxOpenZfs(request), context);
    } );
}

DescribeLocationFsxWindowsOutcome DataSyncClient::DescribeLocationFsxWindows(const DescribeLocationFsxWindowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationFsxWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationFsxWindows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationFsxWindowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationFsxWindowsOutcomeCallable DataSyncClient::DescribeLocationFsxWindowsCallable(const DescribeLocationFsxWindowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationFsxWindowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationFsxWindows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationFsxWindowsAsync(const DescribeLocationFsxWindowsRequest& request, const DescribeLocationFsxWindowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationFsxWindows(request), context);
    } );
}

DescribeLocationHdfsOutcome DataSyncClient::DescribeLocationHdfs(const DescribeLocationHdfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationHdfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationHdfsOutcomeCallable DataSyncClient::DescribeLocationHdfsCallable(const DescribeLocationHdfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationHdfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationHdfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationHdfsAsync(const DescribeLocationHdfsRequest& request, const DescribeLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationHdfs(request), context);
    } );
}

DescribeLocationNfsOutcome DataSyncClient::DescribeLocationNfs(const DescribeLocationNfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationNfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationNfsOutcomeCallable DataSyncClient::DescribeLocationNfsCallable(const DescribeLocationNfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationNfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationNfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationNfsAsync(const DescribeLocationNfsRequest& request, const DescribeLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationNfs(request), context);
    } );
}

DescribeLocationObjectStorageOutcome DataSyncClient::DescribeLocationObjectStorage(const DescribeLocationObjectStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationObjectStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationObjectStorageOutcomeCallable DataSyncClient::DescribeLocationObjectStorageCallable(const DescribeLocationObjectStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationObjectStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationObjectStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationObjectStorageAsync(const DescribeLocationObjectStorageRequest& request, const DescribeLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationObjectStorage(request), context);
    } );
}

DescribeLocationS3Outcome DataSyncClient::DescribeLocationS3(const DescribeLocationS3Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationS3, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationS3Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationS3OutcomeCallable DataSyncClient::DescribeLocationS3Callable(const DescribeLocationS3Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationS3Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationS3(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationS3Async(const DescribeLocationS3Request& request, const DescribeLocationS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationS3(request), context);
    } );
}

DescribeLocationSmbOutcome DataSyncClient::DescribeLocationSmb(const DescribeLocationSmbRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLocationSmbOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLocationSmbOutcomeCallable DataSyncClient::DescribeLocationSmbCallable(const DescribeLocationSmbRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationSmbOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLocationSmb(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeLocationSmbAsync(const DescribeLocationSmbRequest& request, const DescribeLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeLocationSmb(request), context);
    } );
}

DescribeTaskOutcome DataSyncClient::DescribeTask(const DescribeTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskOutcomeCallable DataSyncClient::DescribeTaskCallable(const DescribeTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeTaskAsync(const DescribeTaskRequest& request, const DescribeTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTask(request), context);
    } );
}

DescribeTaskExecutionOutcome DataSyncClient::DescribeTaskExecution(const DescribeTaskExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTaskExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTaskExecutionOutcomeCallable DataSyncClient::DescribeTaskExecutionCallable(const DescribeTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::DescribeTaskExecutionAsync(const DescribeTaskExecutionRequest& request, const DescribeTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTaskExecution(request), context);
    } );
}

ListAgentsOutcome DataSyncClient::ListAgents(const ListAgentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAgents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAgents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAgentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAgentsOutcomeCallable DataSyncClient::ListAgentsCallable(const ListAgentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAgentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAgents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListAgentsAsync(const ListAgentsRequest& request, const ListAgentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAgents(request), context);
    } );
}

ListLocationsOutcome DataSyncClient::ListLocations(const ListLocationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLocations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLocationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLocationsOutcomeCallable DataSyncClient::ListLocationsCallable(const ListLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListLocationsAsync(const ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLocations(request), context);
    } );
}

ListTagsForResourceOutcome DataSyncClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DataSyncClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTaskExecutionsOutcome DataSyncClient::ListTaskExecutions(const ListTaskExecutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTaskExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTaskExecutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTaskExecutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTaskExecutionsOutcomeCallable DataSyncClient::ListTaskExecutionsCallable(const ListTaskExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTaskExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTaskExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTaskExecutionsAsync(const ListTaskExecutionsRequest& request, const ListTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTaskExecutions(request), context);
    } );
}

ListTasksOutcome DataSyncClient::ListTasks(const ListTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTasksOutcomeCallable DataSyncClient::ListTasksCallable(const ListTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTasks(request), context);
    } );
}

StartTaskExecutionOutcome DataSyncClient::StartTaskExecution(const StartTaskExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartTaskExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTaskExecutionOutcomeCallable DataSyncClient::StartTaskExecutionCallable(const StartTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::StartTaskExecutionAsync(const StartTaskExecutionRequest& request, const StartTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTaskExecution(request), context);
    } );
}

TagResourceOutcome DataSyncClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DataSyncClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome DataSyncClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DataSyncClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAgentOutcome DataSyncClient::UpdateAgent(const UpdateAgentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAgentOutcomeCallable DataSyncClient::UpdateAgentCallable(const UpdateAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateAgentAsync(const UpdateAgentRequest& request, const UpdateAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateAgent(request), context);
    } );
}

UpdateLocationHdfsOutcome DataSyncClient::UpdateLocationHdfs(const UpdateLocationHdfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLocationHdfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLocationHdfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLocationHdfsOutcomeCallable DataSyncClient::UpdateLocationHdfsCallable(const UpdateLocationHdfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLocationHdfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLocationHdfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateLocationHdfsAsync(const UpdateLocationHdfsRequest& request, const UpdateLocationHdfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLocationHdfs(request), context);
    } );
}

UpdateLocationNfsOutcome DataSyncClient::UpdateLocationNfs(const UpdateLocationNfsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLocationNfs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLocationNfsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLocationNfsOutcomeCallable DataSyncClient::UpdateLocationNfsCallable(const UpdateLocationNfsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLocationNfsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLocationNfs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateLocationNfsAsync(const UpdateLocationNfsRequest& request, const UpdateLocationNfsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLocationNfs(request), context);
    } );
}

UpdateLocationObjectStorageOutcome DataSyncClient::UpdateLocationObjectStorage(const UpdateLocationObjectStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLocationObjectStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLocationObjectStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLocationObjectStorageOutcomeCallable DataSyncClient::UpdateLocationObjectStorageCallable(const UpdateLocationObjectStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLocationObjectStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLocationObjectStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateLocationObjectStorageAsync(const UpdateLocationObjectStorageRequest& request, const UpdateLocationObjectStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLocationObjectStorage(request), context);
    } );
}

UpdateLocationSmbOutcome DataSyncClient::UpdateLocationSmb(const UpdateLocationSmbRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLocationSmb, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLocationSmbOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLocationSmbOutcomeCallable DataSyncClient::UpdateLocationSmbCallable(const UpdateLocationSmbRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLocationSmbOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLocationSmb(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateLocationSmbAsync(const UpdateLocationSmbRequest& request, const UpdateLocationSmbResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLocationSmb(request), context);
    } );
}

UpdateTaskOutcome DataSyncClient::UpdateTask(const UpdateTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskOutcomeCallable DataSyncClient::UpdateTaskCallable(const UpdateTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateTaskAsync(const UpdateTaskRequest& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTask(request), context);
    } );
}

UpdateTaskExecutionOutcome DataSyncClient::UpdateTaskExecution(const UpdateTaskExecutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTaskExecution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTaskExecutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTaskExecutionOutcomeCallable DataSyncClient::UpdateTaskExecutionCallable(const UpdateTaskExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTaskExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTaskExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DataSyncClient::UpdateTaskExecutionAsync(const UpdateTaskExecutionRequest& request, const UpdateTaskExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTaskExecution(request), context);
    } );
}

