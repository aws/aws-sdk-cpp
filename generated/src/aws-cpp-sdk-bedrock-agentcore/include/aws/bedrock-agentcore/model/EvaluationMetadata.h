/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SessionMetadataShape.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Metadata for the evaluation, including session-specific ground truth
 * data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationMetadata">AWS
 * API Reference</a></p>
 */
class EvaluationMetadata {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationMetadata() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of session metadata entries containing ground truth data and test
   * scenario identifiers for specific sessions.</p>
   */
  inline const Aws::Vector<SessionMetadataShape>& GetSessionMetadata() const { return m_sessionMetadata; }
  inline bool SessionMetadataHasBeenSet() const { return m_sessionMetadataHasBeenSet; }
  template <typename SessionMetadataT = Aws::Vector<SessionMetadataShape>>
  void SetSessionMetadata(SessionMetadataT&& value) {
    m_sessionMetadataHasBeenSet = true;
    m_sessionMetadata = std::forward<SessionMetadataT>(value);
  }
  template <typename SessionMetadataT = Aws::Vector<SessionMetadataShape>>
  EvaluationMetadata& WithSessionMetadata(SessionMetadataT&& value) {
    SetSessionMetadata(std::forward<SessionMetadataT>(value));
    return *this;
  }
  template <typename SessionMetadataT = SessionMetadataShape>
  EvaluationMetadata& AddSessionMetadata(SessionMetadataT&& value) {
    m_sessionMetadataHasBeenSet = true;
    m_sessionMetadata.emplace_back(std::forward<SessionMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SessionMetadataShape> m_sessionMetadata;
  bool m_sessionMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
