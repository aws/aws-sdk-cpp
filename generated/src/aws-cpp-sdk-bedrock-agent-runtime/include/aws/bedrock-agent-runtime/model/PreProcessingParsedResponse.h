/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>Details about the response from the Lambda parsing of the output from the
   * pre-processing step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PreProcessingParsedResponse">AWS
   * API Reference</a></p>
   */
  class PreProcessingParsedResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse() = default;
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the user input is valid or not. If <code>false</code>, the agent
     * doesn't proceed to orchestration.</p>
     */
    inline bool GetIsValid() const { return m_isValid; }
    inline bool IsValidHasBeenSet() const { return m_isValidHasBeenSet; }
    inline void SetIsValid(bool value) { m_isValidHasBeenSet = true; m_isValid = value; }
    inline PreProcessingParsedResponse& WithIsValid(bool value) { SetIsValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline const Aws::String& GetRationale() const { return m_rationale; }
    inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
    template<typename RationaleT = Aws::String>
    void SetRationale(RationaleT&& value) { m_rationaleHasBeenSet = true; m_rationale = std::forward<RationaleT>(value); }
    template<typename RationaleT = Aws::String>
    PreProcessingParsedResponse& WithRationale(RationaleT&& value) { SetRationale(std::forward<RationaleT>(value)); return *this;}
    ///@}
  private:

    bool m_isValid{false};
    bool m_isValidHasBeenSet = false;

    Aws::String m_rationale;
    bool m_rationaleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
