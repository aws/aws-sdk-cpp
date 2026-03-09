/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ContentLevel.h>
#include <aws/bedrock-agentcore-control/model/ContentType.h>

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
 * <p>Defines what content to stream and at what level of detail.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ContentConfiguration">AWS
 * API Reference</a></p>
 */
class ContentConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ContentConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ContentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ContentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of content to stream.</p>
   */
  inline ContentType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ContentType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ContentConfiguration& WithType(ContentType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Level of detail for streamed content.</p>
   */
  inline ContentLevel GetLevel() const { return m_level; }
  inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
  inline void SetLevel(ContentLevel value) {
    m_levelHasBeenSet = true;
    m_level = value;
  }
  inline ContentConfiguration& WithLevel(ContentLevel value) {
    SetLevel(value);
    return *this;
  }
  ///@}
 private:
  ContentType m_type{ContentType::NOT_SET};

  ContentLevel m_level{ContentLevel::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_levelHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
