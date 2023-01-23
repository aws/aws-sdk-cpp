/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/JobLogEvent.h>
#include <aws/drs/model/JobLogEventData.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A log outputted by a Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/JobLog">AWS API
   * Reference</a></p>
   */
  class JobLog
  {
  public:
    AWS_DRS_API JobLog();
    AWS_DRS_API JobLog(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API JobLog& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event represents the type of a log.</p>
     */
    inline const JobLogEvent& GetEvent() const{ return m_event; }

    /**
     * <p>The event represents the type of a log.</p>
     */
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }

    /**
     * <p>The event represents the type of a log.</p>
     */
    inline void SetEvent(const JobLogEvent& value) { m_eventHasBeenSet = true; m_event = value; }

    /**
     * <p>The event represents the type of a log.</p>
     */
    inline void SetEvent(JobLogEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }

    /**
     * <p>The event represents the type of a log.</p>
     */
    inline JobLog& WithEvent(const JobLogEvent& value) { SetEvent(value); return *this;}

    /**
     * <p>The event represents the type of a log.</p>
     */
    inline JobLog& WithEvent(JobLogEvent&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline const JobLogEventData& GetEventData() const{ return m_eventData; }

    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline bool EventDataHasBeenSet() const { return m_eventDataHasBeenSet; }

    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline void SetEventData(const JobLogEventData& value) { m_eventDataHasBeenSet = true; m_eventData = value; }

    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline void SetEventData(JobLogEventData&& value) { m_eventDataHasBeenSet = true; m_eventData = std::move(value); }

    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline JobLog& WithEventData(const JobLogEventData& value) { SetEventData(value); return *this;}

    /**
     * <p>Metadata associated with a Job log.</p>
     */
    inline JobLog& WithEventData(JobLogEventData&& value) { SetEventData(std::move(value)); return *this;}


    /**
     * <p>The date and time the log was taken.</p>
     */
    inline const Aws::String& GetLogDateTime() const{ return m_logDateTime; }

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline bool LogDateTimeHasBeenSet() const { return m_logDateTimeHasBeenSet; }

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline void SetLogDateTime(const Aws::String& value) { m_logDateTimeHasBeenSet = true; m_logDateTime = value; }

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline void SetLogDateTime(Aws::String&& value) { m_logDateTimeHasBeenSet = true; m_logDateTime = std::move(value); }

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline void SetLogDateTime(const char* value) { m_logDateTimeHasBeenSet = true; m_logDateTime.assign(value); }

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline JobLog& WithLogDateTime(const Aws::String& value) { SetLogDateTime(value); return *this;}

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline JobLog& WithLogDateTime(Aws::String&& value) { SetLogDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the log was taken.</p>
     */
    inline JobLog& WithLogDateTime(const char* value) { SetLogDateTime(value); return *this;}

  private:

    JobLogEvent m_event;
    bool m_eventHasBeenSet = false;

    JobLogEventData m_eventData;
    bool m_eventDataHasBeenSet = false;

    Aws::String m_logDateTime;
    bool m_logDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
