/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms/SMSServiceClientModel.h>
#include <aws/sms/SMSLegacyAsyncMacros.h>

namespace Aws
{
namespace SMS
{
  /**
   *  <p> <b>Product update</b> </p> <p>We recommend <a
   * href="http://aws.amazon.com/application-migration-service">Amazon Web Services
   * Application Migration Service</a> (Amazon Web Services MGN) as the primary
   * migration service for lift-and-shift migrations. If Amazon Web Services MGN is
   * unavailable in a specific Amazon Web Services Region, you can use the Server
   * Migration Service APIs through March 2023.</p>  <p>Server Migration
   * Service (Server Migration Service) makes it easier and faster for you to migrate
   * your on-premises workloads to Amazon Web Services. To learn more about Server
   * Migration Service, see the following resources:</p> <ul> <li> <p> <a
   * href="http://aws.amazon.com/server-migration-service/">Server Migration Service
   * product page</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server
   * Migration Service User Guide</a> </p> </li> </ul>
   */
  class AWS_SMS_API SMSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration(),
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = Aws::MakeShared<SMSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SMSClient();


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;


        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to Amazon Web Services. Each replication run
         * creates an Amazon Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationJobOutcome CreateReplicationJob(const Model::CreateReplicationJobRequest& request) const;


        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all Server Migration Service replication
         * jobs for servers in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;


        /**
         * <p>Deletes the launch configuration for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppLaunchConfigurationOutcome DeleteAppLaunchConfiguration(const Model::DeleteAppLaunchConfigurationRequest& request) const;


        /**
         * <p>Deletes the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppReplicationConfigurationOutcome DeleteAppReplicationConfiguration(const Model::DeleteAppReplicationConfigurationRequest& request) const;


        /**
         * <p>Deletes the validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppValidationConfigurationOutcome DeleteAppValidationConfiguration(const Model::DeleteAppValidationConfigurationRequest& request) const;


        /**
         * <p>Deletes the specified replication job.</p> <p>After you delete a replication
         * job, there are no further replication runs. Amazon Web Services deletes the
         * contents of the Amazon S3 bucket used to store Server Migration Service
         * artifacts. The AMIs created by the replication runs are not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationJobOutcome DeleteReplicationJob(const Model::DeleteReplicationJobRequest& request) const;


        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCatalogOutcome DeleteServerCatalog(const Model::DeleteServerCatalogRequest& request) const;


        /**
         * <p>Disassociates the specified connector from Server Migration Service.</p>
         * <p>After you disassociate a connector, it is no longer available to support
         * replication jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectorOutcome DisassociateConnector(const Model::DisassociateConnectorRequest& request) const;


        /**
         * <p>Generates a target change set for a currently launched stack and writes it to
         * an Amazon S3 object in the customer’s Amazon S3 bucket.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateChangeSetOutcome GenerateChangeSet(const Model::GenerateChangeSetRequest& request) const;


        /**
         * <p>Generates an CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateTemplateOutcome GenerateTemplate(const Model::GenerateTemplateRequest& request) const;


        /**
         * <p>Retrieve information about the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;


        /**
         * <p>Retrieves the application launch configuration associated with the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppLaunchConfigurationOutcome GetAppLaunchConfiguration(const Model::GetAppLaunchConfigurationRequest& request) const;


        /**
         * <p>Retrieves the application replication configuration associated with the
         * specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppReplicationConfigurationOutcome GetAppReplicationConfiguration(const Model::GetAppReplicationConfigurationRequest& request) const;


        /**
         * <p>Retrieves information about a configuration for validating an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationConfigurationOutcome GetAppValidationConfiguration(const Model::GetAppValidationConfigurationRequest& request) const;


        /**
         * <p>Retrieves output from validating an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationOutputOutcome GetAppValidationOutput(const Model::GetAppValidationOutputRequest& request) const;


        /**
         * <p>Describes the connectors registered with the Server Migration
         * Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorsOutcome GetConnectors(const Model::GetConnectorsRequest& request) const;


        /**
         * <p>Describes the specified replication job or all of your replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationJobsOutcome GetReplicationJobs(const Model::GetReplicationJobsRequest& request) const;


        /**
         * <p>Describes the replication runs for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationRunsOutcome GetReplicationRuns(const Model::GetReplicationRunsRequest& request) const;


        /**
         * <p>Describes the servers in your server catalog.</p> <p>Before you can describe
         * your servers, you must import them using
         * <a>ImportServerCatalog</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         */
        virtual Model::GetServersOutcome GetServers(const Model::GetServersRequest& request) const;


        /**
         * <p>Allows application import from Migration Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAppCatalogOutcome ImportAppCatalog(const Model::ImportAppCatalogRequest& request) const;


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
         * <p>Launches the specified application as a stack in
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         */
        virtual Model::LaunchAppOutcome LaunchApp(const Model::LaunchAppRequest& request) const;


        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;


        /**
         * <p>Provides information to Server Migration Service about whether application
         * validation is successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyAppValidationOutputOutcome NotifyAppValidationOutput(const Model::NotifyAppValidationOutputRequest& request) const;


        /**
         * <p>Creates or updates the launch configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppLaunchConfigurationOutcome PutAppLaunchConfiguration(const Model::PutAppLaunchConfigurationRequest& request) const;


        /**
         * <p>Creates or updates the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppReplicationConfigurationOutcome PutAppReplicationConfiguration(const Model::PutAppReplicationConfigurationRequest& request) const;


        /**
         * <p>Creates or updates a validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppValidationConfigurationOutcome PutAppValidationConfiguration(const Model::PutAppValidationConfigurationRequest& request) const;


        /**
         * <p>Starts replicating the specified application by creating replication jobs for
         * each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppReplicationOutcome StartAppReplication(const Model::StartAppReplicationRequest& request) const;


        /**
         * <p>Starts an on-demand replication run for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandAppReplicationOutcome StartOnDemandAppReplication(const Model::StartOnDemandAppReplicationRequest& request) const;


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
         * <p>Stops replicating the specified application by deleting the replication job
         * for each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StopAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppReplicationOutcome StopAppReplication(const Model::StopAppReplicationRequest& request) const;


        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateAppOutcome TerminateApp(const Model::TerminateAppRequest& request) const;


        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;


        /**
         * <p>Updates the specified settings for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationJobOutcome UpdateReplicationJob(const Model::UpdateReplicationJobRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SMSEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const SMSClientConfiguration& clientConfiguration);

      SMSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SMSEndpointProviderBase> m_endpointProvider;
  };

} // namespace SMS
} // namespace Aws
