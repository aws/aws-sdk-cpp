/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms/model/CreateAppResult.h>
#include <aws/sms/model/CreateReplicationJobResult.h>
#include <aws/sms/model/DeleteAppResult.h>
#include <aws/sms/model/DeleteAppLaunchConfigurationResult.h>
#include <aws/sms/model/DeleteAppReplicationConfigurationResult.h>
#include <aws/sms/model/DeleteAppValidationConfigurationResult.h>
#include <aws/sms/model/DeleteReplicationJobResult.h>
#include <aws/sms/model/DeleteServerCatalogResult.h>
#include <aws/sms/model/DisassociateConnectorResult.h>
#include <aws/sms/model/GenerateChangeSetResult.h>
#include <aws/sms/model/GenerateTemplateResult.h>
#include <aws/sms/model/GetAppResult.h>
#include <aws/sms/model/GetAppLaunchConfigurationResult.h>
#include <aws/sms/model/GetAppReplicationConfigurationResult.h>
#include <aws/sms/model/GetAppValidationConfigurationResult.h>
#include <aws/sms/model/GetAppValidationOutputResult.h>
#include <aws/sms/model/GetConnectorsResult.h>
#include <aws/sms/model/GetReplicationJobsResult.h>
#include <aws/sms/model/GetReplicationRunsResult.h>
#include <aws/sms/model/GetServersResult.h>
#include <aws/sms/model/ImportAppCatalogResult.h>
#include <aws/sms/model/ImportServerCatalogResult.h>
#include <aws/sms/model/LaunchAppResult.h>
#include <aws/sms/model/ListAppsResult.h>
#include <aws/sms/model/NotifyAppValidationOutputResult.h>
#include <aws/sms/model/PutAppLaunchConfigurationResult.h>
#include <aws/sms/model/PutAppReplicationConfigurationResult.h>
#include <aws/sms/model/PutAppValidationConfigurationResult.h>
#include <aws/sms/model/StartAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandAppReplicationResult.h>
#include <aws/sms/model/StartOnDemandReplicationRunResult.h>
#include <aws/sms/model/StopAppReplicationResult.h>
#include <aws/sms/model/TerminateAppResult.h>
#include <aws/sms/model/UpdateAppResult.h>
#include <aws/sms/model/UpdateReplicationJobResult.h>
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

namespace SMS
{

namespace Model
{
        class CreateAppRequest;
        class CreateReplicationJobRequest;
        class DeleteAppRequest;
        class DeleteAppLaunchConfigurationRequest;
        class DeleteAppReplicationConfigurationRequest;
        class DeleteAppValidationConfigurationRequest;
        class DeleteReplicationJobRequest;
        class DeleteServerCatalogRequest;
        class DisassociateConnectorRequest;
        class GenerateChangeSetRequest;
        class GenerateTemplateRequest;
        class GetAppRequest;
        class GetAppLaunchConfigurationRequest;
        class GetAppReplicationConfigurationRequest;
        class GetAppValidationConfigurationRequest;
        class GetAppValidationOutputRequest;
        class GetConnectorsRequest;
        class GetReplicationJobsRequest;
        class GetReplicationRunsRequest;
        class GetServersRequest;
        class ImportAppCatalogRequest;
        class ImportServerCatalogRequest;
        class LaunchAppRequest;
        class ListAppsRequest;
        class NotifyAppValidationOutputRequest;
        class PutAppLaunchConfigurationRequest;
        class PutAppReplicationConfigurationRequest;
        class PutAppValidationConfigurationRequest;
        class StartAppReplicationRequest;
        class StartOnDemandAppReplicationRequest;
        class StartOnDemandReplicationRunRequest;
        class StopAppReplicationRequest;
        class TerminateAppRequest;
        class UpdateAppRequest;
        class UpdateReplicationJobRequest;

