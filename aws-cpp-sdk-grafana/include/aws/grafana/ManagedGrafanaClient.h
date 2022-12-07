/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>

namespace Aws
{
namespace ManagedGrafana
{
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
  class AWS_MANAGEDGRAFANA_API ManagedGrafanaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ManagedGrafanaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration = Aws::ManagedGrafana::ManagedGrafanaClientConfiguration(),
                             std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration = Aws::ManagedGrafana::ManagedGrafanaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedGrafanaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = Aws::MakeShared<ManagedGrafanaEndpointProvider>(ALLOCATION_TAG),
                             const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration = Aws::ManagedGrafana::ManagedGrafanaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ManagedGrafanaClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ManagedGrafanaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for AssociateLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateLicenseOutcomeCallable AssociateLicenseCallable(const Model::AssociateLicenseRequest& request) const;

        /**
         * An Async wrapper for AssociateLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for CreateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const Model::CreateWorkspaceRequest& request) const;

        /**
         * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceAsync(const Model::CreateWorkspaceRequest& request, const CreateWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Grafana API key for the workspace. This key can be used to
         * authenticate requests sent to the workspace's HTTP API. See <a
         * href="https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html">https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html</a>
         * for available APIs and example requests.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspaceApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkspaceApiKeyOutcome CreateWorkspaceApiKey(const Model::CreateWorkspaceApiKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkspaceApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkspaceApiKeyOutcomeCallable CreateWorkspaceApiKeyCallable(const Model::CreateWorkspaceApiKeyRequest& request) const;

        /**
         * An Async wrapper for CreateWorkspaceApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkspaceApiKeyAsync(const Model::CreateWorkspaceApiKeyRequest& request, const CreateWorkspaceApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const Model::DeleteWorkspaceRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceAsync(const Model::DeleteWorkspaceRequest& request, const DeleteWorkspaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Grafana API key for the workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspaceApiKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkspaceApiKeyOutcome DeleteWorkspaceApiKey(const Model::DeleteWorkspaceApiKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkspaceApiKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkspaceApiKeyOutcomeCallable DeleteWorkspaceApiKeyCallable(const Model::DeleteWorkspaceApiKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkspaceApiKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkspaceApiKeyAsync(const Model::DeleteWorkspaceApiKeyRequest& request, const DeleteWorkspaceApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Displays information about one Amazon Managed Grafana
         * workspace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const Model::DescribeWorkspaceRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeWorkspaceAuthentication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceAuthenticationOutcomeCallable DescribeWorkspaceAuthenticationCallable(const Model::DescribeWorkspaceAuthenticationRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkspaceAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceAuthenticationAsync(const Model::DescribeWorkspaceAuthenticationRequest& request, const DescribeWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the current configuration string for the given workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkspaceConfigurationOutcome DescribeWorkspaceConfiguration(const Model::DescribeWorkspaceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkspaceConfigurationOutcomeCallable DescribeWorkspaceConfigurationCallable(const Model::DescribeWorkspaceConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkspaceConfigurationAsync(const Model::DescribeWorkspaceConfigurationRequest& request, const DescribeWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the Grafana Enterprise license from a workspace.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DisassociateLicense">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateLicenseOutcome DisassociateLicense(const Model::DisassociateLicenseRequest& request) const;

        /**
         * A Callable wrapper for DisassociateLicense that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateLicenseOutcomeCallable DisassociateLicenseCallable(const Model::DisassociateLicenseRequest& request) const;

        /**
         * An Async wrapper for DisassociateLicense that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>ListTagsForResource</code> operation returns the tags that are
         * associated with the Amazon Managed Service for Grafana resource specified by the
         * <code>resourceArn</code>. Currently, the only resource that can be tagged is a
         * workspace. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ListWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const Model::ListWorkspacesRequest& request) const;

        /**
         * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkspacesAsync(const Model::ListWorkspacesRequest& request, const ListWorkspacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>TagResource</code> operation associates tags with an Amazon Managed
         * Grafana resource. Currently, the only resource that can be tagged is workspaces.
         * </p> <p>If you specify a new tag key for the resource, this tag is appended to
         * the list of tags associated with the resource. If you specify a tag key that is
         * already associated with the resource, the new tag value that you specify
         * replaces the previous value for that tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The <code>UntagResource</code> operation removes the association of the tag
         * with the Amazon Managed Grafana resource. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates which users in a workspace have the Grafana <code>Admin</code> or
         * <code>Editor</code> roles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdatePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePermissionsOutcome UpdatePermissions(const Model::UpdatePermissionsRequest& request) const;

        /**
         * A Callable wrapper for UpdatePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePermissionsOutcomeCallable UpdatePermissionsCallable(const Model::UpdatePermissionsRequest& request) const;

        /**
         * An Async wrapper for UpdatePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePermissionsAsync(const Model::UpdatePermissionsRequest& request, const UpdatePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an existing Amazon Managed Grafana workspace. If you use this
         * operation and omit any optional parameters, the existing values of those
         * parameters are not changed.</p> <p>To modify the user authentication methods
         * that the workspace uses, such as SAML or IAM Identity Center, use <a
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
         * A Callable wrapper for UpdateWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const Model::UpdateWorkspaceRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkspace that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateWorkspaceAuthentication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceAuthenticationOutcomeCallable UpdateWorkspaceAuthenticationCallable(const Model::UpdateWorkspaceAuthenticationRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkspaceAuthentication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceAuthenticationAsync(const Model::UpdateWorkspaceAuthenticationRequest& request, const UpdateWorkspaceAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration string for the given workspace</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkspaceConfigurationOutcome UpdateWorkspaceConfiguration(const Model::UpdateWorkspaceConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkspaceConfigurationOutcomeCallable UpdateWorkspaceConfigurationCallable(const Model::UpdateWorkspaceConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkspaceConfigurationAsync(const Model::UpdateWorkspaceConfigurationRequest& request, const UpdateWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ManagedGrafanaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ManagedGrafanaClient>;
      void init(const ManagedGrafanaClientConfiguration& clientConfiguration);

      ManagedGrafanaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ManagedGrafanaEndpointProviderBase> m_endpointProvider;
  };

} // namespace ManagedGrafana
} // namespace Aws
