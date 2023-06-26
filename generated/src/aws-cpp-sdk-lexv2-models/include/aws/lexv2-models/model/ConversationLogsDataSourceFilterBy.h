/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/ConversationLogsInputModeFilter.h>
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
   * <p>The selected data source to filter the conversation log.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLogsDataSourceFilterBy">AWS
   * API Reference</a></p>
   */
  class ConversationLogsDataSourceFilterBy
  {
  public:
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy();
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time for the conversation log.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time for the conversation log.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time for the conversation log.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time for the conversation log.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time for the conversation log.</p>
     */
    inline ConversationLogsDataSourceFilterBy& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time for the conversation log.</p>
     */
    inline ConversationLogsDataSourceFilterBy& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time for the conversation log.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time for the conversation log.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time for the conversation log.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time for the conversation log.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time for the conversation log.</p>
     */
    inline ConversationLogsDataSourceFilterBy& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time for the conversation log.</p>
     */
    inline ConversationLogsDataSourceFilterBy& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline const ConversationLogsInputModeFilter& GetInputMode() const{ return m_inputMode; }

    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }

    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline void SetInputMode(const ConversationLogsInputModeFilter& value) { m_inputModeHasBeenSet = true; m_inputMode = value; }

    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline void SetInputMode(ConversationLogsInputModeFilter&& value) { m_inputModeHasBeenSet = true; m_inputMode = std::move(value); }

    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline ConversationLogsDataSourceFilterBy& WithInputMode(const ConversationLogsInputModeFilter& value) { SetInputMode(value); return *this;}

    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline ConversationLogsDataSourceFilterBy& WithInputMode(ConversationLogsInputModeFilter&& value) { SetInputMode(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ConversationLogsInputModeFilter m_inputMode;
    bool m_inputModeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
