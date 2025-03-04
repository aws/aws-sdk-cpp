/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/codeconnections/CodeConnectionsServiceClientModel.h>

namespace Aws
{
namespace CodeConnections
{
  /**
   * <fullname>AWS CodeConnections</fullname> <p>This Amazon Web Services
   * CodeConnections API Reference provides descriptions and usage examples of the
   * operations and data types for the Amazon Web Services CodeConnections API. You
   * can use the connections API to work with connections and installations.</p> <p>
   * <i>Connections</i> are configurations that you use to connect Amazon Web
   * Services resources to external code repositories. Each connection is a resource
   * that can be given to services such as CodePipeline to connect to a third-party
   * repository such as Bitbucket. For example, you can add the connection in
   * CodePipeline so that it triggers your pipeline when a code change is made to
   * your third-party code repository. Each connection is named and associated with a
   * unique ARN that is used to reference the connection.</p> <p>When you create a
   * connection, the console initiates a third-party connection handshake.
   * <i>Installations</i> are the apps that are used to conduct this handshake. For
   * example, the installation for the Bitbucket provider type is the Bitbucket app.
   * When you create a connection, you can choose an existing installation or create
   * one.</p> <p>When you want to create a connection to an installed provider type
   * such as GitHub Enterprise Server, you create a <i>host</i> for your
   * connections.</p> <p>You can work with connections by calling:</p> <ul> <li> <p>
   * <a>CreateConnection</a>, which creates a uniquely named connection that can be
   * referenced by services such as CodePipeline.</p> </li> <li> <p>
   * <a>DeleteConnection</a>, which deletes the specified connection.</p> </li> <li>
   * <p> <a>GetConnection</a>, which returns information about the connection,
   * including the connection status.</p> </li> <li> <p> <a>ListConnections</a>,
   * which lists the connections associated with your account.</p> </li> </ul> <p>You
   * can work with hosts by calling:</p> <ul> <li> <p> <a>CreateHost</a>, which
   * creates a host that represents the infrastructure where your provider is
   * installed.</p> </li> <li> <p> <a>DeleteHost</a>, which deletes the specified
   * host.</p> </li> <li> <p> <a>GetHost</a>, which returns information about the
   * host, including the setup status.</p> </li> <li> <p> <a>ListHosts</a>, which
   * lists the hosts associated with your account.</p> </li> </ul> <p>You can work
   * with tags in Amazon Web Services CodeConnections by calling the following:</p>
   * <ul> <li> <p> <a>ListTagsForResource</a>, which gets information about Amazon
   * Web Services tags for a specified Amazon Resource Name (ARN) in Amazon Web
   * Services CodeConnections.</p> </li> <li> <p> <a>TagResource</a>, which adds or
   * updates tags for a resource in Amazon Web Services CodeConnections.</p> </li>
   * <li> <p> <a>UntagResource</a>, which removes tags for a resource in Amazon Web
   * Services CodeConnections.</p> </li> </ul> <p>For information about how to use
   * Amazon Web Services CodeConnections, see the <a
   * href="https://docs.aws.amazon.com/dtconsole/latest/userguide/welcome-connections.html">Developer
   * Tools User Guide</a>.</p>
   */
  class AWS_CODECONNECTIONS_API CodeConnectionsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CodeConnectionsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef CodeConnectionsClientConfiguration ClientConfigurationType;
      typedef CodeConnectionsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeConnectionsClient(const Aws::CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration = Aws::CodeConnections::CodeConnectionsClientConfiguration(),
                              std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeConnectionsClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration = Aws::CodeConnections::CodeConnectionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeConnectionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<CodeConnectionsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::CodeConnections::CodeConnectionsClientConfiguration& clientConfiguration = Aws::CodeConnections::CodeConnectionsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeConnectionsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CodeConnectionsClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CodeConnectionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CodeConnectionsClient();

        /**
         * <p>Creates a connection that can then be given to other Amazon Web Services
         * services like CodePipeline so that it can access third-party code repositories.
         * The connection is in pending status until the third-party connection handshake
         * is completed from the console.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Creates a resource that represents the infrastructure where a third-party
         * provider is installed. The host is used when you create connections to an
         * installed third-party provider type, such as GitHub Enterprise Server. You
         * create one host for all connections to that provider.</p>  <p>A host
         * created through the CLI or the SDK is in `PENDING` status by default. You can
         * make its status `AVAILABLE` by setting up the host in the console.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/CreateHost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHostOutcome CreateHost(const Model::CreateHostRequest& request) const;

        /**
         * A Callable wrapper for CreateHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHostRequestT = Model::CreateHostRequest>
        Model::CreateHostOutcomeCallable CreateHostCallable(const CreateHostRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::CreateHost, request);
        }

        /**
         * An Async wrapper for CreateHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHostRequestT = Model::CreateHostRequest>
        void CreateHostAsync(const CreateHostRequestT& request, const CreateHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::CreateHost, request, handler, context);
        }

        /**
         * <p>Creates a link to a specified external Git repository. A repository link
         * allows Git sync to monitor and sync changes to files in a specified Git
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/CreateRepositoryLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRepositoryLinkOutcome CreateRepositoryLink(const Model::CreateRepositoryLinkRequest& request) const;

        /**
         * A Callable wrapper for CreateRepositoryLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRepositoryLinkRequestT = Model::CreateRepositoryLinkRequest>
        Model::CreateRepositoryLinkOutcomeCallable CreateRepositoryLinkCallable(const CreateRepositoryLinkRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::CreateRepositoryLink, request);
        }

        /**
         * An Async wrapper for CreateRepositoryLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRepositoryLinkRequestT = Model::CreateRepositoryLinkRequest>
        void CreateRepositoryLinkAsync(const CreateRepositoryLinkRequestT& request, const CreateRepositoryLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::CreateRepositoryLink, request, handler, context);
        }

        /**
         * <p>Creates a sync configuration which allows Amazon Web Services to sync content
         * from a Git repository to update a specified Amazon Web Services resource.
         * Parameters for the sync configuration are determined by the sync
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/CreateSyncConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSyncConfigurationOutcome CreateSyncConfiguration(const Model::CreateSyncConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSyncConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSyncConfigurationRequestT = Model::CreateSyncConfigurationRequest>
        Model::CreateSyncConfigurationOutcomeCallable CreateSyncConfigurationCallable(const CreateSyncConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::CreateSyncConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSyncConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSyncConfigurationRequestT = Model::CreateSyncConfigurationRequest>
        void CreateSyncConfigurationAsync(const CreateSyncConfigurationRequestT& request, const CreateSyncConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::CreateSyncConfiguration, request, handler, context);
        }

        /**
         * <p>The connection to be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>The host to be deleted. Before you delete a host, all connections associated
         * to the host must be deleted.</p>  <p>A host cannot be deleted if it is in
         * the VPC_CONFIG_INITIALIZING or VPC_CONFIG_DELETING state.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/DeleteHost">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostOutcome DeleteHost(const Model::DeleteHostRequest& request) const;

        /**
         * A Callable wrapper for DeleteHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHostRequestT = Model::DeleteHostRequest>
        Model::DeleteHostOutcomeCallable DeleteHostCallable(const DeleteHostRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::DeleteHost, request);
        }

        /**
         * An Async wrapper for DeleteHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHostRequestT = Model::DeleteHostRequest>
        void DeleteHostAsync(const DeleteHostRequestT& request, const DeleteHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::DeleteHost, request, handler, context);
        }

        /**
         * <p>Deletes the association between your connection and a specified external Git
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/DeleteRepositoryLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRepositoryLinkOutcome DeleteRepositoryLink(const Model::DeleteRepositoryLinkRequest& request) const;

        /**
         * A Callable wrapper for DeleteRepositoryLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRepositoryLinkRequestT = Model::DeleteRepositoryLinkRequest>
        Model::DeleteRepositoryLinkOutcomeCallable DeleteRepositoryLinkCallable(const DeleteRepositoryLinkRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::DeleteRepositoryLink, request);
        }

        /**
         * An Async wrapper for DeleteRepositoryLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRepositoryLinkRequestT = Model::DeleteRepositoryLinkRequest>
        void DeleteRepositoryLinkAsync(const DeleteRepositoryLinkRequestT& request, const DeleteRepositoryLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::DeleteRepositoryLink, request, handler, context);
        }

        /**
         * <p>Deletes the sync configuration for a specified repository and
         * connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/DeleteSyncConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSyncConfigurationOutcome DeleteSyncConfiguration(const Model::DeleteSyncConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSyncConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSyncConfigurationRequestT = Model::DeleteSyncConfigurationRequest>
        Model::DeleteSyncConfigurationOutcomeCallable DeleteSyncConfigurationCallable(const DeleteSyncConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::DeleteSyncConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteSyncConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSyncConfigurationRequestT = Model::DeleteSyncConfigurationRequest>
        void DeleteSyncConfigurationAsync(const DeleteSyncConfigurationRequestT& request, const DeleteSyncConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::DeleteSyncConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the connection ARN and details such as status, owner, and provider
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetConnection, request);
        }

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetConnection, request, handler, context);
        }

        /**
         * <p>Returns the host ARN and details such as status, provider type, endpoint,
         * and, if applicable, the VPC configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetHost">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostOutcome GetHost(const Model::GetHostRequest& request) const;

        /**
         * A Callable wrapper for GetHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHostRequestT = Model::GetHostRequest>
        Model::GetHostOutcomeCallable GetHostCallable(const GetHostRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetHost, request);
        }

        /**
         * An Async wrapper for GetHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHostRequestT = Model::GetHostRequest>
        void GetHostAsync(const GetHostRequestT& request, const GetHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetHost, request, handler, context);
        }

        /**
         * <p>Returns details about a repository link. A repository link allows Git sync to
         * monitor and sync changes from files in a specified Git repository.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetRepositoryLink">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositoryLinkOutcome GetRepositoryLink(const Model::GetRepositoryLinkRequest& request) const;

        /**
         * A Callable wrapper for GetRepositoryLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRepositoryLinkRequestT = Model::GetRepositoryLinkRequest>
        Model::GetRepositoryLinkOutcomeCallable GetRepositoryLinkCallable(const GetRepositoryLinkRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetRepositoryLink, request);
        }

        /**
         * An Async wrapper for GetRepositoryLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositoryLinkRequestT = Model::GetRepositoryLinkRequest>
        void GetRepositoryLinkAsync(const GetRepositoryLinkRequestT& request, const GetRepositoryLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetRepositoryLink, request, handler, context);
        }

        /**
         * <p>Returns details about the sync status for a repository. A repository sync
         * uses Git sync to push and pull changes from your remote
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetRepositorySyncStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRepositorySyncStatusOutcome GetRepositorySyncStatus(const Model::GetRepositorySyncStatusRequest& request) const;

        /**
         * A Callable wrapper for GetRepositorySyncStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRepositorySyncStatusRequestT = Model::GetRepositorySyncStatusRequest>
        Model::GetRepositorySyncStatusOutcomeCallable GetRepositorySyncStatusCallable(const GetRepositorySyncStatusRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetRepositorySyncStatus, request);
        }

        /**
         * An Async wrapper for GetRepositorySyncStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRepositorySyncStatusRequestT = Model::GetRepositorySyncStatusRequest>
        void GetRepositorySyncStatusAsync(const GetRepositorySyncStatusRequestT& request, const GetRepositorySyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetRepositorySyncStatus, request, handler, context);
        }

        /**
         * <p>Returns the status of the sync with the Git repository for a specific Amazon
         * Web Services resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetResourceSyncStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceSyncStatusOutcome GetResourceSyncStatus(const Model::GetResourceSyncStatusRequest& request) const;

        /**
         * A Callable wrapper for GetResourceSyncStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceSyncStatusRequestT = Model::GetResourceSyncStatusRequest>
        Model::GetResourceSyncStatusOutcomeCallable GetResourceSyncStatusCallable(const GetResourceSyncStatusRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetResourceSyncStatus, request);
        }

        /**
         * An Async wrapper for GetResourceSyncStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceSyncStatusRequestT = Model::GetResourceSyncStatusRequest>
        void GetResourceSyncStatusAsync(const GetResourceSyncStatusRequestT& request, const GetResourceSyncStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetResourceSyncStatus, request, handler, context);
        }

        /**
         * <p>Returns a list of the most recent sync blockers.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetSyncBlockerSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSyncBlockerSummaryOutcome GetSyncBlockerSummary(const Model::GetSyncBlockerSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetSyncBlockerSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSyncBlockerSummaryRequestT = Model::GetSyncBlockerSummaryRequest>
        Model::GetSyncBlockerSummaryOutcomeCallable GetSyncBlockerSummaryCallable(const GetSyncBlockerSummaryRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetSyncBlockerSummary, request);
        }

        /**
         * An Async wrapper for GetSyncBlockerSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSyncBlockerSummaryRequestT = Model::GetSyncBlockerSummaryRequest>
        void GetSyncBlockerSummaryAsync(const GetSyncBlockerSummaryRequestT& request, const GetSyncBlockerSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetSyncBlockerSummary, request, handler, context);
        }

        /**
         * <p>Returns details about a sync configuration, including the sync type and
         * resource name. A sync configuration allows the configuration to sync (push and
         * pull) changes from the remote repository for a specified branch in a Git
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/GetSyncConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSyncConfigurationOutcome GetSyncConfiguration(const Model::GetSyncConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSyncConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSyncConfigurationRequestT = Model::GetSyncConfigurationRequest>
        Model::GetSyncConfigurationOutcomeCallable GetSyncConfigurationCallable(const GetSyncConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::GetSyncConfiguration, request);
        }

        /**
         * An Async wrapper for GetSyncConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSyncConfigurationRequestT = Model::GetSyncConfigurationRequest>
        void GetSyncConfigurationAsync(const GetSyncConfigurationRequestT& request, const GetSyncConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::GetSyncConfiguration, request, handler, context);
        }

        /**
         * <p>Lists the connections associated with your account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request = {}) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListConnections, request);
        }

        /**
         * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectionsRequestT = Model::ListConnectionsRequest>
        void ListConnectionsAsync(const ListConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConnectionsRequestT& request = {}) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListConnections, request, handler, context);
        }

        /**
         * <p>Lists the hosts associated with your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostsOutcome ListHosts(const Model::ListHostsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHostsRequestT = Model::ListHostsRequest>
        Model::ListHostsOutcomeCallable ListHostsCallable(const ListHostsRequestT& request = {}) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListHosts, request);
        }

        /**
         * An Async wrapper for ListHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHostsRequestT = Model::ListHostsRequest>
        void ListHostsAsync(const ListHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListHostsRequestT& request = {}) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListHosts, request, handler, context);
        }

        /**
         * <p>Lists the repository links created for connections in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListRepositoryLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositoryLinksOutcome ListRepositoryLinks(const Model::ListRepositoryLinksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRepositoryLinks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRepositoryLinksRequestT = Model::ListRepositoryLinksRequest>
        Model::ListRepositoryLinksOutcomeCallable ListRepositoryLinksCallable(const ListRepositoryLinksRequestT& request = {}) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListRepositoryLinks, request);
        }

        /**
         * An Async wrapper for ListRepositoryLinks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositoryLinksRequestT = Model::ListRepositoryLinksRequest>
        void ListRepositoryLinksAsync(const ListRepositoryLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRepositoryLinksRequestT& request = {}) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListRepositoryLinks, request, handler, context);
        }

        /**
         * <p>Lists the repository sync definitions for repository links in your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListRepositorySyncDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRepositorySyncDefinitionsOutcome ListRepositorySyncDefinitions(const Model::ListRepositorySyncDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListRepositorySyncDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRepositorySyncDefinitionsRequestT = Model::ListRepositorySyncDefinitionsRequest>
        Model::ListRepositorySyncDefinitionsOutcomeCallable ListRepositorySyncDefinitionsCallable(const ListRepositorySyncDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListRepositorySyncDefinitions, request);
        }

        /**
         * An Async wrapper for ListRepositorySyncDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRepositorySyncDefinitionsRequestT = Model::ListRepositorySyncDefinitionsRequest>
        void ListRepositorySyncDefinitionsAsync(const ListRepositorySyncDefinitionsRequestT& request, const ListRepositorySyncDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListRepositorySyncDefinitions, request, handler, context);
        }

        /**
         * <p>Returns a list of sync configurations for a specified
         * repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListSyncConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSyncConfigurationsOutcome ListSyncConfigurations(const Model::ListSyncConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListSyncConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSyncConfigurationsRequestT = Model::ListSyncConfigurationsRequest>
        Model::ListSyncConfigurationsOutcomeCallable ListSyncConfigurationsCallable(const ListSyncConfigurationsRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListSyncConfigurations, request);
        }

        /**
         * An Async wrapper for ListSyncConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSyncConfigurationsRequestT = Model::ListSyncConfigurationsRequest>
        void ListSyncConfigurationsAsync(const ListSyncConfigurationsRequestT& request, const ListSyncConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListSyncConfigurations, request, handler, context);
        }

        /**
         * <p>Gets the set of key-value pairs (metadata) that are used to manage the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata that
         * can be used to manage a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an Amazon Web Services resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a specified host with the provided configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/UpdateHost">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHostOutcome UpdateHost(const Model::UpdateHostRequest& request) const;

        /**
         * A Callable wrapper for UpdateHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateHostRequestT = Model::UpdateHostRequest>
        Model::UpdateHostOutcomeCallable UpdateHostCallable(const UpdateHostRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::UpdateHost, request);
        }

        /**
         * An Async wrapper for UpdateHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHostRequestT = Model::UpdateHostRequest>
        void UpdateHostAsync(const UpdateHostRequestT& request, const UpdateHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::UpdateHost, request, handler, context);
        }

        /**
         * <p>Updates the association between your connection and a specified external Git
         * repository. A repository link allows Git sync to monitor and sync changes to
         * files in a specified Git repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/UpdateRepositoryLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRepositoryLinkOutcome UpdateRepositoryLink(const Model::UpdateRepositoryLinkRequest& request) const;

        /**
         * A Callable wrapper for UpdateRepositoryLink that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRepositoryLinkRequestT = Model::UpdateRepositoryLinkRequest>
        Model::UpdateRepositoryLinkOutcomeCallable UpdateRepositoryLinkCallable(const UpdateRepositoryLinkRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::UpdateRepositoryLink, request);
        }

        /**
         * An Async wrapper for UpdateRepositoryLink that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRepositoryLinkRequestT = Model::UpdateRepositoryLinkRequest>
        void UpdateRepositoryLinkAsync(const UpdateRepositoryLinkRequestT& request, const UpdateRepositoryLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::UpdateRepositoryLink, request, handler, context);
        }

        /**
         * <p>Allows you to update the status of a sync blocker, resolving the blocker and
         * allowing syncing to continue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/UpdateSyncBlocker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSyncBlockerOutcome UpdateSyncBlocker(const Model::UpdateSyncBlockerRequest& request) const;

        /**
         * A Callable wrapper for UpdateSyncBlocker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSyncBlockerRequestT = Model::UpdateSyncBlockerRequest>
        Model::UpdateSyncBlockerOutcomeCallable UpdateSyncBlockerCallable(const UpdateSyncBlockerRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::UpdateSyncBlocker, request);
        }

        /**
         * An Async wrapper for UpdateSyncBlocker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSyncBlockerRequestT = Model::UpdateSyncBlockerRequest>
        void UpdateSyncBlockerAsync(const UpdateSyncBlockerRequestT& request, const UpdateSyncBlockerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::UpdateSyncBlocker, request, handler, context);
        }

        /**
         * <p>Updates the sync configuration for your connection and a specified external
         * Git repository.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/UpdateSyncConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSyncConfigurationOutcome UpdateSyncConfiguration(const Model::UpdateSyncConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSyncConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSyncConfigurationRequestT = Model::UpdateSyncConfigurationRequest>
        Model::UpdateSyncConfigurationOutcomeCallable UpdateSyncConfigurationCallable(const UpdateSyncConfigurationRequestT& request) const
        {
            return SubmitCallable(&CodeConnectionsClient::UpdateSyncConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateSyncConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSyncConfigurationRequestT = Model::UpdateSyncConfigurationRequest>
        void UpdateSyncConfigurationAsync(const UpdateSyncConfigurationRequestT& request, const UpdateSyncConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CodeConnectionsClient::UpdateSyncConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CodeConnectionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CodeConnectionsClient>;
      void init(const CodeConnectionsClientConfiguration& clientConfiguration);

      CodeConnectionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<CodeConnectionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CodeConnections
} // namespace Aws
