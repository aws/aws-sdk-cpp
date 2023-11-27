/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotResolutionImprovementSpecification.h>
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
    AWS_LEXMODELSV2_API RuntimeSettings();
    AWS_LEXMODELSV2_API RuntimeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RuntimeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline const SlotResolutionImprovementSpecification& GetSlotResolutionImprovement() const{ return m_slotResolutionImprovement; }

    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline bool SlotResolutionImprovementHasBeenSet() const { return m_slotResolutionImprovementHasBeenSet; }

    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline void SetSlotResolutionImprovement(const SlotResolutionImprovementSpecification& value) { m_slotResolutionImprovementHasBeenSet = true; m_slotResolutionImprovement = value; }

    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline void SetSlotResolutionImprovement(SlotResolutionImprovementSpecification&& value) { m_slotResolutionImprovementHasBeenSet = true; m_slotResolutionImprovement = std::move(value); }

    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline RuntimeSettings& WithSlotResolutionImprovement(const SlotResolutionImprovementSpecification& value) { SetSlotResolutionImprovement(value); return *this;}

    /**
     * <p>An object containing specifications for the assisted slot resolution
     * feature.</p>
     */
    inline RuntimeSettings& WithSlotResolutionImprovement(SlotResolutionImprovementSpecification&& value) { SetSlotResolutionImprovement(std::move(value)); return *this;}

  private:

    SlotResolutionImprovementSpecification m_slotResolutionImprovement;
    bool m_slotResolutionImprovementHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
