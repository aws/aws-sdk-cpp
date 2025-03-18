/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/TestSetIntentDiscrepancyItem.h>
#include <aws/lexv2-models/model/TestSetSlotDiscrepancyItem.h>
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
   * <p>Contains details about the errors in the test set discrepancy
   * report</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetDiscrepancyErrors">AWS
   * API Reference</a></p>
   */
  class TestSetDiscrepancyErrors
  {
  public:
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors() = default;
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline const Aws::Vector<TestSetIntentDiscrepancyItem>& GetIntentDiscrepancies() const { return m_intentDiscrepancies; }
    inline bool IntentDiscrepanciesHasBeenSet() const { return m_intentDiscrepanciesHasBeenSet; }
    template<typename IntentDiscrepanciesT = Aws::Vector<TestSetIntentDiscrepancyItem>>
    void SetIntentDiscrepancies(IntentDiscrepanciesT&& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies = std::forward<IntentDiscrepanciesT>(value); }
    template<typename IntentDiscrepanciesT = Aws::Vector<TestSetIntentDiscrepancyItem>>
    TestSetDiscrepancyErrors& WithIntentDiscrepancies(IntentDiscrepanciesT&& value) { SetIntentDiscrepancies(std::forward<IntentDiscrepanciesT>(value)); return *this;}
    template<typename IntentDiscrepanciesT = TestSetIntentDiscrepancyItem>
    TestSetDiscrepancyErrors& AddIntentDiscrepancies(IntentDiscrepanciesT&& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies.emplace_back(std::forward<IntentDiscrepanciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline const Aws::Vector<TestSetSlotDiscrepancyItem>& GetSlotDiscrepancies() const { return m_slotDiscrepancies; }
    inline bool SlotDiscrepanciesHasBeenSet() const { return m_slotDiscrepanciesHasBeenSet; }
    template<typename SlotDiscrepanciesT = Aws::Vector<TestSetSlotDiscrepancyItem>>
    void SetSlotDiscrepancies(SlotDiscrepanciesT&& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies = std::forward<SlotDiscrepanciesT>(value); }
    template<typename SlotDiscrepanciesT = Aws::Vector<TestSetSlotDiscrepancyItem>>
    TestSetDiscrepancyErrors& WithSlotDiscrepancies(SlotDiscrepanciesT&& value) { SetSlotDiscrepancies(std::forward<SlotDiscrepanciesT>(value)); return *this;}
    template<typename SlotDiscrepanciesT = TestSetSlotDiscrepancyItem>
    TestSetDiscrepancyErrors& AddSlotDiscrepancies(SlotDiscrepanciesT&& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies.emplace_back(std::forward<SlotDiscrepanciesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TestSetIntentDiscrepancyItem> m_intentDiscrepancies;
    bool m_intentDiscrepanciesHasBeenSet = false;

    Aws::Vector<TestSetSlotDiscrepancyItem> m_slotDiscrepancies;
    bool m_slotDiscrepanciesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
