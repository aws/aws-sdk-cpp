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
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy() = default;
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLogsDataSourceFilterBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the conversation log.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ConversationLogsDataSourceFilterBy& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the conversation log.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ConversationLogsDataSourceFilterBy& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selection to filter by input mode for the conversation logs. </p>
     */
    inline ConversationLogsInputModeFilter GetInputMode() const { return m_inputMode; }
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }
    inline void SetInputMode(ConversationLogsInputModeFilter value) { m_inputModeHasBeenSet = true; m_inputMode = value; }
    inline ConversationLogsDataSourceFilterBy& WithInputMode(ConversationLogsInputModeFilter value) { SetInputMode(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ConversationLogsInputModeFilter m_inputMode{ConversationLogsInputModeFilter::NOT_SET};
    bool m_inputModeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
