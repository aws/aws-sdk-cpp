/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>

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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>A numeric value corresponding to the severity of a finding, such as the
   * number of open findings or the average time it takes to close findings of a
   * given severity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/FindingMetricsValuePerSeverity">AWS
   * API Reference</a></p>
   */
  class FindingMetricsValuePerSeverity
  {
  public:
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity();
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A numeric value corresponding to a critical finding.</p>
     */
    inline double GetCritical() const{ return m_critical; }

    /**
     * <p>A numeric value corresponding to a critical finding.</p>
     */
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }

    /**
     * <p>A numeric value corresponding to a critical finding.</p>
     */
    inline void SetCritical(double value) { m_criticalHasBeenSet = true; m_critical = value; }

    /**
     * <p>A numeric value corresponding to a critical finding.</p>
     */
    inline FindingMetricsValuePerSeverity& WithCritical(double value) { SetCritical(value); return *this;}


    /**
     * <p>A numeric value corresponding to a high severity finding.</p>
     */
    inline double GetHigh() const{ return m_high; }

    /**
     * <p>A numeric value corresponding to a high severity finding.</p>
     */
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }

    /**
     * <p>A numeric value corresponding to a high severity finding.</p>
     */
    inline void SetHigh(double value) { m_highHasBeenSet = true; m_high = value; }

    /**
     * <p>A numeric value corresponding to a high severity finding.</p>
     */
    inline FindingMetricsValuePerSeverity& WithHigh(double value) { SetHigh(value); return *this;}


    /**
     * <p>A numeric value corresponding to an informational finding.</p>
     */
    inline double GetInfo() const{ return m_info; }

    /**
     * <p>A numeric value corresponding to an informational finding.</p>
     */
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }

    /**
     * <p>A numeric value corresponding to an informational finding.</p>
     */
    inline void SetInfo(double value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>A numeric value corresponding to an informational finding.</p>
     */
    inline FindingMetricsValuePerSeverity& WithInfo(double value) { SetInfo(value); return *this;}


    /**
     * <p>A numeric value corresponding to a low severity finding.</p>
     */
    inline double GetLow() const{ return m_low; }

    /**
     * <p>A numeric value corresponding to a low severity finding.</p>
     */
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }

    /**
     * <p>A numeric value corresponding to a low severity finding.</p>
     */
    inline void SetLow(double value) { m_lowHasBeenSet = true; m_low = value; }

    /**
     * <p>A numeric value corresponding to a low severity finding.</p>
     */
    inline FindingMetricsValuePerSeverity& WithLow(double value) { SetLow(value); return *this;}


    /**
     * <p>A numeric value corresponding to a medium severity finding.</p>
     */
    inline double GetMedium() const{ return m_medium; }

    /**
     * <p>A numeric value corresponding to a medium severity finding.</p>
     */
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }

    /**
     * <p>A numeric value corresponding to a medium severity finding.</p>
     */
    inline void SetMedium(double value) { m_mediumHasBeenSet = true; m_medium = value; }

    /**
     * <p>A numeric value corresponding to a medium severity finding.</p>
     */
    inline FindingMetricsValuePerSeverity& WithMedium(double value) { SetMedium(value); return *this;}

  private:

    double m_critical;
    bool m_criticalHasBeenSet = false;

    double m_high;
    bool m_highHasBeenSet = false;

    double m_info;
    bool m_infoHasBeenSet = false;

    double m_low;
    bool m_lowHasBeenSet = false;

    double m_medium;
    bool m_mediumHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
