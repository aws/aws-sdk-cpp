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
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse();
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the user input is valid or not. If <code>false</code>, the agent
     * doesn't proceed to orchestration.</p>
     */
    inline bool GetIsValid() const{ return m_isValid; }

    /**
     * <p>Whether the user input is valid or not. If <code>false</code>, the agent
     * doesn't proceed to orchestration.</p>
     */
    inline bool IsValidHasBeenSet() const { return m_isValidHasBeenSet; }

    /**
     * <p>Whether the user input is valid or not. If <code>false</code>, the agent
     * doesn't proceed to orchestration.</p>
     */
    inline void SetIsValid(bool value) { m_isValidHasBeenSet = true; m_isValid = value; }

    /**
     * <p>Whether the user input is valid or not. If <code>false</code>, the agent
     * doesn't proceed to orchestration.</p>
     */
    inline PreProcessingParsedResponse& WithIsValid(bool value) { SetIsValid(value); return *this;}


    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline const Aws::String& GetRationale() const{ return m_rationale; }

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline void SetRationale(const Aws::String& value) { m_rationaleHasBeenSet = true; m_rationale = value; }

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline void SetRationale(Aws::String&& value) { m_rationaleHasBeenSet = true; m_rationale = std::move(value); }

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline void SetRationale(const char* value) { m_rationaleHasBeenSet = true; m_rationale.assign(value); }

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline PreProcessingParsedResponse& WithRationale(const Aws::String& value) { SetRationale(value); return *this;}

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline PreProcessingParsedResponse& WithRationale(Aws::String&& value) { SetRationale(std::move(value)); return *this;}

    /**
     * <p>The text returned by the parsing of the pre-processing step, explaining the
     * steps that the agent plans to take in orchestration, if the user input is
     * valid.</p>
     */
    inline PreProcessingParsedResponse& WithRationale(const char* value) { SetRationale(value); return *this;}

  private:

    bool m_isValid;
    bool m_isValidHasBeenSet = false;

    Aws::String m_rationale;
    bool m_rationaleHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
