/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestResultMatchStatus.h>
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
   * <p>The slots used for the slot resolution in the conversation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelSlotResolutionResultItem">AWS
   * API Reference</a></p>
   */
  class ConversationLevelSlotResolutionResultItem
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelSlotResolutionResultItem();
    AWS_LEXMODELSV2_API ConversationLevelSlotResolutionResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelSlotResolutionResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The intents used in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithIntentName(const char* value) { SetIntentName(value); return *this;}


    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The slot name in the slots list for the slot resolution details.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline const TestResultMatchStatus& GetMatchResult() const{ return m_matchResult; }

    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline bool MatchResultHasBeenSet() const { return m_matchResultHasBeenSet; }

    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline void SetMatchResult(const TestResultMatchStatus& value) { m_matchResultHasBeenSet = true; m_matchResult = value; }

    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline void SetMatchResult(TestResultMatchStatus&& value) { m_matchResultHasBeenSet = true; m_matchResult = std::move(value); }

    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithMatchResult(const TestResultMatchStatus& value) { SetMatchResult(value); return *this;}

    /**
     * <p>The number of matching slots used in the slots listings for the slot
     * resolution evaluation.</p>
     */
    inline ConversationLevelSlotResolutionResultItem& WithMatchResult(TestResultMatchStatus&& value) { SetMatchResult(std::move(value)); return *this;}

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    TestResultMatchStatus m_matchResult;
    bool m_matchResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