        typedef Aws::Utils::Outcome<CreateAppResult, SMSError> CreateAppOutcome;
        typedef Aws::Utils::Outcome<CreateReplicationJobResult, SMSError> CreateReplicationJobOutcome;
        typedef Aws::Utils::Outcome<DeleteAppResult, SMSError> DeleteAppOutcome;
        typedef Aws::Utils::Outcome<DeleteAppLaunchConfigurationResult, SMSError> DeleteAppLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteAppReplicationConfigurationResult, SMSError> DeleteAppReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteAppValidationConfigurationResult, SMSError> DeleteAppValidationConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteReplicationJobResult, SMSError> DeleteReplicationJobOutcome;
        typedef Aws::Utils::Outcome<DeleteServerCatalogResult, SMSError> DeleteServerCatalogOutcome;
        typedef Aws::Utils::Outcome<DisassociateConnectorResult, SMSError> DisassociateConnectorOutcome;
        typedef Aws::Utils::Outcome<GenerateChangeSetResult, SMSError> GenerateChangeSetOutcome;
        typedef Aws::Utils::Outcome<GenerateTemplateResult, SMSError> GenerateTemplateOutcome;
        typedef Aws::Utils::Outcome<GetAppResult, SMSError> GetAppOutcome;
        typedef Aws::Utils::Outcome<GetAppLaunchConfigurationResult, SMSError> GetAppLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetAppReplicationConfigurationResult, SMSError> GetAppReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetAppValidationConfigurationResult, SMSError> GetAppValidationConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetAppValidationOutputResult, SMSError> GetAppValidationOutputOutcome;
        typedef Aws::Utils::Outcome<GetConnectorsResult, SMSError> GetConnectorsOutcome;
        typedef Aws::Utils::Outcome<GetReplicationJobsResult, SMSError> GetReplicationJobsOutcome;
        typedef Aws::Utils::Outcome<GetReplicationRunsResult, SMSError> GetReplicationRunsOutcome;
        typedef Aws::Utils::Outcome<GetServersResult, SMSError> GetServersOutcome;
        typedef Aws::Utils::Outcome<ImportAppCatalogResult, SMSError> ImportAppCatalogOutcome;
        typedef Aws::Utils::Outcome<ImportServerCatalogResult, SMSError> ImportServerCatalogOutcome;
        typedef Aws::Utils::Outcome<LaunchAppResult, SMSError> LaunchAppOutcome;
        typedef Aws::Utils::Outcome<ListAppsResult, SMSError> ListAppsOutcome;
        typedef Aws::Utils::Outcome<NotifyAppValidationOutputResult, SMSError> NotifyAppValidationOutputOutcome;
        typedef Aws::Utils::Outcome<PutAppLaunchConfigurationResult, SMSError> PutAppLaunchConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutAppReplicationConfigurationResult, SMSError> PutAppReplicationConfigurationOutcome;
        typedef Aws::Utils::Outcome<PutAppValidationConfigurationResult, SMSError> PutAppValidationConfigurationOutcome;
        typedef Aws::Utils::Outcome<StartAppReplicationResult, SMSError> StartAppReplicationOutcome;
        typedef Aws::Utils::Outcome<StartOnDemandAppReplicationResult, SMSError> StartOnDemandAppReplicationOutcome;
        typedef Aws::Utils::Outcome<StartOnDemandReplicationRunResult, SMSError> StartOnDemandReplicationRunOutcome;
        typedef Aws::Utils::Outcome<StopAppReplicationResult, SMSError> StopAppReplicationOutcome;
        typedef Aws::Utils::Outcome<TerminateAppResult, SMSError> TerminateAppOutcome;
        typedef Aws::Utils::Outcome<UpdateAppResult, SMSError> UpdateAppOutcome;
        typedef Aws::Utils::Outcome<UpdateReplicationJobResult, SMSError> UpdateReplicationJobOutcome;

        typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
        typedef std::future<CreateReplicationJobOutcome> CreateReplicationJobOutcomeCallable;
        typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
        typedef std::future<DeleteAppLaunchConfigurationOutcome> DeleteAppLaunchConfigurationOutcomeCallable;
        typedef std::future<DeleteAppReplicationConfigurationOutcome> DeleteAppReplicationConfigurationOutcomeCallable;
        typedef std::future<DeleteAppValidationConfigurationOutcome> DeleteAppValidationConfigurationOutcomeCallable;
        typedef std::future<DeleteReplicationJobOutcome> DeleteReplicationJobOutcomeCallable;
        typedef std::future<DeleteServerCatalogOutcome> DeleteServerCatalogOutcomeCallable;
        typedef std::future<DisassociateConnectorOutcome> DisassociateConnectorOutcomeCallable;
        typedef std::future<GenerateChangeSetOutcome> GenerateChangeSetOutcomeCallable;
        typedef std::future<GenerateTemplateOutcome> GenerateTemplateOutcomeCallable;
        typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
        typedef std::future<GetAppLaunchConfigurationOutcome> GetAppLaunchConfigurationOutcomeCallable;
        typedef std::future<GetAppReplicationConfigurationOutcome> GetAppReplicationConfigurationOutcomeCallable;
        typedef std::future<GetAppValidationConfigurationOutcome> GetAppValidationConfigurationOutcomeCallable;
        typedef std::future<GetAppValidationOutputOutcome> GetAppValidationOutputOutcomeCallable;
        typedef std::future<GetConnectorsOutcome> GetConnectorsOutcomeCallable;
        typedef std::future<GetReplicationJobsOutcome> GetReplicationJobsOutcomeCallable;
        typedef std::future<GetReplicationRunsOutcome> GetReplicationRunsOutcomeCallable;
        typedef std::future<GetServersOutcome> GetServersOutcomeCallable;
        typedef std::future<ImportAppCatalogOutcome> ImportAppCatalogOutcomeCallable;
        typedef std::future<ImportServerCatalogOutcome> ImportServerCatalogOutcomeCallable;
        typedef std::future<LaunchAppOutcome> LaunchAppOutcomeCallable;
        typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
        typedef std::future<NotifyAppValidationOutputOutcome> NotifyAppValidationOutputOutcomeCallable;
        typedef std::future<PutAppLaunchConfigurationOutcome> PutAppLaunchConfigurationOutcomeCallable;
        typedef std::future<PutAppReplicationConfigurationOutcome> PutAppReplicationConfigurationOutcomeCallable;
        typedef std::future<PutAppValidationConfigurationOutcome> PutAppValidationConfigurationOutcomeCallable;
        typedef std::future<StartAppReplicationOutcome> StartAppReplicationOutcomeCallable;
        typedef std::future<StartOnDemandAppReplicationOutcome> StartOnDemandAppReplicationOutcomeCallable;
        typedef std::future<StartOnDemandReplicationRunOutcome> StartOnDemandReplicationRunOutcomeCallable;
        typedef std::future<StopAppReplicationOutcome> StopAppReplicationOutcomeCallable;
        typedef std::future<TerminateAppOutcome> TerminateAppOutcomeCallable;
        typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
        typedef std::future<UpdateReplicationJobOutcome> UpdateReplicationJobOutcomeCallable;
} // namespace Model

  class SMSClient;

