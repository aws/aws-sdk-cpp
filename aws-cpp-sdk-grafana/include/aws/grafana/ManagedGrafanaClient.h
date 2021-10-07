/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/AssociateLicenseResult.h>
#include <aws/grafana/model/CreateWorkspaceResult.h>
#include <aws/grafana/model/DeleteWorkspaceResult.h>
#include <aws/grafana/model/DescribeWorkspaceResult.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationResult.h>
#include <aws/grafana/model/DisassociateLicenseResult.h>
#include <aws/grafana/model/ListPermissionsResult.h>
#include <aws/grafana/model/ListWorkspacesResult.h>
#include <aws/grafana/model/UpdatePermissionsResult.h>
#include <aws/grafana/model/UpdateWorkspaceResult.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationResult.h>
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

namespace ManagedGrafana
{

namespace Model
{
        class AssociateLicenseRequest;
        class CreateWorkspaceRequest;
        class DeleteWorkspaceRequest;
        class DescribeWorkspaceRequest;
        class DescribeWorkspaceAuthenticationRequest;
        class DisassociateLicenseRequest;
        class ListPermissionsRequest;
        class ListWorkspacesRequest;
        class UpdatePermissionsRequest;
        class UpdateWorkspaceRequest;
        class UpdateWorkspaceAuthenticationRequest;

        typedef Aws::Utils::Outcome<AssociateLicenseResult, ManagedGrafanaError> AssociateLicenseOutcome;
        typedef Aws::Utils::Outcome<CreateWorkspaceResult, ManagedGrafanaError> CreateWorkspaceOutcome;
        typedef Aws::Utils::Outcome<DeleteWorkspaceResult, ManagedGrafanaError> DeleteWorkspaceOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceResult, ManagedGrafanaError> DescribeWorkspaceOutcome;
        typedef Aws::Utils::Outcome<DescribeWorkspaceAuthenticationResult, ManagedGrafanaError> DescribeWorkspaceAuthenticationOutcome;
        typedef Aws::Utils::Outcome<DisassociateLicenseResult, ManagedGrafanaError> DisassociateLicenseOutcome;
        typedef Aws::Utils::Outcome<ListPermissionsResult, ManagedGrafanaError> ListPermissionsOutcome;
        typedef Aws::Utils::Outcome<ListWorkspacesResult, ManagedGrafanaError> ListWorkspacesOutcome;
        typedef Aws::Utils::Outcome<UpdatePermissionsResult, ManagedGrafanaError> UpdatePermissionsOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkspaceResult, ManagedGrafanaError> UpdateWorkspaceOutcome;
        typedef Aws::Utils::Outcome<UpdateWorkspaceAuthenticationResult, ManagedGrafanaError> UpdateWorkspaceAuthenticationOutcome;

        typedef std::future<AssociateLicenseOutcome> AssociateLicenseOutcomeCallable;
        typedef std::future<CreateWorkspaceOutcome> CreateWorkspaceOutcomeCallable;
        typedef std::future<DeleteWorkspaceOutcome> DeleteWorkspaceOutcomeCallable;
        typedef std::future<DescribeWorkspaceOutcome> DescribeWorkspaceOutcomeCallable;
        typedef std::future<DescribeWorkspaceAuthenticationOutcome> DescribeWorkspaceAuthenticationOutcomeCallable;
        typedef std::future<DisassociateLicenseOutcome> DisassociateLicenseOutcomeCallable;
        typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
        typedef std::future<ListWorkspacesOutcome> ListWorkspacesOutcomeCallable;
        typedef std::future<UpdatePermissionsOutcome> UpdatePermissionsOutcomeCallable;
        typedef std::future<UpdateWorkspaceOutcome> UpdateWorkspaceOutcomeCallable;
        typedef std::future<UpdateWorkspaceAuthenticationOutcome> UpdateWorkspaceAuthenticationOutcomeCallable;
} // namespace Model

  class ManagedGrafanaClient;

