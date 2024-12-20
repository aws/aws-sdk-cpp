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
   * <p> Configurations for streaming.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/StreamingConfigurations">AWS
   * API Reference</a></p>
   */
  class StreamingConfigurations
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations();
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API StreamingConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The guardrail interval to apply as response is generated. </p>
     */
    inline int GetApplyGuardrailInterval() const{ return m_applyGuardrailInterval; }
    inline bool ApplyGuardrailIntervalHasBeenSet() const { return m_applyGuardrailIntervalHasBeenSet; }
    inline void SetApplyGuardrailInterval(int value) { m_applyGuardrailIntervalHasBeenSet = true; m_applyGuardrailInterval = value; }
    inline StreamingConfigurations& WithApplyGuardrailInterval(int value) { SetApplyGuardrailInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether to enable streaming for the final response. This is set to
     * <code>false</code> by default. </p>
     */
    inline bool GetStreamFinalResponse() const{ return m_streamFinalResponse; }
    inline bool StreamFinalResponseHasBeenSet() const { return m_streamFinalResponseHasBeenSet; }
    inline void SetStreamFinalResponse(bool value) { m_streamFinalResponseHasBeenSet = true; m_streamFinalResponse = value; }
    inline StreamingConfigurations& WithStreamFinalResponse(bool value) { SetStreamFinalResponse(value); return *this;}
    ///@}
  private:

    int m_applyGuardrailInterval;
    bool m_applyGuardrailIntervalHasBeenSet = false;

    bool m_streamFinalResponse;
    bool m_streamFinalResponseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
