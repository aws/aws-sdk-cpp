/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailTextBlock.h>
#include <aws/bedrock-runtime/model/GuardrailImageBlock.h>
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
   * <p>The content block to be evaluated by the guardrail.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailContentBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailContentBlock();
    AWS_BEDROCKRUNTIME_API GuardrailContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text within content block to be evaluated by the guardrail.</p>
     */
    inline const GuardrailTextBlock& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const GuardrailTextBlock& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(GuardrailTextBlock&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline GuardrailContentBlock& WithText(const GuardrailTextBlock& value) { SetText(value); return *this;}
    inline GuardrailContentBlock& WithText(GuardrailTextBlock&& value) { SetText(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Image within guardrail content block to be evaluated by the guardrail.</p>
     */
    inline const GuardrailImageBlock& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const GuardrailImageBlock& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(GuardrailImageBlock&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline GuardrailContentBlock& WithImage(const GuardrailImageBlock& value) { SetImage(value); return *this;}
    inline GuardrailContentBlock& WithImage(GuardrailImageBlock&& value) { SetImage(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailTextBlock m_text;
    bool m_textHasBeenSet = false;

    GuardrailImageBlock m_image;
    bool m_imageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
