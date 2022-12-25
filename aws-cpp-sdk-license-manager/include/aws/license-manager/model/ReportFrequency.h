/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ReportFrequencyType.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details about how frequently reports are generated.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ReportFrequency">AWS
   * API Reference</a></p>
   */
  class ReportFrequency
  {
  public:
    AWS_LICENSEMANAGER_API ReportFrequency();
    AWS_LICENSEMANAGER_API ReportFrequency(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ReportFrequency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of times within the frequency period that a report is generated. The
     * only supported value is <code>1</code>.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Number of times within the frequency period that a report is generated. The
     * only supported value is <code>1</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Number of times within the frequency period that a report is generated. The
     * only supported value is <code>1</code>.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Number of times within the frequency period that a report is generated. The
     * only supported value is <code>1</code>.</p>
     */
    inline ReportFrequency& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline const ReportFrequencyType& GetPeriod() const{ return m_period; }

    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline void SetPeriod(const ReportFrequencyType& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline void SetPeriod(ReportFrequencyType&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline ReportFrequency& WithPeriod(const ReportFrequencyType& value) { SetPeriod(value); return *this;}

    /**
     * <p>Time period between each report. The period can be daily, weekly, or
     * monthly.</p>
     */
    inline ReportFrequency& WithPeriod(ReportFrequencyType&& value) { SetPeriod(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet = false;

    ReportFrequencyType m_period;
    bool m_periodHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
