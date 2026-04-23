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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
   * <p>Represents the rejected events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/RejectedLogEventsInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHLOGS_API RejectedLogEventsInfo
  {
  public:
    RejectedLogEventsInfo();
    RejectedLogEventsInfo(Aws::Utils::Json::JsonView jsonValue);
    RejectedLogEventsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The log events that are too new.</p>
     */
    inline int GetTooNewLogEventStartIndex() const{ return m_tooNewLogEventStartIndex; }

    /**
     * <p>The log events that are too new.</p>
     */
    inline bool TooNewLogEventStartIndexHasBeenSet() const { return m_tooNewLogEventStartIndexHasBeenSet; }

    /**
     * <p>The log events that are too new.</p>
     */
    inline void SetTooNewLogEventStartIndex(int value) { m_tooNewLogEventStartIndexHasBeenSet = true; m_tooNewLogEventStartIndex = value; }

    /**
     * <p>The log events that are too new.</p>
     */
    inline RejectedLogEventsInfo& WithTooNewLogEventStartIndex(int value) { SetTooNewLogEventStartIndex(value); return *this;}


    /**
     * <p>The log events that are too old.</p>
     */
    inline int GetTooOldLogEventEndIndex() const{ return m_tooOldLogEventEndIndex; }

    /**
     * <p>The log events that are too old.</p>
     */
    inline bool TooOldLogEventEndIndexHasBeenSet() const { return m_tooOldLogEventEndIndexHasBeenSet; }

    /**
     * <p>The log events that are too old.</p>
     */
    inline void SetTooOldLogEventEndIndex(int value) { m_tooOldLogEventEndIndexHasBeenSet = true; m_tooOldLogEventEndIndex = value; }

    /**
     * <p>The log events that are too old.</p>
     */
    inline RejectedLogEventsInfo& WithTooOldLogEventEndIndex(int value) { SetTooOldLogEventEndIndex(value); return *this;}


    /**
     * <p>The expired log events.</p>
     */
    inline int GetExpiredLogEventEndIndex() const{ return m_expiredLogEventEndIndex; }

    /**
     * <p>The expired log events.</p>
     */
    inline bool ExpiredLogEventEndIndexHasBeenSet() const { return m_expiredLogEventEndIndexHasBeenSet; }

    /**
     * <p>The expired log events.</p>
     */
    inline void SetExpiredLogEventEndIndex(int value) { m_expiredLogEventEndIndexHasBeenSet = true; m_expiredLogEventEndIndex = value; }

    /**
     * <p>The expired log events.</p>
     */
    inline RejectedLogEventsInfo& WithExpiredLogEventEndIndex(int value) { SetExpiredLogEventEndIndex(value); return *this;}

  private:

    int m_tooNewLogEventStartIndex;
    bool m_tooNewLogEventStartIndexHasBeenSet;

    int m_tooOldLogEventEndIndex;
    bool m_tooOldLogEventEndIndexHasBeenSet;

    int m_expiredLogEventEndIndex;
    bool m_expiredLogEventEndIndexHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
