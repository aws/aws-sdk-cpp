/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>The filter criteria used for import tasks</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ImportFilter">AWS
 * API Reference</a></p>
 */
class ImportFilter {
 public:
  AWS_CLOUDWATCHLOGS_API ImportFilter() = default;
  AWS_CLOUDWATCHLOGS_API ImportFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API ImportFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start of the time range for events to import, expressed as the number of
   * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetStartEventTime() const { return m_startEventTime; }
  inline bool StartEventTimeHasBeenSet() const { return m_startEventTimeHasBeenSet; }
  inline void SetStartEventTime(long long value) {
    m_startEventTimeHasBeenSet = true;
    m_startEventTime = value;
  }
  inline ImportFilter& WithStartEventTime(long long value) {
    SetStartEventTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range for events to import, expressed as the number of
   * milliseconds after Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline long long GetEndEventTime() const { return m_endEventTime; }
  inline bool EndEventTimeHasBeenSet() const { return m_endEventTimeHasBeenSet; }
  inline void SetEndEventTime(long long value) {
    m_endEventTimeHasBeenSet = true;
    m_endEventTime = value;
  }
  inline ImportFilter& WithEndEventTime(long long value) {
    SetEndEventTime(value);
    return *this;
  }
  ///@}
 private:
  long long m_startEventTime{0};

  long long m_endEventTime{0};
  bool m_startEventTimeHasBeenSet = false;
  bool m_endEventTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
