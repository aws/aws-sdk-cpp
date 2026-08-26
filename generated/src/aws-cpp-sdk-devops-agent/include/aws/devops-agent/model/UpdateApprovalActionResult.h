/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ApprovalStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Response structure for UpdateApprovalAction. Reports the post-submission
 * lifecycle status of the approval request and, when applicable, the absolute
 * expiry timestamp. The status is a lifecycle state distinct from the action verb
 * — an APPROVED submission transitions the request to APPROVED status (live,
 * redeemable); a REJECTED submission transitions it to REJECTED status
 * (terminal).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateApprovalActionResponse">AWS
 * API Reference</a></p>
 */
class UpdateApprovalActionResult {
 public:
  AWS_DEVOPSAGENT_API UpdateApprovalActionResult() = default;
  AWS_DEVOPSAGENT_API UpdateApprovalActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API UpdateApprovalActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Identifier of the approval request that was resolved. Echoed back so the
   * client can correlate the response with the request.</p>
   */
  inline const Aws::String& GetApprovalId() const { return m_approvalId; }
  template <typename ApprovalIdT = Aws::String>
  void SetApprovalId(ApprovalIdT&& value) {
    m_approvalIdHasBeenSet = true;
    m_approvalId = std::forward<ApprovalIdT>(value);
  }
  template <typename ApprovalIdT = Aws::String>
  UpdateApprovalActionResult& WithApprovalId(ApprovalIdT&& value) {
    SetApprovalId(std::forward<ApprovalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Lifecycle status of the approval request immediately after submission.
   * Expected post-submission states are APPROVED (when the action is APPROVED) or
   * REJECTED (when the action is REJECTED); PENDING is not returned from this
   * operation, and REVOKED and REDEEMED are reachable only via subsequent reads.</p>
   */
  inline ApprovalStatus GetStatus() const { return m_status; }
  inline void SetStatus(ApprovalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateApprovalActionResult& WithStatus(ApprovalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Absolute timestamp at which the approval expires. Set when status is APPROVED
   * (computed as the submission time plus ttlSeconds); absent when status is
   * REJECTED.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  UpdateApprovalActionResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
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
  UpdateApprovalActionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_approvalId;

  ApprovalStatus m_status{ApprovalStatus::NOT_SET};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_approvalIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
