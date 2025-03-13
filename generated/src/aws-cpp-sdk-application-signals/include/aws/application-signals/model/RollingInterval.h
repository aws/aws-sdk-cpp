/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DurationUnit.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>If the interval for this SLO is a rolling interval, this structure contains
   * the interval specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/RollingInterval">AWS
   * API Reference</a></p>
   */
  class RollingInterval
  {
  public:
    AWS_APPLICATIONSIGNALS_API RollingInterval() = default;
    AWS_APPLICATIONSIGNALS_API RollingInterval(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RollingInterval& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the rolling interval unit.</p>
     */
    inline DurationUnit GetDurationUnit() const { return m_durationUnit; }
    inline bool DurationUnitHasBeenSet() const { return m_durationUnitHasBeenSet; }
    inline void SetDurationUnit(DurationUnit value) { m_durationUnitHasBeenSet = true; m_durationUnit = value; }
    inline RollingInterval& WithDurationUnit(DurationUnit value) { SetDurationUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the duration of each rolling interval. For example, if
     * <code>Duration</code> is <code>7</code> and <code>DurationUnit</code> is
     * <code>DAY</code>, each rolling interval is seven days.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RollingInterval& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}
  private:

    DurationUnit m_durationUnit{DurationUnit::NOT_SET};
    bool m_durationUnitHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
