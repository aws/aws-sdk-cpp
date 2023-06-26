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
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem();
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentLevelSlotResolutionTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of the intent that was recognized.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline bool GetMultiTurnConversation() const{ return m_multiTurnConversation; }

    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline bool MultiTurnConversationHasBeenSet() const { return m_multiTurnConversationHasBeenSet; }

    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline void SetMultiTurnConversation(bool value) { m_multiTurnConversationHasBeenSet = true; m_multiTurnConversation = value; }

    /**
     * <p>Indicates whether the conversation involves multiple turns or not.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithMultiTurnConversation(bool value) { SetMultiTurnConversation(value); return *this;}


    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline const Aws::Vector<SlotResolutionTestResultItem>& GetSlotResolutionResults() const{ return m_slotResolutionResults; }

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline bool SlotResolutionResultsHasBeenSet() const { return m_slotResolutionResultsHasBeenSet; }

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline void SetSlotResolutionResults(const Aws::Vector<SlotResolutionTestResultItem>& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = value; }

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline void SetSlotResolutionResults(Aws::Vector<SlotResolutionTestResultItem>&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults = std::move(value); }

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithSlotResolutionResults(const Aws::Vector<SlotResolutionTestResultItem>& value) { SetSlotResolutionResults(value); return *this;}

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& WithSlotResolutionResults(Aws::Vector<SlotResolutionTestResultItem>&& value) { SetSlotResolutionResults(std::move(value)); return *this;}

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& AddSlotResolutionResults(const SlotResolutionTestResultItem& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.push_back(value); return *this; }

    /**
     * <p>The results for the slot resolution in the test execution result.</p>
     */
    inline IntentLevelSlotResolutionTestResultItem& AddSlotResolutionResults(SlotResolutionTestResultItem&& value) { m_slotResolutionResultsHasBeenSet = true; m_slotResolutionResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    bool m_multiTurnConversation;
    bool m_multiTurnConversationHasBeenSet = false;

    Aws::Vector<SlotResolutionTestResultItem> m_slotResolutionResults;
    bool m_slotResolutionResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
