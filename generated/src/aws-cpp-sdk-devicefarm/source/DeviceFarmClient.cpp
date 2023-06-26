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

#include <aws/devicefarm/DeviceFarmClient.h>
#include <aws/devicefarm/DeviceFarmErrorMarshaller.h>
#include <aws/devicefarm/DeviceFarmEndpointProvider.h>
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
#include <aws/devicefarm/model/GetDeviceRequest.h>
#include <aws/devicefarm/model/GetDeviceInstanceRequest.h>
#include <aws/devicefarm/model/GetDevicePoolRequest.h>
#include <aws/devicefarm/model/GetDevicePoolCompatibilityRequest.h>
#include <aws/devicefarm/model/GetInstanceProfileRequest.h>
#include <aws/devicefarm/model/GetJobRequest.h>
#include <aws/devicefarm/model/GetNetworkProfileRequest.h>
#include <aws/devicefarm/model/GetOfferingStatusRequest.h>
#include <aws/devicefarm/model/GetProjectRequest.h>
#include <aws/devicefarm/model/GetRemoteAccessSessionRequest.h>
#include <aws/devicefarm/model/GetRunRequest.h>
#include <aws/devicefarm/model/GetSuiteRequest.h>
#include <aws/devicefarm/model/GetTestRequest.h>
#include <aws/devicefarm/model/GetTestGridProjectRequest.h>
#include <aws/devicefarm/model/GetTestGridSessionRequest.h>
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

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DeviceFarm;
using namespace Aws::DeviceFarm::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* DeviceFarmClient::SERVICE_NAME = "devicefarm";
const char* DeviceFarmClient::ALLOCATION_TAG = "DeviceFarmClient";

