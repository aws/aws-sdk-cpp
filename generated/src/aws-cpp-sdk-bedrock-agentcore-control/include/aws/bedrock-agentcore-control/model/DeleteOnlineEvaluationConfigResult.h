/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigStatus.h>
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
class DeleteOnlineEvaluationConfigResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteOnlineEvaluationConfigResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DeleteOnlineEvaluationConfigResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API DeleteOnlineEvaluationConfigResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the deleted online evaluation
   * configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  DeleteOnlineEvaluationConfigResult& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the deleted online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigId() const { return m_onlineEvaluationConfigId; }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  void SetOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    m_onlineEvaluationConfigIdHasBeenSet = true;
    m_onlineEvaluationConfigId = std::forward<OnlineEvaluationConfigIdT>(value);
  }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  DeleteOnlineEvaluationConfigResult& WithOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    SetOnlineEvaluationConfigId(std::forward<OnlineEvaluationConfigIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the online evaluation configuration deletion operation. </p>
   */
  inline OnlineEvaluationConfigStatus GetStatus() const { return m_status; }
  inline void SetStatus(OnlineEvaluationConfigStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteOnlineEvaluationConfigResult& WithStatus(OnlineEvaluationConfigStatus value) {
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
  DeleteOnlineEvaluationConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;

  Aws::String m_onlineEvaluationConfigId;
  bool m_onlineEvaluationConfigIdHasBeenSet = false;

  OnlineEvaluationConfigStatus m_status{OnlineEvaluationConfigStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
