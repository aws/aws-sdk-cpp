/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The source identifying the inference connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InferenceConnectorSource">AWS
 * API Reference</a></p>
 */
class InferenceConnectorSource {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConnectorSource() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConnectorSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InferenceConnectorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier for the inference connector (for example,
   * <code>bedrock-mantle</code>, <code>openai</code>, or
   * <code>anthropic</code>).</p>
   */
  inline const Aws::String& GetConnectorId() const { return m_connectorId; }
  inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
  template <typename ConnectorIdT = Aws::String>
  void SetConnectorId(ConnectorIdT&& value) {
    m_connectorIdHasBeenSet = true;
    m_connectorId = std::forward<ConnectorIdT>(value);
  }
  template <typename ConnectorIdT = Aws::String>
  InferenceConnectorSource& WithConnectorId(ConnectorIdT&& value) {
    SetConnectorId(std::forward<ConnectorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectorId;
  bool m_connectorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
