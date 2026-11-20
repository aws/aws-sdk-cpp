/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalPaginationBase.h>
#include <aws/apiportal/APIPortalServiceClientModel.h>
#include <aws/apiportal/APIPortalWaiter.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace APIPortal {
/**
 * <p>API Portal discovers the APIs running in your AWS accounts and organization,
 * lets you manage them as Managed APIs, and publishes their documentation to
 * developer portals.</p>
 */
class AWS_APIPORTAL_API APIPortalClient : public Aws::Client::AWSJsonClient,
                                          public Aws::Client::ClientWithAsyncTemplateMethods<APIPortalClient>,
                                          public APIPortalPaginationBase<APIPortalClient>,
                                          public APIPortalWaiter<APIPortalClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef APIPortalClientConfiguration ClientConfigurationType;
  typedef APIPortalEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  APIPortalClient(const Aws::APIPortal::APIPortalClientConfiguration& clientConfiguration = Aws::APIPortal::APIPortalClientConfiguration(),
                  std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  APIPortalClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::APIPortal::APIPortalClientConfiguration& clientConfiguration = Aws::APIPortal::APIPortalClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  APIPortalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<APIPortalEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::APIPortal::APIPortalClientConfiguration& clientConfiguration = Aws::APIPortal::APIPortalClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  APIPortalClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  APIPortalClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  APIPortalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~APIPortalClient();

  /**
   * <p>Associate one or more Managed APIs with a product. Best-effort — IDs that
   * fail are returned in {@link AssociateManagedApisResponse#failedItems}; IDs that
   * succeed are omitted. Associating an already-associated Managed API is a no-op
   * (not reported as failure).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/AssociateManagedApis">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateManagedApisOutcome AssociateManagedApis(const Model::AssociateManagedApisRequest& request) const;

  /**
   * A Callable wrapper for AssociateManagedApis that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateManagedApisRequestT = Model::AssociateManagedApisRequest>
  Model::AssociateManagedApisOutcomeCallable AssociateManagedApisCallable(const AssociateManagedApisRequestT& request) const {
    return SubmitCallable(&APIPortalClient::AssociateManagedApis, request);
  }

  /**
   * An Async wrapper for AssociateManagedApis that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateManagedApisRequestT = Model::AssociateManagedApisRequest>
  void AssociateManagedApisAsync(const AssociateManagedApisRequestT& request, const AssociateManagedApisResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::AssociateManagedApis, request, handler, context);
  }

  /**
   * <p>Promote a discovered API in the API inventory into the managed API
   * list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreateManagedApi">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateManagedApiOutcome CreateManagedApi(const Model::CreateManagedApiRequest& request) const;

  /**
   * A Callable wrapper for CreateManagedApi that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateManagedApiRequestT = Model::CreateManagedApiRequest>
  Model::CreateManagedApiOutcomeCallable CreateManagedApiCallable(const CreateManagedApiRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreateManagedApi, request);
  }

  /**
   * An Async wrapper for CreateManagedApi that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateManagedApiRequestT = Model::CreateManagedApiRequest>
  void CreateManagedApiAsync(const CreateManagedApiRequestT& request, const CreateManagedApiResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreateManagedApi, request, handler, context);
  }

  /**
   * <p>Creates a portal that publishes documentation for the products it includes.
   * Use UpdatePortalPublishStatus to publish it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreatePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePortalOutcome CreatePortal(const Model::CreatePortalRequest& request) const;

  /**
   * A Callable wrapper for CreatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePortalRequestT = Model::CreatePortalRequest>
  Model::CreatePortalOutcomeCallable CreatePortalCallable(const CreatePortalRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreatePortal, request);
  }

  /**
   * An Async wrapper for CreatePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePortalRequestT = Model::CreatePortalRequest>
  void CreatePortalAsync(const CreatePortalRequestT& request, const CreatePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreatePortal, request, handler, context);
  }

  /**
   * <p>Starts building a preview of the portal's current content. Use GetPortal to
   * check the preview status and get the preview URL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreatePortalPreview">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePortalPreviewOutcome CreatePortalPreview(const Model::CreatePortalPreviewRequest& request) const;

  /**
   * A Callable wrapper for CreatePortalPreview that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreatePortalPreviewRequestT = Model::CreatePortalPreviewRequest>
  Model::CreatePortalPreviewOutcomeCallable CreatePortalPreviewCallable(const CreatePortalPreviewRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreatePortalPreview, request);
  }

  /**
   * An Async wrapper for CreatePortalPreview that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreatePortalPreviewRequestT = Model::CreatePortalPreviewRequest>
  void CreatePortalPreviewAsync(const CreatePortalPreviewRequestT& request, const CreatePortalPreviewResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreatePortalPreview, request, handler, context);
  }

  /**
   * <p>Creates a product. A product groups Managed APIs with their API pages and
   * product pages so a portal can publish them together.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreateProduct">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProductOutcome CreateProduct(const Model::CreateProductRequest& request) const;

  /**
   * A Callable wrapper for CreateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateProductRequestT = Model::CreateProductRequest>
  Model::CreateProductOutcomeCallable CreateProductCallable(const CreateProductRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreateProduct, request);
  }

  /**
   * An Async wrapper for CreateProduct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateProductRequestT = Model::CreateProductRequest>
  void CreateProductAsync(const CreateProductRequestT& request, const CreateProductResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreateProduct, request, handler, context);
  }

  /**
   * <p>Creates an API page that documents a Managed API in a product. The page
   * content is generated asynchronously. Use <code>status</code> to track
   * it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreateProductApiPage">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProductApiPageOutcome CreateProductApiPage(const Model::CreateProductApiPageRequest& request) const;

  /**
   * A Callable wrapper for CreateProductApiPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateProductApiPageRequestT = Model::CreateProductApiPageRequest>
  Model::CreateProductApiPageOutcomeCallable CreateProductApiPageCallable(const CreateProductApiPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreateProductApiPage, request);
  }

  /**
   * An Async wrapper for CreateProductApiPage that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateProductApiPageRequestT = Model::CreateProductApiPageRequest>
  void CreateProductApiPageAsync(const CreateProductApiPageRequestT& request, const CreateProductApiPageResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreateProductApiPage, request, handler, context);
  }

  /**
   * <p>Creates a product page with free-form documentation. A product can have up to
   * 40 pages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/CreateProductPage">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProductPageOutcome CreateProductPage(const Model::CreateProductPageRequest& request) const;

  /**
   * A Callable wrapper for CreateProductPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateProductPageRequestT = Model::CreateProductPageRequest>
  Model::CreateProductPageOutcomeCallable CreateProductPageCallable(const CreateProductPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::CreateProductPage, request);
  }

  /**
   * An Async wrapper for CreateProductPage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateProductPageRequestT = Model::CreateProductPageRequest>
  void CreateProductPageAsync(const CreateProductPageRequestT& request, const CreateProductPageResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::CreateProductPage, request, handler, context);
  }

  /**
   * <p>Deletes the discovery configuration and stops any running
   * discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDiscoveryConfigurationOutcome DeleteDiscoveryConfiguration(
      const Model::DeleteDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for DeleteDiscoveryConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteDiscoveryConfigurationRequestT = Model::DeleteDiscoveryConfigurationRequest>
  Model::DeleteDiscoveryConfigurationOutcomeCallable DeleteDiscoveryConfigurationCallable(
      const DeleteDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::DeleteDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for DeleteDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteDiscoveryConfigurationRequestT = Model::DeleteDiscoveryConfigurationRequest>
  void DeleteDiscoveryConfigurationAsync(const DeleteDiscoveryConfigurationResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const DeleteDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::DeleteDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Deletes a Managed API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteManagedApi">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteManagedApiOutcome DeleteManagedApi(const Model::DeleteManagedApiRequest& request) const;

  /**
   * A Callable wrapper for DeleteManagedApi that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteManagedApiRequestT = Model::DeleteManagedApiRequest>
  Model::DeleteManagedApiOutcomeCallable DeleteManagedApiCallable(const DeleteManagedApiRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeleteManagedApi, request);
  }

  /**
   * An Async wrapper for DeleteManagedApi that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteManagedApiRequestT = Model::DeleteManagedApiRequest>
  void DeleteManagedApiAsync(const DeleteManagedApiRequestT& request, const DeleteManagedApiResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeleteManagedApi, request, handler, context);
  }

  /**
   * <p>Deletes the organization-wide discovery configuration and stops any running
   * discovery across the organization. Only the organization management account may
   * call this operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteOrganizationDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteOrganizationDiscoveryConfigurationOutcome DeleteOrganizationDiscoveryConfiguration(
      const Model::DeleteOrganizationDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for DeleteOrganizationDiscoveryConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DeleteOrganizationDiscoveryConfigurationRequestT = Model::DeleteOrganizationDiscoveryConfigurationRequest>
  Model::DeleteOrganizationDiscoveryConfigurationOutcomeCallable DeleteOrganizationDiscoveryConfigurationCallable(
      const DeleteOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::DeleteOrganizationDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for DeleteOrganizationDiscoveryConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DeleteOrganizationDiscoveryConfigurationRequestT = Model::DeleteOrganizationDiscoveryConfigurationRequest>
  void DeleteOrganizationDiscoveryConfigurationAsync(const DeleteOrganizationDiscoveryConfigurationResponseReceivedHandler& handler,
                                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                     const DeleteOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::DeleteOrganizationDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Deletes a portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeletePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePortalOutcome DeletePortal(const Model::DeletePortalRequest& request) const;

  /**
   * A Callable wrapper for DeletePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePortalRequestT = Model::DeletePortalRequest>
  Model::DeletePortalOutcomeCallable DeletePortalCallable(const DeletePortalRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeletePortal, request);
  }

  /**
   * An Async wrapper for DeletePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePortalRequestT = Model::DeletePortalRequest>
  void DeletePortalAsync(const DeletePortalRequestT& request, const DeletePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeletePortal, request, handler, context);
  }

  /**
   * <p>Deletes a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteProduct">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;

  /**
   * A Callable wrapper for DeleteProduct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteProductRequestT = Model::DeleteProductRequest>
  Model::DeleteProductOutcomeCallable DeleteProductCallable(const DeleteProductRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeleteProduct, request);
  }

  /**
   * An Async wrapper for DeleteProduct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteProductRequestT = Model::DeleteProductRequest>
  void DeleteProductAsync(const DeleteProductRequestT& request, const DeleteProductResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeleteProduct, request, handler, context);
  }

  /**
   * <p>Deletes an API page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteProductApiPage">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProductApiPageOutcome DeleteProductApiPage(const Model::DeleteProductApiPageRequest& request) const;

  /**
   * A Callable wrapper for DeleteProductApiPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteProductApiPageRequestT = Model::DeleteProductApiPageRequest>
  Model::DeleteProductApiPageOutcomeCallable DeleteProductApiPageCallable(const DeleteProductApiPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeleteProductApiPage, request);
  }

  /**
   * An Async wrapper for DeleteProductApiPage that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteProductApiPageRequestT = Model::DeleteProductApiPageRequest>
  void DeleteProductApiPageAsync(const DeleteProductApiPageRequestT& request, const DeleteProductApiPageResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeleteProductApiPage, request, handler, context);
  }

  /**
   * <p>Deletes a product page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteProductPage">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProductPageOutcome DeleteProductPage(const Model::DeleteProductPageRequest& request) const;

  /**
   * A Callable wrapper for DeleteProductPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteProductPageRequestT = Model::DeleteProductPageRequest>
  Model::DeleteProductPageOutcomeCallable DeleteProductPageCallable(const DeleteProductPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeleteProductPage, request);
  }

  /**
   * An Async wrapper for DeleteProductPage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteProductPageRequestT = Model::DeleteProductPageRequest>
  void DeleteProductPageAsync(const DeleteProductPageRequestT& request, const DeleteProductPageResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeleteProductPage, request, handler, context);
  }

  /**
   * <p>Deletes the sharing policy of a product. The product is no longer
   * shared.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DeleteProductSharingPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProductSharingPolicyOutcome DeleteProductSharingPolicy(
      const Model::DeleteProductSharingPolicyRequest& request) const;

  /**
   * A Callable wrapper for DeleteProductSharingPolicy that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteProductSharingPolicyRequestT = Model::DeleteProductSharingPolicyRequest>
  Model::DeleteProductSharingPolicyOutcomeCallable DeleteProductSharingPolicyCallable(
      const DeleteProductSharingPolicyRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DeleteProductSharingPolicy, request);
  }

  /**
   * An Async wrapper for DeleteProductSharingPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteProductSharingPolicyRequestT = Model::DeleteProductSharingPolicyRequest>
  void DeleteProductSharingPolicyAsync(const DeleteProductSharingPolicyRequestT& request,
                                       const DeleteProductSharingPolicyResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DeleteProductSharingPolicy, request, handler, context);
  }

  /**
   * <p>Disassociate one or more Managed APIs from a product. Best-effort — IDs that
   * fail are returned in {@link DisassociateManagedApisResponse#failedItems}; IDs
   * that succeed are omitted. Disassociating an unmapped Managed API is a no-op (not
   * reported as failure).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DisassociateManagedApis">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateManagedApisOutcome DisassociateManagedApis(const Model::DisassociateManagedApisRequest& request) const;

  /**
   * A Callable wrapper for DisassociateManagedApis that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateManagedApisRequestT = Model::DisassociateManagedApisRequest>
  Model::DisassociateManagedApisOutcomeCallable DisassociateManagedApisCallable(const DisassociateManagedApisRequestT& request) const {
    return SubmitCallable(&APIPortalClient::DisassociateManagedApis, request);
  }

  /**
   * An Async wrapper for DisassociateManagedApis that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateManagedApisRequestT = Model::DisassociateManagedApisRequest>
  void DisassociateManagedApisAsync(const DisassociateManagedApisRequestT& request,
                                    const DisassociateManagedApisResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::DisassociateManagedApis, request, handler, context);
  }

  /**
   * <p>Gets full details of a single API inventory item.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetApiInventoryItem">AWS
   * API Reference</a></p>
   */
  virtual Model::GetApiInventoryItemOutcome GetApiInventoryItem(const Model::GetApiInventoryItemRequest& request) const;

  /**
   * A Callable wrapper for GetApiInventoryItem that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetApiInventoryItemRequestT = Model::GetApiInventoryItemRequest>
  Model::GetApiInventoryItemOutcomeCallable GetApiInventoryItemCallable(const GetApiInventoryItemRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetApiInventoryItem, request);
  }

  /**
   * An Async wrapper for GetApiInventoryItem that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetApiInventoryItemRequestT = Model::GetApiInventoryItemRequest>
  void GetApiInventoryItemAsync(const GetApiInventoryItemRequestT& request, const GetApiInventoryItemResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetApiInventoryItem, request, handler, context);
  }

  /**
   * <p>Retrieves the discovery configuration for the account and
   * region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDiscoveryConfigurationOutcome GetDiscoveryConfiguration(
      const Model::GetDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetDiscoveryConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetDiscoveryConfigurationRequestT = Model::GetDiscoveryConfigurationRequest>
  Model::GetDiscoveryConfigurationOutcomeCallable GetDiscoveryConfigurationCallable(
      const GetDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::GetDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for GetDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetDiscoveryConfigurationRequestT = Model::GetDiscoveryConfigurationRequest>
  void GetDiscoveryConfigurationAsync(const GetDiscoveryConfigurationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const GetDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::GetDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Returns a Managed API, including its security posture findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetManagedApi">AWS
   * API Reference</a></p>
   */
  virtual Model::GetManagedApiOutcome GetManagedApi(const Model::GetManagedApiRequest& request) const;

  /**
   * A Callable wrapper for GetManagedApi that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetManagedApiRequestT = Model::GetManagedApiRequest>
  Model::GetManagedApiOutcomeCallable GetManagedApiCallable(const GetManagedApiRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetManagedApi, request);
  }

  /**
   * An Async wrapper for GetManagedApi that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetManagedApiRequestT = Model::GetManagedApiRequest>
  void GetManagedApiAsync(const GetManagedApiRequestT& request, const GetManagedApiResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetManagedApi, request, handler, context);
  }

  /**
   * <p>Retrieves the organization-wide discovery configuration. Only the
   * organization management account and registered delegated administrators may call
   * this operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetOrganizationDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOrganizationDiscoveryConfigurationOutcome GetOrganizationDiscoveryConfiguration(
      const Model::GetOrganizationDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetOrganizationDiscoveryConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetOrganizationDiscoveryConfigurationRequestT = Model::GetOrganizationDiscoveryConfigurationRequest>
  Model::GetOrganizationDiscoveryConfigurationOutcomeCallable GetOrganizationDiscoveryConfigurationCallable(
      const GetOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::GetOrganizationDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for GetOrganizationDiscoveryConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetOrganizationDiscoveryConfigurationRequestT = Model::GetOrganizationDiscoveryConfigurationRequest>
  void GetOrganizationDiscoveryConfigurationAsync(const GetOrganizationDiscoveryConfigurationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                  const GetOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::GetOrganizationDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Returns the configuration, publish status, and preview status of a
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetPortal">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPortalOutcome GetPortal(const Model::GetPortalRequest& request) const;

  /**
   * A Callable wrapper for GetPortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPortalRequestT = Model::GetPortalRequest>
  Model::GetPortalOutcomeCallable GetPortalCallable(const GetPortalRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetPortal, request);
  }

  /**
   * An Async wrapper for GetPortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPortalRequestT = Model::GetPortalRequest>
  void GetPortalAsync(const GetPortalRequestT& request, const GetPortalResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetPortal, request, handler, context);
  }

  /**
   * <p>Returns a product. To read a product shared with you by another account,
   * supply <code>resourceOwnerAccountId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetProduct">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProductOutcome GetProduct(const Model::GetProductRequest& request) const;

  /**
   * A Callable wrapper for GetProduct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetProductRequestT = Model::GetProductRequest>
  Model::GetProductOutcomeCallable GetProductCallable(const GetProductRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetProduct, request);
  }

  /**
   * An Async wrapper for GetProduct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetProductRequestT = Model::GetProductRequest>
  void GetProductAsync(const GetProductRequestT& request, const GetProductResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetProduct, request, handler, context);
  }

  /**
   * <p>Returns an API page, including its body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetProductApiPage">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProductApiPageOutcome GetProductApiPage(const Model::GetProductApiPageRequest& request) const;

  /**
   * A Callable wrapper for GetProductApiPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetProductApiPageRequestT = Model::GetProductApiPageRequest>
  Model::GetProductApiPageOutcomeCallable GetProductApiPageCallable(const GetProductApiPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetProductApiPage, request);
  }

  /**
   * An Async wrapper for GetProductApiPage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetProductApiPageRequestT = Model::GetProductApiPageRequest>
  void GetProductApiPageAsync(const GetProductApiPageRequestT& request, const GetProductApiPageResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetProductApiPage, request, handler, context);
  }

  /**
   * <p>Returns a product page, including its body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetProductPage">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProductPageOutcome GetProductPage(const Model::GetProductPageRequest& request) const;

  /**
   * A Callable wrapper for GetProductPage that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetProductPageRequestT = Model::GetProductPageRequest>
  Model::GetProductPageOutcomeCallable GetProductPageCallable(const GetProductPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetProductPage, request);
  }

  /**
   * An Async wrapper for GetProductPage that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetProductPageRequestT = Model::GetProductPageRequest>
  void GetProductPageAsync(const GetProductPageRequestT& request, const GetProductPageResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetProductPage, request, handler, context);
  }

  /**
   * <p>Returns the sharing policy of a product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/GetProductSharingPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProductSharingPolicyOutcome GetProductSharingPolicy(const Model::GetProductSharingPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetProductSharingPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetProductSharingPolicyRequestT = Model::GetProductSharingPolicyRequest>
  Model::GetProductSharingPolicyOutcomeCallable GetProductSharingPolicyCallable(const GetProductSharingPolicyRequestT& request) const {
    return SubmitCallable(&APIPortalClient::GetProductSharingPolicy, request);
  }

  /**
   * An Async wrapper for GetProductSharingPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetProductSharingPolicyRequestT = Model::GetProductSharingPolicyRequest>
  void GetProductSharingPolicyAsync(const GetProductSharingPolicyRequestT& request,
                                    const GetProductSharingPolicyResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::GetProductSharingPolicy, request, handler, context);
  }

  /**
   * <p>Lists discovered API inventory items with filtering and
   * pagination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListApiInventoryItems">AWS
   * API Reference</a></p>
   */
  virtual Model::ListApiInventoryItemsOutcome ListApiInventoryItems(const Model::ListApiInventoryItemsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListApiInventoryItems that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListApiInventoryItemsRequestT = Model::ListApiInventoryItemsRequest>
  Model::ListApiInventoryItemsOutcomeCallable ListApiInventoryItemsCallable(const ListApiInventoryItemsRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::ListApiInventoryItems, request);
  }

  /**
   * An Async wrapper for ListApiInventoryItems that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListApiInventoryItemsRequestT = Model::ListApiInventoryItemsRequest>
  void ListApiInventoryItemsAsync(const ListApiInventoryItemsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListApiInventoryItemsRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::ListApiInventoryItems, request, handler, context);
  }

  /**
   * <p>Lists discovery statuses for services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListDiscoveryStatuses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDiscoveryStatusesOutcome ListDiscoveryStatuses(const Model::ListDiscoveryStatusesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDiscoveryStatuses that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDiscoveryStatusesRequestT = Model::ListDiscoveryStatusesRequest>
  Model::ListDiscoveryStatusesOutcomeCallable ListDiscoveryStatusesCallable(const ListDiscoveryStatusesRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::ListDiscoveryStatuses, request);
  }

  /**
   * An Async wrapper for ListDiscoveryStatuses that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDiscoveryStatusesRequestT = Model::ListDiscoveryStatusesRequest>
  void ListDiscoveryStatusesAsync(const ListDiscoveryStatusesResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListDiscoveryStatusesRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::ListDiscoveryStatuses, request, handler, context);
  }

  /**
   * <p>Lists API-security events for a single managed API, most recent first.
   * Returns up to 20 of the most recent events (not paginated).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListManagedApiEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedApiEventsOutcome ListManagedApiEvents(const Model::ListManagedApiEventsRequest& request) const;

  /**
   * A Callable wrapper for ListManagedApiEvents that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListManagedApiEventsRequestT = Model::ListManagedApiEventsRequest>
  Model::ListManagedApiEventsOutcomeCallable ListManagedApiEventsCallable(const ListManagedApiEventsRequestT& request) const {
    return SubmitCallable(&APIPortalClient::ListManagedApiEvents, request);
  }

  /**
   * An Async wrapper for ListManagedApiEvents that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListManagedApiEventsRequestT = Model::ListManagedApiEventsRequest>
  void ListManagedApiEventsAsync(const ListManagedApiEventsRequestT& request, const ListManagedApiEventsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::ListManagedApiEvents, request, handler, context);
  }

  /**
   * <p>Lists the Managed APIs in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListManagedApis">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedApisOutcome ListManagedApis(const Model::ListManagedApisRequest& request = {}) const;

  /**
   * A Callable wrapper for ListManagedApis that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListManagedApisRequestT = Model::ListManagedApisRequest>
  Model::ListManagedApisOutcomeCallable ListManagedApisCallable(const ListManagedApisRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::ListManagedApis, request);
  }

  /**
   * An Async wrapper for ListManagedApis that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListManagedApisRequestT = Model::ListManagedApisRequest>
  void ListManagedApisAsync(const ListManagedApisResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListManagedApisRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::ListManagedApis, request, handler, context);
  }

  /**
   * <p>Lists the portals in your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListPortals">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPortalsOutcome ListPortals(const Model::ListPortalsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPortals that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPortalsRequestT = Model::ListPortalsRequest>
  Model::ListPortalsOutcomeCallable ListPortalsCallable(const ListPortalsRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::ListPortals, request);
  }

  /**
   * An Async wrapper for ListPortals that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPortalsRequestT = Model::ListPortalsRequest>
  void ListPortalsAsync(const ListPortalsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ListPortalsRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::ListPortals, request, handler, context);
  }

  /**
   * <p>Lists the API pages in a product. The results do not include page
   * bodies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListProductApiPages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProductApiPagesOutcome ListProductApiPages(const Model::ListProductApiPagesRequest& request) const;

  /**
   * A Callable wrapper for ListProductApiPages that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListProductApiPagesRequestT = Model::ListProductApiPagesRequest>
  Model::ListProductApiPagesOutcomeCallable ListProductApiPagesCallable(const ListProductApiPagesRequestT& request) const {
    return SubmitCallable(&APIPortalClient::ListProductApiPages, request);
  }

  /**
   * An Async wrapper for ListProductApiPages that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListProductApiPagesRequestT = Model::ListProductApiPagesRequest>
  void ListProductApiPagesAsync(const ListProductApiPagesRequestT& request, const ListProductApiPagesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::ListProductApiPages, request, handler, context);
  }

  /**
   * <p>Lists the product pages in a product. The results do not include page
   * bodies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListProductPages">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProductPagesOutcome ListProductPages(const Model::ListProductPagesRequest& request) const;

  /**
   * A Callable wrapper for ListProductPages that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListProductPagesRequestT = Model::ListProductPagesRequest>
  Model::ListProductPagesOutcomeCallable ListProductPagesCallable(const ListProductPagesRequestT& request) const {
    return SubmitCallable(&APIPortalClient::ListProductPages, request);
  }

  /**
   * An Async wrapper for ListProductPages that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListProductPagesRequestT = Model::ListProductPagesRequest>
  void ListProductPagesAsync(const ListProductPagesRequestT& request, const ListProductPagesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::ListProductPages, request, handler, context);
  }

  /**
   * <p>Lists products you own, products shared with you, or both.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListProducts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProductsOutcome ListProducts(const Model::ListProductsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListProducts that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListProductsRequestT = Model::ListProductsRequest>
  Model::ListProductsOutcomeCallable ListProductsCallable(const ListProductsRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::ListProducts, request);
  }

  /**
   * An Async wrapper for ListProducts that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListProductsRequestT = Model::ListProductsRequest>
  void ListProductsAsync(const ListProductsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListProductsRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::ListProducts, request, handler, context);
  }

  /**
   * <p>Lists the tags for an API Portal resource. One of the three basic tagging
   * operations generated for Tagris integration (ListTagsForResource / TagResource /
   * UntagResource).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&APIPortalClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Creates or updates the discovery configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PutDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutDiscoveryConfigurationOutcome PutDiscoveryConfiguration(
      const Model::PutDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for PutDiscoveryConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutDiscoveryConfigurationRequestT = Model::PutDiscoveryConfigurationRequest>
  Model::PutDiscoveryConfigurationOutcomeCallable PutDiscoveryConfigurationCallable(
      const PutDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::PutDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for PutDiscoveryConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutDiscoveryConfigurationRequestT = Model::PutDiscoveryConfigurationRequest>
  void PutDiscoveryConfigurationAsync(const PutDiscoveryConfigurationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const PutDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::PutDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Creates or updates the organization-wide discovery configuration. This is a
   * singleton per organization. Only the organization management account and
   * registered delegated administrators may call this operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PutOrganizationDiscoveryConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::PutOrganizationDiscoveryConfigurationOutcome PutOrganizationDiscoveryConfiguration(
      const Model::PutOrganizationDiscoveryConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for PutOrganizationDiscoveryConfiguration that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutOrganizationDiscoveryConfigurationRequestT = Model::PutOrganizationDiscoveryConfigurationRequest>
  Model::PutOrganizationDiscoveryConfigurationOutcomeCallable PutOrganizationDiscoveryConfigurationCallable(
      const PutOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitCallable(&APIPortalClient::PutOrganizationDiscoveryConfiguration, request);
  }

  /**
   * An Async wrapper for PutOrganizationDiscoveryConfiguration that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutOrganizationDiscoveryConfigurationRequestT = Model::PutOrganizationDiscoveryConfigurationRequest>
  void PutOrganizationDiscoveryConfigurationAsync(const PutOrganizationDiscoveryConfigurationResponseReceivedHandler& handler,
                                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                  const PutOrganizationDiscoveryConfigurationRequestT& request = {}) const {
    return SubmitAsync(&APIPortalClient::PutOrganizationDiscoveryConfiguration, request, handler, context);
  }

  /**
   * <p>Creates or replaces the sharing policy of a product. The policy controls
   * which other accounts can read the product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/PutProductSharingPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::PutProductSharingPolicyOutcome PutProductSharingPolicy(const Model::PutProductSharingPolicyRequest& request) const;

  /**
   * A Callable wrapper for PutProductSharingPolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutProductSharingPolicyRequestT = Model::PutProductSharingPolicyRequest>
  Model::PutProductSharingPolicyOutcomeCallable PutProductSharingPolicyCallable(const PutProductSharingPolicyRequestT& request) const {
    return SubmitCallable(&APIPortalClient::PutProductSharingPolicy, request);
  }

  /**
   * An Async wrapper for PutProductSharingPolicy that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutProductSharingPolicyRequestT = Model::PutProductSharingPolicyRequest>
  void PutProductSharingPolicyAsync(const PutProductSharingPolicyRequestT& request,
                                    const PutProductSharingPolicyResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::PutProductSharingPolicy, request, handler, context);
  }

  /**
   * <p>Starts the API discovery process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/StartDiscovery">AWS
   * API Reference</a></p>
   */
  virtual Model::StartDiscoveryOutcome StartDiscovery(const Model::StartDiscoveryRequest& request) const;

  /**
   * A Callable wrapper for StartDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StartDiscoveryRequestT = Model::StartDiscoveryRequest>
  Model::StartDiscoveryOutcomeCallable StartDiscoveryCallable(const StartDiscoveryRequestT& request) const {
    return SubmitCallable(&APIPortalClient::StartDiscovery, request);
  }

  /**
   * An Async wrapper for StartDiscovery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StartDiscoveryRequestT = Model::StartDiscoveryRequest>
  void StartDiscoveryAsync(const StartDiscoveryRequestT& request, const StartDiscoveryResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::StartDiscovery, request, handler, context);
  }

  /**
   * <p>Stops the running API discovery process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/StopDiscovery">AWS
   * API Reference</a></p>
   */
  virtual Model::StopDiscoveryOutcome StopDiscovery(const Model::StopDiscoveryRequest& request) const;

  /**
   * A Callable wrapper for StopDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename StopDiscoveryRequestT = Model::StopDiscoveryRequest>
  Model::StopDiscoveryOutcomeCallable StopDiscoveryCallable(const StopDiscoveryRequestT& request) const {
    return SubmitCallable(&APIPortalClient::StopDiscovery, request);
  }

  /**
   * An Async wrapper for StopDiscovery that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename StopDiscoveryRequestT = Model::StopDiscoveryRequest>
  void StopDiscoveryAsync(const StopDiscoveryRequestT& request, const StopDiscoveryResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::StopDiscovery, request, handler, context);
  }

  /**
   * <p>Adds or updates tags on an API Portal resource. One of the three basic
   * tagging operations generated for Tagris integration (ListTagsForResource /
   * TagResource / UntagResource).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&APIPortalClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from an API Portal resource. One of the three basic tagging
   * operations generated for Tagris integration (ListTagsForResource / TagResource /
   * UntagResource).</p> <p>tagKeys is a query string parameter: for tag-based access
   * control (TBAC/ABAC) to work correctly, API Gateway requires the keys to be
   * removed to be passed as a query string parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates a portal. Only the fields supplied in the request are
   * changed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UpdatePortal">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePortalOutcome UpdatePortal(const Model::UpdatePortalRequest& request) const;

  /**
   * A Callable wrapper for UpdatePortal that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePortalRequestT = Model::UpdatePortalRequest>
  Model::UpdatePortalOutcomeCallable UpdatePortalCallable(const UpdatePortalRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UpdatePortal, request);
  }

  /**
   * An Async wrapper for UpdatePortal that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePortalRequestT = Model::UpdatePortalRequest>
  void UpdatePortalAsync(const UpdatePortalRequestT& request, const UpdatePortalResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UpdatePortal, request, handler, context);
  }

  /**
   * <p>Publishes or disables a portal. The change runs asynchronously. Use GetPortal
   * to track <code>publishStatus</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UpdatePortalPublishStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePortalPublishStatusOutcome UpdatePortalPublishStatus(const Model::UpdatePortalPublishStatusRequest& request) const;

  /**
   * A Callable wrapper for UpdatePortalPublishStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdatePortalPublishStatusRequestT = Model::UpdatePortalPublishStatusRequest>
  Model::UpdatePortalPublishStatusOutcomeCallable UpdatePortalPublishStatusCallable(
      const UpdatePortalPublishStatusRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UpdatePortalPublishStatus, request);
  }

  /**
   * An Async wrapper for UpdatePortalPublishStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdatePortalPublishStatusRequestT = Model::UpdatePortalPublishStatusRequest>
  void UpdatePortalPublishStatusAsync(const UpdatePortalPublishStatusRequestT& request,
                                      const UpdatePortalPublishStatusResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UpdatePortalPublishStatus, request, handler, context);
  }

  /**
   * <p>Updates a product. Only the fields supplied in the request are
   * changed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UpdateProduct">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;

  /**
   * A Callable wrapper for UpdateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateProductRequestT = Model::UpdateProductRequest>
  Model::UpdateProductOutcomeCallable UpdateProductCallable(const UpdateProductRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UpdateProduct, request);
  }

  /**
   * An Async wrapper for UpdateProduct that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateProductRequestT = Model::UpdateProductRequest>
  void UpdateProductAsync(const UpdateProductRequestT& request, const UpdateProductResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UpdateProduct, request, handler, context);
  }

  /**
   * <p>Updates an API page. Only the fields supplied in the request are
   * changed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UpdateProductApiPage">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProductApiPageOutcome UpdateProductApiPage(const Model::UpdateProductApiPageRequest& request) const;

  /**
   * A Callable wrapper for UpdateProductApiPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateProductApiPageRequestT = Model::UpdateProductApiPageRequest>
  Model::UpdateProductApiPageOutcomeCallable UpdateProductApiPageCallable(const UpdateProductApiPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UpdateProductApiPage, request);
  }

  /**
   * An Async wrapper for UpdateProductApiPage that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateProductApiPageRequestT = Model::UpdateProductApiPageRequest>
  void UpdateProductApiPageAsync(const UpdateProductApiPageRequestT& request, const UpdateProductApiPageResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UpdateProductApiPage, request, handler, context);
  }

  /**
   * <p>Updates a product page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/UpdateProductPage">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProductPageOutcome UpdateProductPage(const Model::UpdateProductPageRequest& request) const;

  /**
   * A Callable wrapper for UpdateProductPage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateProductPageRequestT = Model::UpdateProductPageRequest>
  Model::UpdateProductPageOutcomeCallable UpdateProductPageCallable(const UpdateProductPageRequestT& request) const {
    return SubmitCallable(&APIPortalClient::UpdateProductPage, request);
  }

  /**
   * An Async wrapper for UpdateProductPage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateProductPageRequestT = Model::UpdateProductPageRequest>
  void UpdateProductPageAsync(const UpdateProductPageRequestT& request, const UpdateProductPageResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&APIPortalClient::UpdateProductPage, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<APIPortalEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<APIPortalClient>;
  void init(const APIPortalClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, APIPortalError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  APIPortalClientConfiguration m_clientConfiguration;
  std::shared_ptr<APIPortalEndpointProviderBase> m_endpointProvider;
};

}  // namespace APIPortal
}  // namespace Aws
