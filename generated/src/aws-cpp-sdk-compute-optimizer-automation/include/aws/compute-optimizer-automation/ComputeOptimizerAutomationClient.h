/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationPaginationBase.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationServiceClientModel.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
/**
 * <p> Automation is a feature within Amazon Web Services Compute Optimizer that
 * enables you to apply optimization recommendations to your Amazon Web Services
 * resources, reducing costs and improving performance. You can apply recommended
 * actions directly or create automation rules that implement recommendations on a
 * recurring schedule when they match your specified criteria. With automation
 * rules, set criteria such as Amazon Web Services Region and Resource Tags to
 * target specific geographies and workloads. Configure rules to run daily, weekly,
 * or monthly, and Compute Optimizer continuously evaluates new recommendations
 * against your criteria. Track automation events over time, examine detailed step
 * history, estimate savings achieved, and reverse actions directly from Compute
 * Optimizer when needed. </p>
 */
class AWS_COMPUTEOPTIMIZERAUTOMATION_API ComputeOptimizerAutomationClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<ComputeOptimizerAutomationClient>,
      public ComputeOptimizerAutomationPaginationBase<ComputeOptimizerAutomationClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ComputeOptimizerAutomationClientConfiguration ClientConfigurationType;
  typedef ComputeOptimizerAutomationEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ComputeOptimizerAutomationClient(
      const Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration =
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration(),
      std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ComputeOptimizerAutomationClient(
      const Aws::Auth::AWSCredentials& credentials,
      std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider = nullptr,
      const Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration =
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ComputeOptimizerAutomationClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> endpointProvider = nullptr,
      const Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration& clientConfiguration =
          Aws::ComputeOptimizerAutomation::ComputeOptimizerAutomationClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ComputeOptimizerAutomationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ComputeOptimizerAutomationClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ComputeOptimizerAutomationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ComputeOptimizerAutomationClient();

  /**
   * <p>Associates one or more member accounts with your organization's management
   * account, enabling centralized implementation of optimization actions across
   * those accounts. Once associated, the management account (or a delegated
   * administrator) can apply recommended actions to the member account. When you
   * associate a member account, its organization rule mode is automatically set to
   * "Any allowed," which permits the management account to create Automation rules
   * that automatically apply actions to that account. If the member account has not
   * previously enabled the Automation feature, the association process automatically
   * enables it.</p>  <p>Only the management account or a delegated
   * administrator can perform this action.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/AssociateAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateAccountsOutcome AssociateAccounts(const Model::AssociateAccountsRequest& request) const;

  /**
   * A Callable wrapper for AssociateAccounts that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateAccountsRequestT = Model::AssociateAccountsRequest>
  Model::AssociateAccountsOutcomeCallable AssociateAccountsCallable(const AssociateAccountsRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::AssociateAccounts, request);
  }

  /**
   * An Async wrapper for AssociateAccounts that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociateAccountsRequestT = Model::AssociateAccountsRequest>
  void AssociateAccountsAsync(const AssociateAccountsRequestT& request, const AssociateAccountsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::AssociateAccounts, request, handler, context);
  }

  /**
   * <p> Creates a new automation rule to apply recommended actions to resources
   * based on specified criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/CreateAutomationRule">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAutomationRuleOutcome CreateAutomationRule(const Model::CreateAutomationRuleRequest& request) const;

  /**
   * A Callable wrapper for CreateAutomationRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAutomationRuleRequestT = Model::CreateAutomationRuleRequest>
  Model::CreateAutomationRuleOutcomeCallable CreateAutomationRuleCallable(const CreateAutomationRuleRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::CreateAutomationRule, request);
  }

  /**
   * An Async wrapper for CreateAutomationRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateAutomationRuleRequestT = Model::CreateAutomationRuleRequest>
  void CreateAutomationRuleAsync(const CreateAutomationRuleRequestT& request, const CreateAutomationRuleResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::CreateAutomationRule, request, handler, context);
  }

  /**
   * <p> Deletes an existing automation rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/DeleteAutomationRule">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAutomationRuleOutcome DeleteAutomationRule(const Model::DeleteAutomationRuleRequest& request) const;

  /**
   * A Callable wrapper for DeleteAutomationRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAutomationRuleRequestT = Model::DeleteAutomationRuleRequest>
  Model::DeleteAutomationRuleOutcomeCallable DeleteAutomationRuleCallable(const DeleteAutomationRuleRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::DeleteAutomationRule, request);
  }

  /**
   * An Async wrapper for DeleteAutomationRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteAutomationRuleRequestT = Model::DeleteAutomationRuleRequest>
  void DeleteAutomationRuleAsync(const DeleteAutomationRuleRequestT& request, const DeleteAutomationRuleResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::DeleteAutomationRule, request, handler, context);
  }

  /**
   * <p> Disassociates member accounts from your organization's management account,
   * removing centralized automation capabilities. Once disassociated, organization
   * rules no longer apply to the member account, and the management account (or
   * delegated administrator) cannot create Automation rules for that account. </p>
   *  <p>Only the management account or a delegated administrator can perform
   * this action.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/DisassociateAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateAccountsOutcome DisassociateAccounts(const Model::DisassociateAccountsRequest& request) const;

  /**
   * A Callable wrapper for DisassociateAccounts that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateAccountsRequestT = Model::DisassociateAccountsRequest>
  Model::DisassociateAccountsOutcomeCallable DisassociateAccountsCallable(const DisassociateAccountsRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::DisassociateAccounts, request);
  }

  /**
   * An Async wrapper for DisassociateAccounts that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateAccountsRequestT = Model::DisassociateAccountsRequest>
  void DisassociateAccountsAsync(const DisassociateAccountsRequestT& request, const DisassociateAccountsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::DisassociateAccounts, request, handler, context);
  }

  /**
   * <p> Retrieves details about a specific automation event. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/GetAutomationEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutomationEventOutcome GetAutomationEvent(const Model::GetAutomationEventRequest& request) const;

  /**
   * A Callable wrapper for GetAutomationEvent that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAutomationEventRequestT = Model::GetAutomationEventRequest>
  Model::GetAutomationEventOutcomeCallable GetAutomationEventCallable(const GetAutomationEventRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::GetAutomationEvent, request);
  }

  /**
   * An Async wrapper for GetAutomationEvent that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAutomationEventRequestT = Model::GetAutomationEventRequest>
  void GetAutomationEventAsync(const GetAutomationEventRequestT& request, const GetAutomationEventResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::GetAutomationEvent, request, handler, context);
  }

  /**
   * <p> Retrieves details about a specific automation rule. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/GetAutomationRule">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAutomationRuleOutcome GetAutomationRule(const Model::GetAutomationRuleRequest& request) const;

  /**
   * A Callable wrapper for GetAutomationRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAutomationRuleRequestT = Model::GetAutomationRuleRequest>
  Model::GetAutomationRuleOutcomeCallable GetAutomationRuleCallable(const GetAutomationRuleRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::GetAutomationRule, request);
  }

  /**
   * An Async wrapper for GetAutomationRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAutomationRuleRequestT = Model::GetAutomationRuleRequest>
  void GetAutomationRuleAsync(const GetAutomationRuleRequestT& request, const GetAutomationRuleResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::GetAutomationRule, request, handler, context);
  }

  /**
   * <p> Retrieves the current enrollment configuration for Compute Optimizer
   * Automation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/GetEnrollmentConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEnrollmentConfigurationOutcome GetEnrollmentConfiguration(
      const Model::GetEnrollmentConfigurationRequest& request = {}) const;

  /**
   * A Callable wrapper for GetEnrollmentConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetEnrollmentConfigurationRequestT = Model::GetEnrollmentConfigurationRequest>
  Model::GetEnrollmentConfigurationOutcomeCallable GetEnrollmentConfigurationCallable(
      const GetEnrollmentConfigurationRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::GetEnrollmentConfiguration, request);
  }

  /**
   * An Async wrapper for GetEnrollmentConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetEnrollmentConfigurationRequestT = Model::GetEnrollmentConfigurationRequest>
  void GetEnrollmentConfigurationAsync(const GetEnrollmentConfigurationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                       const GetEnrollmentConfigurationRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::GetEnrollmentConfiguration, request, handler, context);
  }

  /**
   * <p> Lists the accounts in your organization that are enrolled in Compute
   * Optimizer and whether they have enabled Automation. </p>  <p>Only the
   * management account or a delegated administrator can perform this action.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListAccountsRequestT = Model::ListAccountsRequest>
  Model::ListAccountsOutcomeCallable ListAccountsCallable(const ListAccountsRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAccounts, request);
  }

  /**
   * An Async wrapper for ListAccounts that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListAccountsRequestT = Model::ListAccountsRequest>
  void ListAccountsAsync(const ListAccountsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListAccountsRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAccounts, request, handler, context);
  }

  /**
   * <p>Lists the steps for a specific automation event. You can only list steps for
   * events created within the past year. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationEventSteps">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationEventStepsOutcome ListAutomationEventSteps(const Model::ListAutomationEventStepsRequest& request) const;

  /**
   * A Callable wrapper for ListAutomationEventSteps that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAutomationEventStepsRequestT = Model::ListAutomationEventStepsRequest>
  Model::ListAutomationEventStepsOutcomeCallable ListAutomationEventStepsCallable(const ListAutomationEventStepsRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationEventSteps, request);
  }

  /**
   * An Async wrapper for ListAutomationEventSteps that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutomationEventStepsRequestT = Model::ListAutomationEventStepsRequest>
  void ListAutomationEventStepsAsync(const ListAutomationEventStepsRequestT& request,
                                     const ListAutomationEventStepsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationEventSteps, request, handler, context);
  }

  /**
   * <p>Provides a summary of automation events based on specified filters. Only
   * events created within the past year will be included in the summary.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationEventSummaries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationEventSummariesOutcome ListAutomationEventSummaries(
      const Model::ListAutomationEventSummariesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutomationEventSummaries that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAutomationEventSummariesRequestT = Model::ListAutomationEventSummariesRequest>
  Model::ListAutomationEventSummariesOutcomeCallable ListAutomationEventSummariesCallable(
      const ListAutomationEventSummariesRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationEventSummaries, request);
  }

  /**
   * An Async wrapper for ListAutomationEventSummaries that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutomationEventSummariesRequestT = Model::ListAutomationEventSummariesRequest>
  void ListAutomationEventSummariesAsync(const ListAutomationEventSummariesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                         const ListAutomationEventSummariesRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationEventSummaries, request, handler, context);
  }

  /**
   * <p>Lists automation events based on specified filters. You can retrieve events
   * that were created within the past year. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationEventsOutcome ListAutomationEvents(const Model::ListAutomationEventsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutomationEvents that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAutomationEventsRequestT = Model::ListAutomationEventsRequest>
  Model::ListAutomationEventsOutcomeCallable ListAutomationEventsCallable(const ListAutomationEventsRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationEvents, request);
  }

  /**
   * An Async wrapper for ListAutomationEvents that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutomationEventsRequestT = Model::ListAutomationEventsRequest>
  void ListAutomationEventsAsync(const ListAutomationEventsResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                 const ListAutomationEventsRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationEvents, request, handler, context);
  }

  /**
   * <p>Returns a preview of the recommended actions that match your Automation
   * rule's configuration and criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationRulePreview">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationRulePreviewOutcome ListAutomationRulePreview(const Model::ListAutomationRulePreviewRequest& request) const;

  /**
   * A Callable wrapper for ListAutomationRulePreview that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAutomationRulePreviewRequestT = Model::ListAutomationRulePreviewRequest>
  Model::ListAutomationRulePreviewOutcomeCallable ListAutomationRulePreviewCallable(
      const ListAutomationRulePreviewRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationRulePreview, request);
  }

  /**
   * An Async wrapper for ListAutomationRulePreview that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAutomationRulePreviewRequestT = Model::ListAutomationRulePreviewRequest>
  void ListAutomationRulePreviewAsync(const ListAutomationRulePreviewRequestT& request,
                                      const ListAutomationRulePreviewResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationRulePreview, request, handler, context);
  }

  /**
   * <p>Returns a summary of the recommended actions that match your rule preview
   * configuration and criteria. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationRulePreviewSummaries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationRulePreviewSummariesOutcome ListAutomationRulePreviewSummaries(
      const Model::ListAutomationRulePreviewSummariesRequest& request) const;

  /**
   * A Callable wrapper for ListAutomationRulePreviewSummaries that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListAutomationRulePreviewSummariesRequestT = Model::ListAutomationRulePreviewSummariesRequest>
  Model::ListAutomationRulePreviewSummariesOutcomeCallable ListAutomationRulePreviewSummariesCallable(
      const ListAutomationRulePreviewSummariesRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationRulePreviewSummaries, request);
  }

  /**
   * An Async wrapper for ListAutomationRulePreviewSummaries that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListAutomationRulePreviewSummariesRequestT = Model::ListAutomationRulePreviewSummariesRequest>
  void ListAutomationRulePreviewSummariesAsync(const ListAutomationRulePreviewSummariesRequestT& request,
                                               const ListAutomationRulePreviewSummariesResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationRulePreviewSummaries, request, handler, context);
  }

  /**
   * <p> Lists the automation rules that match specified filters. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListAutomationRules">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAutomationRulesOutcome ListAutomationRules(const Model::ListAutomationRulesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAutomationRules that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAutomationRulesRequestT = Model::ListAutomationRulesRequest>
  Model::ListAutomationRulesOutcomeCallable ListAutomationRulesCallable(const ListAutomationRulesRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListAutomationRules, request);
  }

  /**
   * An Async wrapper for ListAutomationRules that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAutomationRulesRequestT = Model::ListAutomationRulesRequest>
  void ListAutomationRulesAsync(const ListAutomationRulesResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListAutomationRulesRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListAutomationRules, request, handler, context);
  }

  /**
   * <p> Provides a summary of recommended actions based on specified filters. </p>
   *  <p>Management accounts and delegated administrators can retrieve
   * recommended actions that include associated member accounts. You can associate a
   * member account using <code>AssociateAccounts</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListRecommendedActionSummaries">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRecommendedActionSummariesOutcome ListRecommendedActionSummaries(
      const Model::ListRecommendedActionSummariesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRecommendedActionSummaries that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListRecommendedActionSummariesRequestT = Model::ListRecommendedActionSummariesRequest>
  Model::ListRecommendedActionSummariesOutcomeCallable ListRecommendedActionSummariesCallable(
      const ListRecommendedActionSummariesRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListRecommendedActionSummaries, request);
  }

  /**
   * An Async wrapper for ListRecommendedActionSummaries that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListRecommendedActionSummariesRequestT = Model::ListRecommendedActionSummariesRequest>
  void ListRecommendedActionSummariesAsync(const ListRecommendedActionSummariesResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                           const ListRecommendedActionSummariesRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListRecommendedActionSummaries, request, handler, context);
  }

  /**
   * <p> Lists the recommended actions based that match specified filters. </p>
   *  <p>Management accounts and delegated administrators can retrieve
   * recommended actions that include associated member accounts. You can associate a
   * member account using <code>AssociateAccounts</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListRecommendedActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRecommendedActionsOutcome ListRecommendedActions(const Model::ListRecommendedActionsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRecommendedActions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRecommendedActionsRequestT = Model::ListRecommendedActionsRequest>
  Model::ListRecommendedActionsOutcomeCallable ListRecommendedActionsCallable(const ListRecommendedActionsRequestT& request = {}) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListRecommendedActions, request);
  }

  /**
   * An Async wrapper for ListRecommendedActions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListRecommendedActionsRequestT = Model::ListRecommendedActionsRequest>
  void ListRecommendedActionsAsync(const ListRecommendedActionsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const ListRecommendedActionsRequestT& request = {}) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListRecommendedActions, request, handler, context);
  }

  /**
   * <p> Lists the tags for a specified resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p> Initiates a rollback for a completed automation event. </p>
   * <p>Management accounts and delegated administrators can only initiate a rollback
   * for events belonging to associated member accounts. You can associate a member
   * account using <code>AssociateAccounts</code>.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/RollbackAutomationEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::RollbackAutomationEventOutcome RollbackAutomationEvent(const Model::RollbackAutomationEventRequest& request) const;

  /**
   * A Callable wrapper for RollbackAutomationEvent that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RollbackAutomationEventRequestT = Model::RollbackAutomationEventRequest>
  Model::RollbackAutomationEventOutcomeCallable RollbackAutomationEventCallable(const RollbackAutomationEventRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::RollbackAutomationEvent, request);
  }

  /**
   * An Async wrapper for RollbackAutomationEvent that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RollbackAutomationEventRequestT = Model::RollbackAutomationEventRequest>
  void RollbackAutomationEventAsync(const RollbackAutomationEventRequestT& request,
                                    const RollbackAutomationEventResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::RollbackAutomationEvent, request, handler, context);
  }

  /**
   * <p> Initiates a one-time, on-demand automation for the specified recommended
   * action. </p>  <p>Management accounts and delegated administrators can only
   * initiate recommended actions for associated member accounts. You can associate a
   * member account using <code>AssociateAccounts</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/StartAutomationEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::StartAutomationEventOutcome StartAutomationEvent(const Model::StartAutomationEventRequest& request) const;

  /**
   * A Callable wrapper for StartAutomationEvent that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartAutomationEventRequestT = Model::StartAutomationEventRequest>
  Model::StartAutomationEventOutcomeCallable StartAutomationEventCallable(const StartAutomationEventRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::StartAutomationEvent, request);
  }

  /**
   * An Async wrapper for StartAutomationEvent that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartAutomationEventRequestT = Model::StartAutomationEventRequest>
  void StartAutomationEventAsync(const StartAutomationEventRequestT& request, const StartAutomationEventResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::StartAutomationEvent, request, handler, context);
  }

  /**
   * <p> Adds tags to the specified resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::TagResource, request, handler, context);
  }

  /**
   * <p> Removes tags from the specified resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::UntagResource, request, handler, context);
  }

  /**
   * <p> Updates an existing automation rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/UpdateAutomationRule">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAutomationRuleOutcome UpdateAutomationRule(const Model::UpdateAutomationRuleRequest& request) const;

  /**
   * A Callable wrapper for UpdateAutomationRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAutomationRuleRequestT = Model::UpdateAutomationRuleRequest>
  Model::UpdateAutomationRuleOutcomeCallable UpdateAutomationRuleCallable(const UpdateAutomationRuleRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::UpdateAutomationRule, request);
  }

  /**
   * An Async wrapper for UpdateAutomationRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateAutomationRuleRequestT = Model::UpdateAutomationRuleRequest>
  void UpdateAutomationRuleAsync(const UpdateAutomationRuleRequestT& request, const UpdateAutomationRuleResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::UpdateAutomationRule, request, handler, context);
  }

  /**
   * <p>Updates your account’s Compute Optimizer Automation enrollment configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/UpdateEnrollmentConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateEnrollmentConfigurationOutcome UpdateEnrollmentConfiguration(
      const Model::UpdateEnrollmentConfigurationRequest& request) const;

  /**
   * A Callable wrapper for UpdateEnrollmentConfiguration that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateEnrollmentConfigurationRequestT = Model::UpdateEnrollmentConfigurationRequest>
  Model::UpdateEnrollmentConfigurationOutcomeCallable UpdateEnrollmentConfigurationCallable(
      const UpdateEnrollmentConfigurationRequestT& request) const {
    return SubmitCallable(&ComputeOptimizerAutomationClient::UpdateEnrollmentConfiguration, request);
  }

  /**
   * An Async wrapper for UpdateEnrollmentConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateEnrollmentConfigurationRequestT = Model::UpdateEnrollmentConfigurationRequest>
  void UpdateEnrollmentConfigurationAsync(const UpdateEnrollmentConfigurationRequestT& request,
                                          const UpdateEnrollmentConfigurationResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ComputeOptimizerAutomationClient::UpdateEnrollmentConfiguration, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ComputeOptimizerAutomationClient>;
  void init(const ComputeOptimizerAutomationClientConfiguration& clientConfiguration);

  ComputeOptimizerAutomationClientConfiguration m_clientConfiguration;
  std::shared_ptr<ComputeOptimizerAutomationEndpointProviderBase> m_endpointProvider;
};

}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
