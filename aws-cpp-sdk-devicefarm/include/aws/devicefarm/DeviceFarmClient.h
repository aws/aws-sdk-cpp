/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/CreateDevicePoolResult.h>
#include <aws/devicefarm/model/CreateProjectResult.h>
#include <aws/devicefarm/model/CreateRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/CreateUploadResult.h>
#include <aws/devicefarm/model/DeleteDevicePoolResult.h>
#include <aws/devicefarm/model/DeleteProjectResult.h>
#include <aws/devicefarm/model/DeleteRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/DeleteRunResult.h>
#include <aws/devicefarm/model/DeleteUploadResult.h>
#include <aws/devicefarm/model/GetAccountSettingsResult.h>
#include <aws/devicefarm/model/GetDeviceResult.h>
#include <aws/devicefarm/model/GetDevicePoolResult.h>
#include <aws/devicefarm/model/GetDevicePoolCompatibilityResult.h>
#include <aws/devicefarm/model/GetJobResult.h>
#include <aws/devicefarm/model/GetOfferingStatusResult.h>
#include <aws/devicefarm/model/GetProjectResult.h>
#include <aws/devicefarm/model/GetRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/GetRunResult.h>
#include <aws/devicefarm/model/GetSuiteResult.h>
#include <aws/devicefarm/model/GetTestResult.h>
#include <aws/devicefarm/model/GetUploadResult.h>
#include <aws/devicefarm/model/InstallToRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/ListArtifactsResult.h>
#include <aws/devicefarm/model/ListDevicePoolsResult.h>
#include <aws/devicefarm/model/ListDevicesResult.h>
#include <aws/devicefarm/model/ListJobsResult.h>
#include <aws/devicefarm/model/ListOfferingTransactionsResult.h>
#include <aws/devicefarm/model/ListOfferingsResult.h>
#include <aws/devicefarm/model/ListProjectsResult.h>
#include <aws/devicefarm/model/ListRemoteAccessSessionsResult.h>
#include <aws/devicefarm/model/ListRunsResult.h>
#include <aws/devicefarm/model/ListSamplesResult.h>
#include <aws/devicefarm/model/ListSuitesResult.h>
#include <aws/devicefarm/model/ListTestsResult.h>
#include <aws/devicefarm/model/ListUniqueProblemsResult.h>
#include <aws/devicefarm/model/ListUploadsResult.h>
#include <aws/devicefarm/model/PurchaseOfferingResult.h>
#include <aws/devicefarm/model/RenewOfferingResult.h>
#include <aws/devicefarm/model/ScheduleRunResult.h>
#include <aws/devicefarm/model/StopRemoteAccessSessionResult.h>
#include <aws/devicefarm/model/StopRunResult.h>
#include <aws/devicefarm/model/UpdateDevicePoolResult.h>
#include <aws/devicefarm/model/UpdateProjectResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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
        class CreateProjectRequest;
        class CreateRemoteAccessSessionRequest;
        class CreateUploadRequest;
        class DeleteDevicePoolRequest;
        class DeleteProjectRequest;
        class DeleteRemoteAccessSessionRequest;
        class DeleteRunRequest;
        class DeleteUploadRequest;
        class GetAccountSettingsRequest;
        class GetDeviceRequest;
        class GetDevicePoolRequest;
        class GetDevicePoolCompatibilityRequest;
        class GetJobRequest;
        class GetOfferingStatusRequest;
        class GetProjectRequest;
        class GetRemoteAccessSessionRequest;
        class GetRunRequest;
        class GetSuiteRequest;
        class GetTestRequest;
        class GetUploadRequest;
        class InstallToRemoteAccessSessionRequest;
        class ListArtifactsRequest;
        class ListDevicePoolsRequest;
        class ListDevicesRequest;
        class ListJobsRequest;
        class ListOfferingTransactionsRequest;
        class ListOfferingsRequest;
        class ListProjectsRequest;
        class ListRemoteAccessSessionsRequest;
        class ListRunsRequest;
        class ListSamplesRequest;
        class ListSuitesRequest;
        class ListTestsRequest;
        class ListUniqueProblemsRequest;
        class ListUploadsRequest;
        class PurchaseOfferingRequest;
        class RenewOfferingRequest;
        class ScheduleRunRequest;
        class StopRemoteAccessSessionRequest;
        class StopRunRequest;
        class UpdateDevicePoolRequest;
        class UpdateProjectRequest;

        typedef Aws::Utils::Outcome<CreateDevicePoolResult, Aws::Client::AWSError<DeviceFarmErrors>> CreateDevicePoolOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, Aws::Client::AWSError<DeviceFarmErrors>> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<CreateRemoteAccessSessionResult, Aws::Client::AWSError<DeviceFarmErrors>> CreateRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<CreateUploadResult, Aws::Client::AWSError<DeviceFarmErrors>> CreateUploadOutcome;
        typedef Aws::Utils::Outcome<DeleteDevicePoolResult, Aws::Client::AWSError<DeviceFarmErrors>> DeleteDevicePoolOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, Aws::Client::AWSError<DeviceFarmErrors>> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DeleteRemoteAccessSessionResult, Aws::Client::AWSError<DeviceFarmErrors>> DeleteRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<DeleteRunResult, Aws::Client::AWSError<DeviceFarmErrors>> DeleteRunOutcome;
        typedef Aws::Utils::Outcome<DeleteUploadResult, Aws::Client::AWSError<DeviceFarmErrors>> DeleteUploadOutcome;
        typedef Aws::Utils::Outcome<GetAccountSettingsResult, Aws::Client::AWSError<DeviceFarmErrors>> GetAccountSettingsOutcome;
        typedef Aws::Utils::Outcome<GetDeviceResult, Aws::Client::AWSError<DeviceFarmErrors>> GetDeviceOutcome;
        typedef Aws::Utils::Outcome<GetDevicePoolResult, Aws::Client::AWSError<DeviceFarmErrors>> GetDevicePoolOutcome;
        typedef Aws::Utils::Outcome<GetDevicePoolCompatibilityResult, Aws::Client::AWSError<DeviceFarmErrors>> GetDevicePoolCompatibilityOutcome;
        typedef Aws::Utils::Outcome<GetJobResult, Aws::Client::AWSError<DeviceFarmErrors>> GetJobOutcome;
        typedef Aws::Utils::Outcome<GetOfferingStatusResult, Aws::Client::AWSError<DeviceFarmErrors>> GetOfferingStatusOutcome;
        typedef Aws::Utils::Outcome<GetProjectResult, Aws::Client::AWSError<DeviceFarmErrors>> GetProjectOutcome;
        typedef Aws::Utils::Outcome<GetRemoteAccessSessionResult, Aws::Client::AWSError<DeviceFarmErrors>> GetRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<GetRunResult, Aws::Client::AWSError<DeviceFarmErrors>> GetRunOutcome;
        typedef Aws::Utils::Outcome<GetSuiteResult, Aws::Client::AWSError<DeviceFarmErrors>> GetSuiteOutcome;
        typedef Aws::Utils::Outcome<GetTestResult, Aws::Client::AWSError<DeviceFarmErrors>> GetTestOutcome;
        typedef Aws::Utils::Outcome<GetUploadResult, Aws::Client::AWSError<DeviceFarmErrors>> GetUploadOutcome;
        typedef Aws::Utils::Outcome<InstallToRemoteAccessSessionResult, Aws::Client::AWSError<DeviceFarmErrors>> InstallToRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<ListArtifactsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListArtifactsOutcome;
        typedef Aws::Utils::Outcome<ListDevicePoolsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListDevicePoolsOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, Aws::Client::AWSError<DeviceFarmErrors>> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListJobsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListJobsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingTransactionsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListOfferingTransactionsOutcome;
        typedef Aws::Utils::Outcome<ListOfferingsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListOfferingsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListRemoteAccessSessionsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListRemoteAccessSessionsOutcome;
        typedef Aws::Utils::Outcome<ListRunsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListRunsOutcome;
        typedef Aws::Utils::Outcome<ListSamplesResult, Aws::Client::AWSError<DeviceFarmErrors>> ListSamplesOutcome;
        typedef Aws::Utils::Outcome<ListSuitesResult, Aws::Client::AWSError<DeviceFarmErrors>> ListSuitesOutcome;
        typedef Aws::Utils::Outcome<ListTestsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListTestsOutcome;
        typedef Aws::Utils::Outcome<ListUniqueProblemsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListUniqueProblemsOutcome;
        typedef Aws::Utils::Outcome<ListUploadsResult, Aws::Client::AWSError<DeviceFarmErrors>> ListUploadsOutcome;
        typedef Aws::Utils::Outcome<PurchaseOfferingResult, Aws::Client::AWSError<DeviceFarmErrors>> PurchaseOfferingOutcome;
        typedef Aws::Utils::Outcome<RenewOfferingResult, Aws::Client::AWSError<DeviceFarmErrors>> RenewOfferingOutcome;
        typedef Aws::Utils::Outcome<ScheduleRunResult, Aws::Client::AWSError<DeviceFarmErrors>> ScheduleRunOutcome;
        typedef Aws::Utils::Outcome<StopRemoteAccessSessionResult, Aws::Client::AWSError<DeviceFarmErrors>> StopRemoteAccessSessionOutcome;
        typedef Aws::Utils::Outcome<StopRunResult, Aws::Client::AWSError<DeviceFarmErrors>> StopRunOutcome;
        typedef Aws::Utils::Outcome<UpdateDevicePoolResult, Aws::Client::AWSError<DeviceFarmErrors>> UpdateDevicePoolOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, Aws::Client::AWSError<DeviceFarmErrors>> UpdateProjectOutcome;

        typedef std::future<CreateDevicePoolOutcome> CreateDevicePoolOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<CreateRemoteAccessSessionOutcome> CreateRemoteAccessSessionOutcomeCallable;
        typedef std::future<CreateUploadOutcome> CreateUploadOutcomeCallable;
        typedef std::future<DeleteDevicePoolOutcome> DeleteDevicePoolOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DeleteRemoteAccessSessionOutcome> DeleteRemoteAccessSessionOutcomeCallable;
        typedef std::future<DeleteRunOutcome> DeleteRunOutcomeCallable;
        typedef std::future<DeleteUploadOutcome> DeleteUploadOutcomeCallable;
        typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
        typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
        typedef std::future<GetDevicePoolOutcome> GetDevicePoolOutcomeCallable;
        typedef std::future<GetDevicePoolCompatibilityOutcome> GetDevicePoolCompatibilityOutcomeCallable;
        typedef std::future<GetJobOutcome> GetJobOutcomeCallable;
        typedef std::future<GetOfferingStatusOutcome> GetOfferingStatusOutcomeCallable;
        typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
        typedef std::future<GetRemoteAccessSessionOutcome> GetRemoteAccessSessionOutcomeCallable;
        typedef std::future<GetRunOutcome> GetRunOutcomeCallable;
        typedef std::future<GetSuiteOutcome> GetSuiteOutcomeCallable;
        typedef std::future<GetTestOutcome> GetTestOutcomeCallable;
        typedef std::future<GetUploadOutcome> GetUploadOutcomeCallable;
        typedef std::future<InstallToRemoteAccessSessionOutcome> InstallToRemoteAccessSessionOutcomeCallable;
        typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
        typedef std::future<ListDevicePoolsOutcome> ListDevicePoolsOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
        typedef std::future<ListOfferingTransactionsOutcome> ListOfferingTransactionsOutcomeCallable;
        typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListRemoteAccessSessionsOutcome> ListRemoteAccessSessionsOutcomeCallable;
        typedef std::future<ListRunsOutcome> ListRunsOutcomeCallable;
        typedef std::future<ListSamplesOutcome> ListSamplesOutcomeCallable;
        typedef std::future<ListSuitesOutcome> ListSuitesOutcomeCallable;
        typedef std::future<ListTestsOutcome> ListTestsOutcomeCallable;
        typedef std::future<ListUniqueProblemsOutcome> ListUniqueProblemsOutcomeCallable;
        typedef std::future<ListUploadsOutcome> ListUploadsOutcomeCallable;
        typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
        typedef std::future<RenewOfferingOutcome> RenewOfferingOutcomeCallable;
        typedef std::future<ScheduleRunOutcome> ScheduleRunOutcomeCallable;
        typedef std::future<StopRemoteAccessSessionOutcome> StopRemoteAccessSessionOutcomeCallable;
        typedef std::future<StopRunOutcome> StopRunOutcomeCallable;
        typedef std::future<UpdateDevicePoolOutcome> UpdateDevicePoolOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
} // namespace Model

  class DeviceFarmClient;

    typedef std::function<void(const DeviceFarmClient*, const Model::CreateDevicePoolRequest&, const Model::CreateDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateRemoteAccessSessionRequest&, const Model::CreateRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::CreateUploadRequest&, const Model::CreateUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteDevicePoolRequest&, const Model::DeleteDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteRemoteAccessSessionRequest&, const Model::DeleteRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteRunRequest&, const Model::DeleteRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::DeleteUploadRequest&, const Model::DeleteUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDevicePoolRequest&, const Model::GetDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetDevicePoolCompatibilityRequest&, const Model::GetDevicePoolCompatibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicePoolCompatibilityResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetJobRequest&, const Model::GetJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetJobResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetOfferingStatusRequest&, const Model::GetOfferingStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOfferingStatusResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetProjectRequest&, const Model::GetProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProjectResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetRemoteAccessSessionRequest&, const Model::GetRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetRunRequest&, const Model::GetRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetSuiteRequest&, const Model::GetSuiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSuiteResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetTestRequest&, const Model::GetTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTestResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::GetUploadRequest&, const Model::GetUploadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUploadResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::InstallToRemoteAccessSessionRequest&, const Model::InstallToRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InstallToRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListArtifactsRequest&, const Model::ListArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListArtifactsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListDevicePoolsRequest&, const Model::ListDevicePoolsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicePoolsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListOfferingTransactionsRequest&, const Model::ListOfferingTransactionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingTransactionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListRemoteAccessSessionsRequest&, const Model::ListRemoteAccessSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRemoteAccessSessionsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListRunsRequest&, const Model::ListRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRunsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListSamplesRequest&, const Model::ListSamplesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSamplesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListSuitesRequest&, const Model::ListSuitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSuitesResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListTestsRequest&, const Model::ListTestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTestsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListUniqueProblemsRequest&, const Model::ListUniqueProblemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUniqueProblemsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ListUploadsRequest&, const Model::ListUploadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUploadsResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::RenewOfferingRequest&, const Model::RenewOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RenewOfferingResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::ScheduleRunRequest&, const Model::ScheduleRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScheduleRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::StopRemoteAccessSessionRequest&, const Model::StopRemoteAccessSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRemoteAccessSessionResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::StopRunRequest&, const Model::StopRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRunResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateDevicePoolRequest&, const Model::UpdateDevicePoolOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDevicePoolResponseReceivedHandler;
    typedef std::function<void(const DeviceFarmClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;

  /**
   * <p>AWS Device Farm is a service that enables mobile app developers to test
   * Android, iOS, and Fire OS apps on physical phones, tablets, and other devices in
   * the cloud.</p>
   */
  class AWS_DEVICEFARM_API DeviceFarmClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeviceFarmClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

        virtual ~DeviceFarmClient();

        /**
         * <p>Creates a device pool.</p>
         */
        virtual Model::CreateDevicePoolOutcome CreateDevicePool(const Model::CreateDevicePoolRequest& request) const;

        /**
         * <p>Creates a device pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDevicePoolOutcomeCallable CreateDevicePoolCallable(const Model::CreateDevicePoolRequest& request) const;

        /**
         * <p>Creates a device pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevicePoolAsync(const Model::CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new project.</p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a new project.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates a new project.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies and starts a remote access session.</p>
         */
        virtual Model::CreateRemoteAccessSessionOutcome CreateRemoteAccessSession(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * <p>Specifies and starts a remote access session.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRemoteAccessSessionOutcomeCallable CreateRemoteAccessSessionCallable(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * <p>Specifies and starts a remote access session.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRemoteAccessSessionAsync(const Model::CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an app or test scripts.</p>
         */
        virtual Model::CreateUploadOutcome CreateUpload(const Model::CreateUploadRequest& request) const;

        /**
         * <p>Uploads an app or test scripts.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUploadOutcomeCallable CreateUploadCallable(const Model::CreateUploadRequest& request) const;

        /**
         * <p>Uploads an app or test scripts.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUploadAsync(const Model::CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p>
         */
        virtual Model::DeleteDevicePoolOutcome DeleteDevicePool(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDevicePoolOutcomeCallable DeleteDevicePoolCallable(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevicePoolAsync(const Model::DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p>
         * <b>Note</b> Deleting this resource does not stop an in-progress run.</p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p>
         * <b>Note</b> Deleting this resource does not stop an in-progress run.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p>
         * <b>Note</b> Deleting this resource does not stop an in-progress run.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p>
         */
        virtual Model::DeleteRemoteAccessSessionOutcome DeleteRemoteAccessSession(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRemoteAccessSessionOutcomeCallable DeleteRemoteAccessSessionCallable(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * <p>Deletes a completed remote access session and its results.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRemoteAccessSessionAsync(const Model::DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> <b>Note</b> Deleting this
         * resource does not stop an in-progress run.</p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> <b>Note</b> Deleting this
         * resource does not stop an in-progress run.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRunOutcomeCallable DeleteRunCallable(const Model::DeleteRunRequest& request) const;

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> <b>Note</b> Deleting this
         * resource does not stop an in-progress run.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunAsync(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p>
         */
        virtual Model::DeleteUploadOutcome DeleteUpload(const Model::DeleteUploadRequest& request) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUploadOutcomeCallable DeleteUploadCallable(const Model::DeleteUploadRequest& request) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUploadAsync(const Model::DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of unmetered iOS and/or unmetered Android devices that
         * have been purchased by the account.</p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Returns the number of unmetered iOS and/or unmetered Android devices that
         * have been purchased by the account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * <p>Returns the number of unmetered iOS and/or unmetered Android devices that
         * have been purchased by the account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a unique device type.</p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets information about a unique device type.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * <p>Gets information about a unique device type.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a device pool.</p>
         */
        virtual Model::GetDevicePoolOutcome GetDevicePool(const Model::GetDevicePoolRequest& request) const;

        /**
         * <p>Gets information about a device pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePoolOutcomeCallable GetDevicePoolCallable(const Model::GetDevicePoolRequest& request) const;

        /**
         * <p>Gets information about a device pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolAsync(const Model::GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p>
         */
        virtual Model::GetDevicePoolCompatibilityOutcome GetDevicePoolCompatibility(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePoolCompatibilityOutcomeCallable GetDevicePoolCompatibilityCallable(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * <p>Gets information about compatibility with a device pool.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolCompatibilityAsync(const Model::GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a job.</p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * <p>Gets information about a job.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * <p>Gets information about a job.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         */
        virtual Model::GetOfferingStatusOutcome GetOfferingStatus(const Model::GetOfferingStatusRequest& request) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOfferingStatusOutcomeCallable GetOfferingStatusCallable(const Model::GetOfferingStatusRequest& request) const;

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOfferingStatusAsync(const Model::GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a project.</p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * <p>Gets information about a project.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request) const;

        /**
         * <p>Gets information about a project.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p>
         */
        virtual Model::GetRemoteAccessSessionOutcome GetRemoteAccessSession(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRemoteAccessSessionOutcomeCallable GetRemoteAccessSessionCallable(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * <p>Returns a link to a currently running remote access session.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRemoteAccessSessionAsync(const Model::GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a run.</p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * <p>Gets information about a run.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunOutcomeCallable GetRunCallable(const Model::GetRunRequest& request) const;

        /**
         * <p>Gets information about a run.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunAsync(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a suite.</p>
         */
        virtual Model::GetSuiteOutcome GetSuite(const Model::GetSuiteRequest& request) const;

        /**
         * <p>Gets information about a suite.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteOutcomeCallable GetSuiteCallable(const Model::GetSuiteRequest& request) const;

        /**
         * <p>Gets information about a suite.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteAsync(const Model::GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a test.</p>
         */
        virtual Model::GetTestOutcome GetTest(const Model::GetTestRequest& request) const;

        /**
         * <p>Gets information about a test.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTestOutcomeCallable GetTestCallable(const Model::GetTestRequest& request) const;

        /**
         * <p>Gets information about a test.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestAsync(const Model::GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an upload.</p>
         */
        virtual Model::GetUploadOutcome GetUpload(const Model::GetUploadRequest& request) const;

        /**
         * <p>Gets information about an upload.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUploadOutcomeCallable GetUploadCallable(const Model::GetUploadRequest& request) const;

        /**
         * <p>Gets information about an upload.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUploadAsync(const Model::GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p>
         */
        virtual Model::InstallToRemoteAccessSessionOutcome InstallToRemoteAccessSession(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InstallToRemoteAccessSessionOutcomeCallable InstallToRemoteAccessSessionCallable(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InstallToRemoteAccessSessionAsync(const Model::InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about artifacts.</p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * <p>Gets information about artifacts.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const Model::ListArtifactsRequest& request) const;

        /**
         * <p>Gets information about artifacts.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about device pools.</p>
         */
        virtual Model::ListDevicePoolsOutcome ListDevicePools(const Model::ListDevicePoolsRequest& request) const;

        /**
         * <p>Gets information about device pools.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicePoolsOutcomeCallable ListDevicePoolsCallable(const Model::ListDevicePoolsRequest& request) const;

        /**
         * <p>Gets information about device pools.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicePoolsAsync(const Model::ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about unique device types.</p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Gets information about unique device types.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * <p>Gets information about unique device types.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about jobs.</p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * <p>Gets information about jobs.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * <p>Gets information about jobs.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         */
        virtual Model::ListOfferingTransactionsOutcome ListOfferingTransactions(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingTransactionsOutcomeCallable ListOfferingTransactionsCallable(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingTransactionsAsync(const Model::ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about projects.</p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets information about projects.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Gets information about projects.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p>
         */
        virtual Model::ListRemoteAccessSessionsOutcome ListRemoteAccessSessions(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRemoteAccessSessionsOutcomeCallable ListRemoteAccessSessionsCallable(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * <p>Returns a list of all currently running remote access sessions.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRemoteAccessSessionsAsync(const Model::ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project ARN.</p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunsOutcomeCallable ListRunsCallable(const Model::ListRunsRequest& request) const;

        /**
         * <p>Gets information about runs, given an AWS Device Farm project ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunsAsync(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm project ARN</p>
         */
        virtual Model::ListSamplesOutcome ListSamples(const Model::ListSamplesRequest& request) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm project ARN</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSamplesOutcomeCallable ListSamplesCallable(const Model::ListSamplesRequest& request) const;

        /**
         * <p>Gets information about samples, given an AWS Device Farm project ARN</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSamplesAsync(const Model::ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about suites.</p>
         */
        virtual Model::ListSuitesOutcome ListSuites(const Model::ListSuitesRequest& request) const;

        /**
         * <p>Gets information about suites.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSuitesOutcomeCallable ListSuitesCallable(const Model::ListSuitesRequest& request) const;

        /**
         * <p>Gets information about suites.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuitesAsync(const Model::ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about tests.</p>
         */
        virtual Model::ListTestsOutcome ListTests(const Model::ListTestsRequest& request) const;

        /**
         * <p>Gets information about tests.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestsOutcomeCallable ListTestsCallable(const Model::ListTestsRequest& request) const;

        /**
         * <p>Gets information about tests.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestsAsync(const Model::ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about unique problems.</p>
         */
        virtual Model::ListUniqueProblemsOutcome ListUniqueProblems(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * <p>Gets information about unique problems.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUniqueProblemsOutcomeCallable ListUniqueProblemsCallable(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * <p>Gets information about unique problems.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUniqueProblemsAsync(const Model::ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project ARN.</p>
         */
        virtual Model::ListUploadsOutcome ListUploads(const Model::ListUploadsRequest& request) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project ARN.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListUploadsOutcomeCallable ListUploadsCallable(const Model::ListUploadsRequest& request) const;

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project ARN.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUploadsAsync(const Model::ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         */
        virtual Model::RenewOfferingOutcome RenewOffering(const Model::RenewOfferingRequest& request) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RenewOfferingOutcomeCallable RenewOfferingCallable(const Model::RenewOfferingRequest& request) const;

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. Please contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you believe that you should be able to invoke this operation.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewOfferingAsync(const Model::RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a run.</p>
         */
        virtual Model::ScheduleRunOutcome ScheduleRun(const Model::ScheduleRunRequest& request) const;

        /**
         * <p>Schedules a run.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScheduleRunOutcomeCallable ScheduleRunCallable(const Model::ScheduleRunRequest& request) const;

        /**
         * <p>Schedules a run.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScheduleRunAsync(const Model::ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends a specified remote access session.</p>
         */
        virtual Model::StopRemoteAccessSessionOutcome StopRemoteAccessSession(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * <p>Ends a specified remote access session.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRemoteAccessSessionOutcomeCallable StopRemoteAccessSessionCallable(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * <p>Ends a specified remote access session.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRemoteAccessSessionAsync(const Model::StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm will
         * immediately stop the run on devices where tests have not started executing, and
         * you will not be billed for these devices. On devices where tests have started
         * executing, Setup Suite and Teardown Suite tests will run to completion before
         * stopping execution on those devices. You will be billed for Setup, Teardown, and
         * any tests that were in progress or already completed.</p>
         */
        virtual Model::StopRunOutcome StopRun(const Model::StopRunRequest& request) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm will
         * immediately stop the run on devices where tests have not started executing, and
         * you will not be billed for these devices. On devices where tests have started
         * executing, Setup Suite and Teardown Suite tests will run to completion before
         * stopping execution on those devices. You will be billed for Setup, Teardown, and
         * any tests that were in progress or already completed.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRunOutcomeCallable StopRunCallable(const Model::StopRunRequest& request) const;

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm will
         * immediately stop the run on devices where tests have not started executing, and
         * you will not be billed for these devices. On devices where tests have started
         * executing, Setup Suite and Teardown Suite tests will run to completion before
         * stopping execution on those devices. You will be billed for Setup, Teardown, and
         * any tests that were in progress or already completed.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRunAsync(const Model::StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p>
         */
        virtual Model::UpdateDevicePoolOutcome UpdateDevicePool(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevicePoolOutcomeCallable UpdateDevicePoolCallable(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevicePoolAsync(const Model::UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CreateDevicePoolAsyncHelper(const Model::CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRemoteAccessSessionAsyncHelper(const Model::CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUploadAsyncHelper(const Model::CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDevicePoolAsyncHelper(const Model::DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRemoteAccessSessionAsyncHelper(const Model::DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRunAsyncHelper(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUploadAsyncHelper(const Model::DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAccountSettingsAsyncHelper(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceAsyncHelper(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePoolAsyncHelper(const Model::GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicePoolCompatibilityAsyncHelper(const Model::GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetJobAsyncHelper(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOfferingStatusAsyncHelper(const Model::GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetProjectAsyncHelper(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRemoteAccessSessionAsyncHelper(const Model::GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRunAsyncHelper(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSuiteAsyncHelper(const Model::GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTestAsyncHelper(const Model::GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUploadAsyncHelper(const Model::GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InstallToRemoteAccessSessionAsyncHelper(const Model::InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListArtifactsAsyncHelper(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicePoolsAsyncHelper(const Model::ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDevicesAsyncHelper(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListJobsAsyncHelper(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingTransactionsAsyncHelper(const Model::ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOfferingsAsyncHelper(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRemoteAccessSessionsAsyncHelper(const Model::ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRunsAsyncHelper(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSamplesAsyncHelper(const Model::ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSuitesAsyncHelper(const Model::ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTestsAsyncHelper(const Model::ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUniqueProblemsAsyncHelper(const Model::ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListUploadsAsyncHelper(const Model::ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PurchaseOfferingAsyncHelper(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RenewOfferingAsyncHelper(const Model::RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ScheduleRunAsyncHelper(const Model::ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRemoteAccessSessionAsyncHelper(const Model::StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRunAsyncHelper(const Model::StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDevicePoolAsyncHelper(const Model::UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace DeviceFarm
} // namespace Aws
