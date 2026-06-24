/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>A reference to a specific result item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveCitationReference">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveCitationReference {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitationReference() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitationReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCitationReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Index into the results array on the same event.</p>
   */
  inline int GetResultIndex() const { return m_resultIndex; }
  inline bool ResultIndexHasBeenSet() const { return m_resultIndexHasBeenSet; }
  inline void SetResultIndex(int value) {
    m_resultIndexHasBeenSet = true;
    m_resultIndex = value;
  }
  inline AgenticRetrieveCitationReference& WithResultIndex(int value) {
    SetResultIndex(value);
    return *this;
  }
  ///@}
 private:
  int m_resultIndex{0};
  bool m_resultIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
