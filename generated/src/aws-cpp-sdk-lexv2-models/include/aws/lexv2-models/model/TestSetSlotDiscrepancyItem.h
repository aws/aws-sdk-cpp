/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about discrepancy in a slot information between the test
   * set and the bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetSlotDiscrepancyItem">AWS
   * API Reference</a></p>
   */
  class TestSetSlotDiscrepancyItem
  {
  public:
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem();
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline TestSetSlotDiscrepancyItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
