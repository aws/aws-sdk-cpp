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
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem() = default;
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetSlotDiscrepancyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent associated with the slot in the discrepancy
     * report.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    TestSetSlotDiscrepancyItem& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the slot in the discrepancy report.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    TestSetSlotDiscrepancyItem& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for a discrepancy for an intent between the test set and
     * the bot.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    TestSetSlotDiscrepancyItem& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
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
