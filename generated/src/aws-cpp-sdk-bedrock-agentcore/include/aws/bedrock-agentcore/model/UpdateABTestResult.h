/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ABTestExecutionStatus.h>
#include <aws/bedrock-agentcore/model/ABTestStatus.h>
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
namespace BedrockAgentCore {
namespace Model {
class UpdateABTestResult {
 public:
  AWS_BEDROCKAGENTCORE_API UpdateABTestResult() = default;
  AWS_BEDROCKAGENTCORE_API UpdateABTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API UpdateABTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the updated A/B test.</p>
   */
  inline const Aws::String& GetAbTestId() const { return m_abTestId; }
  template <typename AbTestIdT = Aws::String>
  void SetAbTestId(AbTestIdT&& value) {
    m_abTestIdHasBeenSet = true;
    m_abTestId = std::forward<AbTestIdT>(value);
  }
  template <typename AbTestIdT = Aws::String>
  UpdateABTestResult& WithAbTestId(AbTestIdT&& value) {
    SetAbTestId(std::forward<AbTestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated A/B test.</p>
   */
  inline const Aws::String& GetAbTestArn() const { return m_abTestArn; }
  template <typename AbTestArnT = Aws::String>
  void SetAbTestArn(AbTestArnT&& value) {
    m_abTestArnHasBeenSet = true;
    m_abTestArn = std::forward<AbTestArnT>(value);
  }
  template <typename AbTestArnT = Aws::String>
  UpdateABTestResult& WithAbTestArn(AbTestArnT&& value) {
    SetAbTestArn(std::forward<AbTestArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the A/B test.</p>
   */
  inline ABTestStatus GetStatus() const { return m_status; }
  inline void SetStatus(ABTestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateABTestResult& WithStatus(ABTestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The execution status of the A/B test.</p>
   */
  inline ABTestExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline void SetExecutionStatus(ABTestExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline UpdateABTestResult& WithExecutionStatus(ABTestExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the A/B test was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateABTestResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  UpdateABTestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_abTestId;

  Aws::String m_abTestArn;

  ABTestStatus m_status{ABTestStatus::NOT_SET};

  ABTestExecutionStatus m_executionStatus{ABTestExecutionStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_abTestIdHasBeenSet = false;
  bool m_abTestArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
