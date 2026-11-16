/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectSchedulingPaginationBase.h>
#include <aws/connectscheduling/ConnectSchedulingServiceClientModel.h>
#include <aws/connectscheduling/ConnectSchedulingWaiter.h>
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws {
namespace ConnectScheduling {
/**
 * <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Operations_Amazon_Connect_Scheduling.html">Scheduling
 * actions</a> </p> </li> <li> <p> <a
 * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Types_Amazon_Connect_Scheduling.html">Scheduling
 * data types</a> </p> </li> </ul> <p>Use the Amazon Connect Scheduling API to work
 * programmatically with Connect Customer forecasting, capacity planning, and
 * scheduling, and to integrate these capabilities with your own systems. In the
 * Connect Customer admin website, you use them to forecast contact volume, plan
 * capacity, and create and manage agent schedules.</p> <p>For more information,
 * see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/forecasting-capacity-planning-scheduling.html">Forecasting
 * &amp; agent scheduling</a> in the <i>Connect Customer Administrator
 * Guide</i>.</p>
 */
class AWS_CONNECTSCHEDULING_API ConnectSchedulingClient : public Aws::Client::AWSJsonClient,
                                                          public Aws::Client::ClientWithAsyncTemplateMethods<ConnectSchedulingClient>,
                                                          public ConnectSchedulingPaginationBase<ConnectSchedulingClient>,
                                                          public ConnectSchedulingWaiter<ConnectSchedulingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef ConnectSchedulingClientConfiguration ClientConfigurationType;
  typedef ConnectSchedulingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ConnectSchedulingClient(const Aws::ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration =
                              Aws::ConnectScheduling::ConnectSchedulingClientConfiguration(),
                          std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ConnectSchedulingClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration =
                              Aws::ConnectScheduling::ConnectSchedulingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ConnectSchedulingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<ConnectSchedulingEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::ConnectScheduling::ConnectSchedulingClientConfiguration& clientConfiguration =
                              Aws::ConnectScheduling::ConnectSchedulingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  ConnectSchedulingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  ConnectSchedulingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  ConnectSchedulingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~ConnectSchedulingClient();

  /**
   * <p>Approves a time off request. Evaluates agent time off balances and group time
   * off allowances before approving. <code>RuleFailureAction</code> controls what
   * happens when these evaluations fail. The request is rejected with
   * <code>CONFLICTING_TIME_OFF_REQUEST</code> if it overlaps another time off
   * request for the user that is <code>APPROVED</code> or being approved.</p> <p>The
   * time off request is processed asynchronously, so a successful call doesn't
   * indicate the final status. Read the resulting status with
   * <code>GetTimeOff</code> or from the time off state-change events.</p>
   * <p>Approving an <code>APPROVED</code> request succeeds without a change.
   * Approving a <code>REJECTED</code> request evaluates the rules again, so it can
   * end <code>APPROVED</code> or <code>REJECTED</code>, and repeating the call can
   * give a different result. Check the status with <code>GetTimeOff</code> before
   * you retry.</p> <p>Returns <code>ConflictException</code> if the request is
   * <code>PENDING</code> or <code>CANCELLED</code>. <code>PENDING</code> means
   * Connect Customer is still processing the request asynchronously. Wait until
   * <code>GetTimeOff</code> returns a status other than <code>PENDING</code>, and
   * then retry.</p>  <p>When the approval succeeds, Connect Customer
   * cancels any overtime or voluntary time off activity that overlaps the approved
   * window.</p>   <p>Connect Customer doesn't check whether the
   * principal that calls this operation supervises the user. The staffing group's
   * approval settings also don't apply. IAM permissions are the only control. If you
   * allow a principal to call this operation, that principal can send
   * <code>RuleFailureAction</code> <code>OVERRIDE</code> and approve a request past
   * failed rules. Grant permission for this operation only to principals that you
   * trust to override time off rules.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/ApproveTimeOff">AWS
   * API Reference</a></p>
   */
  virtual Model::ApproveTimeOffOutcome ApproveTimeOff(const Model::ApproveTimeOffRequest& request) const;

  /**
   * A Callable wrapper for ApproveTimeOff that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ApproveTimeOffRequestT = Model::ApproveTimeOffRequest>
  Model::ApproveTimeOffOutcomeCallable ApproveTimeOffCallable(const ApproveTimeOffRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::ApproveTimeOff, request);
  }

  /**
   * An Async wrapper for ApproveTimeOff that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ApproveTimeOffRequestT = Model::ApproveTimeOffRequest>
  void ApproveTimeOffAsync(const ApproveTimeOffRequestT& request, const ApproveTimeOffResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::ApproveTimeOff, request, handler, context);
  }

  /**
   * <p>Cancels a time off request.</p> <p>Cancelling a <code>CANCELLED</code>
   * request succeeds without a change. Returns <code>ConflictException</code> if the
   * request is <code>PENDING</code>, which means Connect Customer is still
   * processing the request asynchronously. Wait until <code>GetTimeOff</code>
   * returns a status other than <code>PENDING</code>, and then retry.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/CancelTimeOff">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelTimeOffOutcome CancelTimeOff(const Model::CancelTimeOffRequest& request) const;

  /**
   * A Callable wrapper for CancelTimeOff that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CancelTimeOffRequestT = Model::CancelTimeOffRequest>
  Model::CancelTimeOffOutcomeCallable CancelTimeOffCallable(const CancelTimeOffRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::CancelTimeOff, request);
  }

  /**
   * An Async wrapper for CancelTimeOff that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CancelTimeOffRequestT = Model::CancelTimeOffRequest>
  void CancelTimeOffAsync(const CancelTimeOffRequestT& request, const CancelTimeOffResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::CancelTimeOff, request, handler, context);
  }

  /**
   * <p>Creates a time off request for a user. You don't provide a status, because
   * Connect Customer owns the request lifecycle. To get the decided status, call
   * <code>GetTimeOff</code> or use the time off state-change events.</p> <p>
   * <code>ApprovalType</code> controls who approves the request. You can specify one
   * of the following values:</p> <ul> <li> <p> <code>AWAIT_APPROVAL</code>: the
   * request waits in <code>AWAITING_APPROVAL</code> until you call
   * <code>ApproveTimeOff</code> or <code>RejectTimeOff</code>. Rule evaluation and
   * the overlap check run at approval, not at creation. A waiting request doesn't
   * reserve its window, so another request for the same window can be approved
   * first.</p> </li> <li> <p> <code>AUTOMATIC</code>: Connect Customer evaluates the
   * rules (time off balances and group allowances) and decides the request. The
   * request can be <code>PENDING</code> while Connect Customer decides, and then
   * ends <code>APPROVED</code> or <code>REJECTED</code>. If it overlaps another time
   * off request for the user, the requested time off ends <code>REJECTED</code> with
   * <code>CONFLICTING_TIME_OFF_REQUEST</code>. It also ends <code>REJECTED</code> if
   * it overlaps overtime or voluntary time off. If the whole window is in the past,
   * Connect Customer records failed rules as <code>WARNING</code> and doesn't reject
   * the request, whatever the <code>RuleFailureAction</code>.</p> </li> </ul> <p>The
   * staffing group's <i>Supervisor approval needed</i> setting doesn't apply to this
   * operation. <code>ApprovalType</code> alone decides whether the request waits for
   * approval. The operation fails with <code>ValidationException</code> on
   * <code>UserId</code> in the following cases:</p> <ul> <li> <p>The user isn't in a
   * staffing group, or the staffing group isn't associated with a forecast
   * group.</p> </li> <li> <p>Time off isn't <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-to.html">enabled</a>
   * for the user's staffing group, or the user's staff rules don't allow time
   * off.</p> </li> </ul> <p>To change the dates of a request, cancel it with
   * <code>CancelTimeOff</code> and create a new request. The new request has a new
   * <code>TimeOffId</code>.</p>  <p>Connect Customer doesn't check whether the
   * principal that calls this operation supervises the user. The staffing group's
   * approval settings also don't apply. IAM permissions are the only control. If you
   * allow a principal to call this operation, that principal can send
   * <code>ApprovalType</code> <code>AUTOMATIC</code> with
   * <code>RuleFailureAction</code> <code>OVERRIDE</code> and approve a request past
   * failed rules. Grant permission for this operation only to principals that you
   * trust to override time off rules.</p>  <p>For information about time off
   * in the Connect Customer admin website, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/scheduling-time-off.html">Time
   * off management</a> in the <i>Connect Customer Administrator
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/CreateTimeOff">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTimeOffOutcome CreateTimeOff(const Model::CreateTimeOffRequest& request) const;

  /**
   * A Callable wrapper for CreateTimeOff that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateTimeOffRequestT = Model::CreateTimeOffRequest>
  Model::CreateTimeOffOutcomeCallable CreateTimeOffCallable(const CreateTimeOffRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::CreateTimeOff, request);
  }

  /**
   * An Async wrapper for CreateTimeOff that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateTimeOffRequestT = Model::CreateTimeOffRequest>
  void CreateTimeOffAsync(const CreateTimeOffRequestT& request, const CreateTimeOffResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::CreateTimeOff, request, handler, context);
  }

  /**
   * <p>Returns a time off request, including its current status and validation
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/GetTimeOff">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTimeOffOutcome GetTimeOff(const Model::GetTimeOffRequest& request) const;

  /**
   * A Callable wrapper for GetTimeOff that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTimeOffRequestT = Model::GetTimeOffRequest>
  Model::GetTimeOffOutcomeCallable GetTimeOffCallable(const GetTimeOffRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::GetTimeOff, request);
  }

  /**
   * An Async wrapper for GetTimeOff that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTimeOffRequestT = Model::GetTimeOffRequest>
  void GetTimeOffAsync(const GetTimeOffRequestT& request, const GetTimeOffResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::GetTimeOff, request, handler, context);
  }

  /**
   * <p>Sets the time off balance for one user and shift activity. The value replaces
   * the existing balance rather than adjusting it, so you can safely retry the call.
   * This operation can't remove a balance. To remove one, upload a blank balance in
   * the Connect Customer admin website. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/upload-timeoff-balance.html">Import
   * an agent's time off balance</a> in the <i>Connect Customer Administrator
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/PutTimeOffBalance">AWS
   * API Reference</a></p>
   */
  virtual Model::PutTimeOffBalanceOutcome PutTimeOffBalance(const Model::PutTimeOffBalanceRequest& request) const;

  /**
   * A Callable wrapper for PutTimeOffBalance that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutTimeOffBalanceRequestT = Model::PutTimeOffBalanceRequest>
  Model::PutTimeOffBalanceOutcomeCallable PutTimeOffBalanceCallable(const PutTimeOffBalanceRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::PutTimeOffBalance, request);
  }

  /**
   * An Async wrapper for PutTimeOffBalance that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PutTimeOffBalanceRequestT = Model::PutTimeOffBalanceRequest>
  void PutTimeOffBalanceAsync(const PutTimeOffBalanceRequestT& request, const PutTimeOffBalanceResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::PutTimeOffBalance, request, handler, context);
  }

  /**
   * <p>Rejects a time off request.</p> <p>Rejecting a <code>REJECTED</code> request
   * succeeds without a change. Returns <code>ConflictException</code> if the request
   * is <code>PENDING</code> or <code>CANCELLED</code>. <code>PENDING</code> means
   * Connect Customer is still processing the request asynchronously. Wait until
   * <code>GetTimeOff</code> returns a status other than <code>PENDING</code>, and
   * then retry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/RejectTimeOff">AWS
   * API Reference</a></p>
   */
  virtual Model::RejectTimeOffOutcome RejectTimeOff(const Model::RejectTimeOffRequest& request) const;

  /**
   * A Callable wrapper for RejectTimeOff that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename RejectTimeOffRequestT = Model::RejectTimeOffRequest>
  Model::RejectTimeOffOutcomeCallable RejectTimeOffCallable(const RejectTimeOffRequestT& request) const {
    return SubmitCallable(&ConnectSchedulingClient::RejectTimeOff, request);
  }

  /**
   * An Async wrapper for RejectTimeOff that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename RejectTimeOffRequestT = Model::RejectTimeOffRequest>
  void RejectTimeOffAsync(const RejectTimeOffRequestT& request, const RejectTimeOffResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&ConnectSchedulingClient::RejectTimeOff, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<ConnectSchedulingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectSchedulingClient>;
  void init(const ConnectSchedulingClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, ConnectSchedulingError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  ConnectSchedulingClientConfiguration m_clientConfiguration;
  std::shared_ptr<ConnectSchedulingEndpointProviderBase> m_endpointProvider;
};

}  // namespace ConnectScheduling
}  // namespace Aws
