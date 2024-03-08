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
   * post-processing step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PostProcessingParsedResponse">AWS
   * API Reference</a></p>
   */
  class PostProcessingParsedResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingParsedResponse();
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingParsedResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PostProcessingParsedResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text returned by the parser.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text returned by the parser.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text returned by the parser.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text returned by the parser.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text returned by the parser.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text returned by the parser.</p>
     */
    inline PostProcessingParsedResponse& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text returned by the parser.</p>
     */
    inline PostProcessingParsedResponse& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text returned by the parser.</p>
     */
    inline PostProcessingParsedResponse& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
