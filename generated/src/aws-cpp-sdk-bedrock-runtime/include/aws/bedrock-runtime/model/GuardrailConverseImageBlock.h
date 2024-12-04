/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailConverseImageFormat.h>
#include <aws/bedrock-runtime/model/GuardrailConverseImageSource.h>
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
   * <p>An image block that contains images that you want to assess with a
   * guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailConverseImageBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailConverseImageBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageBlock();
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailConverseImageBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format details for the image type of the guardrail converse image
     * block.</p>
     */
    inline const GuardrailConverseImageFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const GuardrailConverseImageFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(GuardrailConverseImageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline GuardrailConverseImageBlock& WithFormat(const GuardrailConverseImageFormat& value) { SetFormat(value); return *this;}
    inline GuardrailConverseImageBlock& WithFormat(GuardrailConverseImageFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image source (image bytes) of the guardrail converse image block.</p>
     */
    inline const GuardrailConverseImageSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const GuardrailConverseImageSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(GuardrailConverseImageSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline GuardrailConverseImageBlock& WithSource(const GuardrailConverseImageSource& value) { SetSource(value); return *this;}
    inline GuardrailConverseImageBlock& WithSource(GuardrailConverseImageSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    GuardrailConverseImageFormat m_format;
    bool m_formatHasBeenSet = false;

    GuardrailConverseImageSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
