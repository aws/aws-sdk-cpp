/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ScheduleConfigurationUnit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Configuration for scheduled segment membership event notifications.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ScheduleConfiguration">AWS
 * API Reference</a></p>
 */
class ScheduleConfiguration {
 public:
  AWS_CUSTOMERPROFILES_API ScheduleConfiguration() = default;
  AWS_CUSTOMERPROFILES_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The interval between scheduled executions. </p>
   */
  inline int GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  inline void SetInterval(int value) {
    m_intervalHasBeenSet = true;
    m_interval = value;
  }
  inline ScheduleConfiguration& WithInterval(int value) {
    SetInterval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit for the interval. The following are valid values: </p> <ul> <li> <p>
   * <b>HOURLY</b>: The interval is measured in hours. </p> </li> </ul>
   */
  inline ScheduleConfigurationUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(ScheduleConfigurationUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline ScheduleConfiguration& WithUnit(ScheduleConfigurationUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}
 private:
  int m_interval{0};

  ScheduleConfigurationUnit m_unit{ScheduleConfigurationUnit::NOT_SET};
  bool m_intervalHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
