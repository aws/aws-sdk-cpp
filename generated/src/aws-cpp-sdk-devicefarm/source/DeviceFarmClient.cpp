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
#include <aws/devicefarm/DeviceFarmClient.h>
#include <aws/devicefarm/DeviceFarmEndpointProvider.h>
#include <aws/devicefarm/DeviceFarmErrorMarshaller.h>
#include <aws/devicefarm/model/CreateDevicePoolRequest.h>
#include <aws/devicefarm/model/CreateInstanceProfileRequest.h>
#include <aws/devicefarm/model/CreateNetworkProfileRequest.h>
#include <aws/devicefarm/model/CreateProjectRequest.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/CreateTestGridProjectRequest.h>
#include <aws/devicefarm/model/CreateTestGridUrlRequest.h>
#include <aws/devicefarm/model/CreateUploadRequest.h>
#include <aws/devicefarm/model/CreateVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/DeleteDevicePoolRequest.h>
#include <aws/devicefarm/model/DeleteInstanceProfileRequest.h>
#include <aws/devicefarm/model/DeleteNetworkProfileRequest.h>
#include <aws/devicefarm/model/DeleteProjectRequest.h>
#include <aws/devicefarm/model/DeleteRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/DeleteRunRequest.h>
#include <aws/devicefarm/model/DeleteTestGridProjectRequest.h>
#include <aws/devicefarm/model/DeleteUploadRequest.h>
#include <aws/devicefarm/model/DeleteVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/GetAccountSettingsRequest.h>
#include <aws/devicefarm/model/GetDeviceInstanceRequest.h>
#include <aws/devicefarm/model/GetDevicePoolCompatibilityRequest.h>
#include <aws/devicefarm/model/GetDevicePoolRequest.h>
#include <aws/devicefarm/model/GetDeviceRequest.h>
#include <aws/devicefarm/model/GetInstanceProfileRequest.h>
#include <aws/devicefarm/model/GetJobRequest.h>
#include <aws/devicefarm/model/GetNetworkProfileRequest.h>
#include <aws/devicefarm/model/GetOfferingStatusRequest.h>
#include <aws/devicefarm/model/GetProjectRequest.h>
#include <aws/devicefarm/model/GetRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/GetRunRequest.h>
#include <aws/devicefarm/model/GetSuiteRequest.h>
#include <aws/devicefarm/model/GetTestGridProjectRequest.h>
#include <aws/devicefarm/model/GetTestGridSessionRequest.h>
#include <aws/devicefarm/model/GetTestRequest.h>
#include <aws/devicefarm/model/GetUploadRequest.h>
#include <aws/devicefarm/model/GetVPCEConfigurationRequest.h>
#include <aws/devicefarm/model/InstallToRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/ListArtifactsRequest.h>
#include <aws/devicefarm/model/ListDeviceInstancesRequest.h>
#include <aws/devicefarm/model/ListDevicePoolsRequest.h>
#include <aws/devicefarm/model/ListDevicesRequest.h>
#include <aws/devicefarm/model/ListInstanceProfilesRequest.h>
#include <aws/devicefarm/model/ListJobsRequest.h>
#include <aws/devicefarm/model/ListNetworkProfilesRequest.h>
#include <aws/devicefarm/model/ListOfferingPromotionsRequest.h>
#include <aws/devicefarm/model/ListOfferingTransactionsRequest.h>
#include <aws/devicefarm/model/ListOfferingsRequest.h>
#include <aws/devicefarm/model/ListProjectsRequest.h>
#include <aws/devicefarm/model/ListRemoteAccessSessionsRequest.h>
#include <aws/devicefarm/model/ListRunsRequest.h>
#include <aws/devicefarm/model/ListSamplesRequest.h>
#include <aws/devicefarm/model/ListSuitesRequest.h>
#include <aws/devicefarm/model/ListTagsForResourceRequest.h>
#include <aws/devicefarm/model/ListTestGridProjectsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionArtifactsRequest.h>
#include <aws/devicefarm/model/ListTestGridSessionsRequest.h>
#include <aws/devicefarm/model/ListTestsRequest.h>
#include <aws/devicefarm/model/ListUniqueProblemsRequest.h>
#include <aws/devicefarm/model/ListUploadsRequest.h>
#include <aws/devicefarm/model/ListVPCEConfigurationsRequest.h>
#include <aws/devicefarm/model/PurchaseOfferingRequest.h>
#include <aws/devicefarm/model/RenewOfferingRequest.h>
#include <aws/devicefarm/model/ScheduleRunRequest.h>
#include <aws/devicefarm/model/StopJobRequest.h>
#include <aws/devicefarm/model/StopRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/StopRunRequest.h>
#include <aws/devicefarm/model/TagResourceRequest.h>
#include <aws/devicefarm/model/UntagResourceRequest.h>
#include <aws/devicefarm/model/UpdateDeviceInstanceRequest.h>
#include <aws/devicefarm/model/UpdateDevicePoolRequest.h>
#include <aws/devicefarm/model/UpdateInstanceProfileRequest.h>
#include <aws/devicefarm/model/UpdateNetworkProfileRequest.h>
#include <aws/devicefarm/model/UpdateProjectRequest.h>
#include <aws/devicefarm/model/UpdateTestGridProjectRequest.h>
#include <aws/devicefarm/model/UpdateUploadRequest.h>
#include <aws/devicefarm/model/UpdateVPCEConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DeviceFarm;
using namespace Aws::DeviceFarm::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DeviceFarm {
const char SERVICE_NAME[] = "devicefarm";
const char ALLOCATION_TAG[] = "DeviceFarmClient";
}  // namespace DeviceFarm
}  // namespace Aws
const char* DeviceFarmClient::GetServiceName() { return SERVICE_NAME; }
const char* DeviceFarmClient::GetAllocationTag() { return ALLOCATION_TAG; }

