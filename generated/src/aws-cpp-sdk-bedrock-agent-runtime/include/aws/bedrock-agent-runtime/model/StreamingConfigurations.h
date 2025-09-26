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
   * <p>Configurations for streaming.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/StreamingConfigurations">AWS
   * API Reference</a></p>
   */
  class StreamingConfigurations
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations() = default;
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies whether to enable streaming for the final response. This is set to
     * <code>false</code> by default. </p>
     */
    inline bool GetStreamFinalResponse() const { return m_streamFinalResponse; }
    inline bool StreamFinalResponseHasBeenSet() const { return m_streamFinalResponseHasBeenSet; }
    inline void SetStreamFinalResponse(bool value) { m_streamFinalResponseHasBeenSet = true; m_streamFinalResponse = value; }
    inline StreamingConfigurations& WithStreamFinalResponse(bool value) { SetStreamFinalResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The guardrail interval to apply as response is generated. By default, the
     * guardrail interval is set to 50 characters. If a larger interval is specified,
     * the response will be generated in larger chunks with fewer
     * <code>ApplyGuardrail</code> calls. The following examples show the response
     * generated for <i>Hello, I am an agent</i> input string.</p> <p> <b>Example
     * response in chunks: Interval set to 3 characters</b> </p> <p> <code>'Hel', 'lo,
     * ','I am', ' an', ' Age', 'nt'</code> </p> <p>Each chunk has at least 3
     * characters except for the last chunk</p> <p> <b>Example response in chunks:
     * Interval set to 20 or more characters</b> </p> <p> <code>Hello, I am an
     * Agent</code> </p>
     */
    inline int GetApplyGuardrailInterval() const { return m_applyGuardrailInterval; }
    inline bool ApplyGuardrailIntervalHasBeenSet() const { return m_applyGuardrailIntervalHasBeenSet; }
    inline void SetApplyGuardrailInterval(int value) { m_applyGuardrailIntervalHasBeenSet = true; m_applyGuardrailInterval = value; }
    inline StreamingConfigurations& WithApplyGuardrailInterval(int value) { SetApplyGuardrailInterval(value); return *this;}
    ///@}
  private:

    bool m_streamFinalResponse{false};
    bool m_streamFinalResponseHasBeenSet = false;

    int m_applyGuardrailInterval{0};
    bool m_applyGuardrailIntervalHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
