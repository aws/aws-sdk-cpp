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
    AWS_GLUE_API LastCrawlInfo();
    AWS_GLUE_API LastCrawlInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LastCrawlInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the last crawl.</p>
     */
    inline const LastCrawlStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LastCrawlStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LastCrawlStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LastCrawlInfo& WithStatus(const LastCrawlStatus& value) { SetStatus(value); return *this;}
    inline LastCrawlInfo& WithStatus(LastCrawlStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline LastCrawlInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline LastCrawlInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline LastCrawlInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group for the last crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline LastCrawlInfo& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline LastCrawlInfo& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline LastCrawlInfo& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }
    inline void SetLogStream(const Aws::String& value) { m_logStreamHasBeenSet = true; m_logStream = value; }
    inline void SetLogStream(Aws::String&& value) { m_logStreamHasBeenSet = true; m_logStream = std::move(value); }
    inline void SetLogStream(const char* value) { m_logStreamHasBeenSet = true; m_logStream.assign(value); }
    inline LastCrawlInfo& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}
    inline LastCrawlInfo& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}
    inline LastCrawlInfo& WithLogStream(const char* value) { SetLogStream(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline const Aws::String& GetMessagePrefix() const{ return m_messagePrefix; }
    inline bool MessagePrefixHasBeenSet() const { return m_messagePrefixHasBeenSet; }
    inline void SetMessagePrefix(const Aws::String& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = value; }
    inline void SetMessagePrefix(Aws::String&& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = std::move(value); }
    inline void SetMessagePrefix(const char* value) { m_messagePrefixHasBeenSet = true; m_messagePrefix.assign(value); }
    inline LastCrawlInfo& WithMessagePrefix(const Aws::String& value) { SetMessagePrefix(value); return *this;}
    inline LastCrawlInfo& WithMessagePrefix(Aws::String&& value) { SetMessagePrefix(std::move(value)); return *this;}
    inline LastCrawlInfo& WithMessagePrefix(const char* value) { SetMessagePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline LastCrawlInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline LastCrawlInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}
  private:

    LastCrawlStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet = false;

    Aws::String m_messagePrefix;
    bool m_messagePrefixHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
