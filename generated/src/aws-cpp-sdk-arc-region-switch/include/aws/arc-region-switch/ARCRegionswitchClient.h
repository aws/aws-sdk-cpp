/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchPaginationBase.h>
#include <aws/arc-region-switch/ARCRegionswitchServiceClientModel.h>
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace ARCRegionswitch {
/**
 * <p>Amazon Application Recovery Controller (ARC) Region switch helps you to
 * quickly and reliably shift traffic away from an impaired Amazon Web Services
 * Region to a healthy Region. With Region switch, you can create plans that define
 * the steps to shift traffic for your application from one Amazon Web Services
 * Region to another.</p> <p>Region switch provides a structured approach to
 * multi-Region failover, helping you to meet your recovery time objectives (RTOs)
 * and maintain business continuity during regional disruptions.</p> <p>For more
 * information, see <a
 * href="https://docs.aws.amazon.com/r53recovery/latest/dg/region-switch.html">Region
 * switch in ARC</a> in the <i>Amazon Application Recovery Controller User
 * Guide</i>.</p>
 */
class AWS_ARCREGIONSWITCH_API ARCRegionswitchClient : public Aws::Client::AWSJsonClient,
                                                      public Aws::Client::ClientWithAsyncTemplateMethods<ARCRegionswitchClient>,
                                                      public ARCRegionswitchPaginationBase<ARCRegionswitchClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ARCRegionswitchClientConfiguration ClientConfigurationType;
  typedef ARCRegionswitchEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ARCRegionswitchClient(const Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration =
                            Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration(),
                        std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ARCRegionswitchClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration =
                            Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ARCRegionswitchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<ARCRegionswitchEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration& clientConfiguration =
                            Aws::ARCRegionswitch::ARCRegionswitchClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ARCRegionswitchClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ARCRegionswitchClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ARCRegionswitchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ARCRegionswitchClient();

  /**
   * <p>Approves a step in a plan execution that requires manual approval. When you
   * create a plan, you can include approval steps that require manual intervention
   * before the execution can proceed. This operation allows you to provide that
   * approval.</p> <p>You must specify the plan ARN, execution ID, step name, and
   * approval status. You can also provide an optional comment explaining the
   * approval decision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ApprovePlanExecutionStep">AWS
   * API Reference</a></p>
   */
  virtual Model::ApprovePlanExecutionStepOutcome ApprovePlanExecutionStep(const Model::ApprovePlanExecutionStepRequest& request) const;

  /**
   * A Callable wrapper for ApprovePlanExecutionStep that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ApprovePlanExecutionStepRequestT = Model::ApprovePlanExecutionStepRequest>
  Model::ApprovePlanExecutionStepOutcomeCallable ApprovePlanExecutionStepCallable(const ApprovePlanExecutionStepRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ApprovePlanExecutionStep, request);
  }

  /**
   * An Async wrapper for ApprovePlanExecutionStep that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ApprovePlanExecutionStepRequestT = Model::ApprovePlanExecutionStepRequest>
  void ApprovePlanExecutionStepAsync(const ApprovePlanExecutionStepRequestT& request,
                                     const ApprovePlanExecutionStepResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ApprovePlanExecutionStep, request, handler, context);
  }

  /**
   * <p>Cancels an in-progress plan execution. This operation stops the execution of
   * the plan and prevents any further steps from being processed.</p> <p>You must
   * specify the plan ARN and execution ID. You can also provide an optional comment
   * explaining why the execution was canceled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/CancelPlanExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelPlanExecutionOutcome CancelPlanExecution(const Model::CancelPlanExecutionRequest& request) const;

  /**
   * A Callable wrapper for CancelPlanExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelPlanExecutionRequestT = Model::CancelPlanExecutionRequest>
  Model::CancelPlanExecutionOutcomeCallable CancelPlanExecutionCallable(const CancelPlanExecutionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::CancelPlanExecution, request);
  }

  /**
   * An Async wrapper for CancelPlanExecution that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CancelPlanExecutionRequestT = Model::CancelPlanExecutionRequest>
  void CancelPlanExecutionAsync(const CancelPlanExecutionRequestT& request, const CancelPlanExecutionResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::CancelPlanExecution, request, handler, context);
  }

  /**
   * <p>Creates a new Region switch plan. A plan defines the steps required to shift
   * traffic from one Amazon Web Services Region to another.</p> <p>You must specify
   * a name for the plan, the primary Region, and at least one additional Region. You
   * can also provide a description, execution role, recovery time objective,
   * associated alarms, triggers, and workflows that define the steps to execute
   * during a Region switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/CreatePlan">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePlanOutcome CreatePlan(const Model::CreatePlanRequest& request) const;

  /**
   * A Callable wrapper for CreatePlan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePlanRequestT = Model::CreatePlanRequest>
  Model::CreatePlanOutcomeCallable CreatePlanCallable(const CreatePlanRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::CreatePlan, request);
  }

  /**
   * An Async wrapper for CreatePlan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePlanRequestT = Model::CreatePlanRequest>
  void CreatePlanAsync(const CreatePlanRequestT& request, const CreatePlanResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::CreatePlan, request, handler, context);
  }

  /**
   * <p>Deletes a Region switch plan. You must specify the ARN of the plan to
   * delete.</p> <p>You cannot delete a plan that has an active execution in
   * progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/DeletePlan">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePlanOutcome DeletePlan(const Model::DeletePlanRequest& request) const;

  /**
   * A Callable wrapper for DeletePlan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePlanRequestT = Model::DeletePlanRequest>
  Model::DeletePlanOutcomeCallable DeletePlanCallable(const DeletePlanRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::DeletePlan, request);
  }

  /**
   * An Async wrapper for DeletePlan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePlanRequestT = Model::DeletePlanRequest>
  void DeletePlanAsync(const DeletePlanRequestT& request, const DeletePlanResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::DeletePlan, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a Region switch plan. You must specify
   * the ARN of the plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GetPlan">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPlanOutcome GetPlan(const Model::GetPlanRequest& request) const;

  /**
   * A Callable wrapper for GetPlan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPlanRequestT = Model::GetPlanRequest>
  Model::GetPlanOutcomeCallable GetPlanCallable(const GetPlanRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::GetPlan, request);
  }

  /**
   * An Async wrapper for GetPlan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPlanRequestT = Model::GetPlanRequest>
  void GetPlanAsync(const GetPlanRequestT& request, const GetPlanResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::GetPlan, request, handler, context);
  }

  /**
   * <p>Retrieves the evaluation status of a Region switch plan. The evaluation
   * status provides information about the last time the plan was evaluated and any
   * warnings or issues detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GetPlanEvaluationStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPlanEvaluationStatusOutcome GetPlanEvaluationStatus(const Model::GetPlanEvaluationStatusRequest& request) const;

  /**
   * A Callable wrapper for GetPlanEvaluationStatus that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetPlanEvaluationStatusRequestT = Model::GetPlanEvaluationStatusRequest>
  Model::GetPlanEvaluationStatusOutcomeCallable GetPlanEvaluationStatusCallable(const GetPlanEvaluationStatusRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::GetPlanEvaluationStatus, request);
  }

  /**
   * An Async wrapper for GetPlanEvaluationStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetPlanEvaluationStatusRequestT = Model::GetPlanEvaluationStatusRequest>
  void GetPlanEvaluationStatusAsync(const GetPlanEvaluationStatusRequestT& request,
                                    const GetPlanEvaluationStatusResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::GetPlanEvaluationStatus, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific plan execution. You must
   * specify the plan ARN and execution ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GetPlanExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPlanExecutionOutcome GetPlanExecution(const Model::GetPlanExecutionRequest& request) const;

  /**
   * A Callable wrapper for GetPlanExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetPlanExecutionRequestT = Model::GetPlanExecutionRequest>
  Model::GetPlanExecutionOutcomeCallable GetPlanExecutionCallable(const GetPlanExecutionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::GetPlanExecution, request);
  }

  /**
   * An Async wrapper for GetPlanExecution that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetPlanExecutionRequestT = Model::GetPlanExecutionRequest>
  void GetPlanExecutionAsync(const GetPlanExecutionRequestT& request, const GetPlanExecutionResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::GetPlanExecution, request, handler, context);
  }

  /**
   * <p>Retrieves information about a Region switch plan in a specific Amazon Web
   * Services Region. This operation is useful for getting Region-specific
   * information about a plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GetPlanInRegion">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPlanInRegionOutcome GetPlanInRegion(const Model::GetPlanInRegionRequest& request) const;

  /**
   * A Callable wrapper for GetPlanInRegion that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPlanInRegionRequestT = Model::GetPlanInRegionRequest>
  Model::GetPlanInRegionOutcomeCallable GetPlanInRegionCallable(const GetPlanInRegionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::GetPlanInRegion, request);
  }

  /**
   * An Async wrapper for GetPlanInRegion that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPlanInRegionRequestT = Model::GetPlanInRegionRequest>
  void GetPlanInRegionAsync(const GetPlanInRegionRequestT& request, const GetPlanInRegionResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::GetPlanInRegion, request, handler, context);
  }

  /**
   * <p>Lists the events that occurred during a plan execution. These events provide
   * a detailed timeline of the execution process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListPlanExecutionEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPlanExecutionEventsOutcome ListPlanExecutionEvents(const Model::ListPlanExecutionEventsRequest& request) const;

  /**
   * A Callable wrapper for ListPlanExecutionEvents that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPlanExecutionEventsRequestT = Model::ListPlanExecutionEventsRequest>
  Model::ListPlanExecutionEventsOutcomeCallable ListPlanExecutionEventsCallable(const ListPlanExecutionEventsRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ListPlanExecutionEvents, request);
  }

  /**
   * An Async wrapper for ListPlanExecutionEvents that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListPlanExecutionEventsRequestT = Model::ListPlanExecutionEventsRequest>
  void ListPlanExecutionEventsAsync(const ListPlanExecutionEventsRequestT& request,
                                    const ListPlanExecutionEventsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ListPlanExecutionEvents, request, handler, context);
  }

  /**
   * <p>Lists the executions of a Region switch plan. This operation returns
   * information about both current and historical executions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListPlanExecutions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPlanExecutionsOutcome ListPlanExecutions(const Model::ListPlanExecutionsRequest& request) const;

  /**
   * A Callable wrapper for ListPlanExecutions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPlanExecutionsRequestT = Model::ListPlanExecutionsRequest>
  Model::ListPlanExecutionsOutcomeCallable ListPlanExecutionsCallable(const ListPlanExecutionsRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ListPlanExecutions, request);
  }

  /**
   * An Async wrapper for ListPlanExecutions that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPlanExecutionsRequestT = Model::ListPlanExecutionsRequest>
  void ListPlanExecutionsAsync(const ListPlanExecutionsRequestT& request, const ListPlanExecutionsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ListPlanExecutions, request, handler, context);
  }

  /**
   * <p>Lists all Region switch plans in your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListPlans">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPlansOutcome ListPlans(const Model::ListPlansRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPlans that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPlansRequestT = Model::ListPlansRequest>
  Model::ListPlansOutcomeCallable ListPlansCallable(const ListPlansRequestT& request = {}) const {
    return SubmitCallable(&ARCRegionswitchClient::ListPlans, request);
  }

  /**
   * An Async wrapper for ListPlans that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPlansRequestT = Model::ListPlansRequest>
  void ListPlansAsync(const ListPlansResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListPlansRequestT& request = {}) const {
    return SubmitAsync(&ARCRegionswitchClient::ListPlans, request, handler, context);
  }

  /**
   * <p>Lists all Region switch plans in your Amazon Web Services account that are
   * available in the current Amazon Web Services Region.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListPlansInRegion">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPlansInRegionOutcome ListPlansInRegion(const Model::ListPlansInRegionRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPlansInRegion that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPlansInRegionRequestT = Model::ListPlansInRegionRequest>
  Model::ListPlansInRegionOutcomeCallable ListPlansInRegionCallable(const ListPlansInRegionRequestT& request = {}) const {
    return SubmitCallable(&ARCRegionswitchClient::ListPlansInRegion, request);
  }

  /**
   * An Async wrapper for ListPlansInRegion that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPlansInRegionRequestT = Model::ListPlansInRegionRequest>
  void ListPlansInRegionAsync(const ListPlansInRegionResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListPlansInRegionRequestT& request = {}) const {
    return SubmitAsync(&ARCRegionswitchClient::ListPlansInRegion, request, handler, context);
  }

  /**
   * <p>List the Amazon Route 53 health checks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListRoute53HealthChecks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRoute53HealthChecksOutcome ListRoute53HealthChecks(const Model::ListRoute53HealthChecksRequest& request) const;

  /**
   * A Callable wrapper for ListRoute53HealthChecks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRoute53HealthChecksRequestT = Model::ListRoute53HealthChecksRequest>
  Model::ListRoute53HealthChecksOutcomeCallable ListRoute53HealthChecksCallable(const ListRoute53HealthChecksRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ListRoute53HealthChecks, request);
  }

  /**
   * An Async wrapper for ListRoute53HealthChecks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListRoute53HealthChecksRequestT = Model::ListRoute53HealthChecksRequest>
  void ListRoute53HealthChecksAsync(const ListRoute53HealthChecksRequestT& request,
                                    const ListRoute53HealthChecksResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ListRoute53HealthChecks, request, handler, context);
  }

  /**
   * <p>List the Amazon Route 53 health checks in a specific Amazon Web Services
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListRoute53HealthChecksInRegion">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRoute53HealthChecksInRegionOutcome ListRoute53HealthChecksInRegion(
      const Model::ListRoute53HealthChecksInRegionRequest& request) const;

  /**
   * A Callable wrapper for ListRoute53HealthChecksInRegion that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListRoute53HealthChecksInRegionRequestT = Model::ListRoute53HealthChecksInRegionRequest>
  Model::ListRoute53HealthChecksInRegionOutcomeCallable ListRoute53HealthChecksInRegionCallable(
      const ListRoute53HealthChecksInRegionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ListRoute53HealthChecksInRegion, request);
  }

  /**
   * An Async wrapper for ListRoute53HealthChecksInRegion that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListRoute53HealthChecksInRegionRequestT = Model::ListRoute53HealthChecksInRegionRequest>
  void ListRoute53HealthChecksInRegionAsync(const ListRoute53HealthChecksInRegionRequestT& request,
                                            const ListRoute53HealthChecksInRegionResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ListRoute53HealthChecksInRegion, request, handler, context);
  }

  /**
   * <p>Lists the tags attached to a Region switch resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Starts the execution of a Region switch plan. You can execute a plan in
   * either <code>graceful</code> or <code>ungraceful</code> mode.</p> <p>Specifing
   * <code>ungraceful</code> mode either changes the behavior of the execution blocks
   * in a workflow or skips specific execution blocks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/StartPlanExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::StartPlanExecutionOutcome StartPlanExecution(const Model::StartPlanExecutionRequest& request) const;

  /**
   * A Callable wrapper for StartPlanExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartPlanExecutionRequestT = Model::StartPlanExecutionRequest>
  Model::StartPlanExecutionOutcomeCallable StartPlanExecutionCallable(const StartPlanExecutionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::StartPlanExecution, request);
  }

  /**
   * An Async wrapper for StartPlanExecution that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartPlanExecutionRequestT = Model::StartPlanExecutionRequest>
  void StartPlanExecutionAsync(const StartPlanExecutionRequestT& request, const StartPlanExecutionResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::StartPlanExecution, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a Region switch resource. You can assign metadata to
   * your resources in the form of tags, which are key-value pairs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a Region switch resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates an existing Region switch plan. You can modify the plan's
   * description, workflows, execution role, recovery time objective, associated
   * alarms, and triggers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/UpdatePlan">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePlanOutcome UpdatePlan(const Model::UpdatePlanRequest& request) const;

  /**
   * A Callable wrapper for UpdatePlan that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePlanRequestT = Model::UpdatePlanRequest>
  Model::UpdatePlanOutcomeCallable UpdatePlanCallable(const UpdatePlanRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::UpdatePlan, request);
  }

  /**
   * An Async wrapper for UpdatePlan that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePlanRequestT = Model::UpdatePlanRequest>
  void UpdatePlanAsync(const UpdatePlanRequestT& request, const UpdatePlanResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::UpdatePlan, request, handler, context);
  }

  /**
   * <p>Updates an in-progress plan execution. This operation allows you to modify
   * certain aspects of the execution, such as adding a comment or changing the
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/UpdatePlanExecution">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePlanExecutionOutcome UpdatePlanExecution(const Model::UpdatePlanExecutionRequest& request) const;

  /**
   * A Callable wrapper for UpdatePlanExecution that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdatePlanExecutionRequestT = Model::UpdatePlanExecutionRequest>
  Model::UpdatePlanExecutionOutcomeCallable UpdatePlanExecutionCallable(const UpdatePlanExecutionRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::UpdatePlanExecution, request);
  }

  /**
   * An Async wrapper for UpdatePlanExecution that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdatePlanExecutionRequestT = Model::UpdatePlanExecutionRequest>
  void UpdatePlanExecutionAsync(const UpdatePlanExecutionRequestT& request, const UpdatePlanExecutionResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::UpdatePlanExecution, request, handler, context);
  }

  /**
   * <p>Updates a specific step in an in-progress plan execution. This operation
   * allows you to modify the step's comment or action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/UpdatePlanExecutionStep">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePlanExecutionStepOutcome UpdatePlanExecutionStep(const Model::UpdatePlanExecutionStepRequest& request) const;

  /**
   * A Callable wrapper for UpdatePlanExecutionStep that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdatePlanExecutionStepRequestT = Model::UpdatePlanExecutionStepRequest>
  Model::UpdatePlanExecutionStepOutcomeCallable UpdatePlanExecutionStepCallable(const UpdatePlanExecutionStepRequestT& request) const {
    return SubmitCallable(&ARCRegionswitchClient::UpdatePlanExecutionStep, request);
  }

  /**
   * An Async wrapper for UpdatePlanExecutionStep that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdatePlanExecutionStepRequestT = Model::UpdatePlanExecutionStepRequest>
  void UpdatePlanExecutionStepAsync(const UpdatePlanExecutionStepRequestT& request,
                                    const UpdatePlanExecutionStepResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ARCRegionswitchClient::UpdatePlanExecutionStep, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ARCRegionswitchEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ARCRegionswitchClient>;
  void init(const ARCRegionswitchClientConfiguration& clientConfiguration);

  ARCRegionswitchClientConfiguration m_clientConfiguration;
  std::shared_ptr<ARCRegionswitchEndpointProviderBase> m_endpointProvider;
};

}  // namespace ARCRegionswitch
}  // namespace Aws
