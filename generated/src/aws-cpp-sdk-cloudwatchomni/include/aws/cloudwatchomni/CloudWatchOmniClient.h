/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniPaginationBase.h>
#include <aws/cloudwatchomni/CloudWatchOmniServiceClientModel.h>
#include <aws/cloudwatchomni/CloudWatchOmniWaiter.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace CloudWatchOmni {
/**
 * <p>CloudWatch Omni is a unified observability experience built on Amazon
 * CloudWatch. You work in a space, an isolated environment that holds your
 * telemetry and controls who can access it, and your data is stored in the
 * CloudWatch Dataset for correlated analysis of logs, metrics, and traces.</p>
 */
class AWS_CLOUDWATCHOMNI_API CloudWatchOmniClient : public Aws::Client::AWSRpcV2CborClient,
                                                    public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchOmniClient>,
                                                    public CloudWatchOmniPaginationBase<CloudWatchOmniClient>,
                                                    public CloudWatchOmniWaiter<CloudWatchOmniClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef CloudWatchOmniClientConfiguration ClientConfigurationType;
  typedef CloudWatchOmniEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  CloudWatchOmniClient(const Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration =
                           Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration(),
                       std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  CloudWatchOmniClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration =
                           Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  CloudWatchOmniClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<CloudWatchOmniEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration& clientConfiguration =
                           Aws::CloudWatchOmni::CloudWatchOmniClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  CloudWatchOmniClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  CloudWatchOmniClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  CloudWatchOmniClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~CloudWatchOmniClient();

  /**
   * <p>Creates an AccessGrant that authorizes a principal to perform a set of
   * actions on resources in a space.</p> <p>Optionally narrow the grant with scoped
   * actions that limit it to specific resources and fields. Use ListAccessGrants and
   * GetAccessGrant to retrieve grants, and DeleteAccessGrant to remove
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateAccessGrant">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessGrantOutcome CreateAccessGrant(const Model::CreateAccessGrantRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessGrant that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessGrantRequestT = Model::CreateAccessGrantRequest>
  Model::CreateAccessGrantOutcomeCallable CreateAccessGrantCallable(const CreateAccessGrantRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateAccessGrant, request);
  }

  /**
   * An Async wrapper for CreateAccessGrant that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessGrantRequestT = Model::CreateAccessGrantRequest>
  void CreateAccessGrantAsync(const CreateAccessGrantRequestT& request, const CreateAccessGrantResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateAccessGrant, request, handler, context);
  }

  /**
   * <p>Creates an access profile in a space.</p> <p>Use GetAccessProfile and
   * ListAccessProfiles to retrieve profiles, and UpdateAccessProfile to modify
   * one.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateAccessProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessProfileOutcome CreateAccessProfile(const Model::CreateAccessProfileRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessProfileRequestT = Model::CreateAccessProfileRequest>
  Model::CreateAccessProfileOutcomeCallable CreateAccessProfileCallable(const CreateAccessProfileRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateAccessProfile, request);
  }

  /**
   * An Async wrapper for CreateAccessProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessProfileRequestT = Model::CreateAccessProfileRequest>
  void CreateAccessProfileAsync(const CreateAccessProfileRequestT& request, const CreateAccessProfileResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateAccessProfile, request, handler, context);
  }

  /**
   * <p>Creates a new alert within a space.</p> <p>Use GetAlert and ListAlerts to
   * retrieve alerts, UpdateAlert to modify one, and DeleteAlert to remove
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateAlert">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAlertOutcome CreateAlert(const Model::CreateAlertRequest& request) const;

  /**
   * A Callable wrapper for CreateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateAlertRequestT = Model::CreateAlertRequest>
  Model::CreateAlertOutcomeCallable CreateAlertCallable(const CreateAlertRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateAlert, request);
  }

  /**
   * An Async wrapper for CreateAlert that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateAlertRequestT = Model::CreateAlertRequest>
  void CreateAlertAsync(const CreateAlertRequestT& request, const CreateAlertResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateAlert, request, handler, context);
  }

  /**
   * <p>Creates a domain with identity provider configuration.</p> <p>Use GetDomain
   * to retrieve the domain, UpdateDomain to change its configuration, and
   * CreateSpace to add spaces within it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

  /**
   * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDomainRequestT = Model::CreateDomainRequest>
  Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateDomain, request);
  }

  /**
   * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDomainRequestT = Model::CreateDomainRequest>
  void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateDomain, request, handler, context);
  }

  /**
   * <p>Creates an AccessGrant that authorizes a principal to administer an
   * organization domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateDomainAccessGrantForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDomainAccessGrantForOrganizationOutcome CreateDomainAccessGrantForOrganization(
      const Model::CreateDomainAccessGrantForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for CreateDomainAccessGrantForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateDomainAccessGrantForOrganizationRequestT = Model::CreateDomainAccessGrantForOrganizationRequest>
  Model::CreateDomainAccessGrantForOrganizationOutcomeCallable CreateDomainAccessGrantForOrganizationCallable(
      const CreateDomainAccessGrantForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateDomainAccessGrantForOrganization, request);
  }

  /**
   * An Async wrapper for CreateDomainAccessGrantForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateDomainAccessGrantForOrganizationRequestT = Model::CreateDomainAccessGrantForOrganizationRequest>
  void CreateDomainAccessGrantForOrganizationAsync(const CreateDomainAccessGrantForOrganizationRequestT& request,
                                                   const CreateDomainAccessGrantForOrganizationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateDomainAccessGrantForOrganization, request, handler, context);
  }

  /**
   * <p>Creates an organization-scoped domain for the caller's AWS Organization. Only
   * the organization's management account can call this operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateDomainForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDomainForOrganizationOutcome CreateDomainForOrganization(
      const Model::CreateDomainForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for CreateDomainForOrganization that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateDomainForOrganizationRequestT = Model::CreateDomainForOrganizationRequest>
  Model::CreateDomainForOrganizationOutcomeCallable CreateDomainForOrganizationCallable(
      const CreateDomainForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateDomainForOrganization, request);
  }

  /**
   * An Async wrapper for CreateDomainForOrganization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateDomainForOrganizationRequestT = Model::CreateDomainForOrganizationRequest>
  void CreateDomainForOrganizationAsync(const CreateDomainForOrganizationRequestT& request,
                                        const CreateDomainForOrganizationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateDomainForOrganization, request, handler, context);
  }

  /**
   * <p>Creates an integration with a third-party provider. Returns the integration
   * identifier and its initial status; when the provider requires interactive
   * consent, an authorization URL is returned for the user to complete
   * setup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

  /**
   * A Callable wrapper for CreateIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const CreateIntegrationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateIntegration, request);
  }

  /**
   * An Async wrapper for CreateIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateIntegrationRequestT = Model::CreateIntegrationRequest>
  void CreateIntegrationAsync(const CreateIntegrationRequestT& request, const CreateIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateIntegration, request, handler, context);
  }

  /**
   * <p>Creates a new dashboard within a space.</p> <p>Use GetOmniDashboard and
   * ListOmniDashboards to retrieve dashboards, UpdateOmniDashboard to modify one,
   * and DeleteOmniDashboard to remove it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateOmniDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOmniDashboardOutcome CreateOmniDashboard(const Model::CreateOmniDashboardRequest& request) const;

  /**
   * A Callable wrapper for CreateOmniDashboard that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateOmniDashboardRequestT = Model::CreateOmniDashboardRequest>
  Model::CreateOmniDashboardOutcomeCallable CreateOmniDashboardCallable(const CreateOmniDashboardRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateOmniDashboard, request);
  }

  /**
   * An Async wrapper for CreateOmniDashboard that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateOmniDashboardRequestT = Model::CreateOmniDashboardRequest>
  void CreateOmniDashboardAsync(const CreateOmniDashboardRequestT& request, const CreateOmniDashboardResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateOmniDashboard, request, handler, context);
  }

  /**
   * <p>Generates a one-time code for deep-link authentication.</p> <p>Direct the
   * user's browser to the returned deepLinkUrl before it expires. The code is
   * exchanged for an authenticated, domain-scoped session and can be used only
   * once.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateOneTimeDeepLinkCode">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateOneTimeDeepLinkCodeOutcome CreateOneTimeDeepLinkCode(const Model::CreateOneTimeDeepLinkCodeRequest& request) const;

  /**
   * A Callable wrapper for CreateOneTimeDeepLinkCode that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateOneTimeDeepLinkCodeRequestT = Model::CreateOneTimeDeepLinkCodeRequest>
  Model::CreateOneTimeDeepLinkCodeOutcomeCallable CreateOneTimeDeepLinkCodeCallable(
      const CreateOneTimeDeepLinkCodeRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateOneTimeDeepLinkCode, request);
  }

  /**
   * An Async wrapper for CreateOneTimeDeepLinkCode that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateOneTimeDeepLinkCodeRequestT = Model::CreateOneTimeDeepLinkCodeRequest>
  void CreateOneTimeDeepLinkCodeAsync(const CreateOneTimeDeepLinkCodeRequestT& request,
                                      const CreateOneTimeDeepLinkCodeResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateOneTimeDeepLinkCode, request, handler, context);
  }

  /**
   * <p>Creates a space in a domain.</p> <p>Use GetSpace to retrieve the space,
   * ListSpaces to enumerate spaces, UpdateSpace to modify it, and DeleteSpace to
   * remove it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest& request) const;

  /**
   * A Callable wrapper for CreateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateSpaceRequestT = Model::CreateSpaceRequest>
  Model::CreateSpaceOutcomeCallable CreateSpaceCallable(const CreateSpaceRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateSpace, request);
  }

  /**
   * An Async wrapper for CreateSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateSpaceRequestT = Model::CreateSpaceRequest>
  void CreateSpaceAsync(const CreateSpaceRequestT& request, const CreateSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateSpace, request, handler, context);
  }

  /**
   * <p>Creates a new SQL view.</p> <p>A view is a named, reusable SQL query that can
   * be referenced from telemetry queries. View names must be unique within the
   * account and region. Only USER views can be created — MANAGED views are
   * provisioned by AWS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/CreateView">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateViewOutcome CreateView(const Model::CreateViewRequest& request) const;

  /**
   * A Callable wrapper for CreateView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateViewRequestT = Model::CreateViewRequest>
  Model::CreateViewOutcomeCallable CreateViewCallable(const CreateViewRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::CreateView, request);
  }

  /**
   * An Async wrapper for CreateView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateViewRequestT = Model::CreateViewRequest>
  void CreateViewAsync(const CreateViewRequestT& request, const CreateViewResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::CreateView, request, handler, context);
  }

  /**
   * <p>Removes an existing AccessGrant, revoking the access it granted.</p> <p>A
   * service-managed grant cannot be deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteAccessGrant">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessGrantOutcome DeleteAccessGrant(const Model::DeleteAccessGrantRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessGrant that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessGrantRequestT = Model::DeleteAccessGrantRequest>
  Model::DeleteAccessGrantOutcomeCallable DeleteAccessGrantCallable(const DeleteAccessGrantRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteAccessGrant, request);
  }

  /**
   * An Async wrapper for DeleteAccessGrant that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessGrantRequestT = Model::DeleteAccessGrantRequest>
  void DeleteAccessGrantAsync(const DeleteAccessGrantRequestT& request, const DeleteAccessGrantResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteAccessGrant, request, handler, context);
  }

  /**
   * <p>Removes an access profile.</p> <p>An access profile cannot be deleted while
   * access grants reference it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteAccessProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessProfileOutcome DeleteAccessProfile(const Model::DeleteAccessProfileRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessProfileRequestT = Model::DeleteAccessProfileRequest>
  Model::DeleteAccessProfileOutcomeCallable DeleteAccessProfileCallable(const DeleteAccessProfileRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteAccessProfile, request);
  }

  /**
   * An Async wrapper for DeleteAccessProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessProfileRequestT = Model::DeleteAccessProfileRequest>
  void DeleteAccessProfileAsync(const DeleteAccessProfileRequestT& request, const DeleteAccessProfileResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteAccessProfile, request, handler, context);
  }

  /**
   * <p>Deletes an alert by its identifier.</p> <p>Idempotent: deleting an alert that
   * has already been removed succeeds without error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteAlert">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAlertOutcome DeleteAlert(const Model::DeleteAlertRequest& request) const;

  /**
   * A Callable wrapper for DeleteAlert that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteAlertRequestT = Model::DeleteAlertRequest>
  Model::DeleteAlertOutcomeCallable DeleteAlertCallable(const DeleteAlertRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteAlert, request);
  }

  /**
   * An Async wrapper for DeleteAlert that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteAlertRequestT = Model::DeleteAlertRequest>
  void DeleteAlertAsync(const DeleteAlertRequestT& request, const DeleteAlertResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteAlert, request, handler, context);
  }

  /**
   * <p>Removes a domain and all of its resources. Call this operation in the Region
   * where the domain was created.</p> <p>A domain cannot be deleted while it
   * contains spaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

  /**
   * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDomainRequestT = Model::DeleteDomainRequest>
  Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteDomain, request);
  }

  /**
   * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDomainRequestT = Model::DeleteDomainRequest>
  void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteDomain, request, handler, context);
  }

  /**
   * <p>Removes an existing organization access grant, revoking the access it
   * granted.</p> <p>A service-managed grant cannot be deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteDomainAccessGrantForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDomainAccessGrantForOrganizationOutcome DeleteDomainAccessGrantForOrganization(
      const Model::DeleteDomainAccessGrantForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for DeleteDomainAccessGrantForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteDomainAccessGrantForOrganizationRequestT = Model::DeleteDomainAccessGrantForOrganizationRequest>
  Model::DeleteDomainAccessGrantForOrganizationOutcomeCallable DeleteDomainAccessGrantForOrganizationCallable(
      const DeleteDomainAccessGrantForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteDomainAccessGrantForOrganization, request);
  }

  /**
   * An Async wrapper for DeleteDomainAccessGrantForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteDomainAccessGrantForOrganizationRequestT = Model::DeleteDomainAccessGrantForOrganizationRequest>
  void DeleteDomainAccessGrantForOrganizationAsync(const DeleteDomainAccessGrantForOrganizationRequestT& request,
                                                   const DeleteDomainAccessGrantForOrganizationResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteDomainAccessGrantForOrganization, request, handler, context);
  }

  /**
   * <p>Removes an organization domain and all of its resources. Call this operation
   * in the Region where the domain was created.</p> <p>A domain cannot be deleted
   * while it contains spaces.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteDomainForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDomainForOrganizationOutcome DeleteDomainForOrganization(
      const Model::DeleteDomainForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for DeleteDomainForOrganization that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteDomainForOrganizationRequestT = Model::DeleteDomainForOrganizationRequest>
  Model::DeleteDomainForOrganizationOutcomeCallable DeleteDomainForOrganizationCallable(
      const DeleteDomainForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteDomainForOrganization, request);
  }

  /**
   * An Async wrapper for DeleteDomainForOrganization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteDomainForOrganizationRequestT = Model::DeleteDomainForOrganizationRequest>
  void DeleteDomainForOrganizationAsync(const DeleteDomainForOrganizationRequestT& request,
                                        const DeleteDomainForOrganizationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteDomainForOrganization, request, handler, context);
  }

  /**
   * <p>Deletes an integration. Returns the resulting status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

  /**
   * A Callable wrapper for DeleteIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const DeleteIntegrationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteIntegration, request);
  }

  /**
   * An Async wrapper for DeleteIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteIntegrationRequestT = Model::DeleteIntegrationRequest>
  void DeleteIntegrationAsync(const DeleteIntegrationRequestT& request, const DeleteIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteIntegration, request, handler, context);
  }

  /**
   * <p>Removes a dashboard from a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteOmniDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOmniDashboardOutcome DeleteOmniDashboard(const Model::DeleteOmniDashboardRequest& request) const;

  /**
   * A Callable wrapper for DeleteOmniDashboard that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteOmniDashboardRequestT = Model::DeleteOmniDashboardRequest>
  Model::DeleteOmniDashboardOutcomeCallable DeleteOmniDashboardCallable(const DeleteOmniDashboardRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteOmniDashboard, request);
  }

  /**
   * An Async wrapper for DeleteOmniDashboard that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteOmniDashboardRequestT = Model::DeleteOmniDashboardRequest>
  void DeleteOmniDashboardAsync(const DeleteOmniDashboardRequestT& request, const DeleteOmniDashboardResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteOmniDashboard, request, handler, context);
  }

  /**
   * <p>Removes a space and all of its resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
  Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const DeleteSpaceRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteSpace, request);
  }

  /**
   * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
  void DeleteSpaceAsync(const DeleteSpaceRequestT& request, const DeleteSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteSpace, request, handler, context);
  }

  /**
   * <p>Deletes the specified view.</p> <p>Queries that reference the view fail after
   * it is deleted. Managed views cannot be deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/DeleteView">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteViewOutcome DeleteView(const Model::DeleteViewRequest& request) const;

  /**
   * A Callable wrapper for DeleteView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteViewRequestT = Model::DeleteViewRequest>
  Model::DeleteViewOutcomeCallable DeleteViewCallable(const DeleteViewRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::DeleteView, request);
  }

  /**
   * An Async wrapper for DeleteView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteViewRequestT = Model::DeleteViewRequest>
  void DeleteViewAsync(const DeleteViewRequestT& request, const DeleteViewResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::DeleteView, request, handler, context);
  }

  /**
   * <p>Retrieves the full detail of a single AccessGrant by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetAccessGrant">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccessGrantOutcome GetAccessGrant(const Model::GetAccessGrantRequest& request) const;

  /**
   * A Callable wrapper for GetAccessGrant that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAccessGrantRequestT = Model::GetAccessGrantRequest>
  Model::GetAccessGrantOutcomeCallable GetAccessGrantCallable(const GetAccessGrantRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetAccessGrant, request);
  }

  /**
   * An Async wrapper for GetAccessGrant that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAccessGrantRequestT = Model::GetAccessGrantRequest>
  void GetAccessGrantAsync(const GetAccessGrantRequestT& request, const GetAccessGrantResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetAccessGrant, request, handler, context);
  }

  /**
   * <p>Retrieves an access profile by ID.</p> <p>The response indicates whether the
   * calling principal is currently allowed to assume the profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetAccessProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccessProfileOutcome GetAccessProfile(const Model::GetAccessProfileRequest& request) const;

  /**
   * A Callable wrapper for GetAccessProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccessProfileRequestT = Model::GetAccessProfileRequest>
  Model::GetAccessProfileOutcomeCallable GetAccessProfileCallable(const GetAccessProfileRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetAccessProfile, request);
  }

  /**
   * An Async wrapper for GetAccessProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAccessProfileRequestT = Model::GetAccessProfileRequest>
  void GetAccessProfileAsync(const GetAccessProfileRequestT& request, const GetAccessProfileResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetAccessProfile, request, handler, context);
  }

  /**
   * <p>Retrieves a single alert by its identifier.</p> <p>Use ListAlerts to
   * enumerate alerts in the space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetAlert">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAlertOutcome GetAlert(const Model::GetAlertRequest& request) const;

  /**
   * A Callable wrapper for GetAlert that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAlertRequestT = Model::GetAlertRequest>
  Model::GetAlertOutcomeCallable GetAlertCallable(const GetAlertRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetAlert, request);
  }

  /**
   * An Async wrapper for GetAlert that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAlertRequestT = Model::GetAlertRequest>
  void GetAlertAsync(const GetAlertRequestT& request, const GetAlertResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetAlert, request, handler, context);
  }

  /**
   * <p>Queries the context graph with filtering, traversal, and pagination
   * support.</p> <p>Pagination note: nodes and edges are returned together as a
   * coherent subgraph. Pagination cursors advance over nodes (the primary
   * collection); each page includes all edges connecting nodes within that page.
   * Callers should treat nodes as the paginated collection and edges as
   * supplementary relationship data attached to those nodes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetContextGraph">AWS
   * API Reference</a></p>
   */
  virtual Model::GetContextGraphOutcome GetContextGraph(const Model::GetContextGraphRequest& request) const;

  /**
   * A Callable wrapper for GetContextGraph that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetContextGraphRequestT = Model::GetContextGraphRequest>
  Model::GetContextGraphOutcomeCallable GetContextGraphCallable(const GetContextGraphRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetContextGraph, request);
  }

  /**
   * An Async wrapper for GetContextGraph that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetContextGraphRequestT = Model::GetContextGraphRequest>
  void GetContextGraphAsync(const GetContextGraphRequestT& request, const GetContextGraphResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetContextGraph, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a domain by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

  /**
   * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDomainRequestT = Model::GetDomainRequest>
  Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetDomain, request);
  }

  /**
   * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDomainRequestT = Model::GetDomainRequest>
  void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetDomain, request, handler, context);
  }

  /**
   * <p>Retrieves the full detail of a single organization access grant by
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetDomainAccessGrantForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDomainAccessGrantForOrganizationOutcome GetDomainAccessGrantForOrganization(
      const Model::GetDomainAccessGrantForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for GetDomainAccessGrantForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetDomainAccessGrantForOrganizationRequestT = Model::GetDomainAccessGrantForOrganizationRequest>
  Model::GetDomainAccessGrantForOrganizationOutcomeCallable GetDomainAccessGrantForOrganizationCallable(
      const GetDomainAccessGrantForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetDomainAccessGrantForOrganization, request);
  }

  /**
   * An Async wrapper for GetDomainAccessGrantForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetDomainAccessGrantForOrganizationRequestT = Model::GetDomainAccessGrantForOrganizationRequest>
  void GetDomainAccessGrantForOrganizationAsync(const GetDomainAccessGrantForOrganizationRequestT& request,
                                                const GetDomainAccessGrantForOrganizationResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetDomainAccessGrantForOrganization, request, handler, context);
  }

  /**
   * <p>Retrieves the details of an organization domain by ID.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetDomainForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDomainForOrganizationOutcome GetDomainForOrganization(const Model::GetDomainForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for GetDomainForOrganization that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetDomainForOrganizationRequestT = Model::GetDomainForOrganizationRequest>
  Model::GetDomainForOrganizationOutcomeCallable GetDomainForOrganizationCallable(const GetDomainForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetDomainForOrganization, request);
  }

  /**
   * An Async wrapper for GetDomainForOrganization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDomainForOrganizationRequestT = Model::GetDomainForOrganizationRequest>
  void GetDomainForOrganizationAsync(const GetDomainForOrganizationRequestT& request,
                                     const GetDomainForOrganizationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetDomainForOrganization, request, handler, context);
  }

  /**
   * <p>Returns the details of a single integration, identified by its identifier,
   * Amazon Resource Name, or name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

  /**
   * A Callable wrapper for GetIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const GetIntegrationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetIntegration, request);
  }

  /**
   * An Async wrapper for GetIntegration that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetIntegrationRequestT = Model::GetIntegrationRequest>
  void GetIntegrationAsync(const GetIntegrationRequestT& request, const GetIntegrationResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetIntegration, request, handler, context);
  }

  /**
   * <p>Retrieves the intelligence configuration for the calling account. Account is
   * identified via FAS (caller identity). Returns the default configuration if none
   * exists yet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetIntelligenceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetIntelligenceConfigurationOutcome GetIntelligenceConfiguration(
      const Model::GetIntelligenceConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetIntelligenceConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetIntelligenceConfigurationRequestT = Model::GetIntelligenceConfigurationRequest>
  Model::GetIntelligenceConfigurationOutcomeCallable GetIntelligenceConfigurationCallable(
      const GetIntelligenceConfigurationRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::GetIntelligenceConfiguration, request);
  }

  /**
   * An Async wrapper for GetIntelligenceConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetIntelligenceConfigurationRequestT = Model::GetIntelligenceConfigurationRequest>
  void GetIntelligenceConfigurationAsync(const GetIntelligenceConfigurationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const GetIntelligenceConfigurationRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::GetIntelligenceConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves a dashboard by ID within a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetOmniDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOmniDashboardOutcome GetOmniDashboard(const Model::GetOmniDashboardRequest& request) const;

  /**
   * A Callable wrapper for GetOmniDashboard that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetOmniDashboardRequestT = Model::GetOmniDashboardRequest>
  Model::GetOmniDashboardOutcomeCallable GetOmniDashboardCallable(const GetOmniDashboardRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetOmniDashboard, request);
  }

  /**
   * An Async wrapper for GetOmniDashboard that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetOmniDashboardRequestT = Model::GetOmniDashboardRequest>
  void GetOmniDashboardAsync(const GetOmniDashboardRequestT& request, const GetOmniDashboardResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetOmniDashboard, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a space by ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSpaceOutcome GetSpace(const Model::GetSpaceRequest& request) const;

  /**
   * A Callable wrapper for GetSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetSpaceRequestT = Model::GetSpaceRequest>
  Model::GetSpaceOutcomeCallable GetSpaceCallable(const GetSpaceRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetSpace, request);
  }

  /**
   * An Async wrapper for GetSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetSpaceRequestT = Model::GetSpaceRequest>
  void GetSpaceAsync(const GetSpaceRequestT& request, const GetSpaceResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetSpace, request, handler, context);
  }

  /**
   * <p>Returns temporary credentials for a space in an organization member account.
   * The credentials are valid for one hour.</p> <p>The caller must be the
   * organization's management account or a delegated administrator with access to
   * the target space. The target account must be an active member of the same
   * organization as the domain, and the space must already exist.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetSpaceCredentialsForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSpaceCredentialsForOrganizationOutcome GetSpaceCredentialsForOrganization(
      const Model::GetSpaceCredentialsForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for GetSpaceCredentialsForOrganization that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetSpaceCredentialsForOrganizationRequestT = Model::GetSpaceCredentialsForOrganizationRequest>
  Model::GetSpaceCredentialsForOrganizationOutcomeCallable GetSpaceCredentialsForOrganizationCallable(
      const GetSpaceCredentialsForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetSpaceCredentialsForOrganization, request);
  }

  /**
   * An Async wrapper for GetSpaceCredentialsForOrganization that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetSpaceCredentialsForOrganizationRequestT = Model::GetSpaceCredentialsForOrganizationRequest>
  void GetSpaceCredentialsForOrganizationAsync(const GetSpaceCredentialsForOrganizationRequestT& request,
                                               const GetSpaceCredentialsForOrganizationResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetSpaceCredentialsForOrganization, request, handler, context);
  }

  /**
   * <p>Returns the results for the specified query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetTelemetryQueryResults">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTelemetryQueryResultsOutcome GetTelemetryQueryResults(const Model::GetTelemetryQueryResultsRequest& request) const;

  /**
   * A Callable wrapper for GetTelemetryQueryResults that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetTelemetryQueryResultsRequestT = Model::GetTelemetryQueryResultsRequest>
  Model::GetTelemetryQueryResultsOutcomeCallable GetTelemetryQueryResultsCallable(const GetTelemetryQueryResultsRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetTelemetryQueryResults, request);
  }

  /**
   * An Async wrapper for GetTelemetryQueryResults that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetTelemetryQueryResultsRequestT = Model::GetTelemetryQueryResultsRequest>
  void GetTelemetryQueryResultsAsync(const GetTelemetryQueryResultsRequestT& request,
                                     const GetTelemetryQueryResultsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetTelemetryQueryResults, request, handler, context);
  }

  /**
   * <p>Returns the definition and metadata of the specified view.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetView">AWS
   * API Reference</a></p>
   */
  virtual Model::GetViewOutcome GetView(const Model::GetViewRequest& request) const;

  /**
   * A Callable wrapper for GetView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetViewRequestT = Model::GetViewRequest>
  Model::GetViewOutcomeCallable GetViewCallable(const GetViewRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::GetView, request);
  }

  /**
   * An Async wrapper for GetView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetViewRequestT = Model::GetViewRequest>
  void GetViewAsync(const GetViewRequestT& request, const GetViewResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::GetView, request, handler, context);
  }

  /**
   * <p>Returns AccessGrants, with optional filtering by domain, space, principal, or
   * permission. A grant is returned only when it matches every filter supplied. With
   * no filters, returns the grants for the current account and Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListAccessGrants">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessGrantsOutcome ListAccessGrants(const Model::ListAccessGrantsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAccessGrants that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessGrantsRequestT = Model::ListAccessGrantsRequest>
  Model::ListAccessGrantsOutcomeCallable ListAccessGrantsCallable(const ListAccessGrantsRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListAccessGrants, request);
  }

  /**
   * An Async wrapper for ListAccessGrants that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessGrantsRequestT = Model::ListAccessGrantsRequest>
  void ListAccessGrantsAsync(const ListAccessGrantsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListAccessGrantsRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListAccessGrants, request, handler, context);
  }

  /**
   * <p>Returns the access profiles in a space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListAccessProfiles">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessProfilesOutcome ListAccessProfiles(const Model::ListAccessProfilesRequest& request) const;

  /**
   * A Callable wrapper for ListAccessProfiles that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessProfilesRequestT = Model::ListAccessProfilesRequest>
  Model::ListAccessProfilesOutcomeCallable ListAccessProfilesCallable(const ListAccessProfilesRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::ListAccessProfiles, request);
  }

  /**
   * An Async wrapper for ListAccessProfiles that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessProfilesRequestT = Model::ListAccessProfilesRequest>
  void ListAccessProfilesAsync(const ListAccessProfilesRequestT& request, const ListAccessProfilesResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::ListAccessProfiles, request, handler, context);
  }

  /**
   * <p>Lists alerts within a space, optionally filtered by exact name(s), a single
   * name prefix, or exact alertId(s), with pagination.</p> <p>Use GetAlert to
   * retrieve a single alert's full detail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListAlerts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;

  /**
   * A Callable wrapper for ListAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAlertsRequestT = Model::ListAlertsRequest>
  Model::ListAlertsOutcomeCallable ListAlertsCallable(const ListAlertsRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::ListAlerts, request);
  }

  /**
   * An Async wrapper for ListAlerts that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAlertsRequestT = Model::ListAlertsRequest>
  void ListAlertsAsync(const ListAlertsRequestT& request, const ListAlertsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::ListAlerts, request, handler, context);
  }

  /**
   * <p>Returns organization-level domain access grants, with optional filtering by
   * domain, principal, or permission. A grant is returned only when it matches every
   * filter supplied. With no filters, returns the grants for the caller's
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListDomainAccessGrantsForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDomainAccessGrantsForOrganizationOutcome ListDomainAccessGrantsForOrganization(
      const Model::ListDomainAccessGrantsForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDomainAccessGrantsForOrganization that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListDomainAccessGrantsForOrganizationRequestT = Model::ListDomainAccessGrantsForOrganizationRequest>
  Model::ListDomainAccessGrantsForOrganizationOutcomeCallable ListDomainAccessGrantsForOrganizationCallable(
      const ListDomainAccessGrantsForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListDomainAccessGrantsForOrganization, request);
  }

  /**
   * An Async wrapper for ListDomainAccessGrantsForOrganization that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListDomainAccessGrantsForOrganizationRequestT = Model::ListDomainAccessGrantsForOrganizationRequest>
  void ListDomainAccessGrantsForOrganizationAsync(const ListDomainAccessGrantsForOrganizationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                  const ListDomainAccessGrantsForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListDomainAccessGrantsForOrganization, request, handler, context);
  }

  /**
   * <p>Returns the caller's domains: the account-scoped domain and the
   * organization-scoped domain, if either exists. At most two domains are
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDomainsRequestT = Model::ListDomainsRequest>
  Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListDomains, request);
  }

  /**
   * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDomainsRequestT = Model::ListDomainsRequest>
  void ListDomainsAsync(const ListDomainsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListDomainsRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListDomains, request, handler, context);
  }

  /**
   * <p>Lists the integrations in the account, optionally filtered by type, status,
   * or name. Results are paginated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListIntegrations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListIntegrationsOutcome ListIntegrations(const Model::ListIntegrationsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListIntegrations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  Model::ListIntegrationsOutcomeCallable ListIntegrationsCallable(const ListIntegrationsRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListIntegrations, request);
  }

  /**
   * An Async wrapper for ListIntegrations that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListIntegrationsRequestT = Model::ListIntegrationsRequest>
  void ListIntegrationsAsync(const ListIntegrationsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListIntegrationsRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListIntegrations, request, handler, context);
  }

  /**
   * <p>Returns the dashboards in a space, optionally filtered by name
   * prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListOmniDashboards">AWS
   * API Reference</a></p>
   */
  virtual Model::ListOmniDashboardsOutcome ListOmniDashboards(const Model::ListOmniDashboardsRequest& request) const;

  /**
   * A Callable wrapper for ListOmniDashboards that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListOmniDashboardsRequestT = Model::ListOmniDashboardsRequest>
  Model::ListOmniDashboardsOutcomeCallable ListOmniDashboardsCallable(const ListOmniDashboardsRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::ListOmniDashboards, request);
  }

  /**
   * An Async wrapper for ListOmniDashboards that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListOmniDashboardsRequestT = Model::ListOmniDashboardsRequest>
  void ListOmniDashboardsAsync(const ListOmniDashboardsRequestT& request, const ListOmniDashboardsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::ListOmniDashboards, request, handler, context);
  }

  /**
   * <p>Returns the spaces in the account, optionally filtered by
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListSpaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSpacesRequestT = Model::ListSpacesRequest>
  Model::ListSpacesOutcomeCallable ListSpacesCallable(const ListSpacesRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListSpaces, request);
  }

  /**
   * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSpacesRequestT = Model::ListSpacesRequest>
  void ListSpacesAsync(const ListSpacesResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const ListSpacesRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListSpaces, request, handler, context);
  }

  /**
   * <p>Returns the spaces across all member accounts in the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListSpacesForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSpacesForOrganizationOutcome ListSpacesForOrganization(
      const Model::ListSpacesForOrganizationRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSpacesForOrganization that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSpacesForOrganizationRequestT = Model::ListSpacesForOrganizationRequest>
  Model::ListSpacesForOrganizationOutcomeCallable ListSpacesForOrganizationCallable(
      const ListSpacesForOrganizationRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListSpacesForOrganization, request);
  }

  /**
   * An Async wrapper for ListSpacesForOrganization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSpacesForOrganizationRequestT = Model::ListSpacesForOrganizationRequest>
  void ListSpacesForOrganizationAsync(const ListSpacesForOrganizationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const ListSpacesForOrganizationRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListSpacesForOrganization, request, handler, context);
  }

  /**
   * <p>Lists fields available for telemetry queries.</p> <p>Returns a list of fields
   * included in the specified dataset, granular to telemetry type. Returned field
   * names reflect the exact stored casing and are case-sensitive when referenced in
   * query expressions; the query engine does not normalize identifier
   * case.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListTelemetryFields">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTelemetryFieldsOutcome ListTelemetryFields(const Model::ListTelemetryFieldsRequest& request) const;

  /**
   * A Callable wrapper for ListTelemetryFields that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTelemetryFieldsRequestT = Model::ListTelemetryFieldsRequest>
  Model::ListTelemetryFieldsOutcomeCallable ListTelemetryFieldsCallable(const ListTelemetryFieldsRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::ListTelemetryFields, request);
  }

  /**
   * An Async wrapper for ListTelemetryFields that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTelemetryFieldsRequestT = Model::ListTelemetryFieldsRequest>
  void ListTelemetryFieldsAsync(const ListTelemetryFieldsRequestT& request, const ListTelemetryFieldsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::ListTelemetryFields, request, handler, context);
  }

  /**
   * <p>Lists telemetry query sessions.</p> <p>Returns a list of telemetry query
   * sessions owned by the caller.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListTelemetryQuerySessions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTelemetryQuerySessionsOutcome ListTelemetryQuerySessions(
      const Model::ListTelemetryQuerySessionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTelemetryQuerySessions that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListTelemetryQuerySessionsRequestT = Model::ListTelemetryQuerySessionsRequest>
  Model::ListTelemetryQuerySessionsOutcomeCallable ListTelemetryQuerySessionsCallable(
      const ListTelemetryQuerySessionsRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListTelemetryQuerySessions, request);
  }

  /**
   * An Async wrapper for ListTelemetryQuerySessions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListTelemetryQuerySessionsRequestT = Model::ListTelemetryQuerySessionsRequest>
  void ListTelemetryQuerySessionsAsync(const ListTelemetryQuerySessionsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const ListTelemetryQuerySessionsRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListTelemetryQuerySessions, request, handler, context);
  }

  /**
   * <p>Lists the views in the caller's account and region.</p> <p>Returns a summary
   * for each view, optionally filtered by view type. View definitions are not
   * included — use GetView to retrieve them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ListViews">AWS
   * API Reference</a></p>
   */
  virtual Model::ListViewsOutcome ListViews(const Model::ListViewsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListViews that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListViewsRequestT = Model::ListViewsRequest>
  Model::ListViewsOutcomeCallable ListViewsCallable(const ListViewsRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::ListViews, request);
  }

  /**
   * An Async wrapper for ListViews that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListViewsRequestT = Model::ListViewsRequest>
  void ListViewsAsync(const ListViewsResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListViewsRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::ListViews, request, handler, context);
  }

  /**
   * <p>Creates or updates the intelligence configuration for the calling account.
   * Account is identified via FAS (caller identity).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/PutIntelligenceConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutIntelligenceConfigurationOutcome PutIntelligenceConfiguration(
      const Model::PutIntelligenceConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for PutIntelligenceConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename PutIntelligenceConfigurationRequestT = Model::PutIntelligenceConfigurationRequest>
  Model::PutIntelligenceConfigurationOutcomeCallable PutIntelligenceConfigurationCallable(
      const PutIntelligenceConfigurationRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::PutIntelligenceConfiguration, request);
  }

  /**
   * An Async wrapper for PutIntelligenceConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutIntelligenceConfigurationRequestT = Model::PutIntelligenceConfigurationRequest>
  void PutIntelligenceConfigurationAsync(const PutIntelligenceConfigurationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const PutIntelligenceConfigurationRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::PutIntelligenceConfiguration, request, handler, context);
  }

  /**
   * <p>Searches Identity Center for users and groups in a domain. The domain must be
   * configured with Identity Center.</p> <p>To grant access to a result, pass its
   * principalId to CreateAccessGrant with a principalType of IDC_USER for a user or
   * IDC_GROUP for a group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/SearchPrincipals">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchPrincipalsOutcome SearchPrincipals(const Model::SearchPrincipalsRequest& request) const;

  /**
   * A Callable wrapper for SearchPrincipals that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SearchPrincipalsRequestT = Model::SearchPrincipalsRequest>
  Model::SearchPrincipalsOutcomeCallable SearchPrincipalsCallable(const SearchPrincipalsRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::SearchPrincipals, request);
  }

  /**
   * An Async wrapper for SearchPrincipals that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SearchPrincipalsRequestT = Model::SearchPrincipalsRequest>
  void SearchPrincipalsAsync(const SearchPrincipalsRequestT& request, const SearchPrincipalsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::SearchPrincipals, request, handler, context);
  }

  /**
   * <p>Starts a telemetry query within a session.</p> <p>Submits the provided query
   * string for execution in the specified session. Use GetTelemetryQueryResults to
   * poll for results and check query status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/StartTelemetryQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::StartTelemetryQueryOutcome StartTelemetryQuery(const Model::StartTelemetryQueryRequest& request) const;

  /**
   * A Callable wrapper for StartTelemetryQuery that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartTelemetryQueryRequestT = Model::StartTelemetryQueryRequest>
  Model::StartTelemetryQueryOutcomeCallable StartTelemetryQueryCallable(const StartTelemetryQueryRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::StartTelemetryQuery, request);
  }

  /**
   * An Async wrapper for StartTelemetryQuery that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartTelemetryQueryRequestT = Model::StartTelemetryQueryRequest>
  void StartTelemetryQueryAsync(const StartTelemetryQueryRequestT& request, const StartTelemetryQueryResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::StartTelemetryQuery, request, handler, context);
  }

  /**
   * <p>Starts a new telemetry query session.</p> <p>A session provides a logical
   * grouping for one or more telemetry queries. The returned session ID is required
   * when starting queries via StartTelemetryQuery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/StartTelemetryQuerySession">AWS
   * API Reference</a></p>
   */
  virtual Model::StartTelemetryQuerySessionOutcome StartTelemetryQuerySession(
      const Model::StartTelemetryQuerySessionRequest& request = {}) const;

  /**
   * A Callable wrapper for StartTelemetryQuerySession that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartTelemetryQuerySessionRequestT = Model::StartTelemetryQuerySessionRequest>
  Model::StartTelemetryQuerySessionOutcomeCallable StartTelemetryQuerySessionCallable(
      const StartTelemetryQuerySessionRequestT& request = {}) const {
    return SubmitCallable(&CloudWatchOmniClient::StartTelemetryQuerySession, request);
  }

  /**
   * An Async wrapper for StartTelemetryQuerySession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartTelemetryQuerySessionRequestT = Model::StartTelemetryQuerySessionRequest>
  void StartTelemetryQuerySessionAsync(const StartTelemetryQuerySessionResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const StartTelemetryQuerySessionRequestT& request = {}) const {
    return SubmitAsync(&CloudWatchOmniClient::StartTelemetryQuerySession, request, handler, context);
  }

  /**
   * <p>Stops a running telemetry query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/StopTelemetryQuery">AWS
   * API Reference</a></p>
   */
  virtual Model::StopTelemetryQueryOutcome StopTelemetryQuery(const Model::StopTelemetryQueryRequest& request) const;

  /**
   * A Callable wrapper for StopTelemetryQuery that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopTelemetryQueryRequestT = Model::StopTelemetryQueryRequest>
  Model::StopTelemetryQueryOutcomeCallable StopTelemetryQueryCallable(const StopTelemetryQueryRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::StopTelemetryQuery, request);
  }

  /**
   * An Async wrapper for StopTelemetryQuery that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StopTelemetryQueryRequestT = Model::StopTelemetryQueryRequest>
  void StopTelemetryQueryAsync(const StopTelemetryQueryRequestT& request, const StopTelemetryQueryResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::StopTelemetryQuery, request, handler, context);
  }

  /**
   * <p>Stops a telemetry query session.</p> <p>Terminates the specified session.
   * After a session is stopped it cannot be reused.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/StopTelemetryQuerySession">AWS
   * API Reference</a></p>
   */
  virtual Model::StopTelemetryQuerySessionOutcome StopTelemetryQuerySession(const Model::StopTelemetryQuerySessionRequest& request) const;

  /**
   * A Callable wrapper for StopTelemetryQuerySession that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StopTelemetryQuerySessionRequestT = Model::StopTelemetryQuerySessionRequest>
  Model::StopTelemetryQuerySessionOutcomeCallable StopTelemetryQuerySessionCallable(
      const StopTelemetryQuerySessionRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::StopTelemetryQuerySession, request);
  }

  /**
   * An Async wrapper for StopTelemetryQuerySession that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StopTelemetryQuerySessionRequestT = Model::StopTelemetryQuerySessionRequest>
  void StopTelemetryQuerySessionAsync(const StopTelemetryQuerySessionRequestT& request,
                                      const StopTelemetryQuerySessionResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::StopTelemetryQuerySession, request, handler, context);
  }

  /**
   * <p>Updates the name or description of an access profile.</p> <p>Only the
   * provided fields are changed; omitted fields are left unchanged.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateAccessProfile">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAccessProfileOutcome UpdateAccessProfile(const Model::UpdateAccessProfileRequest& request) const;

  /**
   * A Callable wrapper for UpdateAccessProfile that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAccessProfileRequestT = Model::UpdateAccessProfileRequest>
  Model::UpdateAccessProfileOutcomeCallable UpdateAccessProfileCallable(const UpdateAccessProfileRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateAccessProfile, request);
  }

  /**
   * An Async wrapper for UpdateAccessProfile that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAccessProfileRequestT = Model::UpdateAccessProfileRequest>
  void UpdateAccessProfileAsync(const UpdateAccessProfileRequestT& request, const UpdateAccessProfileResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateAccessProfile, request, handler, context);
  }

  /**
   * <p>Updates an existing alert.</p> <p>Only non-null fields overwrite existing
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateAlert">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAlertOutcome UpdateAlert(const Model::UpdateAlertRequest& request) const;

  /**
   * A Callable wrapper for UpdateAlert that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateAlertRequestT = Model::UpdateAlertRequest>
  Model::UpdateAlertOutcomeCallable UpdateAlertCallable(const UpdateAlertRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateAlert, request);
  }

  /**
   * An Async wrapper for UpdateAlert that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateAlertRequestT = Model::UpdateAlertRequest>
  void UpdateAlertAsync(const UpdateAlertRequestT& request, const UpdateAlertResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateAlert, request, handler, context);
  }

  /**
   * <p>Updates a domain's name or identity provider configuration.</p> <p>Only the
   * provided fields are changed; omitted fields are left unchanged. Renaming a
   * domain also changes the endpoint URLs derived from its name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

  /**
   * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateDomainRequestT = Model::UpdateDomainRequest>
  Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const UpdateDomainRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateDomain, request);
  }

  /**
   * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateDomainRequestT = Model::UpdateDomainRequest>
  void UpdateDomainAsync(const UpdateDomainRequestT& request, const UpdateDomainResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateDomain, request, handler, context);
  }

  /**
   * <p>Updates an organization domain's name or identity provider configuration.
   * Call this operation in the Region where the domain was created.</p> <p>Only the
   * provided fields are changed; omitted fields are left unchanged. Renaming a
   * domain also changes the endpoint URLs derived from its name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateDomainForOrganization">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDomainForOrganizationOutcome UpdateDomainForOrganization(
      const Model::UpdateDomainForOrganizationRequest& request) const;

  /**
   * A Callable wrapper for UpdateDomainForOrganization that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateDomainForOrganizationRequestT = Model::UpdateDomainForOrganizationRequest>
  Model::UpdateDomainForOrganizationOutcomeCallable UpdateDomainForOrganizationCallable(
      const UpdateDomainForOrganizationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateDomainForOrganization, request);
  }

  /**
   * An Async wrapper for UpdateDomainForOrganization that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateDomainForOrganizationRequestT = Model::UpdateDomainForOrganizationRequest>
  void UpdateDomainForOrganizationAsync(const UpdateDomainForOrganizationRequestT& request,
                                        const UpdateDomainForOrganizationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateDomainForOrganization, request, handler, context);
  }

  /**
   * <p>Updates an existing integration, identified by its id, ARN, or name. Only the
   * fields you provide are changed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateIntegration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

  /**
   * A Callable wrapper for UpdateIntegration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
  Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const UpdateIntegrationRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateIntegration, request);
  }

  /**
   * An Async wrapper for UpdateIntegration that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateIntegrationRequestT = Model::UpdateIntegrationRequest>
  void UpdateIntegrationAsync(const UpdateIntegrationRequestT& request, const UpdateIntegrationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateIntegration, request, handler, context);
  }

  /**
   * <p>Updates an existing dashboard within a space.</p> <p>Only the provided fields
   * are changed; omitted fields are left unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateOmniDashboard">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateOmniDashboardOutcome UpdateOmniDashboard(const Model::UpdateOmniDashboardRequest& request) const;

  /**
   * A Callable wrapper for UpdateOmniDashboard that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateOmniDashboardRequestT = Model::UpdateOmniDashboardRequest>
  Model::UpdateOmniDashboardOutcomeCallable UpdateOmniDashboardCallable(const UpdateOmniDashboardRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateOmniDashboard, request);
  }

  /**
   * An Async wrapper for UpdateOmniDashboard that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateOmniDashboardRequestT = Model::UpdateOmniDashboardRequest>
  void UpdateOmniDashboardAsync(const UpdateOmniDashboardRequestT& request, const UpdateOmniDashboardResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateOmniDashboard, request, handler, context);
  }

  /**
   * <p>Updates a space.</p> <p>Only the provided fields are changed; omitted fields
   * are left unchanged.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
  Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const UpdateSpaceRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateSpace, request);
  }

  /**
   * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
  void UpdateSpaceAsync(const UpdateSpaceRequestT& request, const UpdateSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateSpace, request, handler, context);
  }

  /**
   * <p>Updates an existing view's definition and/or description.</p> <p>Only the
   * fields you provide are changed. Managed views cannot be updated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/UpdateView">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateViewOutcome UpdateView(const Model::UpdateViewRequest& request) const;

  /**
   * A Callable wrapper for UpdateView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateViewRequestT = Model::UpdateViewRequest>
  Model::UpdateViewOutcomeCallable UpdateViewCallable(const UpdateViewRequestT& request) const {
    return SubmitCallable(&CloudWatchOmniClient::UpdateView, request);
  }

  /**
   * An Async wrapper for UpdateView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateViewRequestT = Model::UpdateViewRequest>
  void UpdateViewAsync(const UpdateViewRequestT& request, const UpdateViewResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&CloudWatchOmniClient::UpdateView, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<CloudWatchOmniEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchOmniClient>;
  void init(const CloudWatchOmniClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, CloudWatchOmniError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  CloudWatchOmniClientConfiguration m_clientConfiguration;
  std::shared_ptr<CloudWatchOmniEndpointProviderBase> m_endpointProvider;
};

}  // namespace CloudWatchOmni
}  // namespace Aws
