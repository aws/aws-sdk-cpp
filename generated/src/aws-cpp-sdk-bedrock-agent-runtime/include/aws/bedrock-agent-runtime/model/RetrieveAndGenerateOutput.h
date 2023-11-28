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
   * <p>Service response of the turn</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RetrieveAndGenerateOutput">AWS
   * API Reference</a></p>
   */
  class RetrieveAndGenerateOutput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateOutput();
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RetrieveAndGenerateOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Service response of the turn in text</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Service response of the turn in text</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Service response of the turn in text</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Service response of the turn in text</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Service response of the turn in text</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Service response of the turn in text</p>
     */
    inline RetrieveAndGenerateOutput& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Service response of the turn in text</p>
     */
    inline RetrieveAndGenerateOutput& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Service response of the turn in text</p>
     */
    inline RetrieveAndGenerateOutput& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
