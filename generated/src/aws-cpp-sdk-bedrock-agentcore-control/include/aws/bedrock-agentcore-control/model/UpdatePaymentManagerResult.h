/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentManagerStatus.h>
#include <aws/bedrock-agentcore-control/model/PaymentsAuthorizerType.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class UpdatePaymentManagerResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePaymentManagerResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePaymentManagerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePaymentManagerResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerArn() const { return m_paymentManagerArn; }
  template <typename PaymentManagerArnT = Aws::String>
  void SetPaymentManagerArn(PaymentManagerArnT&& value) {
    m_paymentManagerArnHasBeenSet = true;
    m_paymentManagerArn = std::forward<PaymentManagerArnT>(value);
  }
  template <typename PaymentManagerArnT = Aws::String>
  UpdatePaymentManagerResult& WithPaymentManagerArn(PaymentManagerArnT&& value) {
    SetPaymentManagerArn(std::forward<PaymentManagerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the updated payment manager.</p>
   */
  inline const Aws::String& GetPaymentManagerId() const { return m_paymentManagerId; }
  template <typename PaymentManagerIdT = Aws::String>
  void SetPaymentManagerId(PaymentManagerIdT&& value) {
    m_paymentManagerIdHasBeenSet = true;
    m_paymentManagerId = std::forward<PaymentManagerIdT>(value);
  }
  template <typename PaymentManagerIdT = Aws::String>
  UpdatePaymentManagerResult& WithPaymentManagerId(PaymentManagerIdT&& value) {
    SetPaymentManagerId(std::forward<PaymentManagerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the updated payment manager.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdatePaymentManagerResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of authorizer for the updated payment manager.</p>
   */
  inline PaymentsAuthorizerType GetAuthorizerType() const { return m_authorizerType; }
  inline void SetAuthorizerType(PaymentsAuthorizerType value) {
    m_authorizerTypeHasBeenSet = true;
    m_authorizerType = value;
  }
  inline UpdatePaymentManagerResult& WithAuthorizerType(PaymentsAuthorizerType value) {
    SetAuthorizerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role associated with the updated
   * payment manager.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdatePaymentManagerResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    m_workloadIdentityDetailsHasBeenSet = true;
    m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value);
  }
  template <typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
  UpdatePaymentManagerResult& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) {
    SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the payment manager was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  UpdatePaymentManagerResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the updated payment manager. Possible values include
   * <code>CREATING</code>, <code>READY</code>, <code>UPDATING</code>,
   * <code>DELETING</code>, <code>CREATE_FAILED</code>, <code>UPDATE_FAILED</code>,
   * and <code>DELETE_FAILED</code>.</p>
   */
  inline PaymentManagerStatus GetStatus() const { return m_status; }
  inline void SetStatus(PaymentManagerStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdatePaymentManagerResult& WithStatus(PaymentManagerStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdatePaymentManagerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentManagerArn;

  Aws::String m_paymentManagerId;

  Aws::String m_name;

  PaymentsAuthorizerType m_authorizerType{PaymentsAuthorizerType::NOT_SET};

  Aws::String m_roleArn;

  WorkloadIdentityDetails m_workloadIdentityDetails;

  Aws::Utils::DateTime m_lastUpdatedAt{};

  PaymentManagerStatus m_status{PaymentManagerStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentManagerArnHasBeenSet = false;
  bool m_paymentManagerIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_authorizerTypeHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_workloadIdentityDetailsHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
