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
    AWS_LEXMODELSV2_API TestSetTurnRecord();
    AWS_LEXMODELSV2_API TestSetTurnRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TestSetTurnRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The record number associated with the turn.</p>
     */
    inline long long GetRecordNumber() const{ return m_recordNumber; }

    /**
     * <p>The record number associated with the turn.</p>
     */
    inline bool RecordNumberHasBeenSet() const { return m_recordNumberHasBeenSet; }

    /**
     * <p>The record number associated with the turn.</p>
     */
    inline void SetRecordNumber(long long value) { m_recordNumberHasBeenSet = true; m_recordNumber = value; }

    /**
     * <p>The record number associated with the turn.</p>
     */
    inline TestSetTurnRecord& WithRecordNumber(long long value) { SetRecordNumber(value); return *this;}


    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline TestSetTurnRecord& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline TestSetTurnRecord& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the conversation associated with the turn.</p>
     */
    inline TestSetTurnRecord& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The number of turns that has elapsed up to that turn.</p>
     */
    inline int GetTurnNumber() const{ return m_turnNumber; }

    /**
     * <p>The number of turns that has elapsed up to that turn.</p>
     */
    inline bool TurnNumberHasBeenSet() const { return m_turnNumberHasBeenSet; }

    /**
     * <p>The number of turns that has elapsed up to that turn.</p>
     */
    inline void SetTurnNumber(int value) { m_turnNumberHasBeenSet = true; m_turnNumber = value; }

    /**
     * <p>The number of turns that has elapsed up to that turn.</p>
     */
    inline TestSetTurnRecord& WithTurnNumber(int value) { SetTurnNumber(value); return *this;}


    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline const TurnSpecification& GetTurnSpecification() const{ return m_turnSpecification; }

    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline bool TurnSpecificationHasBeenSet() const { return m_turnSpecificationHasBeenSet; }

    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline void SetTurnSpecification(const TurnSpecification& value) { m_turnSpecificationHasBeenSet = true; m_turnSpecification = value; }

    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline void SetTurnSpecification(TurnSpecification&& value) { m_turnSpecificationHasBeenSet = true; m_turnSpecification = std::move(value); }

    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline TestSetTurnRecord& WithTurnSpecification(const TurnSpecification& value) { SetTurnSpecification(value); return *this;}

    /**
     * <p>Contains information about the agent or user turn depending upon type of
     * turn.</p>
     */
    inline TestSetTurnRecord& WithTurnSpecification(TurnSpecification&& value) { SetTurnSpecification(std::move(value)); return *this;}

  private:

    long long m_recordNumber;
    bool m_recordNumberHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    int m_turnNumber;
    bool m_turnNumberHasBeenSet = false;

    TurnSpecification m_turnSpecification;
    bool m_turnSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
