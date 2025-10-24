﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/freetier/FreeTierServiceClientModel.h>
#include <aws/freetier/FreeTier_EXPORTS.h>

namespace Aws {
namespace FreeTier {
/**
 * <p>You can use the Amazon Web Services Free Tier API to query programmatically
 * your Free Tier usage data.</p> <p>Free Tier tracks your monthly usage data for
 * all free tier offers that are associated with your Amazon Web Services account.
 * You can use the Free Tier API to filter and show only the data that you
 * want.</p> <p>Service endpoint</p> <p>The Free Tier API provides the following
 * endpoint:</p> <ul/> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-free-tier.html">Using
 * the Amazon Web Services Free Tier</a> in the <i>Billing User Guide</i>.</p>
 */
class AWS_FREETIER_API FreeTierClient : public Aws::Client::AWSJsonClient,
                                        public Aws::Client::ClientWithAsyncTemplateMethods<FreeTierClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef FreeTierClientConfiguration ClientConfigurationType;
  typedef FreeTierEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  FreeTierClient(const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration(),
                 std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  FreeTierClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  FreeTierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<FreeTierEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::FreeTier::FreeTierClientConfiguration& clientConfiguration = Aws::FreeTier::FreeTierClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  FreeTierClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  FreeTierClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  FreeTierClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~FreeTierClient();

  /**
   * <p> Returns a specific activity record that is available to the customer.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/GetAccountActivity">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountActivityOutcome GetAccountActivity(const Model::GetAccountActivityRequest& request) const;

  /**
   * A Callable wrapper for GetAccountActivity that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccountActivityRequestT = Model::GetAccountActivityRequest>
  Model::GetAccountActivityOutcomeCallable GetAccountActivityCallable(const GetAccountActivityRequestT& request) const {
    return SubmitCallable(&FreeTierClient::GetAccountActivity, request);
  }

  /**
   * An Async wrapper for GetAccountActivity that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAccountActivityRequestT = Model::GetAccountActivityRequest>
  void GetAccountActivityAsync(const GetAccountActivityRequestT& request, const GetAccountActivityResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&FreeTierClient::GetAccountActivity, request, handler, context);
  }

  /**
   * <p> This returns all of the information related to the state of the account plan
   * related to Free Tier. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/GetAccountPlanState">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccountPlanStateOutcome GetAccountPlanState(const Model::GetAccountPlanStateRequest& request = {}) const;

  /**
   * A Callable wrapper for GetAccountPlanState that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAccountPlanStateRequestT = Model::GetAccountPlanStateRequest>
  Model::GetAccountPlanStateOutcomeCallable GetAccountPlanStateCallable(const GetAccountPlanStateRequestT& request = {}) const {
    return SubmitCallable(&FreeTierClient::GetAccountPlanState, request);
  }

  /**
   * An Async wrapper for GetAccountPlanState that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAccountPlanStateRequestT = Model::GetAccountPlanStateRequest>
  void GetAccountPlanStateAsync(const GetAccountPlanStateResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const GetAccountPlanStateRequestT& request = {}) const {
    return SubmitAsync(&FreeTierClient::GetAccountPlanState, request, handler, context);
  }

  /**
   * <p>Returns a list of all Free Tier usage objects that match your
   * filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/GetFreeTierUsage">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFreeTierUsageOutcome GetFreeTierUsage(const Model::GetFreeTierUsageRequest& request = {}) const;

  /**
   * A Callable wrapper for GetFreeTierUsage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetFreeTierUsageRequestT = Model::GetFreeTierUsageRequest>
  Model::GetFreeTierUsageOutcomeCallable GetFreeTierUsageCallable(const GetFreeTierUsageRequestT& request = {}) const {
    return SubmitCallable(&FreeTierClient::GetFreeTierUsage, request);
  }

  /**
   * An Async wrapper for GetFreeTierUsage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetFreeTierUsageRequestT = Model::GetFreeTierUsageRequest>
  void GetFreeTierUsageAsync(const GetFreeTierUsageResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const GetFreeTierUsageRequestT& request = {}) const {
    return SubmitAsync(&FreeTierClient::GetFreeTierUsage, request, handler, context);
  }

  /**
   * <p> Returns a list of activities that are available. This operation supports
   * pagination and filtering by status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/ListAccountActivities">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccountActivitiesOutcome ListAccountActivities(const Model::ListAccountActivitiesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAccountActivities that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccountActivitiesRequestT = Model::ListAccountActivitiesRequest>
  Model::ListAccountActivitiesOutcomeCallable ListAccountActivitiesCallable(const ListAccountActivitiesRequestT& request = {}) const {
    return SubmitCallable(&FreeTierClient::ListAccountActivities, request);
  }

  /**
   * An Async wrapper for ListAccountActivities that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAccountActivitiesRequestT = Model::ListAccountActivitiesRequest>
  void ListAccountActivitiesAsync(const ListAccountActivitiesResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                  const ListAccountActivitiesRequestT& request = {}) const {
    return SubmitAsync(&FreeTierClient::ListAccountActivities, request, handler, context);
  }

  /**
   * <p> The account plan type for the Amazon Web Services account. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/UpgradeAccountPlan">AWS
   * API Reference</a></p>
   */
  virtual Model::UpgradeAccountPlanOutcome UpgradeAccountPlan(const Model::UpgradeAccountPlanRequest& request) const;

  /**
   * A Callable wrapper for UpgradeAccountPlan that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpgradeAccountPlanRequestT = Model::UpgradeAccountPlanRequest>
  Model::UpgradeAccountPlanOutcomeCallable UpgradeAccountPlanCallable(const UpgradeAccountPlanRequestT& request) const {
    return SubmitCallable(&FreeTierClient::UpgradeAccountPlan, request);
  }

  /**
   * An Async wrapper for UpgradeAccountPlan that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpgradeAccountPlanRequestT = Model::UpgradeAccountPlanRequest>
  void UpgradeAccountPlanAsync(const UpgradeAccountPlanRequestT& request, const UpgradeAccountPlanResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&FreeTierClient::UpgradeAccountPlan, request, handler, context);
  }

  void OverrideEndpoint(const Aws::String& endpoint);
  std::shared_ptr<FreeTierEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<FreeTierClient>;
  void init(const FreeTierClientConfiguration& clientConfiguration);

  FreeTierClientConfiguration m_clientConfiguration;
  std::shared_ptr<FreeTierEndpointProviderBase> m_endpointProvider;
};

}  // namespace FreeTier
}  // namespace Aws
