/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Token usage information</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageUsageInfo">AWS
 * API Reference</a></p>
 */
class SendMessageUsageInfo {
 public:
  AWS_DEVOPSAGENT_API SendMessageUsageInfo() = default;
  AWS_DEVOPSAGENT_API SendMessageUsageInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageUsageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Number of input tokens</p>
   */
  inline int GetInputTokens() const { return m_inputTokens; }
  inline bool InputTokensHasBeenSet() const { return m_inputTokensHasBeenSet; }
  inline void SetInputTokens(int value) {
    m_inputTokensHasBeenSet = true;
    m_inputTokens = value;
  }
  inline SendMessageUsageInfo& WithInputTokens(int value) {
    SetInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of output tokens</p>
   */
  inline int GetOutputTokens() const { return m_outputTokens; }
  inline bool OutputTokensHasBeenSet() const { return m_outputTokensHasBeenSet; }
  inline void SetOutputTokens(int value) {
    m_outputTokensHasBeenSet = true;
    m_outputTokens = value;
  }
  inline SendMessageUsageInfo& WithOutputTokens(int value) {
    SetOutputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total tokens used</p>
   */
  inline int GetTotalTokens() const { return m_totalTokens; }
  inline bool TotalTokensHasBeenSet() const { return m_totalTokensHasBeenSet; }
  inline void SetTotalTokens(int value) {
    m_totalTokensHasBeenSet = true;
    m_totalTokens = value;
  }
  inline SendMessageUsageInfo& WithTotalTokens(int value) {
    SetTotalTokens(value);
    return *this;
  }
  ///@}
 private:
  int m_inputTokens{0};

  int m_outputTokens{0};

  int m_totalTokens{0};
  bool m_inputTokensHasBeenSet = false;
  bool m_outputTokensHasBeenSet = false;
  bool m_totalTokensHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