DeviceFarmClient::DeviceFarmClient(const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration,
                                   std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials, std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider,
                                   const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider,
                                   const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DeviceFarmClient::DeviceFarmClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DeviceFarmClient::~DeviceFarmClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DeviceFarmEndpointProviderBase>& DeviceFarmClient::accessEndpointProvider() { return m_endpointProvider; }

void DeviceFarmClient::init(const DeviceFarm::DeviceFarmClientConfiguration& config) {
  AWSClient::SetServiceClientName("Device Farm");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "devicefarm");
}

void DeviceFarmClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DeviceFarmClient::InvokeOperationOutcome DeviceFarmClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateDevicePoolOutcome DeviceFarmClient::CreateDevicePool(const CreateDevicePoolRequest& request) const {
  return CreateDevicePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstanceProfileOutcome DeviceFarmClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const {
  return CreateInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkProfileOutcome DeviceFarmClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const {
  return CreateNetworkProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome DeviceFarmClient::CreateProject(const CreateProjectRequest& request) const {
  return CreateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRemoteAccessSessionOutcome DeviceFarmClient::CreateRemoteAccessSession(const CreateRemoteAccessSessionRequest& request) const {
  return CreateRemoteAccessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTestGridProjectOutcome DeviceFarmClient::CreateTestGridProject(const CreateTestGridProjectRequest& request) const {
  return CreateTestGridProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTestGridUrlOutcome DeviceFarmClient::CreateTestGridUrl(const CreateTestGridUrlRequest& request) const {
  return CreateTestGridUrlOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUploadOutcome DeviceFarmClient::CreateUpload(const CreateUploadRequest& request) const {
  return CreateUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVPCEConfigurationOutcome DeviceFarmClient::CreateVPCEConfiguration(const CreateVPCEConfigurationRequest& request) const {
  return CreateVPCEConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDevicePoolOutcome DeviceFarmClient::DeleteDevicePool(const DeleteDevicePoolRequest& request) const {
  return DeleteDevicePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceProfileOutcome DeviceFarmClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const {
  return DeleteInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNetworkProfileOutcome DeviceFarmClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const {
  return DeleteNetworkProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteProjectOutcome DeviceFarmClient::DeleteProject(const DeleteProjectRequest& request) const {
  return DeleteProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRemoteAccessSessionOutcome DeviceFarmClient::DeleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest& request) const {
  return DeleteRemoteAccessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRunOutcome DeviceFarmClient::DeleteRun(const DeleteRunRequest& request) const {
  return DeleteRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTestGridProjectOutcome DeviceFarmClient::DeleteTestGridProject(const DeleteTestGridProjectRequest& request) const {
  return DeleteTestGridProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteUploadOutcome DeviceFarmClient::DeleteUpload(const DeleteUploadRequest& request) const {
  return DeleteUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteVPCEConfigurationOutcome DeviceFarmClient::DeleteVPCEConfiguration(const DeleteVPCEConfigurationRequest& request) const {
  return DeleteVPCEConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccountSettingsOutcome DeviceFarmClient::GetAccountSettings(const GetAccountSettingsRequest& request) const {
  return GetAccountSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeviceOutcome DeviceFarmClient::GetDevice(const GetDeviceRequest& request) const {
  return GetDeviceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeviceInstanceOutcome DeviceFarmClient::GetDeviceInstance(const GetDeviceInstanceRequest& request) const {
  return GetDeviceInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDevicePoolOutcome DeviceFarmClient::GetDevicePool(const GetDevicePoolRequest& request) const {
  return GetDevicePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDevicePoolCompatibilityOutcome DeviceFarmClient::GetDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest& request) const {
  return GetDevicePoolCompatibilityOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceProfileOutcome DeviceFarmClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const {
  return GetInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobOutcome DeviceFarmClient::GetJob(const GetJobRequest& request) const {
  return GetJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetNetworkProfileOutcome DeviceFarmClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const {
  return GetNetworkProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOfferingStatusOutcome DeviceFarmClient::GetOfferingStatus(const GetOfferingStatusRequest& request) const {
  return GetOfferingStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetProjectOutcome DeviceFarmClient::GetProject(const GetProjectRequest& request) const {
  return GetProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRemoteAccessSessionOutcome DeviceFarmClient::GetRemoteAccessSession(const GetRemoteAccessSessionRequest& request) const {
  return GetRemoteAccessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRunOutcome DeviceFarmClient::GetRun(const GetRunRequest& request) const {
  return GetRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSuiteOutcome DeviceFarmClient::GetSuite(const GetSuiteRequest& request) const {
  return GetSuiteOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTestOutcome DeviceFarmClient::GetTest(const GetTestRequest& request) const {
  return GetTestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTestGridProjectOutcome DeviceFarmClient::GetTestGridProject(const GetTestGridProjectRequest& request) const {
  return GetTestGridProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTestGridSessionOutcome DeviceFarmClient::GetTestGridSession(const GetTestGridSessionRequest& request) const {
  return GetTestGridSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetUploadOutcome DeviceFarmClient::GetUpload(const GetUploadRequest& request) const {
  return GetUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetVPCEConfigurationOutcome DeviceFarmClient::GetVPCEConfiguration(const GetVPCEConfigurationRequest& request) const {
  return GetVPCEConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InstallToRemoteAccessSessionOutcome DeviceFarmClient::InstallToRemoteAccessSession(
    const InstallToRemoteAccessSessionRequest& request) const {
  return InstallToRemoteAccessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListArtifactsOutcome DeviceFarmClient::ListArtifacts(const ListArtifactsRequest& request) const {
  return ListArtifactsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDeviceInstancesOutcome DeviceFarmClient::ListDeviceInstances(const ListDeviceInstancesRequest& request) const {
  return ListDeviceInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevicePoolsOutcome DeviceFarmClient::ListDevicePools(const ListDevicePoolsRequest& request) const {
  return ListDevicePoolsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDevicesOutcome DeviceFarmClient::ListDevices(const ListDevicesRequest& request) const {
  return ListDevicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInstanceProfilesOutcome DeviceFarmClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const {
  return ListInstanceProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListJobsOutcome DeviceFarmClient::ListJobs(const ListJobsRequest& request) const {
  return ListJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNetworkProfilesOutcome DeviceFarmClient::ListNetworkProfiles(const ListNetworkProfilesRequest& request) const {
  return ListNetworkProfilesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOfferingPromotionsOutcome DeviceFarmClient::ListOfferingPromotions(const ListOfferingPromotionsRequest& request) const {
  return ListOfferingPromotionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOfferingTransactionsOutcome DeviceFarmClient::ListOfferingTransactions(const ListOfferingTransactionsRequest& request) const {
  return ListOfferingTransactionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOfferingsOutcome DeviceFarmClient::ListOfferings(const ListOfferingsRequest& request) const {
  return ListOfferingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProjectsOutcome DeviceFarmClient::ListProjects(const ListProjectsRequest& request) const {
  return ListProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRemoteAccessSessionsOutcome DeviceFarmClient::ListRemoteAccessSessions(const ListRemoteAccessSessionsRequest& request) const {
  return ListRemoteAccessSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRunsOutcome DeviceFarmClient::ListRuns(const ListRunsRequest& request) const {
  return ListRunsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSamplesOutcome DeviceFarmClient::ListSamples(const ListSamplesRequest& request) const {
  return ListSamplesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSuitesOutcome DeviceFarmClient::ListSuites(const ListSuitesRequest& request) const {
  return ListSuitesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome DeviceFarmClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTestGridProjectsOutcome DeviceFarmClient::ListTestGridProjects(const ListTestGridProjectsRequest& request) const {
  return ListTestGridProjectsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTestGridSessionActionsOutcome DeviceFarmClient::ListTestGridSessionActions(const ListTestGridSessionActionsRequest& request) const {
  return ListTestGridSessionActionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTestGridSessionArtifactsOutcome DeviceFarmClient::ListTestGridSessionArtifacts(
    const ListTestGridSessionArtifactsRequest& request) const {
  return ListTestGridSessionArtifactsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTestGridSessionsOutcome DeviceFarmClient::ListTestGridSessions(const ListTestGridSessionsRequest& request) const {
  return ListTestGridSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTestsOutcome DeviceFarmClient::ListTests(const ListTestsRequest& request) const {
  return ListTestsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUniqueProblemsOutcome DeviceFarmClient::ListUniqueProblems(const ListUniqueProblemsRequest& request) const {
  return ListUniqueProblemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListUploadsOutcome DeviceFarmClient::ListUploads(const ListUploadsRequest& request) const {
  return ListUploadsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListVPCEConfigurationsOutcome DeviceFarmClient::ListVPCEConfigurations(const ListVPCEConfigurationsRequest& request) const {
  return ListVPCEConfigurationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PurchaseOfferingOutcome DeviceFarmClient::PurchaseOffering(const PurchaseOfferingRequest& request) const {
  return PurchaseOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RenewOfferingOutcome DeviceFarmClient::RenewOffering(const RenewOfferingRequest& request) const {
  return RenewOfferingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ScheduleRunOutcome DeviceFarmClient::ScheduleRun(const ScheduleRunRequest& request) const {
  return ScheduleRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopJobOutcome DeviceFarmClient::StopJob(const StopJobRequest& request) const {
  return StopJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRemoteAccessSessionOutcome DeviceFarmClient::StopRemoteAccessSession(const StopRemoteAccessSessionRequest& request) const {
  return StopRemoteAccessSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRunOutcome DeviceFarmClient::StopRun(const StopRunRequest& request) const {
  return StopRunOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome DeviceFarmClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome DeviceFarmClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDeviceInstanceOutcome DeviceFarmClient::UpdateDeviceInstance(const UpdateDeviceInstanceRequest& request) const {
  return UpdateDeviceInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDevicePoolOutcome DeviceFarmClient::UpdateDevicePool(const UpdateDevicePoolRequest& request) const {
  return UpdateDevicePoolOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInstanceProfileOutcome DeviceFarmClient::UpdateInstanceProfile(const UpdateInstanceProfileRequest& request) const {
  return UpdateInstanceProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNetworkProfileOutcome DeviceFarmClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const {
  return UpdateNetworkProfileOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateProjectOutcome DeviceFarmClient::UpdateProject(const UpdateProjectRequest& request) const {
  return UpdateProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTestGridProjectOutcome DeviceFarmClient::UpdateTestGridProject(const UpdateTestGridProjectRequest& request) const {
  return UpdateTestGridProjectOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateUploadOutcome DeviceFarmClient::UpdateUpload(const UpdateUploadRequest& request) const {
  return UpdateUploadOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateVPCEConfigurationOutcome DeviceFarmClient::UpdateVPCEConfiguration(const UpdateVPCEConfigurationRequest& request) const {
  return UpdateVPCEConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
