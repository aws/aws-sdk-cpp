/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>Token usage counts for the invocation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessTokenUsage">AWS
 * API Reference</a></p>
 */
class HarnessTokenUsage {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessTokenUsage() = default;
  AWS_BEDROCKAGENTCORE_API HarnessTokenUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessTokenUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of input tokens consumed.</p>
   */
  inline int GetInputTokens() const { return m_inputTokens; }
  inline bool InputTokensHasBeenSet() const { return m_inputTokensHasBeenSet; }
  inline void SetInputTokens(int value) {
    m_inputTokensHasBeenSet = true;
    m_inputTokens = value;
  }
  inline HarnessTokenUsage& WithInputTokens(int value) {
    SetInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of output tokens generated.</p>
   */
  inline int GetOutputTokens() const { return m_outputTokens; }
  inline bool OutputTokensHasBeenSet() const { return m_outputTokensHasBeenSet; }
  inline void SetOutputTokens(int value) {
    m_outputTokensHasBeenSet = true;
    m_outputTokens = value;
  }
  inline HarnessTokenUsage& WithOutputTokens(int value) {
    SetOutputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of tokens consumed.</p>
   */
  inline int GetTotalTokens() const { return m_totalTokens; }
  inline bool TotalTokensHasBeenSet() const { return m_totalTokensHasBeenSet; }
  inline void SetTotalTokens(int value) {
    m_totalTokensHasBeenSet = true;
    m_totalTokens = value;
  }
  inline HarnessTokenUsage& WithTotalTokens(int value) {
    SetTotalTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of input tokens read from cache.</p>
   */
  inline int GetCacheReadInputTokens() const { return m_cacheReadInputTokens; }
  inline bool CacheReadInputTokensHasBeenSet() const { return m_cacheReadInputTokensHasBeenSet; }
  inline void SetCacheReadInputTokens(int value) {
    m_cacheReadInputTokensHasBeenSet = true;
    m_cacheReadInputTokens = value;
  }
  inline HarnessTokenUsage& WithCacheReadInputTokens(int value) {
    SetCacheReadInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of input tokens written to cache.</p>
   */
  inline int GetCacheWriteInputTokens() const { return m_cacheWriteInputTokens; }
  inline bool CacheWriteInputTokensHasBeenSet() const { return m_cacheWriteInputTokensHasBeenSet; }
  inline void SetCacheWriteInputTokens(int value) {
    m_cacheWriteInputTokensHasBeenSet = true;
    m_cacheWriteInputTokens = value;
  }
  inline HarnessTokenUsage& WithCacheWriteInputTokens(int value) {
    SetCacheWriteInputTokens(value);
    return *this;
  }
  ///@}
 private:
  int m_inputTokens{0};

  int m_outputTokens{0};

  int m_totalTokens{0};

  int m_cacheReadInputTokens{0};

  int m_cacheWriteInputTokens{0};
  bool m_inputTokensHasBeenSet = false;
  bool m_outputTokensHasBeenSet = false;
  bool m_totalTokensHasBeenSet = false;
  bool m_cacheReadInputTokensHasBeenSet = false;
  bool m_cacheWriteInputTokensHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
