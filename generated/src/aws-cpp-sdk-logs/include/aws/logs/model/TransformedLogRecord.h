﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information for one log event that has been processed
   * by a log transformer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TransformedLogRecord">AWS
   * API Reference</a></p>
   */
  class TransformedLogRecord
  {
  public:
    AWS_CLOUDWATCHLOGS_API TransformedLogRecord();
    AWS_CLOUDWATCHLOGS_API TransformedLogRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API TransformedLogRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event number.</p>
     */
    inline long long GetEventNumber() const{ return m_eventNumber; }
    inline bool EventNumberHasBeenSet() const { return m_eventNumberHasBeenSet; }
    inline void SetEventNumber(long long value) { m_eventNumberHasBeenSet = true; m_eventNumber = value; }
    inline TransformedLogRecord& WithEventNumber(long long value) { SetEventNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original log event message before it was transformed.</p>
     */
    inline const Aws::String& GetEventMessage() const{ return m_eventMessage; }
    inline bool EventMessageHasBeenSet() const { return m_eventMessageHasBeenSet; }
    inline void SetEventMessage(const Aws::String& value) { m_eventMessageHasBeenSet = true; m_eventMessage = value; }
    inline void SetEventMessage(Aws::String&& value) { m_eventMessageHasBeenSet = true; m_eventMessage = std::move(value); }
    inline void SetEventMessage(const char* value) { m_eventMessageHasBeenSet = true; m_eventMessage.assign(value); }
    inline TransformedLogRecord& WithEventMessage(const Aws::String& value) { SetEventMessage(value); return *this;}
    inline TransformedLogRecord& WithEventMessage(Aws::String&& value) { SetEventMessage(std::move(value)); return *this;}
    inline TransformedLogRecord& WithEventMessage(const char* value) { SetEventMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log event message after being transformed.</p>
     */
    inline const Aws::String& GetTransformedEventMessage() const{ return m_transformedEventMessage; }
    inline bool TransformedEventMessageHasBeenSet() const { return m_transformedEventMessageHasBeenSet; }
    inline void SetTransformedEventMessage(const Aws::String& value) { m_transformedEventMessageHasBeenSet = true; m_transformedEventMessage = value; }
    inline void SetTransformedEventMessage(Aws::String&& value) { m_transformedEventMessageHasBeenSet = true; m_transformedEventMessage = std::move(value); }
    inline void SetTransformedEventMessage(const char* value) { m_transformedEventMessageHasBeenSet = true; m_transformedEventMessage.assign(value); }
    inline TransformedLogRecord& WithTransformedEventMessage(const Aws::String& value) { SetTransformedEventMessage(value); return *this;}
    inline TransformedLogRecord& WithTransformedEventMessage(Aws::String&& value) { SetTransformedEventMessage(std::move(value)); return *this;}
    inline TransformedLogRecord& WithTransformedEventMessage(const char* value) { SetTransformedEventMessage(value); return *this;}
    ///@}
  private:

    long long m_eventNumber;
    bool m_eventNumberHasBeenSet = false;

    Aws::String m_eventMessage;
    bool m_eventMessageHasBeenSet = false;

    Aws::String m_transformedEventMessage;
    bool m_transformedEventMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
