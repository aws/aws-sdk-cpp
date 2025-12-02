/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetOnlineEvaluationConfigRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetOnlineEvaluationConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOnlineEvaluationConfig"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The unique identifier of the online evaluation configuration to retrieve.
   * </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigId() const { return m_onlineEvaluationConfigId; }
  inline bool OnlineEvaluationConfigIdHasBeenSet() const { return m_onlineEvaluationConfigIdHasBeenSet; }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  void SetOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    m_onlineEvaluationConfigIdHasBeenSet = true;
    m_onlineEvaluationConfigId = std::forward<OnlineEvaluationConfigIdT>(value);
  }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  GetOnlineEvaluationConfigRequest& WithOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    SetOnlineEvaluationConfigId(std::forward<OnlineEvaluationConfigIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigId;
  bool m_onlineEvaluationConfigIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
