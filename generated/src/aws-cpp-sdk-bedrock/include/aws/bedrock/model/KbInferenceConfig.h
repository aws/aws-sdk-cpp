/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TextInferenceConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains configuration details of the inference for knowledge base retrieval
   * and response generation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/KbInferenceConfig">AWS
   * API Reference</a></p>
   */
  class KbInferenceConfig
  {
  public:
    AWS_BEDROCK_API KbInferenceConfig() = default;
    AWS_BEDROCK_API KbInferenceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API KbInferenceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains configuration details for text generation using a language model via
     * the <code>RetrieveAndGenerate</code> function.</p>
     */
    inline const TextInferenceConfig& GetTextInferenceConfig() const { return m_textInferenceConfig; }
    inline bool TextInferenceConfigHasBeenSet() const { return m_textInferenceConfigHasBeenSet; }
    template<typename TextInferenceConfigT = TextInferenceConfig>
    void SetTextInferenceConfig(TextInferenceConfigT&& value) { m_textInferenceConfigHasBeenSet = true; m_textInferenceConfig = std::forward<TextInferenceConfigT>(value); }
    template<typename TextInferenceConfigT = TextInferenceConfig>
    KbInferenceConfig& WithTextInferenceConfig(TextInferenceConfigT&& value) { SetTextInferenceConfig(std::forward<TextInferenceConfigT>(value)); return *this;}
    ///@}
  private:

    TextInferenceConfig m_textInferenceConfig;
    bool m_textInferenceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
