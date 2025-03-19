/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Contains information of the usage of the foundation model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/Usage">AWS
   * API Reference</a></p>
   */
  class Usage
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API Usage() = default;
    AWS_BEDROCKAGENTRUNTIME_API Usage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Usage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the input tokens from the foundation model
     * usage.</p>
     */
    inline int GetInputTokens() const { return m_inputTokens; }
    inline bool InputTokensHasBeenSet() const { return m_inputTokensHasBeenSet; }
    inline void SetInputTokens(int value) { m_inputTokensHasBeenSet = true; m_inputTokens = value; }
    inline Usage& WithInputTokens(int value) { SetInputTokens(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the output tokens from the foundation model
     * usage.</p>
     */
    inline int GetOutputTokens() const { return m_outputTokens; }
    inline bool OutputTokensHasBeenSet() const { return m_outputTokensHasBeenSet; }
    inline void SetOutputTokens(int value) { m_outputTokensHasBeenSet = true; m_outputTokens = value; }
    inline Usage& WithOutputTokens(int value) { SetOutputTokens(value); return *this;}
    ///@}
  private:

    int m_inputTokens{0};
    bool m_inputTokensHasBeenSet = false;

    int m_outputTokens{0};
    bool m_outputTokensHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
