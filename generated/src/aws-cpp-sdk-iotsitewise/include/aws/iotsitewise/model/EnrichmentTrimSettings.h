/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/TimeInNanos.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * &lt;p&gt;Time range settings for extracting a specific window of video
 * time-series data to process.&lt;/p&gt; &lt;p&gt;Trim settings define the time
 * bounds for enrichment and must satisfy:&lt;/p&gt; &lt;ul&gt; &lt;li&gt;Start and
 * end times must be within the dataset's time bounds&lt;/li&gt; &lt;li&gt;Trim
 * settings retrieve fully contained data segments within the specified time
 * range&lt;/li&gt; &lt;li&gt;endTime must be greater than startTime&lt;/li&gt;
 * &lt;li&gt;Both times should represent valid data ranges in the
 * dataset&lt;/li&gt; &lt;/ul&gt; &lt;p&gt;Trim settings are required to:&lt;/p&gt;
 * &lt;ul&gt; &lt;li&gt;Prevent accidentally analyzing unbounded
 * datasets&lt;/li&gt; &lt;li&gt;Ensure predictable processing time and
 * costs&lt;/li&gt; &lt;li&gt;Allow focused analysis on specific time periods of
 * interest&lt;/li&gt; &lt;/ul&gt;<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/EnrichmentTrimSettings">AWS
 * API Reference</a></p>
 */
class EnrichmentTrimSettings {
 public:
  AWS_IOTSITEWISE_API EnrichmentTrimSettings() = default;
  AWS_IOTSITEWISE_API EnrichmentTrimSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API EnrichmentTrimSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * &lt;p&gt;Start time for the video analysis time range in nanoseconds since Unix
   * epoch (TimeInNanos format). Data segments at or after this time are included in
   * the enrichment. Must be within the dataset's time bounds.&lt;/p&gt;
   * &lt;p&gt;Example (JavaScript): Date.parse('2024-01-01T00:00:00Z') * 1000000
   * Example (Python): int(datetime.timestamp() * 1e9)&lt;/p&gt;
   */
  inline const TimeInNanos& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = TimeInNanos>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = TimeInNanos>
  EnrichmentTrimSettings& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * &lt;p&gt;End time for the video analysis time range in nanoseconds since Unix
   * epoch (TimeInNanos format). Data segments at or before this time are included in
   * the enrichment. Must be greater than startTime and within the dataset's time
   * bounds.&lt;/p&gt;
   */
  inline const TimeInNanos& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = TimeInNanos>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = TimeInNanos>
  EnrichmentTrimSettings& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  TimeInNanos m_startTime;

  TimeInNanos m_endTime;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
