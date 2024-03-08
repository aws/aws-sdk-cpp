/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/Source.h>
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
   * <p>Contains details about the agent's response to reprompt the
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RepromptResponse">AWS
   * API Reference</a></p>
   */
  class RepromptResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RepromptResponse();
    AWS_BEDROCKAGENTRUNTIME_API RepromptResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RepromptResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline RepromptResponse& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>Specifies what output is prompting the agent to reprompt the input.</p>
     */
    inline RepromptResponse& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The text reprompting the input.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text reprompting the input.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text reprompting the input.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text reprompting the input.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text reprompting the input.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text reprompting the input.</p>
     */
    inline RepromptResponse& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text reprompting the input.</p>
     */
    inline RepromptResponse& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text reprompting the input.</p>
     */
    inline RepromptResponse& WithText(const char* value) { SetText(value); return *this;}

  private:

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