    typedef std::function<void(const SMSClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::CreateReplicationJobRequest&, const Model::CreateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppLaunchConfigurationRequest&, const Model::DeleteAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppReplicationConfigurationRequest&, const Model::DeleteAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteAppValidationConfigurationRequest&, const Model::DeleteAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteReplicationJobRequest&, const Model::DeleteReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationJobResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DeleteServerCatalogRequest&, const Model::DeleteServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::DisassociateConnectorRequest&, const Model::DisassociateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConnectorResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GenerateChangeSetRequest&, const Model::GenerateChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateChangeSetResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GenerateTemplateRequest&, const Model::GenerateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateTemplateResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppRequest&, const Model::GetAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppLaunchConfigurationRequest&, const Model::GetAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppReplicationConfigurationRequest&, const Model::GetAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppValidationConfigurationRequest&, const Model::GetAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetAppValidationOutputRequest&, const Model::GetAppValidationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAppValidationOutputResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetConnectorsRequest&, const Model::GetConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationJobsRequest&, const Model::GetReplicationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationJobsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetReplicationRunsRequest&, const Model::GetReplicationRunsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationRunsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::GetServersRequest&, const Model::GetServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServersResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ImportAppCatalogRequest&, const Model::ImportAppCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportAppCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ImportServerCatalogRequest&, const Model::ImportServerCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportServerCatalogResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::LaunchAppRequest&, const Model::LaunchAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LaunchAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::ListAppsRequest&, const Model::ListAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAppsResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::NotifyAppValidationOutputRequest&, const Model::NotifyAppValidationOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > NotifyAppValidationOutputResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppLaunchConfigurationRequest&, const Model::PutAppLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppReplicationConfigurationRequest&, const Model::PutAppReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::PutAppValidationConfigurationRequest&, const Model::PutAppValidationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAppValidationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartAppReplicationRequest&, const Model::StartAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartOnDemandAppReplicationRequest&, const Model::StartOnDemandAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StartOnDemandReplicationRunRequest&, const Model::StartOnDemandReplicationRunOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartOnDemandReplicationRunResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::StopAppReplicationRequest&, const Model::StopAppReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAppReplicationResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::TerminateAppRequest&, const Model::TerminateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const SMSClient*, const Model::UpdateReplicationJobRequest&, const Model::UpdateReplicationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationJobResponseReceivedHandler;

  /**
   * <fullname>AWS Server Migration Service</fullname> <p>AWS Server Migration
   * Service (AWS SMS) makes it easier and faster for you to migrate your on-premises
   * workloads to AWS. To learn more about AWS SMS, see the following resources:</p>
   * <ul> <li> <p> <a href="http://aws.amazon.com/server-migration-service/">AWS
   * Server Migration Service product page</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS
   * Server Migration Service User Guide</a> </p> </li> </ul>
   */
  class AWS_SMS_API SMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SMSClient();


        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to AWS. Each replication run creates an Amazon
         * Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationJobOutcome CreateReplicationJob(const Model::CreateReplicationJobRequest& request) const;

        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to AWS. Each replication run creates an Amazon
         * Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationJobOutcomeCallable CreateReplicationJobCallable(const Model::CreateReplicationJobRequest& request) const;

        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to AWS. Each replication run creates an Amazon
         * Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationJobAsync(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all AWS SMS replication jobs for servers in
         * the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all AWS SMS replication jobs for servers in
         * the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all AWS SMS replication jobs for servers in
         * the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the launch configuration for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppLaunchConfigurationOutcome DeleteAppLaunchConfiguration(const Model::DeleteAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Deletes the launch configuration for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppLaunchConfigurationOutcomeCallable DeleteAppLaunchConfigurationCallable(const Model::DeleteAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Deletes the launch configuration for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppLaunchConfigurationAsync(const Model::DeleteAppLaunchConfigurationRequest& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppReplicationConfigurationOutcome DeleteAppReplicationConfiguration(const Model::DeleteAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Deletes the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppReplicationConfigurationOutcomeCallable DeleteAppReplicationConfigurationCallable(const Model::DeleteAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Deletes the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppReplicationConfigurationAsync(const Model::DeleteAppReplicationConfigurationRequest& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppValidationConfigurationOutcome DeleteAppValidationConfiguration(const Model::DeleteAppValidationConfigurationRequest& request) const;

        /**
         * <p>Deletes the validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppValidationConfigurationOutcomeCallable DeleteAppValidationConfigurationCallable(const Model::DeleteAppValidationConfigurationRequest& request) const;

        /**
         * <p>Deletes the validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppValidationConfigurationAsync(const Model::DeleteAppValidationConfigurationRequest& request, const DeleteAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified replication job.</p> <p>After you delete a replication
         * job, there are no further replication runs. AWS deletes the contents of the
         * Amazon S3 bucket used to store AWS SMS artifacts. The AMIs created by the
         * replication runs are not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationJobOutcome DeleteReplicationJob(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * <p>Deletes the specified replication job.</p> <p>After you delete a replication
         * job, there are no further replication runs. AWS deletes the contents of the
         * Amazon S3 bucket used to store AWS SMS artifacts. The AMIs created by the
         * replication runs are not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationJobOutcomeCallable DeleteReplicationJobCallable(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * <p>Deletes the specified replication job.</p> <p>After you delete a replication
         * job, there are no further replication runs. AWS deletes the contents of the
         * Amazon S3 bucket used to store AWS SMS artifacts. The AMIs created by the
         * replication runs are not deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationJobAsync(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCatalogOutcome DeleteServerCatalog(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCatalogOutcomeCallable DeleteServerCatalogCallable(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCatalogAsync(const Model::DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified connector from AWS SMS.</p> <p>After you
         * disassociate a connector, it is no longer available to support replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectorOutcome DisassociateConnector(const Model::DisassociateConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified connector from AWS SMS.</p> <p>After you
         * disassociate a connector, it is no longer available to support replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectorOutcomeCallable DisassociateConnectorCallable(const Model::DisassociateConnectorRequest& request) const;

        /**
         * <p>Disassociates the specified connector from AWS SMS.</p> <p>After you
         * disassociate a connector, it is no longer available to support replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateConnectorAsync(const Model::DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates a target change set for a currently launched stack and writes it to
         * an Amazon S3 object in the customer’s Amazon S3 bucket.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateChangeSetOutcome GenerateChangeSet(const Model::GenerateChangeSetRequest& request) const;

        /**
         * <p>Generates a target change set for a currently launched stack and writes it to
         * an Amazon S3 object in the customer’s Amazon S3 bucket.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateChangeSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateChangeSetOutcomeCallable GenerateChangeSetCallable(const Model::GenerateChangeSetRequest& request) const;

        /**
         * <p>Generates a target change set for a currently launched stack and writes it to
         * an Amazon S3 object in the customer’s Amazon S3 bucket.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateChangeSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateChangeSetAsync(const Model::GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an AWS CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateTemplateOutcome GenerateTemplate(const Model::GenerateTemplateRequest& request) const;

        /**
         * <p>Generates an AWS CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateTemplateOutcomeCallable GenerateTemplateCallable(const Model::GenerateTemplateRequest& request) const;

        /**
         * <p>Generates an AWS CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateTemplateAsync(const Model::GenerateTemplateRequest& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve information about the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * <p>Retrieve information about the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * <p>Retrieve information about the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppAsync(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the application launch configuration associated with the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppLaunchConfigurationOutcome GetAppLaunchConfiguration(const Model::GetAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Retrieves the application launch configuration associated with the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppLaunchConfigurationOutcomeCallable GetAppLaunchConfigurationCallable(const Model::GetAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Retrieves the application launch configuration associated with the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppLaunchConfigurationAsync(const Model::GetAppLaunchConfigurationRequest& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the application replication configuration associated with the
         * specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppReplicationConfigurationOutcome GetAppReplicationConfiguration(const Model::GetAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the application replication configuration associated with the
         * specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppReplicationConfigurationOutcomeCallable GetAppReplicationConfigurationCallable(const Model::GetAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Retrieves the application replication configuration associated with the
         * specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppReplicationConfigurationAsync(const Model::GetAppReplicationConfigurationRequest& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a configuration for validating an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationConfigurationOutcome GetAppValidationConfiguration(const Model::GetAppValidationConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about a configuration for validating an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppValidationConfigurationOutcomeCallable GetAppValidationConfigurationCallable(const Model::GetAppValidationConfigurationRequest& request) const;

        /**
         * <p>Retrieves information about a configuration for validating an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppValidationConfigurationAsync(const Model::GetAppValidationConfigurationRequest& request, const GetAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves output from validating an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationOutputOutcome GetAppValidationOutput(const Model::GetAppValidationOutputRequest& request) const;

        /**
         * <p>Retrieves output from validating an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppValidationOutputOutcomeCallable GetAppValidationOutputCallable(const Model::GetAppValidationOutputRequest& request) const;

        /**
         * <p>Retrieves output from validating an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppValidationOutputAsync(const Model::GetAppValidationOutputRequest& request, const GetAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the connectors registered with the AWS SMS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorsOutcome GetConnectors(const Model::GetConnectorsRequest& request) const;

        /**
         * <p>Describes the connectors registered with the AWS SMS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorsOutcomeCallable GetConnectorsCallable(const Model::GetConnectorsRequest& request) const;

        /**
         * <p>Describes the connectors registered with the AWS SMS.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorsAsync(const Model::GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified replication job or all of your replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationJobsOutcome GetReplicationJobs(const Model::GetReplicationJobsRequest& request) const;

        /**
         * <p>Describes the specified replication job or all of your replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationJobsOutcomeCallable GetReplicationJobsCallable(const Model::GetReplicationJobsRequest& request) const;

        /**
         * <p>Describes the specified replication job or all of your replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationJobsAsync(const Model::GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the replication runs for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationRunsOutcome GetReplicationRuns(const Model::GetReplicationRunsRequest& request) const;

        /**
         * <p>Describes the replication runs for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationRunsOutcomeCallable GetReplicationRunsCallable(const Model::GetReplicationRunsRequest& request) const;

        /**
         * <p>Describes the replication runs for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReplicationRunsAsync(const Model::GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the servers in your server catalog.</p> <p>Before you can describe
         * your servers, you must import them using
         * <a>ImportServerCatalog</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         */
        virtual Model::GetServersOutcome GetServers(const Model::GetServersRequest& request) const;

        /**
         * <p>Describes the servers in your server catalog.</p> <p>Before you can describe
         * your servers, you must import them using
         * <a>ImportServerCatalog</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServersOutcomeCallable GetServersCallable(const Model::GetServersRequest& request) const;

        /**
         * <p>Describes the servers in your server catalog.</p> <p>Before you can describe
         * your servers, you must import them using
         * <a>ImportServerCatalog</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServersAsync(const Model::GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows application import from AWS Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAppCatalogOutcome ImportAppCatalog(const Model::ImportAppCatalogRequest& request) const;

        /**
         * <p>Allows application import from AWS Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportAppCatalogOutcomeCallable ImportAppCatalogCallable(const Model::ImportAppCatalogRequest& request) const;

        /**
         * <p>Allows application import from AWS Migration Hub.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportAppCatalogAsync(const Model::ImportAppCatalogRequest& request, const ImportAppCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gathers a complete list of on-premises servers. Connectors must be installed
         * and monitoring all servers to import.</p> <p>This call returns immediately, but
         * might take additional time to retrieve all the servers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportServerCatalogOutcome ImportServerCatalog(const Model::ImportServerCatalogRequest& request) const;

        /**
         * <p>Gathers a complete list of on-premises servers. Connectors must be installed
         * and monitoring all servers to import.</p> <p>This call returns immediately, but
         * might take additional time to retrieve all the servers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportServerCatalogOutcomeCallable ImportServerCatalogCallable(const Model::ImportServerCatalogRequest& request) const;

        /**
         * <p>Gathers a complete list of on-premises servers. Connectors must be installed
         * and monitoring all servers to import.</p> <p>This call returns immediately, but
         * might take additional time to retrieve all the servers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportServerCatalogAsync(const Model::ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified application as a stack in AWS
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         */
        virtual Model::LaunchAppOutcome LaunchApp(const Model::LaunchAppRequest& request) const;

        /**
         * <p>Launches the specified application as a stack in AWS
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LaunchAppOutcomeCallable LaunchAppCallable(const Model::LaunchAppRequest& request) const;

        /**
         * <p>Launches the specified application as a stack in AWS
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LaunchAppAsync(const Model::LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to AWS SMS about whether application validation is
         * successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyAppValidationOutputOutcome NotifyAppValidationOutput(const Model::NotifyAppValidationOutputRequest& request) const;

        /**
         * <p>Provides information to AWS SMS about whether application validation is
         * successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyAppValidationOutputOutcomeCallable NotifyAppValidationOutputCallable(const Model::NotifyAppValidationOutputRequest& request) const;

        /**
         * <p>Provides information to AWS SMS about whether application validation is
         * successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyAppValidationOutputAsync(const Model::NotifyAppValidationOutputRequest& request, const NotifyAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the launch configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppLaunchConfigurationOutcome PutAppLaunchConfiguration(const Model::PutAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates or updates the launch configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppLaunchConfigurationOutcomeCallable PutAppLaunchConfigurationCallable(const Model::PutAppLaunchConfigurationRequest& request) const;

        /**
         * <p>Creates or updates the launch configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppLaunchConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppLaunchConfigurationAsync(const Model::PutAppLaunchConfigurationRequest& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppReplicationConfigurationOutcome PutAppReplicationConfiguration(const Model::PutAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Creates or updates the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppReplicationConfigurationOutcomeCallable PutAppReplicationConfigurationCallable(const Model::PutAppReplicationConfigurationRequest& request) const;

        /**
         * <p>Creates or updates the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppReplicationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppReplicationConfigurationAsync(const Model::PutAppReplicationConfigurationRequest& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppValidationConfigurationOutcome PutAppValidationConfiguration(const Model::PutAppValidationConfigurationRequest& request) const;

        /**
         * <p>Creates or updates a validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppValidationConfigurationOutcomeCallable PutAppValidationConfigurationCallable(const Model::PutAppValidationConfigurationRequest& request) const;

        /**
         * <p>Creates or updates a validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppValidationConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAppValidationConfigurationAsync(const Model::PutAppValidationConfigurationRequest& request, const PutAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts replicating the specified application by creating replication jobs for
         * each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppReplicationOutcome StartAppReplication(const Model::StartAppReplicationRequest& request) const;

        /**
         * <p>Starts replicating the specified application by creating replication jobs for
         * each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartAppReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAppReplicationOutcomeCallable StartAppReplicationCallable(const Model::StartAppReplicationRequest& request) const;

        /**
         * <p>Starts replicating the specified application by creating replication jobs for
         * each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartAppReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAppReplicationAsync(const Model::StartAppReplicationRequest& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand replication run for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandAppReplicationOutcome StartOnDemandAppReplication(const Model::StartOnDemandAppReplicationRequest& request) const;

        /**
         * <p>Starts an on-demand replication run for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandAppReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandAppReplicationOutcomeCallable StartOnDemandAppReplicationCallable(const Model::StartOnDemandAppReplicationRequest& request) const;

        /**
         * <p>Starts an on-demand replication run for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandAppReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOnDemandAppReplicationAsync(const Model::StartOnDemandAppReplicationRequest& request, const StartOnDemandAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand replication run for the specified replication job. This
         * replication run starts immediately. This replication run is in addition to the
         * ones already scheduled.</p> <p>There is a limit on the number of on-demand
         * replications runs that you can request in a 24-hour period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandReplicationRunOutcome StartOnDemandReplicationRun(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * <p>Starts an on-demand replication run for the specified replication job. This
         * replication run starts immediately. This replication run is in addition to the
         * ones already scheduled.</p> <p>There is a limit on the number of on-demand
         * replications runs that you can request in a 24-hour period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandReplicationRunOutcomeCallable StartOnDemandReplicationRunCallable(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * <p>Starts an on-demand replication run for the specified replication job. This
         * replication run starts immediately. This replication run is in addition to the
         * ones already scheduled.</p> <p>There is a limit on the number of on-demand
         * replications runs that you can request in a 24-hour period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOnDemandReplicationRunAsync(const Model::StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops replicating the specified application by deleting the replication job
         * for each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StopAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppReplicationOutcome StopAppReplication(const Model::StopAppReplicationRequest& request) const;

        /**
         * <p>Stops replicating the specified application by deleting the replication job
         * for each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StopAppReplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAppReplicationOutcomeCallable StopAppReplicationCallable(const Model::StopAppReplicationRequest& request) const;

        /**
         * <p>Stops replicating the specified application by deleting the replication job
         * for each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StopAppReplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAppReplicationAsync(const Model::StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateAppOutcome TerminateApp(const Model::TerminateAppRequest& request) const;

        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateAppOutcomeCallable TerminateAppCallable(const Model::TerminateAppRequest& request) const;

        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateAppAsync(const Model::TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified settings for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationJobOutcome UpdateReplicationJob(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * <p>Updates the specified settings for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationJobOutcomeCallable UpdateReplicationJobCallable(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * <p>Updates the specified settings for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationJobAsync(const Model::UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReplicationJobAsyncHelper(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppLaunchConfigurationAsyncHelper(const Model::DeleteAppLaunchConfigurationRequest& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppReplicationConfigurationAsyncHelper(const Model::DeleteAppReplicationConfigurationRequest& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppValidationConfigurationAsyncHelper(const Model::DeleteAppValidationConfigurationRequest& request, const DeleteAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReplicationJobAsyncHelper(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteServerCatalogAsyncHelper(const Model::DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateConnectorAsyncHelper(const Model::DisassociateConnectorRequest& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateChangeSetAsyncHelper(const Model::GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GenerateTemplateAsyncHelper(const Model::GenerateTemplateRequest& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppAsyncHelper(const Model::GetAppRequest& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppLaunchConfigurationAsyncHelper(const Model::GetAppLaunchConfigurationRequest& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppReplicationConfigurationAsyncHelper(const Model::GetAppReplicationConfigurationRequest& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppValidationConfigurationAsyncHelper(const Model::GetAppValidationConfigurationRequest& request, const GetAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAppValidationOutputAsyncHelper(const Model::GetAppValidationOutputRequest& request, const GetAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectorsAsyncHelper(const Model::GetConnectorsRequest& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReplicationJobsAsyncHelper(const Model::GetReplicationJobsRequest& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetReplicationRunsAsyncHelper(const Model::GetReplicationRunsRequest& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServersAsyncHelper(const Model::GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportAppCatalogAsyncHelper(const Model::ImportAppCatalogRequest& request, const ImportAppCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportServerCatalogAsyncHelper(const Model::ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LaunchAppAsyncHelper(const Model::LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAppsAsyncHelper(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void NotifyAppValidationOutputAsyncHelper(const Model::NotifyAppValidationOutputRequest& request, const NotifyAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppLaunchConfigurationAsyncHelper(const Model::PutAppLaunchConfigurationRequest& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppReplicationConfigurationAsyncHelper(const Model::PutAppReplicationConfigurationRequest& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAppValidationConfigurationAsyncHelper(const Model::PutAppValidationConfigurationRequest& request, const PutAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartAppReplicationAsyncHelper(const Model::StartAppReplicationRequest& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOnDemandAppReplicationAsyncHelper(const Model::StartOnDemandAppReplicationRequest& request, const StartOnDemandAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartOnDemandReplicationRunAsyncHelper(const Model::StartOnDemandReplicationRunRequest& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopAppReplicationAsyncHelper(const Model::StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TerminateAppAsyncHelper(const Model::TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppAsyncHelper(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReplicationJobAsyncHelper(const Model::UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SMS
} // namespace Aws
