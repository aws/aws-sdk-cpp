/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailImageFormat.h>
#include <aws/bedrock-runtime/model/GuardrailImageSource.h>
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
   * <p>Contain an image which user wants guarded. This block is accepted by the
   * guardrails independent API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailImageBlock">AWS
   * API Reference</a></p>
   */
  class GuardrailImageBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailImageBlock() = default;
    AWS_BEDROCKRUNTIME_API GuardrailImageBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailImageBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format details for the file type of the image blocked by the
     * guardrail.</p>
     */
    inline GuardrailImageFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(GuardrailImageFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline GuardrailImageBlock& WithFormat(GuardrailImageFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image source (image bytes) details of the image blocked by the
     * guardrail.</p>
     */
    inline const GuardrailImageSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = GuardrailImageSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = GuardrailImageSource>
    GuardrailImageBlock& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    GuardrailImageFormat m_format{GuardrailImageFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    GuardrailImageSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
