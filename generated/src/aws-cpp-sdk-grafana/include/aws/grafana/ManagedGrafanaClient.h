/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/ManagedGrafanaPaginationBase.h>
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

namespace Aws {
namespace ManagedGrafana {
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
class AWS_MANAGEDGRAFANA_API ManagedGrafanaClient : public Aws::Client::AWSJsonClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<ManagedGrafanaClient>,
                                                    public ManagedGrafanaPaginationBase<ManagedGrafanaClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ManagedGrafanaClientConfiguration ClientConfigurationType;
  typedef ManagedGrafanaEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ManagedGrafanaClient(const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration =
                           Aws::ManagedGrafana::ManagedGrafanaClientConfiguration(),
                       std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ManagedGrafanaClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration =
                           Aws::ManagedGrafana::ManagedGrafanaClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ManagedGrafanaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<ManagedGrafanaEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::ManagedGrafana::ManagedGrafanaClientConfiguration& clientConfiguration =
                           Aws::ManagedGrafana::ManagedGrafanaClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ManagedGrafanaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ManagedGrafanaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ManagedGrafanaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ManagedGrafanaClient();

  /**
   * <p>Assigns a Grafana Enterprise license to a workspace. To upgrade, you must use
   * <code>ENTERPRISE</code> for the <code>licenseType</code>, and pass in a valid
   * Grafana Labs token for the <code>grafanaToken</code>. Upgrading to Grafana
   * Enterprise incurs additional fees. For more information, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/upgrade-to-Grafana-Enterprise.html">Upgrade
   * a workspace to Grafana Enterprise</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/AssociateLicense">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateLicenseOutcome AssociateLicense(const Model::AssociateLicenseRequest& request) const;

  /**
   * A Callable wrapper for AssociateLicense that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateLicenseRequestT = Model::AssociateLicenseRequest>
  Model::AssociateLicenseOutcomeCallable AssociateLicenseCallable(const AssociateLicenseRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::AssociateLicense, request);
  }

  /**
   * An Async wrapper for AssociateLicense that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociateLicenseRequestT = Model::AssociateLicenseRequest>
  void AssociateLicenseAsync(const AssociateLicenseRequestT& request, const AssociateLicenseResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::AssociateLicense, request, handler, context);
  }

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
  template <typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
  Model::CreateWorkspaceOutcomeCallable CreateWorkspaceCallable(const CreateWorkspaceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::CreateWorkspace, request);
  }

  /**
   * An Async wrapper for CreateWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateWorkspaceRequestT = Model::CreateWorkspaceRequest>
  void CreateWorkspaceAsync(const CreateWorkspaceRequestT& request, const CreateWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::CreateWorkspace, request, handler, context);
  }

  /**
   * <p>Creates a Grafana API key for the workspace. This key can be used to
   * authenticate requests sent to the workspace's HTTP API. See <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html">https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html</a>
   * for available APIs and example requests.</p>  <p>In workspaces compatible
   * with Grafana version 9 or above, use workspace service accounts instead of API
   * keys. API keys will be removed in a future release.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspaceApiKey">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkspaceApiKeyOutcome CreateWorkspaceApiKey(const Model::CreateWorkspaceApiKeyRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkspaceApiKey that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWorkspaceApiKeyRequestT = Model::CreateWorkspaceApiKeyRequest>
  Model::CreateWorkspaceApiKeyOutcomeCallable CreateWorkspaceApiKeyCallable(const CreateWorkspaceApiKeyRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::CreateWorkspaceApiKey, request);
  }

  /**
   * An Async wrapper for CreateWorkspaceApiKey that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWorkspaceApiKeyRequestT = Model::CreateWorkspaceApiKeyRequest>
  void CreateWorkspaceApiKeyAsync(const CreateWorkspaceApiKeyRequestT& request, const CreateWorkspaceApiKeyResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::CreateWorkspaceApiKey, request, handler, context);
  }

  /**
   * <p>Creates a service account for the workspace. A service account can be used to
   * call Grafana HTTP APIs, and run automated workloads. After creating the service
   * account with the correct <code>GrafanaRole</code> for your use case, use
   * <code>CreateWorkspaceServiceAccountToken</code> to create a token that can be
   * used to authenticate and authorize Grafana HTTP API calls.</p> <p>You can only
   * create service accounts for workspaces that are compatible with Grafana version
   * 9 and above.</p>  <p>For more information about service accounts, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/service-accounts.html">Service
   * accounts</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> <p>For more
   * information about the Grafana HTTP APIs, see <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/Using-Grafana-APIs.html">Using
   * Grafana HTTP APIs</a> in the <i>Amazon Managed Grafana User Guide</i>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspaceServiceAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkspaceServiceAccountOutcome CreateWorkspaceServiceAccount(
      const Model::CreateWorkspaceServiceAccountRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkspaceServiceAccount that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateWorkspaceServiceAccountRequestT = Model::CreateWorkspaceServiceAccountRequest>
  Model::CreateWorkspaceServiceAccountOutcomeCallable CreateWorkspaceServiceAccountCallable(
      const CreateWorkspaceServiceAccountRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::CreateWorkspaceServiceAccount, request);
  }

  /**
   * An Async wrapper for CreateWorkspaceServiceAccount that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWorkspaceServiceAccountRequestT = Model::CreateWorkspaceServiceAccountRequest>
  void CreateWorkspaceServiceAccountAsync(const CreateWorkspaceServiceAccountRequestT& request,
                                          const CreateWorkspaceServiceAccountResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::CreateWorkspaceServiceAccount, request, handler, context);
  }

  /**
   * <p>Creates a token that can be used to authenticate and authorize Grafana HTTP
   * API operations for the given <a
   * href="https://docs.aws.amazon.com/grafana/latest/userguide/service-accounts.html">workspace
   * service account</a>. The service account acts as a user for the API operations,
   * and defines the permissions that are used by the API.</p>  <p>When
   * you create the service account token, you will receive a key that is used when
   * calling Grafana APIs. Do not lose this key, as it will not be retrievable
   * again.</p> <p>If you do lose the key, you can delete the token and recreate it
   * to receive a new key. This will disable the initial key.</p>
   * <p>Service accounts are only available for workspaces that are compatible with
   * Grafana version 9 and above.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/CreateWorkspaceServiceAccountToken">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWorkspaceServiceAccountTokenOutcome CreateWorkspaceServiceAccountToken(
      const Model::CreateWorkspaceServiceAccountTokenRequest& request) const;

  /**
   * A Callable wrapper for CreateWorkspaceServiceAccountToken that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateWorkspaceServiceAccountTokenRequestT = Model::CreateWorkspaceServiceAccountTokenRequest>
  Model::CreateWorkspaceServiceAccountTokenOutcomeCallable CreateWorkspaceServiceAccountTokenCallable(
      const CreateWorkspaceServiceAccountTokenRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::CreateWorkspaceServiceAccountToken, request);
  }

  /**
   * An Async wrapper for CreateWorkspaceServiceAccountToken that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateWorkspaceServiceAccountTokenRequestT = Model::CreateWorkspaceServiceAccountTokenRequest>
  void CreateWorkspaceServiceAccountTokenAsync(const CreateWorkspaceServiceAccountTokenRequestT& request,
                                               const CreateWorkspaceServiceAccountTokenResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::CreateWorkspaceServiceAccountToken, request, handler, context);
  }

  /**
   * <p>Deletes an Amazon Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkspaceOutcome DeleteWorkspace(const Model::DeleteWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkspace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
  Model::DeleteWorkspaceOutcomeCallable DeleteWorkspaceCallable(const DeleteWorkspaceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DeleteWorkspace, request);
  }

  /**
   * An Async wrapper for DeleteWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteWorkspaceRequestT = Model::DeleteWorkspaceRequest>
  void DeleteWorkspaceAsync(const DeleteWorkspaceRequestT& request, const DeleteWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DeleteWorkspace, request, handler, context);
  }

  /**
   * <p>Deletes a Grafana API key for the workspace.</p>  <p>In workspaces
   * compatible with Grafana version 9 or above, use workspace service accounts
   * instead of API keys. API keys will be removed in a future release.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspaceApiKey">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkspaceApiKeyOutcome DeleteWorkspaceApiKey(const Model::DeleteWorkspaceApiKeyRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkspaceApiKey that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWorkspaceApiKeyRequestT = Model::DeleteWorkspaceApiKeyRequest>
  Model::DeleteWorkspaceApiKeyOutcomeCallable DeleteWorkspaceApiKeyCallable(const DeleteWorkspaceApiKeyRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DeleteWorkspaceApiKey, request);
  }

  /**
   * An Async wrapper for DeleteWorkspaceApiKey that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWorkspaceApiKeyRequestT = Model::DeleteWorkspaceApiKeyRequest>
  void DeleteWorkspaceApiKeyAsync(const DeleteWorkspaceApiKeyRequestT& request, const DeleteWorkspaceApiKeyResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DeleteWorkspaceApiKey, request, handler, context);
  }

  /**
   * <p>Deletes a workspace service account from the workspace.</p> <p>This will
   * delete any tokens created for the service account, as well. If the tokens are
   * currently in use, the will fail to authenticate / authorize after they are
   * deleted.</p> <p>Service accounts are only available for workspaces that are
   * compatible with Grafana version 9 and above.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspaceServiceAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkspaceServiceAccountOutcome DeleteWorkspaceServiceAccount(
      const Model::DeleteWorkspaceServiceAccountRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkspaceServiceAccount that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteWorkspaceServiceAccountRequestT = Model::DeleteWorkspaceServiceAccountRequest>
  Model::DeleteWorkspaceServiceAccountOutcomeCallable DeleteWorkspaceServiceAccountCallable(
      const DeleteWorkspaceServiceAccountRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DeleteWorkspaceServiceAccount, request);
  }

  /**
   * An Async wrapper for DeleteWorkspaceServiceAccount that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWorkspaceServiceAccountRequestT = Model::DeleteWorkspaceServiceAccountRequest>
  void DeleteWorkspaceServiceAccountAsync(const DeleteWorkspaceServiceAccountRequestT& request,
                                          const DeleteWorkspaceServiceAccountResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DeleteWorkspaceServiceAccount, request, handler, context);
  }

  /**
   * <p>Deletes a token for the workspace service account.</p> <p>This will disable
   * the key associated with the token. If any automation is currently using the key,
   * it will no longer be authenticated or authorized to perform actions with the
   * Grafana HTTP APIs.</p> <p>Service accounts are only available for workspaces
   * that are compatible with Grafana version 9 and above.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DeleteWorkspaceServiceAccountToken">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWorkspaceServiceAccountTokenOutcome DeleteWorkspaceServiceAccountToken(
      const Model::DeleteWorkspaceServiceAccountTokenRequest& request) const;

  /**
   * A Callable wrapper for DeleteWorkspaceServiceAccountToken that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DeleteWorkspaceServiceAccountTokenRequestT = Model::DeleteWorkspaceServiceAccountTokenRequest>
  Model::DeleteWorkspaceServiceAccountTokenOutcomeCallable DeleteWorkspaceServiceAccountTokenCallable(
      const DeleteWorkspaceServiceAccountTokenRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DeleteWorkspaceServiceAccountToken, request);
  }

  /**
   * An Async wrapper for DeleteWorkspaceServiceAccountToken that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteWorkspaceServiceAccountTokenRequestT = Model::DeleteWorkspaceServiceAccountTokenRequest>
  void DeleteWorkspaceServiceAccountTokenAsync(const DeleteWorkspaceServiceAccountTokenRequestT& request,
                                               const DeleteWorkspaceServiceAccountTokenResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DeleteWorkspaceServiceAccountToken, request, handler, context);
  }

  /**
   * <p>Displays information about one Amazon Managed Grafana
   * workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspace">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeWorkspaceOutcome DescribeWorkspace(const Model::DescribeWorkspaceRequest& request) const;

  /**
   * A Callable wrapper for DescribeWorkspace that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
  Model::DescribeWorkspaceOutcomeCallable DescribeWorkspaceCallable(const DescribeWorkspaceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DescribeWorkspace, request);
  }

  /**
   * An Async wrapper for DescribeWorkspace that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeWorkspaceRequestT = Model::DescribeWorkspaceRequest>
  void DescribeWorkspaceAsync(const DescribeWorkspaceRequestT& request, const DescribeWorkspaceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DescribeWorkspace, request, handler, context);
  }

  /**
   * <p>Displays information about the authentication methods used in one Amazon
   * Managed Grafana workspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceAuthentication">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeWorkspaceAuthenticationOutcome DescribeWorkspaceAuthentication(
      const Model::DescribeWorkspaceAuthenticationRequest& request) const;

  /**
   * A Callable wrapper for DescribeWorkspaceAuthentication that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeWorkspaceAuthenticationRequestT = Model::DescribeWorkspaceAuthenticationRequest>
  Model::DescribeWorkspaceAuthenticationOutcomeCallable DescribeWorkspaceAuthenticationCallable(
      const DescribeWorkspaceAuthenticationRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DescribeWorkspaceAuthentication, request);
  }

  /**
   * An Async wrapper for DescribeWorkspaceAuthentication that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DescribeWorkspaceAuthenticationRequestT = Model::DescribeWorkspaceAuthenticationRequest>
  void DescribeWorkspaceAuthenticationAsync(const DescribeWorkspaceAuthenticationRequestT& request,
                                            const DescribeWorkspaceAuthenticationResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DescribeWorkspaceAuthentication, request, handler, context);
  }

  /**
   * <p>Gets the current configuration string for the given workspace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DescribeWorkspaceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeWorkspaceConfigurationOutcome DescribeWorkspaceConfiguration(
      const Model::DescribeWorkspaceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for DescribeWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeWorkspaceConfigurationRequestT = Model::DescribeWorkspaceConfigurationRequest>
  Model::DescribeWorkspaceConfigurationOutcomeCallable DescribeWorkspaceConfigurationCallable(
      const DescribeWorkspaceConfigurationRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DescribeWorkspaceConfiguration, request);
  }

  /**
   * An Async wrapper for DescribeWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DescribeWorkspaceConfigurationRequestT = Model::DescribeWorkspaceConfigurationRequest>
  void DescribeWorkspaceConfigurationAsync(const DescribeWorkspaceConfigurationRequestT& request,
                                           const DescribeWorkspaceConfigurationResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DescribeWorkspaceConfiguration, request, handler, context);
  }

  /**
   * <p>Removes the Grafana Enterprise license from a workspace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/DisassociateLicense">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateLicenseOutcome DisassociateLicense(const Model::DisassociateLicenseRequest& request) const;

  /**
   * A Callable wrapper for DisassociateLicense that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateLicenseRequestT = Model::DisassociateLicenseRequest>
  Model::DisassociateLicenseOutcomeCallable DisassociateLicenseCallable(const DisassociateLicenseRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::DisassociateLicense, request);
  }

  /**
   * An Async wrapper for DisassociateLicense that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DisassociateLicenseRequestT = Model::DisassociateLicenseRequest>
  void DisassociateLicenseAsync(const DisassociateLicenseRequestT& request, const DisassociateLicenseResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::DisassociateLicense, request, handler, context);
  }

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
  template <typename ListPermissionsRequestT = Model::ListPermissionsRequest>
  Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const ListPermissionsRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::ListPermissions, request);
  }

  /**
   * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPermissionsRequestT = Model::ListPermissionsRequest>
  void ListPermissionsAsync(const ListPermissionsRequestT& request, const ListPermissionsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::ListPermissions, request, handler, context);
  }

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
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists available versions of Grafana. These are available when calling
   * <code>CreateWorkspace</code>. Optionally, include a workspace to list the
   * versions to which it can be upgraded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListVersions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListVersionsOutcome ListVersions(const Model::ListVersionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListVersions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListVersionsRequestT = Model::ListVersionsRequest>
  Model::ListVersionsOutcomeCallable ListVersionsCallable(const ListVersionsRequestT& request = {}) const {
    return SubmitCallable(&ManagedGrafanaClient::ListVersions, request);
  }

  /**
   * An Async wrapper for ListVersions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListVersionsRequestT = Model::ListVersionsRequest>
  void ListVersionsAsync(const ListVersionsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListVersionsRequestT& request = {}) const {
    return SubmitAsync(&ManagedGrafanaClient::ListVersions, request, handler, context);
  }

  /**
   * <p>Returns a list of tokens for a workspace service account.</p>  <p>This
   * does not return the key for each token. You cannot access keys after they are
   * created. To create a new key, delete the token and recreate it.</p>
   * <p>Service accounts are only available for workspaces that are compatible with
   * Grafana version 9 and above.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaceServiceAccountTokens">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkspaceServiceAccountTokensOutcome ListWorkspaceServiceAccountTokens(
      const Model::ListWorkspaceServiceAccountTokensRequest& request) const;

  /**
   * A Callable wrapper for ListWorkspaceServiceAccountTokens that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListWorkspaceServiceAccountTokensRequestT = Model::ListWorkspaceServiceAccountTokensRequest>
  Model::ListWorkspaceServiceAccountTokensOutcomeCallable ListWorkspaceServiceAccountTokensCallable(
      const ListWorkspaceServiceAccountTokensRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::ListWorkspaceServiceAccountTokens, request);
  }

  /**
   * An Async wrapper for ListWorkspaceServiceAccountTokens that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListWorkspaceServiceAccountTokensRequestT = Model::ListWorkspaceServiceAccountTokensRequest>
  void ListWorkspaceServiceAccountTokensAsync(const ListWorkspaceServiceAccountTokensRequestT& request,
                                              const ListWorkspaceServiceAccountTokensResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::ListWorkspaceServiceAccountTokens, request, handler, context);
  }

  /**
   * <p>Returns a list of service accounts for a workspace.</p> <p>Service accounts
   * are only available for workspaces that are compatible with Grafana version 9 and
   * above.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaceServiceAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkspaceServiceAccountsOutcome ListWorkspaceServiceAccounts(
      const Model::ListWorkspaceServiceAccountsRequest& request) const;

  /**
   * A Callable wrapper for ListWorkspaceServiceAccounts that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListWorkspaceServiceAccountsRequestT = Model::ListWorkspaceServiceAccountsRequest>
  Model::ListWorkspaceServiceAccountsOutcomeCallable ListWorkspaceServiceAccountsCallable(
      const ListWorkspaceServiceAccountsRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::ListWorkspaceServiceAccounts, request);
  }

  /**
   * An Async wrapper for ListWorkspaceServiceAccounts that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWorkspaceServiceAccountsRequestT = Model::ListWorkspaceServiceAccountsRequest>
  void ListWorkspaceServiceAccountsAsync(const ListWorkspaceServiceAccountsRequestT& request,
                                         const ListWorkspaceServiceAccountsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::ListWorkspaceServiceAccounts, request, handler, context);
  }

  /**
   * <p>Returns a list of Amazon Managed Grafana workspaces in the account, with some
   * information about each workspace. For more complete information about one
   * workspace, use <a
   * href="https://docs.aws.amazon.com/grafana/latest/APIReference/API_DescribeWorkspace.html">DescribeWorkspace</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/ListWorkspaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWorkspacesOutcome ListWorkspaces(const Model::ListWorkspacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListWorkspaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
  Model::ListWorkspacesOutcomeCallable ListWorkspacesCallable(const ListWorkspacesRequestT& request = {}) const {
    return SubmitCallable(&ManagedGrafanaClient::ListWorkspaces, request);
  }

  /**
   * An Async wrapper for ListWorkspaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListWorkspacesRequestT = Model::ListWorkspacesRequest>
  void ListWorkspacesAsync(const ListWorkspacesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                           const ListWorkspacesRequestT& request = {}) const {
    return SubmitAsync(&ManagedGrafanaClient::ListWorkspaces, request, handler, context);
  }

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
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::TagResource, request, handler, context);
  }

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
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates which users in a workspace have the Grafana <code>Admin</code> or
   * <code>Editor</code> roles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdatePermissions">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePermissionsOutcome UpdatePermissions(const Model::UpdatePermissionsRequest& request) const;

  /**
   * A Callable wrapper for UpdatePermissions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdatePermissionsRequestT = Model::UpdatePermissionsRequest>
  Model::UpdatePermissionsOutcomeCallable UpdatePermissionsCallable(const UpdatePermissionsRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::UpdatePermissions, request);
  }

  /**
   * An Async wrapper for UpdatePermissions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdatePermissionsRequestT = Model::UpdatePermissionsRequest>
  void UpdatePermissionsAsync(const UpdatePermissionsRequestT& request, const UpdatePermissionsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::UpdatePermissions, request, handler, context);
  }

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
  template <typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
  Model::UpdateWorkspaceOutcomeCallable UpdateWorkspaceCallable(const UpdateWorkspaceRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::UpdateWorkspace, request);
  }

  /**
   * An Async wrapper for UpdateWorkspace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateWorkspaceRequestT = Model::UpdateWorkspaceRequest>
  void UpdateWorkspaceAsync(const UpdateWorkspaceRequestT& request, const UpdateWorkspaceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::UpdateWorkspace, request, handler, context);
  }

  /**
   * <p>Use this operation to define the identity provider (IdP) that this workspace
   * authenticates users from, using SAML. You can also map SAML assertion attributes
   * to workspace user information and define which groups in the assertion attribute
   * are to have the <code>Admin</code> and <code>Editor</code> roles in the
   * workspace.</p>  <p>Changes to the authentication method for a workspace
   * may take a few minutes to take effect.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceAuthentication">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkspaceAuthenticationOutcome UpdateWorkspaceAuthentication(
      const Model::UpdateWorkspaceAuthenticationRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkspaceAuthentication that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateWorkspaceAuthenticationRequestT = Model::UpdateWorkspaceAuthenticationRequest>
  Model::UpdateWorkspaceAuthenticationOutcomeCallable UpdateWorkspaceAuthenticationCallable(
      const UpdateWorkspaceAuthenticationRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::UpdateWorkspaceAuthentication, request);
  }

  /**
   * An Async wrapper for UpdateWorkspaceAuthentication that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWorkspaceAuthenticationRequestT = Model::UpdateWorkspaceAuthenticationRequest>
  void UpdateWorkspaceAuthenticationAsync(const UpdateWorkspaceAuthenticationRequestT& request,
                                          const UpdateWorkspaceAuthenticationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::UpdateWorkspaceAuthentication, request, handler, context);
  }

  /**
   * <p>Updates the configuration string for the given workspace</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/UpdateWorkspaceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWorkspaceConfigurationOutcome UpdateWorkspaceConfiguration(
      const Model::UpdateWorkspaceConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateWorkspaceConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateWorkspaceConfigurationRequestT = Model::UpdateWorkspaceConfigurationRequest>
  Model::UpdateWorkspaceConfigurationOutcomeCallable UpdateWorkspaceConfigurationCallable(
      const UpdateWorkspaceConfigurationRequestT& request) const {
    return SubmitCallable(&ManagedGrafanaClient::UpdateWorkspaceConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateWorkspaceConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWorkspaceConfigurationRequestT = Model::UpdateWorkspaceConfigurationRequest>
  void UpdateWorkspaceConfigurationAsync(const UpdateWorkspaceConfigurationRequestT& request,
                                         const UpdateWorkspaceConfigurationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ManagedGrafanaClient::UpdateWorkspaceConfiguration, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ManagedGrafanaEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ManagedGrafanaClient>;
  void init(const ManagedGrafanaClientConfiguration& clientConfiguration);

  ManagedGrafanaClientConfiguration m_clientConfiguration;
  std::shared_ptr<ManagedGrafanaEndpointProviderBase> m_endpointProvider;
};

}  // namespace ManagedGrafana
}  // namespace Aws
