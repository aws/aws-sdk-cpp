/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RejectedLogEventsInfo
  {
  public:
    AWS_CLOUDWATCHLOGS_API RejectedLogEventsInfo();
    AWS_CLOUDWATCHLOGS_API RejectedLogEventsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API RejectedLogEventsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The index of the first log event that is too new. This field is
     * inclusive.</p>
     */
    inline int GetTooNewLogEventStartIndex() const{ return m_tooNewLogEventStartIndex; }

    /**
     * <p>The index of the first log event that is too new. This field is
     * inclusive.</p>
     */
    inline bool TooNewLogEventStartIndexHasBeenSet() const { return m_tooNewLogEventStartIndexHasBeenSet; }

    /**
     * <p>The index of the first log event that is too new. This field is
     * inclusive.</p>
     */
    inline void SetTooNewLogEventStartIndex(int value) { m_tooNewLogEventStartIndexHasBeenSet = true; m_tooNewLogEventStartIndex = value; }

    /**
     * <p>The index of the first log event that is too new. This field is
     * inclusive.</p>
     */
    inline RejectedLogEventsInfo& WithTooNewLogEventStartIndex(int value) { SetTooNewLogEventStartIndex(value); return *this;}


    /**
     * <p>The index of the last log event that is too old. This field is exclusive.</p>
     */
    inline int GetTooOldLogEventEndIndex() const{ return m_tooOldLogEventEndIndex; }

    /**
     * <p>The index of the last log event that is too old. This field is exclusive.</p>
     */
    inline bool TooOldLogEventEndIndexHasBeenSet() const { return m_tooOldLogEventEndIndexHasBeenSet; }

    /**
     * <p>The index of the last log event that is too old. This field is exclusive.</p>
     */
    inline void SetTooOldLogEventEndIndex(int value) { m_tooOldLogEventEndIndexHasBeenSet = true; m_tooOldLogEventEndIndex = value; }

    /**
     * <p>The index of the last log event that is too old. This field is exclusive.</p>
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
    bool m_tooNewLogEventStartIndexHasBeenSet = false;

    int m_tooOldLogEventEndIndex;
    bool m_tooOldLogEventEndIndexHasBeenSet = false;

    int m_expiredLogEventEndIndex;
    bool m_expiredLogEventEndIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
