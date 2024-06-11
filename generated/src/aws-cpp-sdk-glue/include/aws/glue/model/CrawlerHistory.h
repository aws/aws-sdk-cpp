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
    AWS_GLUE_API CrawlerHistory();
    AWS_GLUE_API CrawlerHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CrawlerHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A UUID identifier for each crawl.</p>
     */
    inline const Aws::String& GetCrawlId() const{ return m_crawlId; }
    inline bool CrawlIdHasBeenSet() const { return m_crawlIdHasBeenSet; }
    inline void SetCrawlId(const Aws::String& value) { m_crawlIdHasBeenSet = true; m_crawlId = value; }
    inline void SetCrawlId(Aws::String&& value) { m_crawlIdHasBeenSet = true; m_crawlId = std::move(value); }
    inline void SetCrawlId(const char* value) { m_crawlIdHasBeenSet = true; m_crawlId.assign(value); }
    inline CrawlerHistory& WithCrawlId(const Aws::String& value) { SetCrawlId(value); return *this;}
    inline CrawlerHistory& WithCrawlId(Aws::String&& value) { SetCrawlId(std::move(value)); return *this;}
    inline CrawlerHistory& WithCrawlId(const char* value) { SetCrawlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the crawl.</p>
     */
    inline const CrawlerHistoryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CrawlerHistoryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CrawlerHistoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CrawlerHistory& WithState(const CrawlerHistoryState& value) { SetState(value); return *this;}
    inline CrawlerHistory& WithState(CrawlerHistoryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline CrawlerHistory& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline CrawlerHistory& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time on which the crawl ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline CrawlerHistory& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline CrawlerHistory& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A run summary for the specific crawl in JSON. Contains the catalog tables and
     * partitions that were added, updated, or deleted.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline CrawlerHistory& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline CrawlerHistory& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline CrawlerHistory& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the error message associated with the crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline CrawlerHistory& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline CrawlerHistory& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline CrawlerHistory& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group associated with the crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline CrawlerHistory& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline CrawlerHistory& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline CrawlerHistory& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream associated with the crawl.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    inline void SetLogStream(const Aws::String& value) { m_logStreamHasBeenSet = true; m_logStream = value; }
    inline void SetLogStream(Aws::String&& value) { m_logStreamHasBeenSet = true; m_logStream = std::move(value); }
    inline void SetLogStream(const char* value) { m_logStreamHasBeenSet = true; m_logStream.assign(value); }
    inline CrawlerHistory& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}
    inline CrawlerHistory& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}
    inline CrawlerHistory& WithLogStream(const char* value) { SetLogStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for a CloudWatch message about this crawl.</p>
     */
    inline const Aws::String& GetMessagePrefix() const{ return m_messagePrefix; }
    inline bool MessagePrefixHasBeenSet() const { return m_messagePrefixHasBeenSet; }
    inline void SetMessagePrefix(const Aws::String& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = value; }
    inline void SetMessagePrefix(Aws::String&& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = std::move(value); }
    inline void SetMessagePrefix(const char* value) { m_messagePrefixHasBeenSet = true; m_messagePrefix.assign(value); }
    inline CrawlerHistory& WithMessagePrefix(const Aws::String& value) { SetMessagePrefix(value); return *this;}
    inline CrawlerHistory& WithMessagePrefix(Aws::String&& value) { SetMessagePrefix(std::move(value)); return *this;}
    inline CrawlerHistory& WithMessagePrefix(const char* value) { SetMessagePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of data processing units (DPU) used in hours for the crawl.</p>
     */
    inline double GetDPUHour() const{ return m_dPUHour; }
    inline bool DPUHourHasBeenSet() const { return m_dPUHourHasBeenSet; }
    inline void SetDPUHour(double value) { m_dPUHourHasBeenSet = true; m_dPUHour = value; }
    inline CrawlerHistory& WithDPUHour(double value) { SetDPUHour(value); return *this;}
    ///@}
  private:

    Aws::String m_crawlId;
    bool m_crawlIdHasBeenSet = false;

    CrawlerHistoryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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

    double m_dPUHour;
    bool m_dPUHourHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
