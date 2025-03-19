/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TurnSpecification.h>
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
   * <p>Contains information about a turn in a test set.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TestSetTurnRecord">AWS
   * API Reference</a></p>
   */
  class TestSetTurnRecord
  {
  public:
    AWS_LEXMODELSV2_API TestSetTurnRecord() = default;
    AWS_LEXMODELSV2_API TestSetTurnRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetTurnRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The record number associated with the turn.</p>
     */
    inline long long GetRecordNumber() const { return m_recordNumber; }
    inline bool RecordNumberHasBeenSet() const { return m_recordNumberHasBeenSet; }
    inline void SetRecordNumber(long long value) { m_recordNumberHasBeenSet = true; m_recordNumber = value; }
    inline TestSetTurnRecord& WithRecordNumber(long long value) { SetRecordNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    TestSetTurnRecord& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of turns that has elapsed up to that turn.</p>
     */
    inline int GetTurnNumber() const { return m_turnNumber; }
    inline bool TurnNumberHasBeenSet() const { return m_turnNumberHasBeenSet; }
    inline void SetTurnNumber(int value) { m_turnNumberHasBeenSet = true; m_turnNumber = value; }
    inline TestSetTurnRecord& WithTurnNumber(int value) { SetTurnNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline const TurnSpecification& GetTurnSpecification() const { return m_turnSpecification; }
    inline bool TurnSpecificationHasBeenSet() const { return m_turnSpecificationHasBeenSet; }
    template<typename TurnSpecificationT = TurnSpecification>
    void SetTurnSpecification(TurnSpecificationT&& value) { m_turnSpecificationHasBeenSet = true; m_turnSpecification = std::forward<TurnSpecificationT>(value); }
    template<typename TurnSpecificationT = TurnSpecification>
    TestSetTurnRecord& WithTurnSpecification(TurnSpecificationT&& value) { SetTurnSpecification(std::forward<TurnSpecificationT>(value)); return *this;}
    ///@}
  private:

    long long m_recordNumber{0};
    bool m_recordNumberHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    int m_turnNumber{0};
    bool m_turnNumberHasBeenSet = false;

    TurnSpecification m_turnSpecification;
    bool m_turnSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
