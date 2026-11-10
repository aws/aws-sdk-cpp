/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HttpPostLifecycleHookAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The action that a lifecycle hook runs. Specify exactly one member. Currently,
 * <code>httpPost</code> is the only supported action.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LifecycleHookAction">AWS
 * API Reference</a></p>
 */
class LifecycleHookAction {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LifecycleHookAction() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LifecycleHookAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LifecycleHookAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sends an HTTP <code>POST</code> request to your agent's container on the
   * specified port and path to run the hook. The hook succeeds if your container
   * returns a <code>2xx</code> response. The hook fails if your container returns
   * any other response or doesn't respond before the hook times out.</p>
   */
  inline const HttpPostLifecycleHookAction& GetHttpPost() const { return m_httpPost; }
  inline bool HttpPostHasBeenSet() const { return m_httpPostHasBeenSet; }
  template <typename HttpPostT = HttpPostLifecycleHookAction>
  void SetHttpPost(HttpPostT&& value) {
    m_httpPostHasBeenSet = true;
    m_httpPost = std::forward<HttpPostT>(value);
  }
  template <typename HttpPostT = HttpPostLifecycleHookAction>
  LifecycleHookAction& WithHttpPost(HttpPostT&& value) {
    SetHttpPost(std::forward<HttpPostT>(value));
    return *this;
  }
  ///@}
 private:
  HttpPostLifecycleHookAction m_httpPost;
  bool m_httpPostHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
