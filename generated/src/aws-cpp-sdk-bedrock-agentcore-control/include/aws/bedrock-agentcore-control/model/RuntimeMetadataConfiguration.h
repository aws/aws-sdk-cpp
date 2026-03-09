/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>Configuration for microVM metadata service settings.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RuntimeMetadataConfiguration">AWS
 * API Reference</a></p>
 */
class RuntimeMetadataConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeMetadataConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RuntimeMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables MMDSv2 (microVM Metadata Service Version 2) requirement for the agent
   * runtime. When set to <code>true</code>, the runtime microVM will only accept
   * MMDSv2 requests.</p>
   */
  inline bool GetRequireMMDSV2() const { return m_requireMMDSV2; }
  inline bool RequireMMDSV2HasBeenSet() const { return m_requireMMDSV2HasBeenSet; }
  inline void SetRequireMMDSV2(bool value) {
    m_requireMMDSV2HasBeenSet = true;
    m_requireMMDSV2 = value;
  }
  inline RuntimeMetadataConfiguration& WithRequireMMDSV2(bool value) {
    SetRequireMMDSV2(value);
    return *this;
  }
  ///@}
 private:
  bool m_requireMMDSV2{false};
  bool m_requireMMDSV2HasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
