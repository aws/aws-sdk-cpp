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
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity() = default;
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API FindingMetricsValuePerSeverity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A numeric value corresponding to an informational finding.</p>
     */
    inline double GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(double value) { m_infoHasBeenSet = true; m_info = value; }
    inline FindingMetricsValuePerSeverity& WithInfo(double value) { SetInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value corresponding to a low severity finding.</p>
     */
    inline double GetLow() const { return m_low; }
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }
    inline void SetLow(double value) { m_lowHasBeenSet = true; m_low = value; }
    inline FindingMetricsValuePerSeverity& WithLow(double value) { SetLow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value corresponding to a medium severity finding.</p>
     */
    inline double GetMedium() const { return m_medium; }
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }
    inline void SetMedium(double value) { m_mediumHasBeenSet = true; m_medium = value; }
    inline FindingMetricsValuePerSeverity& WithMedium(double value) { SetMedium(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value corresponding to a high severity finding.</p>
     */
    inline double GetHigh() const { return m_high; }
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }
    inline void SetHigh(double value) { m_highHasBeenSet = true; m_high = value; }
    inline FindingMetricsValuePerSeverity& WithHigh(double value) { SetHigh(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric value corresponding to a critical finding.</p>
     */
    inline double GetCritical() const { return m_critical; }
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }
    inline void SetCritical(double value) { m_criticalHasBeenSet = true; m_critical = value; }
    inline FindingMetricsValuePerSeverity& WithCritical(double value) { SetCritical(value); return *this;}
    ///@}
  private:

    double m_info{0.0};
    bool m_infoHasBeenSet = false;

    double m_low{0.0};
    bool m_lowHasBeenSet = false;

    double m_medium{0.0};
    bool m_mediumHasBeenSet = false;

    double m_high{0.0};
    bool m_highHasBeenSet = false;

    double m_critical{0.0};
    bool m_criticalHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
