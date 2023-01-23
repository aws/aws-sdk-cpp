/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/devicefarm/DeviceFarmErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/devicefarm/DeviceFarmEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DeviceFarmClient header */
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
/* End of service model headers required in DeviceFarmClient header */

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
    using DeviceFarmClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DeviceFarmEndpointProviderBase = Aws::DeviceFarm::Endpoint::DeviceFarmEndpointProviderBase;
    using DeviceFarmEndpointProvider = Aws::DeviceFarm::Endpoint::DeviceFarmEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DeviceFarmClient header */
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
      /* End of service model forward declarations required in DeviceFarmClient header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DeviceFarmClient;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace DeviceFarm
} // namespace Aws