DeviceFarmClient::DeviceFarmClient(const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration,
                                   std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials,
                                   std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider,
                                   const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider,
                                   const DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  DeviceFarmClient::DeviceFarmClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

DeviceFarmClient::DeviceFarmClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DeviceFarmErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
DeviceFarmClient::~DeviceFarmClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DeviceFarmEndpointProviderBase>& DeviceFarmClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DeviceFarmClient::init(const DeviceFarm::DeviceFarmClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Device Farm");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void DeviceFarmClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateDevicePoolOutcome DeviceFarmClient::CreateDevicePool(const CreateDevicePoolRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDevicePool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDevicePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceProfileOutcome DeviceFarmClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateInstanceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkProfileOutcome DeviceFarmClient::CreateNetworkProfile(const CreateNetworkProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNetworkProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcome DeviceFarmClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRemoteAccessSessionOutcome DeviceFarmClient::CreateRemoteAccessSession(const CreateRemoteAccessSessionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRemoteAccessSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRemoteAccessSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTestGridProjectOutcome DeviceFarmClient::CreateTestGridProject(const CreateTestGridProjectRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTestGridProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTestGridProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTestGridUrlOutcome DeviceFarmClient::CreateTestGridUrl(const CreateTestGridUrlRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTestGridUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTestGridUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTestGridUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTestGridUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUploadOutcome DeviceFarmClient::CreateUpload(const CreateUploadRequest& request) const
{
  AWS_OPERATION_GUARD(CreateUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVPCEConfigurationOutcome DeviceFarmClient::CreateVPCEConfiguration(const CreateVPCEConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateVPCEConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateVPCEConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDevicePoolOutcome DeviceFarmClient::DeleteDevicePool(const DeleteDevicePoolRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDevicePool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDevicePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceProfileOutcome DeviceFarmClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInstanceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkProfileOutcome DeviceFarmClient::DeleteNetworkProfile(const DeleteNetworkProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNetworkProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcome DeviceFarmClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRemoteAccessSessionOutcome DeviceFarmClient::DeleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRemoteAccessSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRemoteAccessSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRunOutcome DeviceFarmClient::DeleteRun(const DeleteRunRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTestGridProjectOutcome DeviceFarmClient::DeleteTestGridProject(const DeleteTestGridProjectRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTestGridProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTestGridProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteUploadOutcome DeviceFarmClient::DeleteUpload(const DeleteUploadRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteVPCEConfigurationOutcome DeviceFarmClient::DeleteVPCEConfiguration(const DeleteVPCEConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteVPCEConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteVPCEConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountSettingsOutcome DeviceFarmClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(GetAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceOutcome DeviceFarmClient::GetDevice(const GetDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDeviceInstanceOutcome DeviceFarmClient::GetDeviceInstance(const GetDeviceInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(GetDeviceInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeviceInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeviceInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDeviceInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePoolOutcome DeviceFarmClient::GetDevicePool(const GetDevicePoolRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevicePool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDevicePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDevicePoolCompatibilityOutcome DeviceFarmClient::GetDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest& request) const
{
  AWS_OPERATION_GUARD(GetDevicePoolCompatibility);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDevicePoolCompatibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDevicePoolCompatibility, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDevicePoolCompatibilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceProfileOutcome DeviceFarmClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetInstanceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetJobOutcome DeviceFarmClient::GetJob(const GetJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkProfileOutcome DeviceFarmClient::GetNetworkProfile(const GetNetworkProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetNetworkProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOfferingStatusOutcome DeviceFarmClient::GetOfferingStatus(const GetOfferingStatusRequest& request) const
{
  AWS_OPERATION_GUARD(GetOfferingStatus);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOfferingStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOfferingStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOfferingStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetProjectOutcome DeviceFarmClient::GetProject(const GetProjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRemoteAccessSessionOutcome DeviceFarmClient::GetRemoteAccessSession(const GetRemoteAccessSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetRemoteAccessSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRemoteAccessSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRunOutcome DeviceFarmClient::GetRun(const GetRunRequest& request) const
{
  AWS_OPERATION_GUARD(GetRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSuiteOutcome DeviceFarmClient::GetSuite(const GetSuiteRequest& request) const
{
  AWS_OPERATION_GUARD(GetSuite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSuite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSuite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSuiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestOutcome DeviceFarmClient::GetTest(const GetTestRequest& request) const
{
  AWS_OPERATION_GUARD(GetTest);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestGridProjectOutcome DeviceFarmClient::GetTestGridProject(const GetTestGridProjectRequest& request) const
{
  AWS_OPERATION_GUARD(GetTestGridProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTestGridProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTestGridSessionOutcome DeviceFarmClient::GetTestGridSession(const GetTestGridSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetTestGridSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTestGridSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTestGridSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTestGridSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUploadOutcome DeviceFarmClient::GetUpload(const GetUploadRequest& request) const
{
  AWS_OPERATION_GUARD(GetUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetVPCEConfigurationOutcome DeviceFarmClient::GetVPCEConfiguration(const GetVPCEConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(GetVPCEConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetVPCEConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InstallToRemoteAccessSessionOutcome DeviceFarmClient::InstallToRemoteAccessSession(const InstallToRemoteAccessSessionRequest& request) const
{
  AWS_OPERATION_GUARD(InstallToRemoteAccessSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InstallToRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InstallToRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return InstallToRemoteAccessSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListArtifactsOutcome DeviceFarmClient::ListArtifacts(const ListArtifactsRequest& request) const
{
  AWS_OPERATION_GUARD(ListArtifacts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDeviceInstancesOutcome DeviceFarmClient::ListDeviceInstances(const ListDeviceInstancesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDeviceInstances);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeviceInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeviceInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDeviceInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicePoolsOutcome DeviceFarmClient::ListDevicePools(const ListDevicePoolsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevicePools);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevicePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevicePools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDevicePoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDevicesOutcome DeviceFarmClient::ListDevices(const ListDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDevicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstanceProfilesOutcome DeviceFarmClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListInstanceProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInstanceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInstanceProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListInstanceProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListJobsOutcome DeviceFarmClient::ListJobs(const ListJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkProfilesOutcome DeviceFarmClient::ListNetworkProfiles(const ListNetworkProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNetworkProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworkProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNetworkProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListNetworkProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingPromotionsOutcome DeviceFarmClient::ListOfferingPromotions(const ListOfferingPromotionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOfferingPromotions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferingPromotions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOfferingPromotions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOfferingPromotionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingTransactionsOutcome DeviceFarmClient::ListOfferingTransactions(const ListOfferingTransactionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOfferingTransactions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferingTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOfferingTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOfferingTransactionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingsOutcome DeviceFarmClient::ListOfferings(const ListOfferingsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcome DeviceFarmClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRemoteAccessSessionsOutcome DeviceFarmClient::ListRemoteAccessSessions(const ListRemoteAccessSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRemoteAccessSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRemoteAccessSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRemoteAccessSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRemoteAccessSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRunsOutcome DeviceFarmClient::ListRuns(const ListRunsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRuns);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRunsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSamplesOutcome DeviceFarmClient::ListSamples(const ListSamplesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSamples);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSamples, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSamples, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSamplesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSuitesOutcome DeviceFarmClient::ListSuites(const ListSuitesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSuites);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSuites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSuites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSuitesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome DeviceFarmClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridProjectsOutcome DeviceFarmClient::ListTestGridProjects(const ListTestGridProjectsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestGridProjects);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestGridProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestGridProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTestGridProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionActionsOutcome DeviceFarmClient::ListTestGridSessionActions(const ListTestGridSessionActionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestGridSessionActions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestGridSessionActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestGridSessionActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTestGridSessionActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionArtifactsOutcome DeviceFarmClient::ListTestGridSessionArtifacts(const ListTestGridSessionArtifactsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestGridSessionArtifacts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestGridSessionArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestGridSessionArtifacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTestGridSessionArtifactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestGridSessionsOutcome DeviceFarmClient::ListTestGridSessions(const ListTestGridSessionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTestGridSessions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTestGridSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTestGridSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTestGridSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestsOutcome DeviceFarmClient::ListTests(const ListTestsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTests);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTests, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTestsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUniqueProblemsOutcome DeviceFarmClient::ListUniqueProblems(const ListUniqueProblemsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUniqueProblems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUniqueProblems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUniqueProblems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUniqueProblemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUploadsOutcome DeviceFarmClient::ListUploads(const ListUploadsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUploads);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUploads, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListUploadsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListVPCEConfigurationsOutcome DeviceFarmClient::ListVPCEConfigurations(const ListVPCEConfigurationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVPCEConfigurations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVPCEConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVPCEConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListVPCEConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PurchaseOfferingOutcome DeviceFarmClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  AWS_OPERATION_GUARD(PurchaseOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RenewOfferingOutcome DeviceFarmClient::RenewOffering(const RenewOfferingRequest& request) const
{
  AWS_OPERATION_GUARD(RenewOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RenewOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RenewOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RenewOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ScheduleRunOutcome DeviceFarmClient::ScheduleRun(const ScheduleRunRequest& request) const
{
  AWS_OPERATION_GUARD(ScheduleRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ScheduleRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ScheduleRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ScheduleRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopJobOutcome DeviceFarmClient::StopJob(const StopJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRemoteAccessSessionOutcome DeviceFarmClient::StopRemoteAccessSession(const StopRemoteAccessSessionRequest& request) const
{
  AWS_OPERATION_GUARD(StopRemoteAccessSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRemoteAccessSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopRemoteAccessSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRunOutcome DeviceFarmClient::StopRun(const StopRunRequest& request) const
{
  AWS_OPERATION_GUARD(StopRun);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopRunOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome DeviceFarmClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome DeviceFarmClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeviceInstanceOutcome DeviceFarmClient::UpdateDeviceInstance(const UpdateDeviceInstanceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDeviceInstance);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDeviceInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDeviceInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDeviceInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDevicePoolOutcome DeviceFarmClient::UpdateDevicePool(const UpdateDevicePoolRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDevicePool);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDevicePool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDevicePoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceProfileOutcome DeviceFarmClient::UpdateInstanceProfile(const UpdateInstanceProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateInstanceProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInstanceProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkProfileOutcome DeviceFarmClient::UpdateNetworkProfile(const UpdateNetworkProfileRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNetworkProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNetworkProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateNetworkProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcome DeviceFarmClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTestGridProjectOutcome DeviceFarmClient::UpdateTestGridProject(const UpdateTestGridProjectRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTestGridProject);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTestGridProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateTestGridProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateUploadOutcome DeviceFarmClient::UpdateUpload(const UpdateUploadRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateUpload);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateVPCEConfigurationOutcome DeviceFarmClient::UpdateVPCEConfiguration(const UpdateVPCEConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateVPCEConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVPCEConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateVPCEConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

