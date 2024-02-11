/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/Span.h>
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
   * <p>Text response part</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/TextResponsePart">AWS
   * API Reference</a></p>
   */
  class TextResponsePart
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API TextResponsePart();
    AWS_BEDROCKAGENTRUNTIME_API TextResponsePart(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API TextResponsePart& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Response part in text</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>Response part in text</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>Response part in text</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>Response part in text</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>Response part in text</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>Response part in text</p>
     */
    inline TextResponsePart& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>Response part in text</p>
     */
    inline TextResponsePart& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>Response part in text</p>
     */
    inline TextResponsePart& WithText(const char* value) { SetText(value); return *this;}


    
    inline const Span& GetSpan() const{ return m_span; }

    
    inline bool SpanHasBeenSet() const { return m_spanHasBeenSet; }

    
    inline void SetSpan(const Span& value) { m_spanHasBeenSet = true; m_span = value; }

    
    inline void SetSpan(Span&& value) { m_spanHasBeenSet = true; m_span = std::move(value); }

    
    inline TextResponsePart& WithSpan(const Span& value) { SetSpan(value); return *this;}

    
    inline TextResponsePart& WithSpan(Span&& value) { SetSpan(std::move(value)); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Span m_span;
    bool m_spanHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
