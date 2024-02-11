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
   * <p>The severity of the issue in the code that generated a finding.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>The severity of the finding is critical and should be addressed
     * immediately.</p>
     */
    inline double GetCritical() const{ return m_critical; }

    /**
     * <p>The severity of the finding is critical and should be addressed
     * immediately.</p>
     */
    inline bool CriticalHasBeenSet() const { return m_criticalHasBeenSet; }

    /**
     * <p>The severity of the finding is critical and should be addressed
     * immediately.</p>
     */
    inline void SetCritical(double value) { m_criticalHasBeenSet = true; m_critical = value; }

    /**
     * <p>The severity of the finding is critical and should be addressed
     * immediately.</p>
     */
    inline FindingMetricsValuePerSeverity& WithCritical(double value) { SetCritical(value); return *this;}


    /**
     * <p>The severity of the finding is high and should be addressed as a near-term
     * priority.</p>
     */
    inline double GetHigh() const{ return m_high; }

    /**
     * <p>The severity of the finding is high and should be addressed as a near-term
     * priority.</p>
     */
    inline bool HighHasBeenSet() const { return m_highHasBeenSet; }

    /**
     * <p>The severity of the finding is high and should be addressed as a near-term
     * priority.</p>
     */
    inline void SetHigh(double value) { m_highHasBeenSet = true; m_high = value; }

    /**
     * <p>The severity of the finding is high and should be addressed as a near-term
     * priority.</p>
     */
    inline FindingMetricsValuePerSeverity& WithHigh(double value) { SetHigh(value); return *this;}


    /**
     * <p>The finding is related to quality or readability improvements and not
     * considered actionable.</p>
     */
    inline double GetInfo() const{ return m_info; }

    /**
     * <p>The finding is related to quality or readability improvements and not
     * considered actionable.</p>
     */
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }

    /**
     * <p>The finding is related to quality or readability improvements and not
     * considered actionable.</p>
     */
    inline void SetInfo(double value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>The finding is related to quality or readability improvements and not
     * considered actionable.</p>
     */
    inline FindingMetricsValuePerSeverity& WithInfo(double value) { SetInfo(value); return *this;}


    /**
     * <p>The severity of the finding is low and does require action on its own.</p>
     */
    inline double GetLow() const{ return m_low; }

    /**
     * <p>The severity of the finding is low and does require action on its own.</p>
     */
    inline bool LowHasBeenSet() const { return m_lowHasBeenSet; }

    /**
     * <p>The severity of the finding is low and does require action on its own.</p>
     */
    inline void SetLow(double value) { m_lowHasBeenSet = true; m_low = value; }

    /**
     * <p>The severity of the finding is low and does require action on its own.</p>
     */
    inline FindingMetricsValuePerSeverity& WithLow(double value) { SetLow(value); return *this;}


    /**
     * <p>The severity of the finding is medium and should be addressed as a mid-term
     * priority.</p>
     */
    inline double GetMedium() const{ return m_medium; }

    /**
     * <p>The severity of the finding is medium and should be addressed as a mid-term
     * priority.</p>
     */
    inline bool MediumHasBeenSet() const { return m_mediumHasBeenSet; }

    /**
     * <p>The severity of the finding is medium and should be addressed as a mid-term
     * priority.</p>
     */
    inline void SetMedium(double value) { m_mediumHasBeenSet = true; m_medium = value; }

    /**
     * <p>The severity of the finding is medium and should be addressed as a mid-term
     * priority.</p>
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
