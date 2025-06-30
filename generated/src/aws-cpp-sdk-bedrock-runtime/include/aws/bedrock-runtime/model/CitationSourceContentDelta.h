/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Contains incremental updates to the source content text during streaming
   * responses, allowing clients to build up the cited content
   * progressively.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CitationSourceContentDelta">AWS
   * API Reference</a></p>
   */
  class CitationSourceContentDelta
  {
  public:
    AWS_BEDROCKRUNTIME_API CitationSourceContentDelta() = default;
    AWS_BEDROCKRUNTIME_API CitationSourceContentDelta(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CitationSourceContentDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An incremental update to the text content from the source document that is
     * being cited.</p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    CitationSourceContentDelta& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
