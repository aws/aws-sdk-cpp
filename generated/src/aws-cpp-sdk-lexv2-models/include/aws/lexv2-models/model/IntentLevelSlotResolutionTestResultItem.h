/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SlotResolutionTestResultItem.h>
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
   * <p>Information about intent-level slot resolution in a test
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentLevelSlotResolutionTestResultItem">AWS
   * API Reference</a></p>
   */
  class IntentLevelSlotResolutionTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem() = default;
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    IntentLevelSlotResolutionTestResultItem& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline bool GetMultiTurnConversation() const { return m_multiTurnConversation; }
    inline bool MultiTurnConversationHasBeenSet() const { return m_multiTurnConversationHasBeenSet; }
    inline void SetMultiTurnConversation(bool value) { m_multiTurnConversationHasBeenSet = true; m_multiTurnConversation = value; }
    inline IntentLevelSlotResolutionTestResultItem& WithMultiTurnConversation(bool value) { SetMultiTurnConversation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline const Aws::Vector<SlotResolutionTestResultItem>& GetSlotResolutionResults() const { return m_slotResolutionResults; }
    inline bool SlotResolutionResultsHasBeenSet() const { return m_slotResolutionResultsHasBeenSet; }
    template<typename SlotResolutionResultsT = Aws::Vector<SlotResolutionTestResultItem>>
    void SetSlotResolutionResults(SlotResolutionResultsT&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = std::forward<SlotResolutionResultsT>(value); }
    template<typename SlotResolutionResultsT = Aws::Vector<SlotResolutionTestResultItem>>
    IntentLevelSlotResolutionTestResultItem& WithSlotResolutionResults(SlotResolutionResultsT&& value) { SetSlotResolutionResults(std::forward<SlotResolutionResultsT>(value)); return *this;}
    template<typename SlotResolutionResultsT = SlotResolutionTestResultItem>
    IntentLevelSlotResolutionTestResultItem& AddSlotResolutionResults(SlotResolutionResultsT&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.emplace_back(std::forward<SlotResolutionResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    bool m_multiTurnConversation{false};
    bool m_multiTurnConversationHasBeenSet = false;

    Aws::Vector<SlotResolutionTestResultItem> m_slotResolutionResults;
    bool m_slotResolutionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
