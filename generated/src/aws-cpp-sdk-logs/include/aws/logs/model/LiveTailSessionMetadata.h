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
   * <p>This object contains the metadata for one <code>LiveTailSessionUpdate</code>
   * structure. It indicates whether that update includes only a sample of 500 log
   * events out of a larger number of ingested log events, or if it contains all of
   * the matching log events ingested during that second of time.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LiveTailSessionMetadata">AWS
   * API Reference</a></p>
   */
  class LiveTailSessionMetadata
  {
  public:
    AWS_CLOUDWATCHLOGS_API LiveTailSessionMetadata();
    AWS_CLOUDWATCHLOGS_API LiveTailSessionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API LiveTailSessionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If this is <code>true</code>, then more than 500 log events matched the
     * request for this update, and the <code>sessionResults</code> includes a sample
     * of 500 of those events.</p> <p>If this is <code>false</code>, then 500 or fewer
     * log events matched the request for this update, so no sampling was necessary. In
     * this case, the <code>sessionResults</code> array includes all log events that
     * matched your request during this time.</p>
     */
    inline bool GetSampled() const{ return m_sampled; }

    /**
     * <p>If this is <code>true</code>, then more than 500 log events matched the
     * request for this update, and the <code>sessionResults</code> includes a sample
     * of 500 of those events.</p> <p>If this is <code>false</code>, then 500 or fewer
     * log events matched the request for this update, so no sampling was necessary. In
     * this case, the <code>sessionResults</code> array includes all log events that
     * matched your request during this time.</p>
     */
    inline bool SampledHasBeenSet() const { return m_sampledHasBeenSet; }

    /**
     * <p>If this is <code>true</code>, then more than 500 log events matched the
     * request for this update, and the <code>sessionResults</code> includes a sample
     * of 500 of those events.</p> <p>If this is <code>false</code>, then 500 or fewer
     * log events matched the request for this update, so no sampling was necessary. In
     * this case, the <code>sessionResults</code> array includes all log events that
     * matched your request during this time.</p>
     */
    inline void SetSampled(bool value) { m_sampledHasBeenSet = true; m_sampled = value; }

    /**
     * <p>If this is <code>true</code>, then more than 500 log events matched the
     * request for this update, and the <code>sessionResults</code> includes a sample
     * of 500 of those events.</p> <p>If this is <code>false</code>, then 500 or fewer
     * log events matched the request for this update, so no sampling was necessary. In
     * this case, the <code>sessionResults</code> array includes all log events that
     * matched your request during this time.</p>
     */
    inline LiveTailSessionMetadata& WithSampled(bool value) { SetSampled(value); return *this;}

  private:

    bool m_sampled;
    bool m_sampledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
