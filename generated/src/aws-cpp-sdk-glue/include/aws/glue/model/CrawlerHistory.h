/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerHistoryState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains the information for a run of a crawler.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlerHistory">AWS
   * API Reference</a></p>
   */
  class CrawlerHistory
  {
  public:
    AWS_GLUE_API CrawlerHistory() = default;
    AWS_GLUE_API CrawlerHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A UUID identifier for each crawl.</p>
     */
    inline const Aws::String& GetCrawlId() const { return m_crawlId; }
    inline bool CrawlIdHasBeenSet() const { return m_crawlIdHasBeenSet; }
    template<typename CrawlIdT = Aws::String>
    void SetCrawlId(CrawlIdT&& value) { m_crawlIdHasBeenSet = true; m_crawlId = std::forward<CrawlIdT>(value); }
    template<typename CrawlIdT = Aws::String>
    CrawlerHistory& WithCrawlId(CrawlIdT&& value) { SetCrawlId(std::forward<CrawlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the crawl.</p>
     */
    inline CrawlerHistoryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CrawlerHistoryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CrawlerHistory& WithState(CrawlerHistoryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CrawlerHistory& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CrawlerHistory& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A run summary for the specific crawl in JSON. Contains the catalog tables and
     * partitions that were added, updated, or deleted.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    CrawlerHistory& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the error message associated with the crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    CrawlerHistory& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    CrawlerHistory& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline const Aws::String& GetLogStream() const { return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    template<typename LogStreamT = Aws::String>
    void SetLogStream(LogStreamT&& value) { m_logStreamHasBeenSet = true; m_logStream = std::forward<LogStreamT>(value); }
    template<typename LogStreamT = Aws::String>
    CrawlerHistory& WithLogStream(LogStreamT&& value) { SetLogStream(std::forward<LogStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for a CloudWatch message about this crawl.</p>
     */
    inline const Aws::String& GetMessagePrefix() const { return m_messagePrefix; }
    inline bool MessagePrefixHasBeenSet() const { return m_messagePrefixHasBeenSet; }
    template<typename MessagePrefixT = Aws::String>
    void SetMessagePrefix(MessagePrefixT&& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = std::forward<MessagePrefixT>(value); }
    template<typename MessagePrefixT = Aws::String>
    CrawlerHistory& WithMessagePrefix(MessagePrefixT&& value) { SetMessagePrefix(std::forward<MessagePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data processing units (DPU) used in hours for the crawl.</p>
     */
    inline double GetDPUHour() const { return m_dPUHour; }
    inline bool DPUHourHasBeenSet() const { return m_dPUHourHasBeenSet; }
    inline void SetDPUHour(double value) { m_dPUHourHasBeenSet = true; m_dPUHour = value; }
    inline CrawlerHistory& WithDPUHour(double value) { SetDPUHour(value); return *this;}
    ///@}
  private:

    Aws::String m_crawlId;
    bool m_crawlIdHasBeenSet = false;

    CrawlerHistoryState m_state{CrawlerHistoryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet = false;

    Aws::String m_messagePrefix;
    bool m_messagePrefixHasBeenSet = false;

    double m_dPUHour{0.0};
    bool m_dPUHourHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
