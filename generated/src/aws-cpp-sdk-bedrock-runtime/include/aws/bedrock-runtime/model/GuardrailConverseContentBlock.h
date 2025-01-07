﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailConverseTextBlock.h>
#include <aws/bedrock-runtime/model/GuardrailConverseImageBlock.h>
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
   * <p/> <p>A content block for selective guarding with the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
   * or <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>
   * API operations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailConverseContentBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailConverseContentBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailConverseContentBlock();
    AWS_BEDROCKRUNTIME_API GuardrailConverseContentBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailConverseContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text to guard.</p>
     */
    inline const GuardrailConverseTextBlock& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const GuardrailConverseTextBlock& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(GuardrailConverseTextBlock&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline GuardrailConverseContentBlock& WithText(const GuardrailConverseTextBlock& value) { SetText(value); return *this;}
    inline GuardrailConverseContentBlock& WithText(GuardrailConverseTextBlock&& value) { SetText(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Image within converse content block to be evaluated by the guardrail.</p>
     */
    inline const GuardrailConverseImageBlock& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const GuardrailConverseImageBlock& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(GuardrailConverseImageBlock&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline GuardrailConverseContentBlock& WithImage(const GuardrailConverseImageBlock& value) { SetImage(value); return *this;}
    inline GuardrailConverseContentBlock& WithImage(GuardrailConverseImageBlock&& value) { SetImage(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailConverseTextBlock m_text;
    bool m_textHasBeenSet = false;

    GuardrailConverseImageBlock m_image;
    bool m_imageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
