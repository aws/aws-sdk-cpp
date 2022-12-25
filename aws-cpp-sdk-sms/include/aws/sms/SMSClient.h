/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms/SMSServiceClientModel.h>

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
  class AWS_SMS_API SMSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SMSClient>
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

        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to Amazon Web Services. Each replication run
         * creates an Amazon Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationJobOutcome CreateReplicationJob(const Model::CreateReplicationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationJobOutcomeCallable CreateReplicationJobCallable(const Model::CreateReplicationJobRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationJobAsync(const Model::CreateReplicationJobRequest& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all Server Migration Service replication
         * jobs for servers in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppLaunchConfigurationOutcomeCallable DeleteAppLaunchConfigurationCallable(const Model::DeleteAppLaunchConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppReplicationConfigurationOutcomeCallable DeleteAppReplicationConfigurationCallable(const Model::DeleteAppReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppValidationConfigurationOutcomeCallable DeleteAppValidationConfigurationCallable(const Model::DeleteAppValidationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppValidationConfigurationAsync(const Model::DeleteAppValidationConfigurationRequest& request, const DeleteAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for DeleteReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationJobOutcomeCallable DeleteReplicationJobCallable(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationJobAsync(const Model::DeleteReplicationJobRequest& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCatalogOutcome DeleteServerCatalog(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * A Callable wrapper for DeleteServerCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteServerCatalogOutcomeCallable DeleteServerCatalogCallable(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * An Async wrapper for DeleteServerCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteServerCatalogAsync(const Model::DeleteServerCatalogRequest& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates the specified connector from Server Migration Service.</p>
         * <p>After you disassociate a connector, it is no longer available to support
         * replication jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectorOutcome DisassociateConnector(const Model::DisassociateConnectorRequest& request) const;

        /**
         * A Callable wrapper for DisassociateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateConnectorOutcomeCallable DisassociateConnectorCallable(const Model::DisassociateConnectorRequest& request) const;

        /**
         * An Async wrapper for DisassociateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GenerateChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateChangeSetOutcomeCallable GenerateChangeSetCallable(const Model::GenerateChangeSetRequest& request) const;

        /**
         * An Async wrapper for GenerateChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GenerateChangeSetAsync(const Model::GenerateChangeSetRequest& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates an CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateTemplateOutcome GenerateTemplate(const Model::GenerateTemplateRequest& request) const;

        /**
         * A Callable wrapper for GenerateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GenerateTemplateOutcomeCallable GenerateTemplateCallable(const Model::GenerateTemplateRequest& request) const;

        /**
         * An Async wrapper for GenerateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppOutcomeCallable GetAppCallable(const Model::GetAppRequest& request) const;

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppLaunchConfigurationOutcomeCallable GetAppLaunchConfigurationCallable(const Model::GetAppLaunchConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppReplicationConfigurationOutcomeCallable GetAppReplicationConfigurationCallable(const Model::GetAppReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppValidationConfigurationOutcomeCallable GetAppValidationConfigurationCallable(const Model::GetAppValidationConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetAppValidationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAppValidationOutputOutcomeCallable GetAppValidationOutputCallable(const Model::GetAppValidationOutputRequest& request) const;

        /**
         * An Async wrapper for GetAppValidationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAppValidationOutputAsync(const Model::GetAppValidationOutputRequest& request, const GetAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the connectors registered with the Server Migration
         * Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorsOutcome GetConnectors(const Model::GetConnectorsRequest& request) const;

        /**
         * A Callable wrapper for GetConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorsOutcomeCallable GetConnectorsCallable(const Model::GetConnectorsRequest& request) const;

        /**
         * An Async wrapper for GetConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetReplicationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationJobsOutcomeCallable GetReplicationJobsCallable(const Model::GetReplicationJobsRequest& request) const;

        /**
         * An Async wrapper for GetReplicationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetReplicationRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReplicationRunsOutcomeCallable GetReplicationRunsCallable(const Model::GetReplicationRunsRequest& request) const;

        /**
         * An Async wrapper for GetReplicationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServersOutcomeCallable GetServersCallable(const Model::GetServersRequest& request) const;

        /**
         * An Async wrapper for GetServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServersAsync(const Model::GetServersRequest& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows application import from Migration Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAppCatalogOutcome ImportAppCatalog(const Model::ImportAppCatalogRequest& request) const;

        /**
         * A Callable wrapper for ImportAppCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportAppCatalogOutcomeCallable ImportAppCatalogCallable(const Model::ImportAppCatalogRequest& request) const;

        /**
         * An Async wrapper for ImportAppCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ImportServerCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportServerCatalogOutcomeCallable ImportServerCatalogCallable(const Model::ImportServerCatalogRequest& request) const;

        /**
         * An Async wrapper for ImportServerCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportServerCatalogAsync(const Model::ImportServerCatalogRequest& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launches the specified application as a stack in
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         */
        virtual Model::LaunchAppOutcome LaunchApp(const Model::LaunchAppRequest& request) const;

        /**
         * A Callable wrapper for LaunchApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LaunchAppOutcomeCallable LaunchAppCallable(const Model::LaunchAppRequest& request) const;

        /**
         * An Async wrapper for LaunchApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LaunchAppAsync(const Model::LaunchAppRequest& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAppsOutcomeCallable ListAppsCallable(const Model::ListAppsRequest& request) const;

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAppsAsync(const Model::ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides information to Server Migration Service about whether application
         * validation is successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyAppValidationOutputOutcome NotifyAppValidationOutput(const Model::NotifyAppValidationOutputRequest& request) const;

        /**
         * A Callable wrapper for NotifyAppValidationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyAppValidationOutputOutcomeCallable NotifyAppValidationOutputCallable(const Model::NotifyAppValidationOutputRequest& request) const;

        /**
         * An Async wrapper for NotifyAppValidationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PutAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppLaunchConfigurationOutcomeCallable PutAppLaunchConfigurationCallable(const Model::PutAppLaunchConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PutAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppReplicationConfigurationOutcomeCallable PutAppReplicationConfigurationCallable(const Model::PutAppReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for PutAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAppValidationConfigurationOutcomeCallable PutAppValidationConfigurationCallable(const Model::PutAppValidationConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAppReplicationOutcomeCallable StartAppReplicationCallable(const Model::StartAppReplicationRequest& request) const;

        /**
         * An Async wrapper for StartAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartOnDemandAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandAppReplicationOutcomeCallable StartOnDemandAppReplicationCallable(const Model::StartOnDemandAppReplicationRequest& request) const;

        /**
         * An Async wrapper for StartOnDemandAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartOnDemandReplicationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandReplicationRunOutcomeCallable StartOnDemandReplicationRunCallable(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * An Async wrapper for StartOnDemandReplicationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StopAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopAppReplicationOutcomeCallable StopAppReplicationCallable(const Model::StopAppReplicationRequest& request) const;

        /**
         * An Async wrapper for StopAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopAppReplicationAsync(const Model::StopAppReplicationRequest& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateAppOutcome TerminateApp(const Model::TerminateAppRequest& request) const;

        /**
         * A Callable wrapper for TerminateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TerminateAppOutcomeCallable TerminateAppCallable(const Model::TerminateAppRequest& request) const;

        /**
         * An Async wrapper for TerminateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TerminateAppAsync(const Model::TerminateAppRequest& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReplicationJobOutcomeCallable UpdateReplicationJobCallable(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * An Async wrapper for UpdateReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReplicationJobAsync(const Model::UpdateReplicationJobRequest& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SMSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SMSClient>;
      void init(const SMSClientConfiguration& clientConfiguration);

      SMSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SMSEndpointProviderBase> m_endpointProvider;
  };

} // namespace SMS
} // namespace Aws
