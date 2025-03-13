/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BedrockModelSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains specifications for the sample utterance generation
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SampleUtteranceGenerationSpecification">AWS
   * API Reference</a></p>
   */
  class SampleUtteranceGenerationSpecification
  {
  public:
    AWS_LEXMODELSV2_API SampleUtteranceGenerationSpecification() = default;
    AWS_LEXMODELSV2_API SampleUtteranceGenerationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SampleUtteranceGenerationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to enable sample utterance generation or not.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SampleUtteranceGenerationSpecification& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const BedrockModelSpecification& GetBedrockModelSpecification() const { return m_bedrockModelSpecification; }
    inline bool BedrockModelSpecificationHasBeenSet() const { return m_bedrockModelSpecificationHasBeenSet; }
    template<typename BedrockModelSpecificationT = BedrockModelSpecification>
    void SetBedrockModelSpecification(BedrockModelSpecificationT&& value) { m_bedrockModelSpecificationHasBeenSet = true; m_bedrockModelSpecification = std::forward<BedrockModelSpecificationT>(value); }
    template<typename BedrockModelSpecificationT = BedrockModelSpecification>
    SampleUtteranceGenerationSpecification& WithBedrockModelSpecification(BedrockModelSpecificationT&& value) { SetBedrockModelSpecification(std::forward<BedrockModelSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    BedrockModelSpecification m_bedrockModelSpecification;
    bool m_bedrockModelSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
