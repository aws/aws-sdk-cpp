/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessToolConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessToolType.h>
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
 * <p>A tool available to the agent loop.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessTool">AWS
 * API Reference</a></p>
 */
class HarnessTool {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTool() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTool(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessTool& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of tool.</p>
   */
  inline HarnessToolType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(HarnessToolType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HarnessTool& WithType(HarnessToolType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique name for the tool. If not provided, a name will be inferred or
   * generated.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  HarnessTool& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tool-specific configuration.</p>
   */
  inline const HarnessToolConfiguration& GetConfig() const { return m_config; }
  inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
  template <typename ConfigT = HarnessToolConfiguration>
  void SetConfig(ConfigT&& value) {
    m_configHasBeenSet = true;
    m_config = std::forward<ConfigT>(value);
  }
  template <typename ConfigT = HarnessToolConfiguration>
  HarnessTool& WithConfig(ConfigT&& value) {
    SetConfig(std::forward<ConfigT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessToolType m_type{HarnessToolType::NOT_SET};

  Aws::String m_name;

  HarnessToolConfiguration m_config;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_configHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
