/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/IntentClassificationTestResultItem.h>
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
   * <p>Information for the results of the intent classification test. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentClassificationTestResults">AWS
   * API Reference</a></p>
   */
  class IntentClassificationTestResults
  {
  public:
    AWS_LEXMODELSV2_API IntentClassificationTestResults() = default;
    AWS_LEXMODELSV2_API IntentClassificationTestResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentClassificationTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the results for the intent classification test.</p>
     */
    inline const Aws::Vector<IntentClassificationTestResultItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<IntentClassificationTestResultItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<IntentClassificationTestResultItem>>
    IntentClassificationTestResults& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = IntentClassificationTestResultItem>
    IntentClassificationTestResults& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IntentClassificationTestResultItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
