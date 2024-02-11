/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/IntentLevelSlotResolutionTestResultItem.h>
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
   * <p>Indicates the success or failure of slots at the intent level.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentLevelSlotResolutionTestResults">AWS
   * API Reference</a></p>
   */
  class IntentLevelSlotResolutionTestResults
  {
  public:
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResults();
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline const Aws::Vector<IntentLevelSlotResolutionTestResultItem>& GetItems() const{ return m_items; }

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline void SetItems(const Aws::Vector<IntentLevelSlotResolutionTestResultItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline void SetItems(Aws::Vector<IntentLevelSlotResolutionTestResultItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline IntentLevelSlotResolutionTestResults& WithItems(const Aws::Vector<IntentLevelSlotResolutionTestResultItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline IntentLevelSlotResolutionTestResults& WithItems(Aws::Vector<IntentLevelSlotResolutionTestResultItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline IntentLevelSlotResolutionTestResults& AddItems(const IntentLevelSlotResolutionTestResultItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Indicates the items for the slot level resolution for the intents.</p>
     */
    inline IntentLevelSlotResolutionTestResults& AddItems(IntentLevelSlotResolutionTestResultItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<IntentLevelSlotResolutionTestResultItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
