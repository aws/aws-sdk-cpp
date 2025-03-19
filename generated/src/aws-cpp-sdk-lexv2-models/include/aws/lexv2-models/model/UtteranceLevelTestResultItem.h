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
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem() = default;
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API UtteranceLevelTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The record number of the result.</p>
     */
    inline long long GetRecordNumber() const { return m_recordNumber; }
    inline bool RecordNumberHasBeenSet() const { return m_recordNumberHasBeenSet; }
    inline void SetRecordNumber(long long value) { m_recordNumberHasBeenSet = true; m_recordNumber = value; }
    inline UtteranceLevelTestResultItem& WithRecordNumber(long long value) { SetRecordNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the conversation associated with the result.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    UtteranceLevelTestResultItem& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the turn associated with the result.</p>
     */
    inline const TestSetTurnResult& GetTurnResult() const { return m_turnResult; }
    inline bool TurnResultHasBeenSet() const { return m_turnResultHasBeenSet; }
    template<typename TurnResultT = TestSetTurnResult>
    void SetTurnResult(TurnResultT&& value) { m_turnResultHasBeenSet = true; m_turnResult = std::forward<TurnResultT>(value); }
    template<typename TurnResultT = TestSetTurnResult>
    UtteranceLevelTestResultItem& WithTurnResult(TurnResultT&& value) { SetTurnResult(std::forward<TurnResultT>(value)); return *this;}
    ///@}
  private:

    long long m_recordNumber{0};
    bool m_recordNumberHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    TestSetTurnResult m_turnResult;
    bool m_turnResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
