/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API LastCrawlInfo
  {
  public:
    LastCrawlInfo();
    LastCrawlInfo(Aws::Utils::Json::JsonView jsonValue);
    LastCrawlInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the last crawl.</p>
     */
    inline const LastCrawlStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the last crawl.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the last crawl.</p>
     */
    inline void SetStatus(const LastCrawlStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the last crawl.</p>
     */
    inline void SetStatus(LastCrawlStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the last crawl.</p>
     */
    inline LastCrawlInfo& WithStatus(const LastCrawlStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the last crawl.</p>
     */
    inline LastCrawlInfo& WithStatus(LastCrawlStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline LastCrawlInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline LastCrawlInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, the error information about the last crawl.</p>
     */
    inline LastCrawlInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The log group for the last crawl.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The log group for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}


    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline bool LogStreamHasBeenSet() const { return m_logStreamHasBeenSet; }

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline void SetLogStream(const Aws::String& value) { m_logStreamHasBeenSet = true; m_logStream = value; }

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline void SetLogStream(Aws::String&& value) { m_logStreamHasBeenSet = true; m_logStream = std::move(value); }

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline void SetLogStream(const char* value) { m_logStreamHasBeenSet = true; m_logStream.assign(value); }

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}

    /**
     * <p>The log stream for the last crawl.</p>
     */
    inline LastCrawlInfo& WithLogStream(const char* value) { SetLogStream(value); return *this;}


    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline const Aws::String& GetMessagePrefix() const{ return m_messagePrefix; }

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline bool MessagePrefixHasBeenSet() const { return m_messagePrefixHasBeenSet; }

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline void SetMessagePrefix(const Aws::String& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = value; }

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline void SetMessagePrefix(Aws::String&& value) { m_messagePrefixHasBeenSet = true; m_messagePrefix = std::move(value); }

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline void SetMessagePrefix(const char* value) { m_messagePrefixHasBeenSet = true; m_messagePrefix.assign(value); }

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline LastCrawlInfo& WithMessagePrefix(const Aws::String& value) { SetMessagePrefix(value); return *this;}

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline LastCrawlInfo& WithMessagePrefix(Aws::String&& value) { SetMessagePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for a message about this crawl.</p>
     */
    inline LastCrawlInfo& WithMessagePrefix(const char* value) { SetMessagePrefix(value); return *this;}


    /**
     * <p>The time at which the crawl started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the crawl started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time at which the crawl started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time at which the crawl started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time at which the crawl started.</p>
     */
    inline LastCrawlInfo& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the crawl started.</p>
     */
    inline LastCrawlInfo& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    LastCrawlStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet;

    Aws::String m_logStream;
    bool m_logStreamHasBeenSet;

    Aws::String m_messagePrefix;
    bool m_messagePrefixHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
