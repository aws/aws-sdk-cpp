/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MetadataValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Right expression of the <code>eventMetadata</code>filter.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RightExpression">AWS
 * API Reference</a></p>
 */
class RightExpression {
 public:
  AWS_BEDROCKAGENTCORE_API RightExpression() = default;
  AWS_BEDROCKAGENTCORE_API RightExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RightExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Value associated with the key in <code>eventMetadata</code>.</p>
   */
  inline const MetadataValue& GetMetadataValue() const { return m_metadataValue; }
  inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }
  template <typename MetadataValueT = MetadataValue>
  void SetMetadataValue(MetadataValueT&& value) {
    m_metadataValueHasBeenSet = true;
    m_metadataValue = std::forward<MetadataValueT>(value);
  }
  template <typename MetadataValueT = MetadataValue>
  RightExpression& WithMetadataValue(MetadataValueT&& value) {
    SetMetadataValue(std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  MetadataValue m_metadataValue;
  bool m_metadataValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
