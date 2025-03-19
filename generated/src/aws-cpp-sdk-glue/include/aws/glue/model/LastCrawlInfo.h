/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/LastCrawlStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Status and error information about the most recent crawl.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LastCrawlInfo">AWS
   * API Reference</a></p>
   */
  class LastCrawlInfo
  {
  public:
    AWS_GLUE_API LastCrawlInfo() = default;
    AWS_GLUE_API LastCrawlInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LastCrawlInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the last crawl.</p>
     */
    inline LastCrawlStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LastCrawlStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LastCrawlInfo& WithStatus(LastCrawlStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    LastCrawlInfo& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group for the last crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    LastCrawlInfo& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline const Aws::String& GetLogStream() const { return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    template<typename LogStreamT = Aws::String>
    void SetLogStream(LogStreamT&& value) { m_logStreamHasBeenSet = true; m_logStream = std::forward<LogStreamT>(value); }
    template<typename LogStreamT = Aws::String>
    LastCrawlInfo& WithLogStream(LogStreamT&& value) { SetLogStream(std::forward<LogStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline const Aws::String& GetMessagePrefix() const { return m_messagePrefix; }
    inline bool MessagePrefixHasBeenSet() const { return m_messagePrefixHasBeenSet; }
    template<typename MessagePrefixT = Aws::String>
    void SetMessagePrefix(MessagePrefixT&& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = std::forward<MessagePrefixT>(value); }
    template<typename MessagePrefixT = Aws::String>
    LastCrawlInfo& WithMessagePrefix(MessagePrefixT&& value) { SetMessagePrefix(std::forward<MessagePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LastCrawlInfo& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    LastCrawlStatus m_status{LastCrawlStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet = false;

    Aws::String m_messagePrefix;
    bool m_messagePrefixHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
