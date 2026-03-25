/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/datasync/DataSyncClient.h>
#include <aws/datasync/DataSyncEndpointProvider.h>
#include <aws/datasync/DataSyncErrorMarshaller.h>
#include <aws/datasync/model/CancelTaskExecutionRequest.h>
#include <aws/datasync/model/CreateAgentRequest.h>
#include <aws/datasync/model/CreateLocationAzureBlobRequest.h>
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
#include <aws/datasync/model/DescribeLocationAzureBlobRequest.h>
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
#include <aws/datasync/model/DescribeTaskExecutionRequest.h>
#include <aws/datasync/model/DescribeTaskRequest.h>
#include <aws/datasync/model/ListAgentsRequest.h>
#include <aws/datasync/model/ListLocationsRequest.h>
#include <aws/datasync/model/ListTagsForResourceRequest.h>
#include <aws/datasync/model/ListTaskExecutionsRequest.h>
#include <aws/datasync/model/ListTasksRequest.h>
#include <aws/datasync/model/StartTaskExecutionRequest.h>
#include <aws/datasync/model/TagResourceRequest.h>
#include <aws/datasync/model/UntagResourceRequest.h>
#include <aws/datasync/model/UpdateAgentRequest.h>
#include <aws/datasync/model/UpdateLocationAzureBlobRequest.h>
#include <aws/datasync/model/UpdateLocationEfsRequest.h>
#include <aws/datasync/model/UpdateLocationFsxLustreRequest.h>
#include <aws/datasync/model/UpdateLocationFsxOntapRequest.h>
#include <aws/datasync/model/UpdateLocationFsxOpenZfsRequest.h>
#include <aws/datasync/model/UpdateLocationFsxWindowsRequest.h>
#include <aws/datasync/model/UpdateLocationHdfsRequest.h>
#include <aws/datasync/model/UpdateLocationNfsRequest.h>
#include <aws/datasync/model/UpdateLocationObjectStorageRequest.h>
#include <aws/datasync/model/UpdateLocationS3Request.h>
#include <aws/datasync/model/UpdateLocationSmbRequest.h>
#include <aws/datasync/model/UpdateTaskExecutionRequest.h>
#include <aws/datasync/model/UpdateTaskRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataSync;
using namespace Aws::DataSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DataSync {
const char SERVICE_NAME[] = "datasync";
const char ALLOCATION_TAG[] = "DataSyncClient";
}  // namespace DataSync
}  // namespace Aws
const char* DataSyncClient::GetServiceName() { return SERVICE_NAME; }
const char* DataSyncClient::GetAllocationTag() { return ALLOCATION_TAG; }

DataSyncClient::DataSyncClient(const DataSync::DataSyncClientConfiguration& clientConfiguration,
                               std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const AWSCredentials& credentials, std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider,
                               const DataSync::DataSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<DataSyncEndpointProviderBase> endpointProvider,
                               const DataSync::DataSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DataSyncClient::DataSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataSyncClient::DataSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DataSyncClient::~DataSyncClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DataSyncEndpointProviderBase>& DataSyncClient::accessEndpointProvider() { return m_endpointProvider; }

void DataSyncClient::init(const DataSync::DataSyncClientConfiguration& config) {
  AWSClient::SetServiceClientName("DataSync");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "datasync");
}

void DataSyncClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DataSyncClient::InvokeOperationOutcome DataSyncClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                              Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CancelTaskExecutionOutcome DataSyncClient::CancelTaskExecution(const CancelTaskExecutionRequest& request) const {
  return CancelTaskExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAgentOutcome DataSyncClient::CreateAgent(const CreateAgentRequest& request) const {
  return CreateAgentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationAzureBlobOutcome DataSyncClient::CreateLocationAzureBlob(const CreateLocationAzureBlobRequest& request) const {
  return CreateLocationAzureBlobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationEfsOutcome DataSyncClient::CreateLocationEfs(const CreateLocationEfsRequest& request) const {
  return CreateLocationEfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationFsxLustreOutcome DataSyncClient::CreateLocationFsxLustre(const CreateLocationFsxLustreRequest& request) const {
  return CreateLocationFsxLustreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationFsxOntapOutcome DataSyncClient::CreateLocationFsxOntap(const CreateLocationFsxOntapRequest& request) const {
  return CreateLocationFsxOntapOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationFsxOpenZfsOutcome DataSyncClient::CreateLocationFsxOpenZfs(const CreateLocationFsxOpenZfsRequest& request) const {
  return CreateLocationFsxOpenZfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationFsxWindowsOutcome DataSyncClient::CreateLocationFsxWindows(const CreateLocationFsxWindowsRequest& request) const {
  return CreateLocationFsxWindowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationHdfsOutcome DataSyncClient::CreateLocationHdfs(const CreateLocationHdfsRequest& request) const {
  return CreateLocationHdfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationNfsOutcome DataSyncClient::CreateLocationNfs(const CreateLocationNfsRequest& request) const {
  return CreateLocationNfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationObjectStorageOutcome DataSyncClient::CreateLocationObjectStorage(const CreateLocationObjectStorageRequest& request) const {
  return CreateLocationObjectStorageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationS3Outcome DataSyncClient::CreateLocationS3(const CreateLocationS3Request& request) const {
  return CreateLocationS3Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLocationSmbOutcome DataSyncClient::CreateLocationSmb(const CreateLocationSmbRequest& request) const {
  return CreateLocationSmbOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTaskOutcome DataSyncClient::CreateTask(const CreateTaskRequest& request) const {
  return CreateTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAgentOutcome DataSyncClient::DeleteAgent(const DeleteAgentRequest& request) const {
  return DeleteAgentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLocationOutcome DataSyncClient::DeleteLocation(const DeleteLocationRequest& request) const {
  return DeleteLocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTaskOutcome DataSyncClient::DeleteTask(const DeleteTaskRequest& request) const {
  return DeleteTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAgentOutcome DataSyncClient::DescribeAgent(const DescribeAgentRequest& request) const {
  return DescribeAgentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationAzureBlobOutcome DataSyncClient::DescribeLocationAzureBlob(const DescribeLocationAzureBlobRequest& request) const {
  return DescribeLocationAzureBlobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationEfsOutcome DataSyncClient::DescribeLocationEfs(const DescribeLocationEfsRequest& request) const {
  return DescribeLocationEfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationFsxLustreOutcome DataSyncClient::DescribeLocationFsxLustre(const DescribeLocationFsxLustreRequest& request) const {
  return DescribeLocationFsxLustreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationFsxOntapOutcome DataSyncClient::DescribeLocationFsxOntap(const DescribeLocationFsxOntapRequest& request) const {
  return DescribeLocationFsxOntapOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationFsxOpenZfsOutcome DataSyncClient::DescribeLocationFsxOpenZfs(const DescribeLocationFsxOpenZfsRequest& request) const {
  return DescribeLocationFsxOpenZfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationFsxWindowsOutcome DataSyncClient::DescribeLocationFsxWindows(const DescribeLocationFsxWindowsRequest& request) const {
  return DescribeLocationFsxWindowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationHdfsOutcome DataSyncClient::DescribeLocationHdfs(const DescribeLocationHdfsRequest& request) const {
  return DescribeLocationHdfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationNfsOutcome DataSyncClient::DescribeLocationNfs(const DescribeLocationNfsRequest& request) const {
  return DescribeLocationNfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationObjectStorageOutcome DataSyncClient::DescribeLocationObjectStorage(
    const DescribeLocationObjectStorageRequest& request) const {
  return DescribeLocationObjectStorageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationS3Outcome DataSyncClient::DescribeLocationS3(const DescribeLocationS3Request& request) const {
  return DescribeLocationS3Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLocationSmbOutcome DataSyncClient::DescribeLocationSmb(const DescribeLocationSmbRequest& request) const {
  return DescribeLocationSmbOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTaskOutcome DataSyncClient::DescribeTask(const DescribeTaskRequest& request) const {
  return DescribeTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTaskExecutionOutcome DataSyncClient::DescribeTaskExecution(const DescribeTaskExecutionRequest& request) const {
  return DescribeTaskExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAgentsOutcome DataSyncClient::ListAgents(const ListAgentsRequest& request) const {
  return ListAgentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLocationsOutcome DataSyncClient::ListLocations(const ListLocationsRequest& request) const {
  return ListLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome DataSyncClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTaskExecutionsOutcome DataSyncClient::ListTaskExecutions(const ListTaskExecutionsRequest& request) const {
  return ListTaskExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTasksOutcome DataSyncClient::ListTasks(const ListTasksRequest& request) const {
  return ListTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTaskExecutionOutcome DataSyncClient::StartTaskExecution(const StartTaskExecutionRequest& request) const {
  return StartTaskExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DataSyncClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DataSyncClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAgentOutcome DataSyncClient::UpdateAgent(const UpdateAgentRequest& request) const {
  return UpdateAgentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationAzureBlobOutcome DataSyncClient::UpdateLocationAzureBlob(const UpdateLocationAzureBlobRequest& request) const {
  return UpdateLocationAzureBlobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationEfsOutcome DataSyncClient::UpdateLocationEfs(const UpdateLocationEfsRequest& request) const {
  return UpdateLocationEfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationFsxLustreOutcome DataSyncClient::UpdateLocationFsxLustre(const UpdateLocationFsxLustreRequest& request) const {
  return UpdateLocationFsxLustreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationFsxOntapOutcome DataSyncClient::UpdateLocationFsxOntap(const UpdateLocationFsxOntapRequest& request) const {
  return UpdateLocationFsxOntapOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationFsxOpenZfsOutcome DataSyncClient::UpdateLocationFsxOpenZfs(const UpdateLocationFsxOpenZfsRequest& request) const {
  return UpdateLocationFsxOpenZfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationFsxWindowsOutcome DataSyncClient::UpdateLocationFsxWindows(const UpdateLocationFsxWindowsRequest& request) const {
  return UpdateLocationFsxWindowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationHdfsOutcome DataSyncClient::UpdateLocationHdfs(const UpdateLocationHdfsRequest& request) const {
  return UpdateLocationHdfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationNfsOutcome DataSyncClient::UpdateLocationNfs(const UpdateLocationNfsRequest& request) const {
  return UpdateLocationNfsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationObjectStorageOutcome DataSyncClient::UpdateLocationObjectStorage(const UpdateLocationObjectStorageRequest& request) const {
  return UpdateLocationObjectStorageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationS3Outcome DataSyncClient::UpdateLocationS3(const UpdateLocationS3Request& request) const {
  return UpdateLocationS3Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLocationSmbOutcome DataSyncClient::UpdateLocationSmb(const UpdateLocationSmbRequest& request) const {
  return UpdateLocationSmbOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTaskOutcome DataSyncClient::UpdateTask(const UpdateTaskRequest& request) const {
  return UpdateTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTaskExecutionOutcome DataSyncClient::UpdateTaskExecution(const UpdateTaskExecutionRequest& request) const {
  return UpdateTaskExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
