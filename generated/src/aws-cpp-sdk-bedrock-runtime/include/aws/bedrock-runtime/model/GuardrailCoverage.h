/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailTextCharactersCoverage.h>
#include <aws/bedrock-runtime/model/GuardrailImageCoverage.h>
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
   * <p>The action of the guardrail coverage details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailCoverage">AWS
   * API Reference</a></p>
   */
  class GuardrailCoverage
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailCoverage() = default;
    AWS_BEDROCKRUNTIME_API GuardrailCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text characters of the guardrail coverage details.</p>
     */
    inline const GuardrailTextCharactersCoverage& GetTextCharacters() const { return m_textCharacters; }
    inline bool TextCharactersHasBeenSet() const { return m_textCharactersHasBeenSet; }
    template<typename TextCharactersT = GuardrailTextCharactersCoverage>
    void SetTextCharacters(TextCharactersT&& value) { m_textCharactersHasBeenSet = true; m_textCharacters = std::forward<TextCharactersT>(value); }
    template<typename TextCharactersT = GuardrailTextCharactersCoverage>
    GuardrailCoverage& WithTextCharacters(TextCharactersT&& value) { SetTextCharacters(std::forward<TextCharactersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail coverage for images (the number of images that guardrails
     * guarded).</p>
     */
    inline const GuardrailImageCoverage& GetImages() const { return m_images; }
    inline bool ImagesHasBeenSet() const { return m_imagesHasBeenSet; }
    template<typename ImagesT = GuardrailImageCoverage>
    void SetImages(ImagesT&& value) { m_imagesHasBeenSet = true; m_images = std::forward<ImagesT>(value); }
    template<typename ImagesT = GuardrailImageCoverage>
    GuardrailCoverage& WithImages(ImagesT&& value) { SetImages(std::forward<ImagesT>(value)); return *this;}
    ///@}
  private:

    GuardrailTextCharactersCoverage m_textCharacters;
    bool m_textCharactersHasBeenSet = false;

    GuardrailImageCoverage m_images;
    bool m_imagesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
