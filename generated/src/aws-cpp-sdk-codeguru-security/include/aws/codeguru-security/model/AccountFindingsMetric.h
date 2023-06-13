/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>A summary of findings metrics in an account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/AccountFindingsMetric">AWS
   * API Reference</a></p>
   */
  class AccountFindingsMetric
  {
  public:
    AWS_CODEGURUSECURITY_API AccountFindingsMetric();
    AWS_CODEGURUSECURITY_API AccountFindingsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API AccountFindingsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetClosedFindings() const{ return m_closedFindings; }

    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline bool ClosedFindingsHasBeenSet() const { return m_closedFindingsHasBeenSet; }

    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline void SetClosedFindings(const FindingMetricsValuePerSeverity& value) { m_closedFindingsHasBeenSet = true; m_closedFindings = value; }

    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline void SetClosedFindings(FindingMetricsValuePerSeverity&& value) { m_closedFindingsHasBeenSet = true; m_closedFindings = std::move(value); }

    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline AccountFindingsMetric& WithClosedFindings(const FindingMetricsValuePerSeverity& value) { SetClosedFindings(value); return *this;}

    /**
     * <p>The number of closed findings of each severity in an account on the specified
     * date.</p>
     */
    inline AccountFindingsMetric& WithClosedFindings(FindingMetricsValuePerSeverity&& value) { SetClosedFindings(std::move(value)); return *this;}


    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline AccountFindingsMetric& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date from which the finding metrics were retrieved.</p>
     */
    inline AccountFindingsMetric& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetMeanTimeToClose() const{ return m_meanTimeToClose; }

    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline bool MeanTimeToCloseHasBeenSet() const { return m_meanTimeToCloseHasBeenSet; }

    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline void SetMeanTimeToClose(const FindingMetricsValuePerSeverity& value) { m_meanTimeToCloseHasBeenSet = true; m_meanTimeToClose = value; }

    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline void SetMeanTimeToClose(FindingMetricsValuePerSeverity&& value) { m_meanTimeToCloseHasBeenSet = true; m_meanTimeToClose = std::move(value); }

    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline AccountFindingsMetric& WithMeanTimeToClose(const FindingMetricsValuePerSeverity& value) { SetMeanTimeToClose(value); return *this;}

    /**
     * <p>The average time it takes to close findings of each severity in days.</p>
     */
    inline AccountFindingsMetric& WithMeanTimeToClose(FindingMetricsValuePerSeverity&& value) { SetMeanTimeToClose(std::move(value)); return *this;}


    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetNewFindings() const{ return m_newFindings; }

    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline bool NewFindingsHasBeenSet() const { return m_newFindingsHasBeenSet; }

    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline void SetNewFindings(const FindingMetricsValuePerSeverity& value) { m_newFindingsHasBeenSet = true; m_newFindings = value; }

    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline void SetNewFindings(FindingMetricsValuePerSeverity&& value) { m_newFindingsHasBeenSet = true; m_newFindings = std::move(value); }

    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline AccountFindingsMetric& WithNewFindings(const FindingMetricsValuePerSeverity& value) { SetNewFindings(value); return *this;}

    /**
     * <p>The number of new findings of each severity in account on the specified
     * date.</p>
     */
    inline AccountFindingsMetric& WithNewFindings(FindingMetricsValuePerSeverity&& value) { SetNewFindings(std::move(value)); return *this;}


    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetOpenFindings() const{ return m_openFindings; }

    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline bool OpenFindingsHasBeenSet() const { return m_openFindingsHasBeenSet; }

    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline void SetOpenFindings(const FindingMetricsValuePerSeverity& value) { m_openFindingsHasBeenSet = true; m_openFindings = value; }

    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline void SetOpenFindings(FindingMetricsValuePerSeverity&& value) { m_openFindingsHasBeenSet = true; m_openFindings = std::move(value); }

    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline AccountFindingsMetric& WithOpenFindings(const FindingMetricsValuePerSeverity& value) { SetOpenFindings(value); return *this;}

    /**
     * <p>The number of open findings of each severity in an account as of the
     * specified date.</p>
     */
    inline AccountFindingsMetric& WithOpenFindings(FindingMetricsValuePerSeverity&& value) { SetOpenFindings(std::move(value)); return *this;}

  private:

    FindingMetricsValuePerSeverity m_closedFindings;
    bool m_closedFindingsHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    FindingMetricsValuePerSeverity m_meanTimeToClose;
    bool m_meanTimeToCloseHasBeenSet = false;

    FindingMetricsValuePerSeverity m_newFindings;
    bool m_newFindingsHasBeenSet = false;

    FindingMetricsValuePerSeverity m_openFindings;
    bool m_openFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