    typedef std::function<void(const ManagedGrafanaClient*, const Model::AssociateLicenseRequest&, const Model::AssociateLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateLicenseResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::CreateWorkspaceRequest&, const Model::CreateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DeleteWorkspaceRequest&, const Model::DeleteWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DescribeWorkspaceRequest&, const Model::DescribeWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DescribeWorkspaceAuthenticationRequest&, const Model::DescribeWorkspaceAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkspaceAuthenticationResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::DisassociateLicenseRequest&, const Model::DisassociateLicenseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateLicenseResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::ListWorkspacesRequest&, const Model::ListWorkspacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkspacesResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdatePermissionsRequest&, const Model::UpdatePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePermissionsResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdateWorkspaceRequest&, const Model::UpdateWorkspaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceResponseReceivedHandler;
    typedef std::function<void(const ManagedGrafanaClient*, const Model::UpdateWorkspaceAuthenticationRequest&, const Model::UpdateWorkspaceAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkspaceAuthenticationResponseReceivedHandler;

  /**
   * <p>Amazon Managed Grafana is a fully managed and secure data visualization
   * service that you can use to instantly query, correlate, and visualize
   * operational metrics, logs, and traces from multiple sources. Amazon Managed
   * Grafana makes it easy to deploy, operate, and scale Grafana, a widely deployed
   * data visualization tool that is popular for its extensible data support.</p>
   * <p>With Amazon Managed Grafana, you create logically isolated Grafana servers
   * called <i>workspaces</i>. In a workspace, you can create Grafana dashboards and
   * visualizations to analyze your metrics, logs, and traces without having to
   * build, package, or deploy any hardware to run Grafana servers. </p>
   */
  class AWS_MANAGEDGRAFANA_API ManagedGrafanaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedGrafanaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ManagedGrafanaClient();


        /**
         * <p>Assigns a Grafana Enterprise license to a workspace. Upgrading to Grafana
         * Enterprise incurs additional fees. For more information, see <a
         * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html">Upgrade
         * a workspace to Grafana Enterprise</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssociateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateLicenseOutcome AssociateLicense(const Model::AssociateLicenseRequest& request) const;

        /**
         * <p>Assigns a Grafana Enterprise license to a workspace. Upgrading to Grafana
         * Enterprise incurs additional fees. For more information, see <a
         * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html">Upgrade
         * a workspace to Grafana Enterprise</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssociateLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLicenseOutcomeCallable AssociateLicenseCallable(const Model::AssociateLicenseRequest& request) const;

        /**
         * <p>Assigns a Grafana Enterprise license to a workspace. Upgrading to Grafana
         * Enterprise incurs additional fees. For more information, see <a
         * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html">Upgrade
         * a workspace to Grafana Enterprise</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssociateLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateLicenseAsync(const Model::AssociateLicenseRequest& request, const AssociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <i>workspace</i>. In a workspace, you can create Grafana dashboards
         * and visualizations to analyze your metrics, logs, and traces. You don't have to
         * build, package, or deploy any hardware to run the Grafana server.</p> <p>Don't
         * use <code>CreateWorkspace</code> to modify an existing workspace. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspace.html">UpdateWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceOutcome CreateWorkspace(const Model::CreateWorkspaceRequest& request) const;

        /**
         * <p>Creates a <i>workspace</i>. In a workspace, you can create Grafana dashboards
         * and visualizations to analyze your metrics, logs, and traces. You don't have to
         * build, package, or deploy any hardware to run the Grafana server.</p> <p>Don't
         * use <code>CreateWorkspace</code> to modify an existing workspace. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspace.html">UpdateWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;

        /**
         * <p>Creates a <i>workspace</i>. In a workspace, you can create Grafana dashboards
         * and visualizations to analyze your metrics, logs, and traces. You don't have to
         * build, package, or deploy any hardware to run the Grafana server.</p> <p>Don't
         * use <code>CreateWorkspace</code> to modify an existing workspace. Instead, use
         * <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspace.html">UpdateWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * <p>Deletes an Amazon Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * <p>Deletes an Amazon Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays information about one Amazon Managed Grafana
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * <p>Displays information about one Amazon Managed Grafana
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * <p>Displays information about one Amazon Managed Grafana
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceAsync(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays information about the authentication methods used in one Amazon
         * Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceAuthenticationOutcome DescribeWorkspaceAuthentication(const Model::DescribeWorkspaceAuthenticationRequest& request) const;

        /**
         * <p>Displays information about the authentication methods used in one Amazon
         * Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceAuthentication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceAuthenticationOutcomeCallable DescribeWorkspaceAuthenticationCallable(const Model::DescribeWorkspaceAuthenticationRequest& request) const;

        /**
         * <p>Displays information about the authentication methods used in one Amazon
         * Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceAuthentication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceAuthenticationAsync(const Model::DescribeWorkspaceAuthenticationRequest& request, const DescribeWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the Grafana Enterprise license from a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DisassociateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLicenseOutcome DisassociateLicense(const Model::DisassociateLicenseRequest& request) const;

        /**
         * <p>Removes the Grafana Enterprise license from a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DisassociateLicense">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLicenseOutcomeCallable DisassociateLicenseCallable(const Model::DisassociateLicenseRequest& request) const;

        /**
         * <p>Removes the Grafana Enterprise license from a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DisassociateLicense">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateLicenseAsync(const Model::DisassociateLicenseRequest& request, const DisassociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the users and groups who have the Grafana <code>Admin</code> and
         * <code>Editor</code> roles in this workspace. If you use this operation without
         * specifying <code>userId</code> or <code>groupId</code>, the operation returns
         * the roles of all users and groups. If you specify a <code>userId</code> or a
         * <code>groupId</code>, only the roles for that user or group are returned. If you
         * do this, you can specify only one <code>userId</code> or one
         * <code>groupId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Lists the users and groups who have the Grafana <code>Admin</code> and
         * <code>Editor</code> roles in this workspace. If you use this operation without
         * specifying <code>userId</code> or <code>groupId</code>, the operation returns
         * the roles of all users and groups. If you specify a <code>userId</code> or a
         * <code>groupId</code>, only the roles for that user or group are returned. If you
         * do this, you can specify only one <code>userId</code> or one
         * <code>groupId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListPermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * <p>Lists the users and groups who have the Grafana <code>Admin</code> and
         * <code>Editor</code> roles in this workspace. If you use this operation without
         * specifying <code>userId</code> or <code>groupId</code>, the operation returns
         * the roles of all users and groups. If you specify a <code>userId</code> or a
         * <code>groupId</code>, only the roles for that user or group are returned. If you
         * do this, you can specify only one <code>userId</code> or one
         * <code>groupId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListPermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of Amazon Managed Grafana workspaces in the account, with some
         * information about each workspace. For more complete information about one
         * workspace, use <a
         * href="https://docs.aws.amazon.com/AAMG/latest/APIReference/API_DescribeWorkspace.html">DescribeWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request) const;

        /**
         * <p>Returns a list of Amazon Managed Grafana workspaces in the account, with some
         * information about each workspace. For more complete information about one
         * workspace, use <a
         * href="https://docs.aws.amazon.com/AAMG/latest/APIReference/API_DescribeWorkspace.html">DescribeWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaces">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;

        /**
         * <p>Returns a list of Amazon Managed Grafana workspaces in the account, with some
         * information about each workspace. For more complete information about one
         * workspace, use <a
         * href="https://docs.aws.amazon.com/AAMG/latest/APIReference/API_DescribeWorkspace.html">DescribeWorkspace</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaces">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates which users in a workspace have the Grafana <code>Admin</code> or
         * <code>Editor</code> roles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionsOutcome UpdatePermissions(const Model::UpdatePermissionsRequest& request) const;

        /**
         * <p>Updates which users in a workspace have the Grafana <code>Admin</code> or
         * <code>Editor</code> roles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdatePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePermissionsOutcomeCallable UpdatePermissionsCallable(const Model::UpdatePermissionsRequest& request) const;

        /**
         * <p>Updates which users in a workspace have the Grafana <code>Admin</code> or
         * <code>Editor</code> roles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdatePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePermissionsAsync(const Model::UpdatePermissionsRequest& request, const UpdatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing Amazon Managed Grafana workspace. If you use this
         * operation and omit any optional parameters, the existing values of those
         * parameters are not changed.</p> <p>To modify the user authentication methods
         * that the workspace uses, such as SAML or Amazon Web Services SSO, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspaceAuthentication.html">UpdateWorkspaceAuthentication</a>.</p>
         * <p>To modify which users in the workspace have the <code>Admin</code> and
         * <code>Editor</code> Grafana roles, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceOutcome UpdateWorkspace(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * <p>Modifies an existing Amazon Managed Grafana workspace. If you use this
         * operation and omit any optional parameters, the existing values of those
         * parameters are not changed.</p> <p>To modify the user authentication methods
         * that the workspace uses, such as SAML or Amazon Web Services SSO, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspaceAuthentication.html">UpdateWorkspaceAuthentication</a>.</p>
         * <p>To modify which users in the workspace have the <code>Admin</code> and
         * <code>Editor</code> Grafana roles, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * <p>Modifies an existing Amazon Managed Grafana workspace. If you use this
         * operation and omit any optional parameters, the existing values of those
         * parameters are not changed.</p> <p>To modify the user authentication methods
         * that the workspace uses, such as SAML or Amazon Web Services SSO, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdateWorkspaceAuthentication.html">UpdateWorkspaceAuthentication</a>.</p>
         * <p>To modify which users in the workspace have the <code>Admin</code> and
         * <code>Editor</code> Grafana roles, use <a
         * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_UpdatePermissions.html">UpdatePermissions</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAsync(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to define the identity provider (IdP) that this workspace
         * authenticates users from, using SAML. You can also map SAML assertion attributes
         * to workspace user information and define which groups in the assertion attribute
         * are to have the <code>Admin</code> and <code>Editor</code> roles in the
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceAuthentication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceAuthenticationOutcome UpdateWorkspaceAuthentication(const Model::UpdateWorkspaceAuthenticationRequest& request) const;

        /**
         * <p>Use this operation to define the identity provider (IdP) that this workspace
         * authenticates users from, using SAML. You can also map SAML assertion attributes
         * to workspace user information and define which groups in the assertion attribute
         * are to have the <code>Admin</code> and <code>Editor</code> roles in the
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceAuthentication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceAuthenticationOutcomeCallable UpdateWorkspaceAuthenticationCallable(const Model::UpdateWorkspaceAuthenticationRequest& request) const;

        /**
         * <p>Use this operation to define the identity provider (IdP) that this workspace
         * authenticates users from, using SAML. You can also map SAML assertion attributes
         * to workspace user information and define which groups in the assertion attribute
         * are to have the <code>Admin</code> and <code>Editor</code> roles in the
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceAuthentication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAuthenticationAsync(const Model::UpdateWorkspaceAuthenticationRequest& request, const UpdateWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateLicenseAsyncHelper(const Model::AssociateLicenseRequest& request, const AssociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateWorkspaceAsyncHelper(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteWorkspaceAsyncHelper(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceAsyncHelper(const Model::DescribeWorkspaceRequest& request, const DescribeWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeWorkspaceAuthenticationAsyncHelper(const Model::DescribeWorkspaceAuthenticationRequest& request, const DescribeWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateLicenseAsyncHelper(const Model::DisassociateLicenseRequest& request, const DisassociateLicenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPermissionsAsyncHelper(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListWorkspacesAsyncHelper(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePermissionsAsyncHelper(const Model::UpdatePermissionsRequest& request, const UpdatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceAsyncHelper(const Model::UpdateWorkspaceRequest& request, const UpdateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateWorkspaceAuthenticationAsyncHelper(const Model::UpdateWorkspaceAuthenticationRequest& request, const UpdateWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ManagedGrafana
} // namespace Aws
