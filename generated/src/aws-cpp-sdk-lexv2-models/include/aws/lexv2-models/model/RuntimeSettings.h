/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotResolutionImprovementSpecification.h>
#include <aws/lexv2-models/model/NluImprovementSpecification.h>
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
   * <p>Contains specifications about the Amazon Lex runtime generative AI
   * capabilities from Amazon Bedrock that you can turn on for your
   * bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RuntimeSettings">AWS
   * API Reference</a></p>
   */
  class RuntimeSettings
  {
  public:
    AWS_LEXMODELSV2_API RuntimeSettings() = default;
    AWS_LEXMODELSV2_API RuntimeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline const SlotResolutionImprovementSpecification& GetSlotResolutionImprovement() const { return m_slotResolutionImprovement; }
    inline bool SlotResolutionImprovementHasBeenSet() const { return m_slotResolutionImprovementHasBeenSet; }
    template<typename SlotResolutionImprovementT = SlotResolutionImprovementSpecification>
    void SetSlotResolutionImprovement(SlotResolutionImprovementT&& value) { m_slotResolutionImprovementHasBeenSet = true; m_slotResolutionImprovement = std::forward<SlotResolutionImprovementT>(value); }
    template<typename SlotResolutionImprovementT = SlotResolutionImprovementSpecification>
    RuntimeSettings& WithSlotResolutionImprovement(SlotResolutionImprovementT&& value) { SetSlotResolutionImprovement(std::forward<SlotResolutionImprovementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing specifications for the assisted nlu feature.</p>
     */
    inline const NluImprovementSpecification& GetNluImprovement() const { return m_nluImprovement; }
    inline bool NluImprovementHasBeenSet() const { return m_nluImprovementHasBeenSet; }
    template<typename NluImprovementT = NluImprovementSpecification>
    void SetNluImprovement(NluImprovementT&& value) { m_nluImprovementHasBeenSet = true; m_nluImprovement = std::forward<NluImprovementT>(value); }
    template<typename NluImprovementT = NluImprovementSpecification>
    RuntimeSettings& WithNluImprovement(NluImprovementT&& value) { SetNluImprovement(std::forward<NluImprovementT>(value)); return *this;}
    ///@}
  private:

    SlotResolutionImprovementSpecification m_slotResolutionImprovement;
    bool m_slotResolutionImprovementHasBeenSet = false;

    NluImprovementSpecification m_nluImprovement;
    bool m_nluImprovementHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
