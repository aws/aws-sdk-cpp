/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/RefreshScheduleFrequencyUnit.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> Specifies the frequency for a dashboard refresh schedule. </p> <p> For a
   * custom dashboard, you can schedule a refresh for every 1, 6, 12, or 24 hours, or
   * every day. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/RefreshScheduleFrequency">AWS
   * API Reference</a></p>
   */
  class RefreshScheduleFrequency
  {
  public:
    AWS_CLOUDTRAIL_API RefreshScheduleFrequency() = default;
    AWS_CLOUDTRAIL_API RefreshScheduleFrequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API RefreshScheduleFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unit to use for the refresh. </p> <p>For custom dashboards, the unit can
     * be <code>HOURS</code> or <code>DAYS</code>.</p> <p>For the Highlights dashboard,
     * the <code>Unit</code> must be <code>HOURS</code>.</p>
     */
    inline RefreshScheduleFrequencyUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(RefreshScheduleFrequencyUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline RefreshScheduleFrequency& WithUnit(RefreshScheduleFrequencyUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value for the refresh schedule. </p> <p> For custom dashboards, the
     * following values are valid when the unit is <code>HOURS</code>: <code>1</code>,
     * <code>6</code>, <code>12</code>, <code>24</code> </p> <p>For custom dashboards,
     * the only valid value when the unit is <code>DAYS</code> is <code>1</code>.</p>
     * <p>For the Highlights dashboard, the <code>Value</code> must be
     * <code>6</code>.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline RefreshScheduleFrequency& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    RefreshScheduleFrequencyUnit m_unit{RefreshScheduleFrequencyUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
