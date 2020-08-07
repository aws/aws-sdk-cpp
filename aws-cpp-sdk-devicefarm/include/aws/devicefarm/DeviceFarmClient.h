/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/CreateDevicePoolResult.h>
#include <aws/devicefarm/model/CreateInstanceProfileResult.h>
#include <aws/devicefarm/model/CreateNetworkProfileResult.h>
#include <aws/devicefarm/model/CreateProjectResult.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/CreateTestGridProjectResult.h>
#include <aws/devicefarm/model/CreateTestGridUrlResult.h>
#include <aws/devicefarm/model/CreateUploadResult.h>
#include <aws/devicefarm/model/CreateVPCEConfigurationResult.h>
#include <aws/devicefarm/model/DeleteDevicePoolResult.h>
#include <aws/devicefarm/model/DeleteInstanceProfileResult.h>
#include <aws/devicefarm/model/DeleteNetworkProfileResult.h>
#include <aws/devicefarm/model/DeleteProjectResult.h>
#include <aws/devicefarm/model/DeleteRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/DeleteRunResult.h>
#include <aws/devicefarm/model/DeleteTestGridProjectResult.h>
#include <aws/devicefarm/model/DeleteUploadResult.h>
#include <aws/devicefarm/model/DeleteVPCEConfigurationResult.h>
#include <aws/devicefarm/model/GetAccountSettingsResult.h>
#include <aws/devicefarm/model/GetDeviceResult.h>
#include <aws/devicefarm/model/GetDeviceInstanceResult.h>
#include <aws/devicefarm/model/GetDevicePoolResult.h>
#include <aws/devicefarm/model/GetDevicePoolCompatibilityResult.h>
#include <aws/devicefarm/model/GetInstanceProfileResult.h>
#include <aws/devicefarm/model/GetJobResult.h>
#include <aws/devicefarm/model/GetNetworkProfileResult.h>
#include <aws/devicefarm/model/GetOfferingStatusResult.h>
#include <aws/devicefarm/model/GetProjectResult.h>
#include <aws/devicefarm/model/GetRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/GetRunResult.h>
#include <aws/devicefarm/model/GetSuiteResult.h>
#include <aws/devicefarm/model/GetTestResult.h>
#include <aws/devicefarm/model/GetTestGridProjectResult.h>
#include <aws/devicefarm/model/GetTestGridSessionResult.h>
#include <aws/devicefarm/model/GetUploadResult.h>
#include <aws/devicefarm/model/GetVPCEConfigurationResult.h>
#include <aws/devicefarm/model/InstallToRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/ListArtifactsResult.h>
#include <aws/devicefarm/model/ListDeviceInstancesResult.h>
#include <aws/devicefarm/model/ListDevicePoolsResult.h>
#include <aws/devicefarm/model/ListDevicesResult.h>
#include <aws/devicefarm/model/ListInstanceProfilesResult.h>
#include <aws/devicefarm/model/ListJobsResult.h>
#include <aws/devicefarm/model/ListNetworkProfilesResult.h>
#include <aws/devicefarm/model/ListOfferingPromotionsResult.h>
#include <aws/devicefarm/model/ListOfferingTransactionsResult.h>
#include <aws/devicefarm/model/ListOfferingsResult.h>
#include <aws/devicefarm/model/ListProjectsResult.h>
#include <aws/devicefarm/model/ListRemoteAccessSessionsResult.h>
#include <aws/devicefarm/model/ListRunsResult.h>
#include <aws/devicefarm/model/ListSamplesResult.h>
#include <aws/devicefarm/model/ListSuitesResult.h>
#include <aws/devicefarm/model/ListTagsForResourceResult.h>
#include <aws/devicefarm/model/ListTestGridProjectsResult.h>
#include <aws/devicefarm/model/ListTestGridSessionActionsResult.h>
#include <aws/devicefarm/model/ListTestGridSessionArtifactsResult.h>
#include <aws/devicefarm/model/ListTestGridSessionsResult.h>
#include <aws/devicefarm/model/ListTestsResult.h>
#include <aws/devicefarm/model/ListUniqueProblemsResult.h>
#include <aws/devicefarm/model/ListUploadsResult.h>
#include <aws/devicefarm/model/ListVPCEConfigurationsResult.h>
#include <aws/devicefarm/model/PurchaseOfferingResult.h>
#include <aws/devicefarm/model/RenewOfferingResult.h>
#include <aws/devicefarm/model/ScheduleRunResult.h>
#include <aws/devicefarm/model/StopJobResult.h>
#include <aws/devicefarm/model/StopRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/StopRunResult.h>
#include <aws/devicefarm/model/TagResourceResult.h>
#include <aws/devicefarm/model/UntagResourceResult.h>
#include <aws/devicefarm/model/UpdateDeviceInstanceResult.h>
#include <aws/devicefarm/model/UpdateDevicePoolResult.h>
#include <aws/devicefarm/model/UpdateInstanceProfileResult.h>
#include <aws/devicefarm/model/UpdateNetworkProfileResult.h>
#include <aws/devicefarm/model/UpdateProjectResult.h>
#include <aws/devicefarm/model/UpdateTestGridProjectResult.h>
#include <aws/devicefarm/model/UpdateUploadResult.h>
#include <aws/devicefarm/model/UpdateVPCEConfigurationResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace DeviceFarm
{

namespace Model
{
        class CreateDevicePoolRequest;
        class CreateInstanceProfileRequest;
        class CreateNetworkProfileRequest;
        class CreateProjectRequest;
        class CreateRemoteAccessSessionRequest;
        class CreateTestGridProjectRequest;
        class CreateTestGridUrlRequest;
        class CreateUploadRequest;
        class CreateVPCEConfigurationRequest;
        class DeleteDevicePoolRequest;
        class DeleteInstanceProfileRequest;
        class DeleteNetworkProfileRequest;
        class DeleteProjectRequest;
        class DeleteRemoteAccessSessionRequest;
        class DeleteRunRequest;
        class DeleteTestGridProjectRequest;
        class DeleteUploadRequest;
        class DeleteVPCEConfigurationRequest;
        class GetAccountSettingsRequest;
        class GetDeviceRequest;
        class GetDeviceInstanceRequest;
        class GetDevicePoolRequest;
        class GetDevicePoolCompatibilityRequest;
        class GetInstanceProfileRequest;
        class GetJobRequest;
        class GetNetworkProfileRequest;
        class GetOfferingStatusRequest;
        class GetProjectRequest;
        class GetRemoteAccessSessionRequest;
        class GetRunRequest;
        class GetSuiteRequest;
        class GetTestRequest;
        class GetTestGridProjectRequest;
        class GetTestGridSessionRequest;
        class GetUploadRequest;
        class GetVPCEConfigurationRequest;
        class InstallToRemoteAccessSessionRequest;
        class ListArtifactsRequest;
        class ListDeviceInstancesRequest;
        class ListDevicePoolsRequest;
        class ListDevicesRequest;
        class ListInstanceProfilesRequest;
        class ListJobsRequest;
        class ListNetworkProfilesRequest;
        class ListOfferingPromotionsRequest;
        class ListOfferingTransactionsRequest;
        class ListOfferingsRequest;
        class ListProjectsRequest;
        class ListRemoteAccessSessionsRequest;
        class ListRunsRequest;
        class ListSamplesRequest;
        class ListSuitesRequest;
        class ListTagsForResourceRequest;
        class ListTestGridProjectsRequest;
        class ListTestGridSessionActionsRequest;
        class ListTestGridSessionArtifactsRequest;
        class ListTestGridSessionsRequest;
        class ListTestsRequest;
        class ListUniqueProblemsRequest;
        class ListUploadsRequest;
        class ListVPCEConfigurationsRequest;
        class PurchaseOfferingRequest;
        class RenewOfferingRequest;
        class ScheduleRunRequest;
        class StopJobRequest;
        class StopRemoteAccessSessionRequest;
        class StopRunRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDeviceInstanceRequest;
        class UpdateDevicePoolRequest;
        class UpdateInstanceProfileRequest;
        class UpdateNetworkProfileRequest;
        class UpdateProjectRequest;
        class UpdateTestGridProjectRequest;
        class UpdateUploadRequest;
        class UpdateVPCEConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateDevicePoolResult, DeviceFarmError> CreateDevicePoolOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceProfileResult, DeviceFarmError> CreateInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<CreateNetworkProfileResult, DeviceFarmError> CreateNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, DeviceFarmError> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<CreateRemoteAccessSessionResult, DeviceFarmError> CreateRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<CreateTestGridProjectResult, DeviceFarmError> CreateTestGridProjectOutcome;
        typedef Aws::Utils::Outcome<CreateTestGridUrlResult, DeviceFarmError> CreateTestGridUrlOutcome;
        typedef Aws::Utils::Outcome<CreateUploadResult, DeviceFarmError> CreateUploadOutcome;
        typedef Aws::Utils::Outcome<CreateVPCEConfigurationResult, DeviceFarmError> CreateVPCEConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteDevicePoolResult, DeviceFarmError> DeleteDevicePoolOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceProfileResult, DeviceFarmError> DeleteInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteNetworkProfileResult, DeviceFarmError> DeleteNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, DeviceFarmError> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteRemoteAccessSessionResult, DeviceFarmError> DeleteRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<DeleteRunResult, DeviceFarmError> DeleteRunOutcome;
        typedef Aws::Utils::Outcome<DeleteTestGridProjectResult, DeviceFarmError> DeleteTestGridProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteUploadResult, DeviceFarmError> DeleteUploadOutcome;
        typedef Aws::Utils::Outcome<DeleteVPCEConfigurationResult, DeviceFarmError> DeleteVPCEConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, DeviceFarmError> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, DeviceFarmError> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetDeviceInstanceResult, DeviceFarmError> GetDeviceInstanceOutcome;
        typedef Aws::Utils::Outcome<GetDevicePoolResult, DeviceFarmError> GetDevicePoolOutcome;
        typedef Aws::Utils::Outcome<GetDevicePoolCompatibilityResult, DeviceFarmError> GetDevicePoolCompatibilityOutcome;
        typedef Aws::Utils::Outcome<GetInstanceProfileResult, DeviceFarmError> GetInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<GetJobResult, DeviceFarmError> GetJobOutcome;
        typedef Aws::Utils::Outcome<GetNetworkProfileResult, DeviceFarmError> GetNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<GetOfferingStatusResult, DeviceFarmError> GetOfferingStatusOutcome;
        typedef Aws::Utils::Outcome<GetProjectResult, DeviceFarmError> GetProjectOutcome;
        typedef Aws::Utils::Outcome<GetRemoteAccessSessionResult, DeviceFarmError> GetRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<GetRunResult, DeviceFarmError> GetRunOutcome;
        typedef Aws::Utils::Outcome<GetSuiteResult, DeviceFarmError> GetSuiteOutcome;
        typedef Aws::Utils::Outcome<GetTestResult, DeviceFarmError> GetTestOutcome;
        typedef Aws::Utils::Outcome<GetTestGridProjectResult, DeviceFarmError> GetTestGridProjectOutcome;
        typedef Aws::Utils::Outcome<GetTestGridSessionResult, DeviceFarmError> GetTestGridSessionOutcome;
        typedef Aws::Utils::Outcome<GetUploadResult, DeviceFarmError> GetUploadOutcome;
        typedef Aws::Utils::Outcome<GetVPCEConfigurationResult, DeviceFarmError> GetVPCEConfigurationOutcome;
        typedef Aws::Utils::Outcome<InstallToRemoteAccessSessionResult, DeviceFarmError> InstallToRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<ListArtifactsResult, DeviceFarmError> ListArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListDeviceInstancesResult, DeviceFarmError> ListDeviceInstancesOutcome;
        typedef Aws::Utils::Outcome<ListDevicePoolsResult, DeviceFarmError> ListDevicePoolsOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, DeviceFarmError> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListInstanceProfilesResult, DeviceFarmError> ListInstanceProfilesOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, DeviceFarmError> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListNetworkProfilesResult, DeviceFarmError> ListNetworkProfilesOutcome;
        typedef Aws::Utils::Outcome<ListOfferingPromotionsResult, DeviceFarmError> ListOfferingPromotionsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingTransactionsResult, DeviceFarmError> ListOfferingTransactionsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingsResult, DeviceFarmError> ListOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, DeviceFarmError> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListRemoteAccessSessionsResult, DeviceFarmError> ListRemoteAccessSessionsOutcome;
        typedef Aws::Utils::Outcome<ListRunsResult, DeviceFarmError> ListRunsOutcome;
        typedef Aws::Utils::Outcome<ListSamplesResult, DeviceFarmError> ListSamplesOutcome;
        typedef Aws::Utils::Outcome<ListSuitesResult, DeviceFarmError> ListSuitesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, DeviceFarmError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTestGridProjectsResult, DeviceFarmError> ListTestGridProjectsOutcome;
        typedef Aws::Utils::Outcome<ListTestGridSessionActionsResult, DeviceFarmError> ListTestGridSessionActionsOutcome;
        typedef Aws::Utils::Outcome<ListTestGridSessionArtifactsResult, DeviceFarmError> ListTestGridSessionArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListTestGridSessionsResult, DeviceFarmError> ListTestGridSessionsOutcome;
        typedef Aws::Utils::Outcome<ListTestsResult, DeviceFarmError> ListTestsOutcome;
        typedef Aws::Utils::Outcome<ListUniqueProblemsResult, DeviceFarmError> ListUniqueProblemsOutcome;
        typedef Aws::Utils::Outcome<ListUploadsResult, DeviceFarmError> ListUploadsOutcome;
        typedef Aws::Utils::Outcome<ListVPCEConfigurationsResult, DeviceFarmError> ListVPCEConfigurationsOutcome;
        typedef Aws::Utils::Outcome<PurchaseOfferingResult, DeviceFarmError> PurchaseOfferingOutcome;
        typedef Aws::Utils::Outcome<RenewOfferingResult, DeviceFarmError> RenewOfferingOutcome;
        typedef Aws::Utils::Outcome<ScheduleRunResult, DeviceFarmError> ScheduleRunOutcome;
        typedef Aws::Utils::Outcome<StopJobResult, DeviceFarmError> StopJobOutcome;
        typedef Aws::Utils::Outcome<StopRemoteAccessSessionResult, DeviceFarmError> StopRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<StopRunResult, DeviceFarmError> StopRunOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, DeviceFarmError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, DeviceFarmError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceInstanceResult, DeviceFarmError> UpdateDeviceInstanceOutcome;
        typedef Aws::Utils::Outcome<UpdateDevicePoolResult, DeviceFarmError> UpdateDevicePoolOutcome;
        typedef Aws::Utils::Outcome<UpdateInstanceProfileResult, DeviceFarmError> UpdateInstanceProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateNetworkProfileResult, DeviceFarmError> UpdateNetworkProfileOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, DeviceFarmError> UpdateProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateTestGridProjectResult, DeviceFarmError> UpdateTestGridProjectOutcome;
        typedef Aws::Utils::Outcome<UpdateUploadResult, DeviceFarmError> UpdateUploadOutcome;
        typedef Aws::Utils::Outcome<UpdateVPCEConfigurationResult, DeviceFarmError> UpdateVPCEConfigurationOutcome;

        typedef std::future<CreateDevicePoolOutcome> CreateDevicePoolOutcomeCallable;
        typedef std::future<CreateInstanceProfileOutcome> CreateInstanceProfileOutcomeCallable;
        typedef std::future<CreateNetworkProfileOutcome> CreateNetworkProfileOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<CreateRemoteAccessSessionOutcome> CreateRemoteAccessSessionOutcomeCallable;
        typedef std::future<CreateTestGridProjectOutcome> CreateTestGridProjectOutcomeCallable;
        typedef std::future<CreateTestGridUrlOutcome> CreateTestGridUrlOutcomeCallable;
        typedef std::future<CreateUploadOutcome> CreateUploadOutcomeCallable;
        typedef std::future<CreateVPCEConfigurationOutcome> CreateVPCEConfigurationOutcomeCallable;
        typedef std::future<DeleteDevicePoolOutcome> DeleteDevicePoolOutcomeCallable;
        typedef std::future<DeleteInstanceProfileOutcome> DeleteInstanceProfileOutcomeCallable;
        typedef std::future<DeleteNetworkProfileOutcome> DeleteNetworkProfileOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DeleteRemoteAccessSessionOutcome> DeleteRemoteAccessSessionOutcomeCallable;
        typedef std::future<DeleteRunOutcome> DeleteRunOutcomeCallable;
        typedef std::future<DeleteTestGridProjectOutcome> DeleteTestGridProjectOutcomeCallable;
        typedef std::future<DeleteUploadOutcome> DeleteUploadOutcomeCallable;
        typedef std::future<DeleteVPCEConfigurationOutcome> DeleteVPCEConfigurationOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetDeviceInstanceOutcome> GetDeviceInstanceOutcomeCallable;
        typedef std::future<GetDevicePoolOutcome> GetDevicePoolOutcomeCallable;
        typedef std::future<GetDevicePoolCompatibilityOutcome> GetDevicePoolCompatibilityOutcomeCallable;
        typedef std::future<GetInstanceProfileOutcome> GetInstanceProfileOutcomeCallable;
        typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
        typedef std::future<GetNetworkProfileOutcome> GetNetworkProfileOutcomeCallable;
        typedef std::future<GetOfferingStatusOutcome> GetOfferingStatusOutcomeCallable;
        typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
        typedef std::future<GetRemoteAccessSessionOutcome> GetRemoteAccessSessionOutcomeCallable;
        typedef std::future<GetRunOutcome> GetRunOutcomeCallable;
        typedef std::future<GetSuiteOutcome> GetSuiteOutcomeCallable;
        typedef std::future<GetTestOutcome> GetTestOutcomeCallable;
        typedef std::future<GetTestGridProjectOutcome> GetTestGridProjectOutcomeCallable;
        typedef std::future<GetTestGridSessionOutcome> GetTestGridSessionOutcomeCallable;
        typedef std::future<GetUploadOutcome> GetUploadOutcomeCallable;
        typedef std::future<GetVPCEConfigurationOutcome> GetVPCEConfigurationOutcomeCallable;
        typedef std::future<InstallToRemoteAccessSessionOutcome> InstallToRemoteAccessSessionOutcomeCallable;
        typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
        typedef std::future<ListDeviceInstancesOutcome> ListDeviceInstancesOutcomeCallable;
        typedef std::future<ListDevicePoolsOutcome> ListDevicePoolsOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListInstanceProfilesOutcome> ListInstanceProfilesOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListNetworkProfilesOutcome> ListNetworkProfilesOutcomeCallable;
        typedef std::future<ListOfferingPromotionsOutcome> ListOfferingPromotionsOutcomeCallable;
        typedef std::future<ListOfferingTransactionsOutcome> ListOfferingTransactionsOutcomeCallable;
        typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListRemoteAccessSessionsOutcome> ListRemoteAccessSessionsOutcomeCallable;
        typedef std::future<ListRunsOutcome> ListRunsOutcomeCallable;
        typedef std::future<ListSamplesOutcome> ListSamplesOutcomeCallable;
        typedef std::future<ListSuitesOutcome> ListSuitesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ListTestGridProjectsOutcome> ListTestGridProjectsOutcomeCallable;
        typedef std::future<ListTestGridSessionActionsOutcome> ListTestGridSessionActionsOutcomeCallable;
        typedef std::future<ListTestGridSessionArtifactsOutcome> ListTestGridSessionArtifactsOutcomeCallable;
        typedef std::future<ListTestGridSessionsOutcome> ListTestGridSessionsOutcomeCallable;
        typedef std::future<ListTestsOutcome> ListTestsOutcomeCallable;
        typedef std::future<ListUniqueProblemsOutcome> ListUniqueProblemsOutcomeCallable;
        typedef std::future<ListUploadsOutcome> ListUploadsOutcomeCallable;
        typedef std::future<ListVPCEConfigurationsOutcome> ListVPCEConfigurationsOutcomeCallable;
        typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
        typedef std::future<RenewOfferingOutcome> RenewOfferingOutcomeCallable;
        typedef std::future<ScheduleRunOutcome> ScheduleRunOutcomeCallable;
        typedef std::future<StopJobOutcome> StopJobOutcomeCallable;
        typedef std::future<StopRemoteAccessSessionOutcome> StopRemoteAccessSessionOutcomeCallable;
        typedef std::future<StopRunOutcome> StopRunOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeviceInstanceOutcome> UpdateDeviceInstanceOutcomeCallable;
        typedef std::future<UpdateDevicePoolOutcome> UpdateDevicePoolOutcomeCallable;
        typedef std::future<UpdateInstanceProfileOutcome> UpdateInstanceProfileOutcomeCallable;
        typedef std::future<UpdateNetworkProfileOutcome> UpdateNetworkProfileOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
        typedef std::future<UpdateTestGridProjectOutcome> UpdateTestGridProjectOutcomeCallable;
        typedef std::future<UpdateUploadOutcome> UpdateUploadOutcomeCallable;
        typedef std::future<UpdateVPCEConfigurationOutcome> UpdateVPCEConfigurationOutcomeCallable;
} // namespace Model

  class DeviceFarmClient;

    typedef std::function<void(const DeviceFarmClient*, const Model::CreateDevicePoolRequest&, const Model::CreateDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateInstanceProfileRequest&, const Model::CreateInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateNetworkProfileRequest&, const Model::CreateNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateRemoteAccessSessionRequest&, const Model::CreateRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateTestGridProjectRequest&, const Model::CreateTestGridProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestGridProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateTestGridUrlRequest&, const Model::CreateTestGridUrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTestGridUrlResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateUploadRequest&, const Model::CreateUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateVPCEConfigurationRequest&, const Model::CreateVPCEConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVPCEConfigurationResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteDevicePoolRequest&, const Model::DeleteDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteInstanceProfileRequest&, const Model::DeleteInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteNetworkProfileRequest&, const Model::DeleteNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteRemoteAccessSessionRequest&, const Model::DeleteRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteRunRequest&, const Model::DeleteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteTestGridProjectRequest&, const Model::DeleteTestGridProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTestGridProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteUploadRequest&, const Model::DeleteUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteVPCEConfigurationRequest&, const Model::DeleteVPCEConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVPCEConfigurationResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDeviceInstanceRequest&, const Model::GetDeviceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceInstanceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDevicePoolRequest&, const Model::GetDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDevicePoolCompatibilityRequest&, const Model::GetDevicePoolCompatibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePoolCompatibilityResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetInstanceProfileRequest&, const Model::GetInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetNetworkProfileRequest&, const Model::GetNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetOfferingStatusRequest&, const Model::GetOfferingStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOfferingStatusResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetRemoteAccessSessionRequest&, const Model::GetRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetRunRequest&, const Model::GetRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetSuiteRequest&, const Model::GetSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetTestRequest&, const Model::GetTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetTestGridProjectRequest&, const Model::GetTestGridProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestGridProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetTestGridSessionRequest&, const Model::GetTestGridSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestGridSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetUploadRequest&, const Model::GetUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetVPCEConfigurationRequest&, const Model::GetVPCEConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVPCEConfigurationResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::InstallToRemoteAccessSessionRequest&, const Model::InstallToRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InstallToRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListArtifactsRequest&, const Model::ListArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArtifactsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListDeviceInstancesRequest&, const Model::ListDeviceInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceInstancesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListDevicePoolsRequest&, const Model::ListDevicePoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicePoolsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListInstanceProfilesRequest&, const Model::ListInstanceProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceProfilesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListNetworkProfilesRequest&, const Model::ListNetworkProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkProfilesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListOfferingPromotionsRequest&, const Model::ListOfferingPromotionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingPromotionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListOfferingTransactionsRequest&, const Model::ListOfferingTransactionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingTransactionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListRemoteAccessSessionsRequest&, const Model::ListRemoteAccessSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRemoteAccessSessionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListRunsRequest&, const Model::ListRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListSamplesRequest&, const Model::ListSamplesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSamplesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListSuitesRequest&, const Model::ListSuitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuitesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestGridProjectsRequest&, const Model::ListTestGridProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestGridProjectsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestGridSessionActionsRequest&, const Model::ListTestGridSessionActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestGridSessionActionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestGridSessionArtifactsRequest&, const Model::ListTestGridSessionArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestGridSessionArtifactsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestGridSessionsRequest&, const Model::ListTestGridSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestGridSessionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestsRequest&, const Model::ListTestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListUniqueProblemsRequest&, const Model::ListUniqueProblemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUniqueProblemsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListUploadsRequest&, const Model::ListUploadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUploadsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListVPCEConfigurationsRequest&, const Model::ListVPCEConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVPCEConfigurationsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::RenewOfferingRequest&, const Model::RenewOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewOfferingResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ScheduleRunRequest&, const Model::ScheduleRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScheduleRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::StopJobRequest&, const Model::StopJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopJobResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::StopRemoteAccessSessionRequest&, const Model::StopRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::StopRunRequest&, const Model::StopRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateDeviceInstanceRequest&, const Model::UpdateDeviceInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceInstanceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateDevicePoolRequest&, const Model::UpdateDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateInstanceProfileRequest&, const Model::UpdateInstanceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateNetworkProfileRequest&, const Model::UpdateNetworkProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkProfileResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateTestGridProjectRequest&, const Model::UpdateTestGridProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTestGridProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateUploadRequest&, const Model::UpdateUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateVPCEConfigurationRequest&, const Model::UpdateVPCEConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVPCEConfigurationResponseReceivedHandler;

  /**
   * <p>Welcome to the AWS Device Farm API documentation, which contains APIs
   * for:</p> <ul> <li> <p>Testing on desktop browsers</p> <p> Device Farm makes it
   * possible for you to test your web applications on desktop browsers using
   * Selenium. The APIs for desktop browser testing contain <code>TestGrid</code> in
   * their names. For more information, see <a
   * href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web
   * Applications on Selenium with Device Farm</a>.</p> </li> <li> <p>Testing on real
   * mobile devices</p> <p>Device Farm makes it possible for you to test apps on
   * physical phones, tablets, and other devices in the cloud. For more information,
   * see the <a
   * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm
   * Developer Guide</a>.</p> </li> </ul>
   */
  class AWS_DEVICEFARM_API DeviceFarmClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeviceFarmClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DeviceFarmClient();


        /**
         * <p>Creates a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevicePoolOutcome CreateDevicePool(const Model::CreateDevicePoolRequest& request) const;

        /**
         * <p>Creates a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDevicePoolOutcomeCallable CreateDevicePoolCallable(const Model::CreateDevicePoolRequest& request) const;

        /**
         * <p>Creates a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevicePoolAsync(const Model::CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a profile that can be applied to one or more private fleet device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p>Creates a profile that can be applied to one or more private fleet device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * <p>Creates a profile that can be applied to one or more private fleet device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkProfileAsync(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRemoteAccessSessionOutcome CreateRemoteAccessSession(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRemoteAccessSessionOutcomeCallable CreateRemoteAccessSessionCallable(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRemoteAccessSessionAsync(const Model::CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Selenium testing project. Projects are used to track
         * <a>TestGridSession</a> instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridProjectOutcome CreateTestGridProject(const Model::CreateTestGridProjectRequest& request) const;

        /**
         * <p>Creates a Selenium testing project. Projects are used to track
         * <a>TestGridSession</a> instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTestGridProjectOutcomeCallable CreateTestGridProjectCallable(const Model::CreateTestGridProjectRequest& request) const;

        /**
         * <p>Creates a Selenium testing project. Projects are used to track
         * <a>TestGridSession</a> instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTestGridProjectAsync(const Model::CreateTestGridProjectRequest& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a signed, short-term URL that can be passed to a Selenium
         * <code>RemoteWebDriver</code> constructor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridUrlOutcome CreateTestGridUrl(const Model::CreateTestGridUrlRequest& request) const;

        /**
         * <p>Creates a signed, short-term URL that can be passed to a Selenium
         * <code>RemoteWebDriver</code> constructor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridUrl">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTestGridUrlOutcomeCallable CreateTestGridUrlCallable(const Model::CreateTestGridUrlRequest& request) const;

        /**
         * <p>Creates a signed, short-term URL that can be passed to a Selenium
         * <code>RemoteWebDriver</code> constructor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridUrl">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTestGridUrlAsync(const Model::CreateTestGridUrlRequest& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadOutcome CreateUpload(const Model::CreateUploadRequest& request) const;

        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUploadOutcomeCallable CreateUploadCallable(const Model::CreateUploadRequest& request) const;

        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUploadAsync(const Model::CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration record in Device Farm for your Amazon Virtual Private
         * Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVPCEConfigurationOutcome CreateVPCEConfiguration(const Model::CreateVPCEConfigurationRequest& request) const;

        /**
         * <p>Creates a configuration record in Device Farm for your Amazon Virtual Private
         * Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVPCEConfigurationOutcomeCallable CreateVPCEConfigurationCallable(const Model::CreateVPCEConfigurationRequest& request) const;

        /**
         * <p>Creates a configuration record in Device Farm for your Amazon Virtual Private
         * Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVPCEConfigurationAsync(const Model::CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevicePoolOutcome DeleteDevicePool(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDevicePoolOutcomeCallable DeleteDevicePoolCallable(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevicePoolAsync(const Model::DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a profile that can be applied to one or more private device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes a profile that can be applied to one or more private device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * <p>Deletes a profile that can be applied to one or more private device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkProfileAsync(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p> Deleting
         * this resource does not stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p> Deleting
         * this resource does not stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p> Deleting
         * this resource does not stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemoteAccessSessionOutcome DeleteRemoteAccessSession(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRemoteAccessSessionOutcomeCallable DeleteRemoteAccessSessionCallable(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRemoteAccessSessionAsync(const Model::DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> Deleting this resource does not
         * stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> Deleting this resource does not
         * stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRunOutcomeCallable DeleteRunCallable(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> Deleting this resource does not
         * stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunAsync(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a Selenium testing project and all content generated under it. </p>
         *  <p>You cannot undo this operation.</p>   <p>You
         * cannot delete a project if it has active sessions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestGridProjectOutcome DeleteTestGridProject(const Model::DeleteTestGridProjectRequest& request) const;

        /**
         * <p> Deletes a Selenium testing project and all content generated under it. </p>
         *  <p>You cannot undo this operation.</p>   <p>You
         * cannot delete a project if it has active sessions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteTestGridProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTestGridProjectOutcomeCallable DeleteTestGridProjectCallable(const Model::DeleteTestGridProjectRequest& request) const;

        /**
         * <p> Deletes a Selenium testing project and all content generated under it. </p>
         *  <p>You cannot undo this operation.</p>   <p>You
         * cannot delete a project if it has active sessions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteTestGridProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTestGridProjectAsync(const Model::DeleteTestGridProjectRequest& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUploadOutcome DeleteUpload(const Model::DeleteUploadRequest& request) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUploadOutcomeCallable DeleteUploadCallable(const Model::DeleteUploadRequest& request) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUploadAsync(const Model::DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVPCEConfigurationOutcome DeleteVPCEConfiguration(const Model::DeleteVPCEConfigurationRequest& request) const;

        /**
         * <p>Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVPCEConfigurationOutcomeCallable DeleteVPCEConfigurationCallable(const Model::DeleteVPCEConfigurationRequest& request) const;

        /**
         * <p>Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVPCEConfigurationAsync(const Model::DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of unmetered iOS or unmetered Android devices that have
         * been purchased by the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Returns the number of unmetered iOS or unmetered Android devices that have
         * been purchased by the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Returns the number of unmetered iOS or unmetered Android devices that have
         * been purchased by the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a device instance that belongs to a private device
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceInstanceOutcome GetDeviceInstance(const Model::GetDeviceInstanceRequest& request) const;

        /**
         * <p>Returns information about a device instance that belongs to a private device
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceInstanceOutcomeCallable GetDeviceInstanceCallable(const Model::GetDeviceInstanceRequest& request) const;

        /**
         * <p>Returns information about a device instance that belongs to a private device
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceInstanceAsync(const Model::GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolOutcome GetDevicePool(const Model::GetDevicePoolRequest& request) const;

        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePoolOutcomeCallable GetDevicePoolCallable(const Model::GetDevicePoolRequest& request) const;

        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolAsync(const Model::GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibility">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolCompatibilityOutcome GetDevicePoolCompatibility(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibility">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePoolCompatibilityOutcomeCallable GetDevicePoolCompatibilityCallable(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibility">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolCompatibilityAsync(const Model::GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified instance profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p>Returns information about the specified instance profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /**
         * <p>Returns information about the specified instance profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;

        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const Model::GetNetworkProfileRequest& request) const;

        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkProfileAsync(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOfferingStatusOutcome GetOfferingStatus(const Model::GetOfferingStatusRequest& request) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOfferingStatusOutcomeCallable GetOfferingStatusCallable(const Model::GetOfferingStatusRequest& request) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOfferingStatusAsync(const Model::GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request) const;

        /**
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRemoteAccessSessionOutcome GetRemoteAccessSession(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRemoteAccessSessionOutcomeCallable GetRemoteAccessSessionCallable(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRemoteAccessSessionAsync(const Model::GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunOutcomeCallable GetRunCallable(const Model::GetRunRequest& request) const;

        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunAsync(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteOutcome GetSuite(const Model::GetSuiteRequest& request) const;

        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteOutcomeCallable GetSuiteCallable(const Model::GetSuiteRequest& request) const;

        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteAsync(const Model::GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestOutcome GetTest(const Model::GetTestRequest& request) const;

        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTestOutcomeCallable GetTestCallable(const Model::GetTestRequest& request) const;

        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestAsync(const Model::GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a Selenium testing project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestGridProjectOutcome GetTestGridProject(const Model::GetTestGridProjectRequest& request) const;

        /**
         * <p>Retrieves information about a Selenium testing project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTestGridProjectOutcomeCallable GetTestGridProjectCallable(const Model::GetTestGridProjectRequest& request) const;

        /**
         * <p>Retrieves information about a Selenium testing project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestGridProjectAsync(const Model::GetTestGridProjectRequest& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A session is an instance of a browser created through a
         * <code>RemoteWebDriver</code> with the URL from
         * <a>CreateTestGridUrlResult$url</a>. You can use the following to look up
         * sessions:</p> <ul> <li> <p>The session ARN
         * (<a>GetTestGridSessionRequest$sessionArn</a>).</p> </li> <li> <p>The project ARN
         * and a session ID (<a>GetTestGridSessionRequest$projectArn</a> and
         * <a>GetTestGridSessionRequest$sessionId</a>).</p> </li> </ul> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestGridSessionOutcome GetTestGridSession(const Model::GetTestGridSessionRequest& request) const;

        /**
         * <p>A session is an instance of a browser created through a
         * <code>RemoteWebDriver</code> with the URL from
         * <a>CreateTestGridUrlResult$url</a>. You can use the following to look up
         * sessions:</p> <ul> <li> <p>The session ARN
         * (<a>GetTestGridSessionRequest$sessionArn</a>).</p> </li> <li> <p>The project ARN
         * and a session ID (<a>GetTestGridSessionRequest$projectArn</a> and
         * <a>GetTestGridSessionRequest$sessionId</a>).</p> </li> </ul> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTestGridSessionOutcomeCallable GetTestGridSessionCallable(const Model::GetTestGridSessionRequest& request) const;

        /**
         * <p>A session is an instance of a browser created through a
         * <code>RemoteWebDriver</code> with the URL from
         * <a>CreateTestGridUrlResult$url</a>. You can use the following to look up
         * sessions:</p> <ul> <li> <p>The session ARN
         * (<a>GetTestGridSessionRequest$sessionArn</a>).</p> </li> <li> <p>The project ARN
         * and a session ID (<a>GetTestGridSessionRequest$projectArn</a> and
         * <a>GetTestGridSessionRequest$sessionId</a>).</p> </li> </ul> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestGridSessionAsync(const Model::GetTestGridSessionRequest& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUploadOutcome GetUpload(const Model::GetUploadRequest& request) const;

        /**
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUploadOutcomeCallable GetUploadCallable(const Model::GetUploadRequest& request) const;

        /**
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUploadAsync(const Model::GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the configuration settings for your Amazon Virtual
         * Private Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVPCEConfigurationOutcome GetVPCEConfiguration(const Model::GetVPCEConfigurationRequest& request) const;

        /**
         * <p>Returns information about the configuration settings for your Amazon Virtual
         * Private Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVPCEConfigurationOutcomeCallable GetVPCEConfigurationCallable(const Model::GetVPCEConfigurationRequest& request) const;

        /**
         * <p>Returns information about the configuration settings for your Amazon Virtual
         * Private Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVPCEConfigurationAsync(const Model::GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::InstallToRemoteAccessSessionOutcome InstallToRemoteAccessSession(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InstallToRemoteAccessSessionOutcomeCallable InstallToRemoteAccessSessionCallable(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InstallToRemoteAccessSessionAsync(const Model::InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const Model::ListArtifactsRequest& request) const;

        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the private device instances associated with one or
         * more AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDeviceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceInstancesOutcome ListDeviceInstances(const Model::ListDeviceInstancesRequest& request) const;

        /**
         * <p>Returns information about the private device instances associated with one or
         * more AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDeviceInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceInstancesOutcomeCallable ListDeviceInstancesCallable(const Model::ListDeviceInstancesRequest& request) const;

        /**
         * <p>Returns information about the private device instances associated with one or
         * more AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDeviceInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceInstancesAsync(const Model::ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePoolsOutcome ListDevicePools(const Model::ListDevicePoolsRequest& request) const;

        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicePoolsOutcomeCallable ListDevicePoolsCallable(const Model::ListDevicePoolsRequest& request) const;

        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicePoolsAsync(const Model::ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all the instance profiles in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Returns information about all the instance profiles in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListInstanceProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * <p>Returns information about all the instance profiles in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListInstanceProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about jobs for a given test run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Gets information about jobs for a given test run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Gets information about jobs for a given test run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkProfilesOutcome ListNetworkProfiles(const Model::ListNetworkProfilesRequest& request) const;

        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkProfilesOutcomeCallable ListNetworkProfilesCallable(const Model::ListNetworkProfilesRequest& request) const;

        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkProfilesAsync(const Model::ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of offering promotions. Each offering promotion record
         * contains the ID and description of the promotion. The API returns a
         * <code>NotEligible</code> error if the caller is not permitted to invoke the
         * operation. Contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you must be able to invoke this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingPromotions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingPromotionsOutcome ListOfferingPromotions(const Model::ListOfferingPromotionsRequest& request) const;

        /**
         * <p>Returns a list of offering promotions. Each offering promotion record
         * contains the ID and description of the promotion. The API returns a
         * <code>NotEligible</code> error if the caller is not permitted to invoke the
         * operation. Contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you must be able to invoke this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingPromotions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingPromotionsOutcomeCallable ListOfferingPromotionsCallable(const Model::ListOfferingPromotionsRequest& request) const;

        /**
         * <p>Returns a list of offering promotions. Each offering promotion record
         * contains the ID and description of the promotion. The API returns a
         * <code>NotEligible</code> error if the caller is not permitted to invoke the
         * operation. Contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you must be able to invoke this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingPromotions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingPromotionsAsync(const Model::ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingTransactions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingTransactionsOutcome ListOfferingTransactions(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingTransactions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingTransactionsOutcomeCallable ListOfferingTransactionsCallable(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingTransactions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingTransactionsAsync(const Model::ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. If you must be able to invoke
         * this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. If you must be able to invoke
         * this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. If you must be able to invoke
         * this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRemoteAccessSessionsOutcome ListRemoteAccessSessions(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRemoteAccessSessionsOutcomeCallable ListRemoteAccessSessionsCallable(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRemoteAccessSessionsAsync(const Model::ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunsOutcomeCallable ListRunsCallable(const Model::ListRunsRequest& request) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunsAsync(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm job
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamples">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSamplesOutcome ListSamples(const Model::ListSamplesRequest& request) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm job
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamples">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSamplesOutcomeCallable ListSamplesCallable(const Model::ListSamplesRequest& request) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm job
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamples">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSamplesAsync(const Model::ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about test suites for a given job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuitesOutcome ListSuites(const Model::ListSuitesRequest& request) const;

        /**
         * <p>Gets information about test suites for a given job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuites">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuitesOutcomeCallable ListSuitesCallable(const Model::ListSuitesRequest& request) const;

        /**
         * <p>Gets information about test suites for a given job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuites">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuitesAsync(const Model::ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridProjectsOutcome ListTestGridProjects(const Model::ListTestGridProjectsRequest& request) const;

        /**
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestGridProjectsOutcomeCallable ListTestGridProjectsCallable(const Model::ListTestGridProjectsRequest& request) const;

        /**
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridProjectsAsync(const Model::ListTestGridProjectsRequest& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the actions taken in a
         * <a>TestGridSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionActionsOutcome ListTestGridSessionActions(const Model::ListTestGridSessionActionsRequest& request) const;

        /**
         * <p>Returns a list of the actions taken in a
         * <a>TestGridSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionActions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestGridSessionActionsOutcomeCallable ListTestGridSessionActionsCallable(const Model::ListTestGridSessionActionsRequest& request) const;

        /**
         * <p>Returns a list of the actions taken in a
         * <a>TestGridSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionActions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionActionsAsync(const Model::ListTestGridSessionActionsRequest& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of artifacts created during the session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionArtifactsOutcome ListTestGridSessionArtifacts(const Model::ListTestGridSessionArtifactsRequest& request) const;

        /**
         * <p>Retrieves a list of artifacts created during the session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionArtifacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestGridSessionArtifactsOutcomeCallable ListTestGridSessionArtifactsCallable(const Model::ListTestGridSessionArtifactsRequest& request) const;

        /**
         * <p>Retrieves a list of artifacts created during the session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionArtifacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionArtifactsAsync(const Model::ListTestGridSessionArtifactsRequest& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of sessions for a <a>TestGridProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionsOutcome ListTestGridSessions(const Model::ListTestGridSessionsRequest& request) const;

        /**
         * <p>Retrieves a list of sessions for a <a>TestGridProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestGridSessionsOutcomeCallable ListTestGridSessionsCallable(const Model::ListTestGridSessionsRequest& request) const;

        /**
         * <p>Retrieves a list of sessions for a <a>TestGridProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionsAsync(const Model::ListTestGridSessionsRequest& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about tests in a given test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestsOutcome ListTests(const Model::ListTestsRequest& request) const;

        /**
         * <p>Gets information about tests in a given test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTests">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestsOutcomeCallable ListTestsCallable(const Model::ListTestsRequest& request) const;

        /**
         * <p>Gets information about tests in a given test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTests">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestsAsync(const Model::ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about unique problems, such as exceptions or crashes.</p>
         * <p>Unique problems are defined as a single instance of an error across a run,
         * job, or suite. For example, if a call in your application consistently raises an
         * exception (<code>OutOfBoundsException in MyActivity.java:386</code>),
         * <code>ListUniqueProblems</code> returns a single entry instead of many
         * individual entries for that exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUniqueProblemsOutcome ListUniqueProblems(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * <p>Gets information about unique problems, such as exceptions or crashes.</p>
         * <p>Unique problems are defined as a single instance of an error across a run,
         * job, or suite. For example, if a call in your application consistently raises an
         * exception (<code>OutOfBoundsException in MyActivity.java:386</code>),
         * <code>ListUniqueProblems</code> returns a single entry instead of many
         * individual entries for that exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUniqueProblemsOutcomeCallable ListUniqueProblemsCallable(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * <p>Gets information about unique problems, such as exceptions or crashes.</p>
         * <p>Unique problems are defined as a single instance of an error across a run,
         * job, or suite. For example, if a call in your application consistently raises an
         * exception (<code>OutOfBoundsException in MyActivity.java:386</code>),
         * <code>ListUniqueProblems</code> returns a single entry instead of many
         * individual entries for that exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUniqueProblemsAsync(const Model::ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUploadsOutcome ListUploads(const Model::ListUploadsRequest& request) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploads">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUploadsOutcomeCallable ListUploadsCallable(const Model::ListUploadsRequest& request) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploads">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUploadsAsync(const Model::ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all Amazon Virtual Private Cloud (VPC) endpoint
         * configurations in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListVPCEConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVPCEConfigurationsOutcome ListVPCEConfigurations(const Model::ListVPCEConfigurationsRequest& request) const;

        /**
         * <p>Returns information about all Amazon Virtual Private Cloud (VPC) endpoint
         * configurations in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListVPCEConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVPCEConfigurationsOutcomeCallable ListVPCEConfigurationsCallable(const Model::ListVPCEConfigurationsRequest& request) const;

        /**
         * <p>Returns information about all Amazon Virtual Private Cloud (VPC) endpoint
         * configurations in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListVPCEConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVPCEConfigurationsAsync(const Model::ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. If you must be able to invoke this operation,
         * contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. If you must be able to invoke this operation,
         * contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. If you must be able to invoke this operation,
         * contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::RenewOfferingOutcome RenewOffering(const Model::RenewOfferingRequest& request) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOffering">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenewOfferingOutcomeCallable RenewOfferingCallable(const Model::RenewOfferingRequest& request) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOffering">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewOfferingAsync(const Model::RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ScheduleRunOutcome ScheduleRun(const Model::ScheduleRunRequest& request) const;

        /**
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScheduleRunOutcomeCallable ScheduleRunCallable(const Model::ScheduleRunRequest& request) const;

        /**
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScheduleRunAsync(const Model::ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a stop request for the current job. AWS Device Farm immediately
         * stops the job on the device where tests have not started. You are not billed for
         * this device. On the device where tests have started, setup suite and teardown
         * suite tests run to completion on the device. You are billed for setup, teardown,
         * and any tests that were in progress or already completed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopJobOutcome StopJob(const Model::StopJobRequest& request) const;

        /**
         * <p>Initiates a stop request for the current job. AWS Device Farm immediately
         * stops the job on the device where tests have not started. You are not billed for
         * this device. On the device where tests have started, setup suite and teardown
         * suite tests run to completion on the device. You are billed for setup, teardown,
         * and any tests that were in progress or already completed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopJobOutcomeCallable StopJobCallable(const Model::StopJobRequest& request) const;

        /**
         * <p>Initiates a stop request for the current job. AWS Device Farm immediately
         * stops the job on the device where tests have not started. You are not billed for
         * this device. On the device where tests have started, setup suite and teardown
         * suite tests run to completion on the device. You are billed for setup, teardown,
         * and any tests that were in progress or already completed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopJobAsync(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRemoteAccessSessionOutcome StopRemoteAccessSession(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRemoteAccessSessionOutcomeCallable StopRemoteAccessSessionCallable(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRemoteAccessSessionAsync(const Model::StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm
         * immediately stops the run on devices where tests have not started. You are not
         * billed for these devices. On devices where tests have started executing, setup
         * suite and teardown suite tests run to completion on those devices. You are
         * billed for setup, teardown, and any tests that were in progress or already
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRunOutcome StopRun(const Model::StopRunRequest& request) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm
         * immediately stops the run on devices where tests have not started. You are not
         * billed for these devices. On devices where tests have started executing, setup
         * suite and teardown suite tests run to completion on those devices. You are
         * billed for setup, teardown, and any tests that were in progress or already
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRunOutcomeCallable StopRunCallable(const Model::StopRunRequest& request) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm
         * immediately stops the run on devices where tests have not started. You are not
         * billed for these devices. On devices where tests have started executing, setup
         * suite and teardown suite tests run to completion on those devices. You are
         * billed for setup, teardown, and any tests that were in progress or already
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRunAsync(const Model::StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceInstanceOutcome UpdateDeviceInstance(const Model::UpdateDeviceInstanceRequest& request) const;

        /**
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceInstanceOutcomeCallable UpdateDeviceInstanceCallable(const Model::UpdateDeviceInstanceRequest& request) const;

        /**
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceInstanceAsync(const Model::UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicePoolOutcome UpdateDevicePool(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePool">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevicePoolOutcomeCallable UpdateDevicePoolCallable(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePool">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevicePoolAsync(const Model::UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about an existing private device instance
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceProfileOutcome UpdateInstanceProfile(const Model::UpdateInstanceProfileRequest& request) const;

        /**
         * <p>Updates information about an existing private device instance
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceProfileOutcomeCallable UpdateInstanceProfileCallable(const Model::UpdateInstanceProfileRequest& request) const;

        /**
         * <p>Updates information about an existing private device instance
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateInstanceProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceProfileAsync(const Model::UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkProfileAsync(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestGridProjectOutcome UpdateTestGridProject(const Model::UpdateTestGridProjectRequest& request) const;

        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTestGridProjectOutcomeCallable UpdateTestGridProjectCallable(const Model::UpdateTestGridProjectRequest& request) const;

        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTestGridProjectAsync(const Model::UpdateTestGridProjectRequest& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUploadOutcome UpdateUpload(const Model::UpdateUploadRequest& request) const;

        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUploadOutcomeCallable UpdateUploadCallable(const Model::UpdateUploadRequest& request) const;

        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUploadAsync(const Model::UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about an Amazon Virtual Private Cloud (VPC) endpoint
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVPCEConfigurationOutcome UpdateVPCEConfiguration(const Model::UpdateVPCEConfigurationRequest& request) const;

        /**
         * <p>Updates information about an Amazon Virtual Private Cloud (VPC) endpoint
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVPCEConfigurationOutcomeCallable UpdateVPCEConfigurationCallable(const Model::UpdateVPCEConfigurationRequest& request) const;

        /**
         * <p>Updates information about an Amazon Virtual Private Cloud (VPC) endpoint
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateVPCEConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVPCEConfigurationAsync(const Model::UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateDevicePoolAsyncHelper(const Model::CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceProfileAsyncHelper(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateNetworkProfileAsyncHelper(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRemoteAccessSessionAsyncHelper(const Model::CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTestGridProjectAsyncHelper(const Model::CreateTestGridProjectRequest& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTestGridUrlAsyncHelper(const Model::CreateTestGridUrlRequest& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUploadAsyncHelper(const Model::CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVPCEConfigurationAsyncHelper(const Model::CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDevicePoolAsyncHelper(const Model::DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceProfileAsyncHelper(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNetworkProfileAsyncHelper(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRemoteAccessSessionAsyncHelper(const Model::DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRunAsyncHelper(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTestGridProjectAsyncHelper(const Model::DeleteTestGridProjectRequest& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUploadAsyncHelper(const Model::DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVPCEConfigurationAsyncHelper(const Model::DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceInstanceAsyncHelper(const Model::GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePoolAsyncHelper(const Model::GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePoolCompatibilityAsyncHelper(const Model::GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceProfileAsyncHelper(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobAsyncHelper(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNetworkProfileAsyncHelper(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOfferingStatusAsyncHelper(const Model::GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProjectAsyncHelper(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRemoteAccessSessionAsyncHelper(const Model::GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRunAsyncHelper(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuiteAsyncHelper(const Model::GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTestAsyncHelper(const Model::GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTestGridProjectAsyncHelper(const Model::GetTestGridProjectRequest& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTestGridSessionAsyncHelper(const Model::GetTestGridSessionRequest& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUploadAsyncHelper(const Model::GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVPCEConfigurationAsyncHelper(const Model::GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InstallToRemoteAccessSessionAsyncHelper(const Model::InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListArtifactsAsyncHelper(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceInstancesAsyncHelper(const Model::ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicePoolsAsyncHelper(const Model::ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInstanceProfilesAsyncHelper(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNetworkProfilesAsyncHelper(const Model::ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingPromotionsAsyncHelper(const Model::ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingTransactionsAsyncHelper(const Model::ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingsAsyncHelper(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRemoteAccessSessionsAsyncHelper(const Model::ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRunsAsyncHelper(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSamplesAsyncHelper(const Model::ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuitesAsyncHelper(const Model::ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestGridProjectsAsyncHelper(const Model::ListTestGridProjectsRequest& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestGridSessionActionsAsyncHelper(const Model::ListTestGridSessionActionsRequest& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestGridSessionArtifactsAsyncHelper(const Model::ListTestGridSessionArtifactsRequest& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestGridSessionsAsyncHelper(const Model::ListTestGridSessionsRequest& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestsAsyncHelper(const Model::ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUniqueProblemsAsyncHelper(const Model::ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUploadsAsyncHelper(const Model::ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVPCEConfigurationsAsyncHelper(const Model::ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseOfferingAsyncHelper(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RenewOfferingAsyncHelper(const Model::RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScheduleRunAsyncHelper(const Model::ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopJobAsyncHelper(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRemoteAccessSessionAsyncHelper(const Model::StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRunAsyncHelper(const Model::StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceInstanceAsyncHelper(const Model::UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDevicePoolAsyncHelper(const Model::UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceProfileAsyncHelper(const Model::UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateNetworkProfileAsyncHelper(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateTestGridProjectAsyncHelper(const Model::UpdateTestGridProjectRequest& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUploadAsyncHelper(const Model::UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVPCEConfigurationAsyncHelper(const Model::UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DeviceFarm
} // namespace Aws
