/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingPaginationBase.h>
#include <aws/billing/BillingServiceClientModel.h>
#include <aws/billing/BillingWaiter.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace Billing {
/**
 * <p> You can use the Billing API to programatically list the billing views
 * available to you for a given time period. A billing view represents a set of
 * billing data. </p> <p>The Billing API provides the following endpoint:</p> <p>
 * <code>https://billing.us-east-1.api.aws</code> </p>
 */
class AWS_BILLING_API BillingClient : public Aws::Client::AWSJsonClient,
                                      public Aws::Client::ClientWithAsyncTemplateMethods<BillingClient>,
                                      public BillingPaginationBase<BillingClient>,
                                      public BillingWaiter<BillingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef BillingClientConfiguration ClientConfigurationType;
  typedef BillingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BillingClient(const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration(),
                std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BillingClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr,
                const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BillingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                std::shared_ptr<BillingEndpointProviderBase> endpointProvider = nullptr,
                const Aws::Billing::BillingClientConfiguration& clientConfiguration = Aws::Billing::BillingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  BillingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  BillingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  BillingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~BillingClient();

  /**
   * <p> Associates one or more source billing views with an existing billing view.
   * This allows creating aggregate billing views that combine data from multiple
   * sources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AssociateSourceViews">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateSourceViewsOutcome AssociateSourceViews(const Model::AssociateSourceViewsRequest& request) const;

  /**
   * A Callable wrapper for AssociateSourceViews that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateSourceViewsRequestT = Model::AssociateSourceViewsRequest>
  Model::AssociateSourceViewsOutcomeCallable AssociateSourceViewsCallable(const AssociateSourceViewsRequestT& request) const {
    return SubmitCallable(&BillingClient::AssociateSourceViews, request);
  }

  /**
   * An Async wrapper for AssociateSourceViews that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AssociateSourceViewsRequestT = Model::AssociateSourceViewsRequest>
  void AssociateSourceViewsAsync(const AssociateSourceViewsRequestT& request, const AssociateSourceViewsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::AssociateSourceViews, request, handler, context);
  }

  /**
   * <p> Creates a billing view with the specified billing view attributes.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/CreateBillingView">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateBillingViewOutcome CreateBillingView(const Model::CreateBillingViewRequest& request) const;

  /**
   * A Callable wrapper for CreateBillingView that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateBillingViewRequestT = Model::CreateBillingViewRequest>
  Model::CreateBillingViewOutcomeCallable CreateBillingViewCallable(const CreateBillingViewRequestT& request) const {
    return SubmitCallable(&BillingClient::CreateBillingView, request);
  }

  /**
   * An Async wrapper for CreateBillingView that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateBillingViewRequestT = Model::CreateBillingViewRequest>
  void CreateBillingViewAsync(const CreateBillingViewRequestT& request, const CreateBillingViewResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::CreateBillingView, request, handler, context);
  }

  /**
   * <p>Deletes the specified billing view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/DeleteBillingView">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteBillingViewOutcome DeleteBillingView(const Model::DeleteBillingViewRequest& request) const;

  /**
   * A Callable wrapper for DeleteBillingView that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteBillingViewRequestT = Model::DeleteBillingViewRequest>
  Model::DeleteBillingViewOutcomeCallable DeleteBillingViewCallable(const DeleteBillingViewRequestT& request) const {
    return SubmitCallable(&BillingClient::DeleteBillingView, request);
  }

  /**
   * An Async wrapper for DeleteBillingView that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteBillingViewRequestT = Model::DeleteBillingViewRequest>
  void DeleteBillingViewAsync(const DeleteBillingViewRequestT& request, const DeleteBillingViewResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::DeleteBillingView, request, handler, context);
  }

  /**
   * <p> Removes the association between one or more source billing views and an
   * existing billing view. This allows modifying the composition of aggregate
   * billing views. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/DisassociateSourceViews">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateSourceViewsOutcome DisassociateSourceViews(const Model::DisassociateSourceViewsRequest& request) const;

  /**
   * A Callable wrapper for DisassociateSourceViews that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateSourceViewsRequestT = Model::DisassociateSourceViewsRequest>
  Model::DisassociateSourceViewsOutcomeCallable DisassociateSourceViewsCallable(const DisassociateSourceViewsRequestT& request) const {
    return SubmitCallable(&BillingClient::DisassociateSourceViews, request);
  }

  /**
   * An Async wrapper for DisassociateSourceViews that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateSourceViewsRequestT = Model::DisassociateSourceViewsRequest>
  void DisassociateSourceViewsAsync(const DisassociateSourceViewsRequestT& request,
                                    const DisassociateSourceViewsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::DisassociateSourceViews, request, handler, context);
  }

  /**
   * <p>Retrieves billing preferences for the specified feature. Each feature
   * controls a distinct billing capability: which accounts can share Reserved
   * Instances or credits, whether billing alerts are enabled, the historical record
   * of sharing changes, and per-credit options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetBillingPreferences">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBillingPreferencesOutcome GetBillingPreferences(const Model::GetBillingPreferencesRequest& request) const;

  /**
   * A Callable wrapper for GetBillingPreferences that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetBillingPreferencesRequestT = Model::GetBillingPreferencesRequest>
  Model::GetBillingPreferencesOutcomeCallable GetBillingPreferencesCallable(const GetBillingPreferencesRequestT& request) const {
    return SubmitCallable(&BillingClient::GetBillingPreferences, request);
  }

  /**
   * An Async wrapper for GetBillingPreferences that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetBillingPreferencesRequestT = Model::GetBillingPreferencesRequest>
  void GetBillingPreferencesAsync(const GetBillingPreferencesRequestT& request, const GetBillingPreferencesResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::GetBillingPreferences, request, handler, context);
  }

  /**
   * <p>Returns the metadata associated to the specified billing view ARN.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetBillingView">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBillingViewOutcome GetBillingView(const Model::GetBillingViewRequest& request) const;

  /**
   * A Callable wrapper for GetBillingView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBillingViewRequestT = Model::GetBillingViewRequest>
  Model::GetBillingViewOutcomeCallable GetBillingViewCallable(const GetBillingViewRequestT& request) const {
    return SubmitCallable(&BillingClient::GetBillingView, request);
  }

  /**
   * An Async wrapper for GetBillingView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBillingViewRequestT = Model::GetBillingViewRequest>
  void GetBillingViewAsync(const GetBillingViewRequestT& request, const GetBillingViewResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::GetBillingView, request, handler, context);
  }

  /**
   * <p>Returns the per-billing-month allocation history for credits applied to an
   * Amazon Web Services account's bills. Traverses the consolidated billing family
   * to capture cross-account credit applications. Supports pagination and optional
   * filtering to a single credit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetCreditAllocationHistory">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCreditAllocationHistoryOutcome GetCreditAllocationHistory(
      const Model::GetCreditAllocationHistoryRequest& request) const;

  /**
   * A Callable wrapper for GetCreditAllocationHistory that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetCreditAllocationHistoryRequestT = Model::GetCreditAllocationHistoryRequest>
  Model::GetCreditAllocationHistoryOutcomeCallable GetCreditAllocationHistoryCallable(
      const GetCreditAllocationHistoryRequestT& request) const {
    return SubmitCallable(&BillingClient::GetCreditAllocationHistory, request);
  }

  /**
   * An Async wrapper for GetCreditAllocationHistory that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCreditAllocationHistoryRequestT = Model::GetCreditAllocationHistoryRequest>
  void GetCreditAllocationHistoryAsync(const GetCreditAllocationHistoryRequestT& request,
                                       const GetCreditAllocationHistoryResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::GetCreditAllocationHistory, request, handler, context);
  }

  /**
   * <p>Returns the list of Amazon Web Services account credits for the specified
   * account. Each credit includes its identifier, type, monetary amounts, applicable
   * products, expiration, sharing configuration, and current enabled status.</p>
   * <p>When the caller is the management account of a consolidated billing family
   * and <code>payerAccountFlag</code> is <code>true</code>, the response aggregates
   * credits across the entire family. Otherwise, the response includes only credits
   * owned by the account specified in <code>accountId</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetCredits">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCreditsOutcome GetCredits(const Model::GetCreditsRequest& request) const;

  /**
   * A Callable wrapper for GetCredits that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCreditsRequestT = Model::GetCreditsRequest>
  Model::GetCreditsOutcomeCallable GetCreditsCallable(const GetCreditsRequestT& request) const {
    return SubmitCallable(&BillingClient::GetCredits, request);
  }

  /**
   * An Async wrapper for GetCredits that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCreditsRequestT = Model::GetCreditsRequest>
  void GetCreditsAsync(const GetCreditsRequestT& request, const GetCreditsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::GetCredits, request, handler, context);
  }

  /**
   * <p>Returns the resource-based policy document attached to the resource in
   * <code>JSON</code> format. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/GetResourcePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

  /**
   * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const {
    return SubmitCallable(&BillingClient::GetResourcePolicy, request);
  }

  /**
   * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
  void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::GetResourcePolicy, request, handler, context);
  }

  /**
   * <p>Lists the billing views available for a given time period. </p> <p>Every
   * Amazon Web Services account has a unique <code>PRIMARY</code> billing view that
   * represents the billing data available by default. Accounts that use Billing
   * Conductor also have <code>BILLING_GROUP</code> billing views representing pro
   * forma costs associated with each created billing group.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListBillingViews">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBillingViewsOutcome ListBillingViews(const Model::ListBillingViewsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListBillingViews that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBillingViewsRequestT = Model::ListBillingViewsRequest>
  Model::ListBillingViewsOutcomeCallable ListBillingViewsCallable(const ListBillingViewsRequestT& request = {}) const {
    return SubmitCallable(&BillingClient::ListBillingViews, request);
  }

  /**
   * An Async wrapper for ListBillingViews that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListBillingViewsRequestT = Model::ListBillingViewsRequest>
  void ListBillingViewsAsync(const ListBillingViewsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const ListBillingViewsRequestT& request = {}) const {
    return SubmitAsync(&BillingClient::ListBillingViews, request, handler, context);
  }

  /**
   * <p>Lists the source views (managed Amazon Web Services billing views) associated
   * with the billing view. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListSourceViewsForBillingView">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSourceViewsForBillingViewOutcome ListSourceViewsForBillingView(
      const Model::ListSourceViewsForBillingViewRequest& request) const;

  /**
   * A Callable wrapper for ListSourceViewsForBillingView that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListSourceViewsForBillingViewRequestT = Model::ListSourceViewsForBillingViewRequest>
  Model::ListSourceViewsForBillingViewOutcomeCallable ListSourceViewsForBillingViewCallable(
      const ListSourceViewsForBillingViewRequestT& request) const {
    return SubmitCallable(&BillingClient::ListSourceViewsForBillingView, request);
  }

  /**
   * An Async wrapper for ListSourceViewsForBillingView that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSourceViewsForBillingViewRequestT = Model::ListSourceViewsForBillingViewRequest>
  void ListSourceViewsForBillingViewAsync(const ListSourceViewsForBillingViewRequestT& request,
                                          const ListSourceViewsForBillingViewResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::ListSourceViewsForBillingView, request, handler, context);
  }

  /**
   * <p>Lists tags associated with the billing view resource. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&BillingClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Redeems an Amazon Web Services promotional credit code on behalf of the
   * calling account. On success, a new credit is added to the account's credit
   * ledger with the amount, validity period, and applicable products defined by the
   * promotion. The credit is then automatically applied to subsequent bills
   * according to the standard credit application order.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/RedeemCredits">AWS
   * API Reference</a></p>
   */
  virtual Model::RedeemCreditsOutcome RedeemCredits(const Model::RedeemCreditsRequest& request) const;

  /**
   * A Callable wrapper for RedeemCredits that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RedeemCreditsRequestT = Model::RedeemCreditsRequest>
  Model::RedeemCreditsOutcomeCallable RedeemCreditsCallable(const RedeemCreditsRequestT& request) const {
    return SubmitCallable(&BillingClient::RedeemCredits, request);
  }

  /**
   * An Async wrapper for RedeemCredits that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RedeemCreditsRequestT = Model::RedeemCreditsRequest>
  void RedeemCreditsAsync(const RedeemCreditsRequestT& request, const RedeemCreditsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::RedeemCredits, request, handler, context);
  }

  /**
   * <p> An API operation for adding one or more tags (key-value pairs) to a
   * resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&BillingClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::TagResource, request, handler, context);
  }

  /**
   * <p> Removes one or more tags from a resource. Specify only tag keys in your
   * request. Don't specify the value. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&BillingClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates billing preferences for the specified feature. Each feature targets a
   * distinct billing capability and has its own set of supported keys. The action
   * sets the value for each provided key; keys not present in the request are
   * unchanged.</p> <p>Sharing keys (<code>RI_SHARING</code>,
   * <code>CREDIT_SHARING</code>, <code>CREDIT_LEVEL_SHARING</code>, and sharing keys
   * under <code>CREDIT_PREFERENCE_OPTIONS</code>) may only be set by the management
   * account of a consolidated billing family. The
   * <code>credit/{creditId}/status</code> key may be set by member accounts for
   * credits they own, or by the management account for any credit in the
   * family.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/UpdateBillingPreferences">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBillingPreferencesOutcome UpdateBillingPreferences(const Model::UpdateBillingPreferencesRequest& request) const;

  /**
   * A Callable wrapper for UpdateBillingPreferences that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBillingPreferencesRequestT = Model::UpdateBillingPreferencesRequest>
  Model::UpdateBillingPreferencesOutcomeCallable UpdateBillingPreferencesCallable(const UpdateBillingPreferencesRequestT& request) const {
    return SubmitCallable(&BillingClient::UpdateBillingPreferences, request);
  }

  /**
   * An Async wrapper for UpdateBillingPreferences that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateBillingPreferencesRequestT = Model::UpdateBillingPreferencesRequest>
  void UpdateBillingPreferencesAsync(const UpdateBillingPreferencesRequestT& request,
                                     const UpdateBillingPreferencesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::UpdateBillingPreferences, request, handler, context);
  }

  /**
   * <p>An API to update the attributes of the billing view. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/UpdateBillingView">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateBillingViewOutcome UpdateBillingView(const Model::UpdateBillingViewRequest& request) const;

  /**
   * A Callable wrapper for UpdateBillingView that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateBillingViewRequestT = Model::UpdateBillingViewRequest>
  Model::UpdateBillingViewOutcomeCallable UpdateBillingViewCallable(const UpdateBillingViewRequestT& request) const {
    return SubmitCallable(&BillingClient::UpdateBillingView, request);
  }

  /**
   * An Async wrapper for UpdateBillingView that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateBillingViewRequestT = Model::UpdateBillingViewRequest>
  void UpdateBillingViewAsync(const UpdateBillingViewRequestT& request, const UpdateBillingViewResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&BillingClient::UpdateBillingView, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<BillingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<BillingClient>;
  void init(const BillingClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, BillingError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  BillingClientConfiguration m_clientConfiguration;
  std::shared_ptr<BillingEndpointProviderBase> m_endpointProvider;
};

}  // namespace Billing
}  // namespace Aws
