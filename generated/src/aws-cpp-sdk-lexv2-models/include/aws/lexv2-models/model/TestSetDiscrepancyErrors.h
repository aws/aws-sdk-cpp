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
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors();
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetDiscrepancyErrors& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline const Aws::Vector<TestSetIntentDiscrepancyItem>& GetIntentDiscrepancies() const{ return m_intentDiscrepancies; }

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline bool IntentDiscrepanciesHasBeenSet() const { return m_intentDiscrepanciesHasBeenSet; }

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline void SetIntentDiscrepancies(const Aws::Vector<TestSetIntentDiscrepancyItem>& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies = value; }

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline void SetIntentDiscrepancies(Aws::Vector<TestSetIntentDiscrepancyItem>&& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies = std::move(value); }

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& WithIntentDiscrepancies(const Aws::Vector<TestSetIntentDiscrepancyItem>& value) { SetIntentDiscrepancies(value); return *this;}

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& WithIntentDiscrepancies(Aws::Vector<TestSetIntentDiscrepancyItem>&& value) { SetIntentDiscrepancies(std::move(value)); return *this;}

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& AddIntentDiscrepancies(const TestSetIntentDiscrepancyItem& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies.push_back(value); return *this; }

    /**
     * <p>Contains information about discrepancies found for intents between the test
     * set and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& AddIntentDiscrepancies(TestSetIntentDiscrepancyItem&& value) { m_intentDiscrepanciesHasBeenSet = true; m_intentDiscrepancies.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline const Aws::Vector<TestSetSlotDiscrepancyItem>& GetSlotDiscrepancies() const{ return m_slotDiscrepancies; }

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline bool SlotDiscrepanciesHasBeenSet() const { return m_slotDiscrepanciesHasBeenSet; }

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline void SetSlotDiscrepancies(const Aws::Vector<TestSetSlotDiscrepancyItem>& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies = value; }

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline void SetSlotDiscrepancies(Aws::Vector<TestSetSlotDiscrepancyItem>&& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies = std::move(value); }

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& WithSlotDiscrepancies(const Aws::Vector<TestSetSlotDiscrepancyItem>& value) { SetSlotDiscrepancies(value); return *this;}

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& WithSlotDiscrepancies(Aws::Vector<TestSetSlotDiscrepancyItem>&& value) { SetSlotDiscrepancies(std::move(value)); return *this;}

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& AddSlotDiscrepancies(const TestSetSlotDiscrepancyItem& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies.push_back(value); return *this; }

    /**
     * <p>Contains information about discrepancies found for slots between the test set
     * and the bot.</p>
     */
    inline TestSetDiscrepancyErrors& AddSlotDiscrepancies(TestSetSlotDiscrepancyItem&& value) { m_slotDiscrepanciesHasBeenSet = true; m_slotDiscrepancies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TestSetIntentDiscrepancyItem> m_intentDiscrepancies;
    bool m_intentDiscrepanciesHasBeenSet = false;

    Aws::Vector<TestSetSlotDiscrepancyItem> m_slotDiscrepancies;
    bool m_slotDiscrepanciesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
