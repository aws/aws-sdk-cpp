/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetTurnResult.h>
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
   * <p>Contains information about multiple utterances in the results of a test set
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/UtteranceLevelTestResultItem">AWS
   * API Reference</a></p>
   */
  class UtteranceLevelTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem();
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The record number of the result.</p>
     */
    inline long long GetRecordNumber() const{ return m_recordNumber; }

    /**
     * <p>The record number of the result.</p>
     */
    inline bool RecordNumberHasBeenSet() const { return m_recordNumberHasBeenSet; }

    /**
     * <p>The record number of the result.</p>
     */
    inline void SetRecordNumber(long long value) { m_recordNumberHasBeenSet = true; m_recordNumber = value; }

    /**
     * <p>The record number of the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithRecordNumber(long long value) { SetRecordNumber(value); return *this;}


    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline const TestSetTurnResult& GetTurnResult() const{ return m_turnResult; }

    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline bool TurnResultHasBeenSet() const { return m_turnResultHasBeenSet; }

    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline void SetTurnResult(const TestSetTurnResult& value) { m_turnResultHasBeenSet = true; m_turnResult = value; }

    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline void SetTurnResult(TestSetTurnResult&& value) { m_turnResultHasBeenSet = true; m_turnResult = std::move(value); }

    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithTurnResult(const TestSetTurnResult& value) { SetTurnResult(value); return *this;}

    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline UtteranceLevelTestResultItem& WithTurnResult(TestSetTurnResult&& value) { SetTurnResult(std::move(value)); return *this;}

  private:

    long long m_recordNumber;
    bool m_recordNumberHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    TestSetTurnResult m_turnResult;
    bool m_turnResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
