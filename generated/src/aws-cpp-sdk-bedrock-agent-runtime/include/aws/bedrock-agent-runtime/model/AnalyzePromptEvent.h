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
   * <p>An event in which the prompt was analyzed in preparation for
   * optimization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AnalyzePromptEvent">AWS
   * API Reference</a></p>
   */
  class AnalyzePromptEvent
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AnalyzePromptEvent();
    AWS_BEDROCKAGENTRUNTIME_API AnalyzePromptEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AnalyzePromptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message describing the analysis of the prompt.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AnalyzePromptEvent& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AnalyzePromptEvent& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AnalyzePromptEvent& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
