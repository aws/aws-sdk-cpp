﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/SlotResolutionStrategy.h>
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
   * <p>Contains information about whether assisted slot resolution is turned on for
   * the slot or not.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotResolutionSetting">AWS
   * API Reference</a></p>
   */
  class SlotResolutionSetting
  {
  public:
    AWS_LEXMODELSV2_API SlotResolutionSetting() = default;
    AWS_LEXMODELSV2_API SlotResolutionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether assisted slot resolution is turned on for the slot or not.
     * If the value is <code>EnhancedFallback</code>, assisted slot resolution is
     * activated when Amazon Lex defaults to the <code>AMAZON.FallbackIntent</code>. If
     * the value is <code>Default</code>, assisted slot resolution is turned off.</p>
     */
    inline SlotResolutionStrategy GetSlotResolutionStrategy() const { return m_slotResolutionStrategy; }
    inline bool SlotResolutionStrategyHasBeenSet() const { return m_slotResolutionStrategyHasBeenSet; }
    inline void SetSlotResolutionStrategy(SlotResolutionStrategy value) { m_slotResolutionStrategyHasBeenSet = true; m_slotResolutionStrategy = value; }
    inline SlotResolutionSetting& WithSlotResolutionStrategy(SlotResolutionStrategy value) { SetSlotResolutionStrategy(value); return *this;}
    ///@}
  private:

    SlotResolutionStrategy m_slotResolutionStrategy{SlotResolutionStrategy::NOT_SET};
    bool m_slotResolutionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
