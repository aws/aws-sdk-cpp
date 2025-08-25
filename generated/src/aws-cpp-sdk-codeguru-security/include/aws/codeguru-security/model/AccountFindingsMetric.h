/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
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
   * <p>A summary of findings metrics for an account on a specified
   * date.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/AccountFindingsMetric">AWS
   * API Reference</a></p>
   */
  class AccountFindingsMetric
  {
  public:
    AWS_CODEGURUSECURITY_API AccountFindingsMetric() = default;
    AWS_CODEGURUSECURITY_API AccountFindingsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API AccountFindingsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date from which the findings metrics were retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    AccountFindingsMetric& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of new findings of each severity on the specified date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetNewFindings() const { return m_newFindings; }
    inline bool NewFindingsHasBeenSet() const { return m_newFindingsHasBeenSet; }
    template<typename NewFindingsT = FindingMetricsValuePerSeverity>
    void SetNewFindings(NewFindingsT&& value) { m_newFindingsHasBeenSet = true; m_newFindings = std::forward<NewFindingsT>(value); }
    template<typename NewFindingsT = FindingMetricsValuePerSeverity>
    AccountFindingsMetric& WithNewFindings(NewFindingsT&& value) { SetNewFindings(std::forward<NewFindingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of closed findings of each severity on the specified date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetClosedFindings() const { return m_closedFindings; }
    inline bool ClosedFindingsHasBeenSet() const { return m_closedFindingsHasBeenSet; }
    template<typename ClosedFindingsT = FindingMetricsValuePerSeverity>
    void SetClosedFindings(ClosedFindingsT&& value) { m_closedFindingsHasBeenSet = true; m_closedFindings = std::forward<ClosedFindingsT>(value); }
    template<typename ClosedFindingsT = FindingMetricsValuePerSeverity>
    AccountFindingsMetric& WithClosedFindings(ClosedFindingsT&& value) { SetClosedFindings(std::forward<ClosedFindingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open findings of each severity as of the specified date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetOpenFindings() const { return m_openFindings; }
    inline bool OpenFindingsHasBeenSet() const { return m_openFindingsHasBeenSet; }
    template<typename OpenFindingsT = FindingMetricsValuePerSeverity>
    void SetOpenFindings(OpenFindingsT&& value) { m_openFindingsHasBeenSet = true; m_openFindings = std::forward<OpenFindingsT>(value); }
    template<typename OpenFindingsT = FindingMetricsValuePerSeverity>
    AccountFindingsMetric& WithOpenFindings(OpenFindingsT&& value) { SetOpenFindings(std::forward<OpenFindingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average time in days it takes to close findings of each severity as of a
     * specified date.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetMeanTimeToClose() const { return m_meanTimeToClose; }
    inline bool MeanTimeToCloseHasBeenSet() const { return m_meanTimeToCloseHasBeenSet; }
    template<typename MeanTimeToCloseT = FindingMetricsValuePerSeverity>
    void SetMeanTimeToClose(MeanTimeToCloseT&& value) { m_meanTimeToCloseHasBeenSet = true; m_meanTimeToClose = std::forward<MeanTimeToCloseT>(value); }
    template<typename MeanTimeToCloseT = FindingMetricsValuePerSeverity>
    AccountFindingsMetric& WithMeanTimeToClose(MeanTimeToCloseT&& value) { SetMeanTimeToClose(std::forward<MeanTimeToCloseT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    FindingMetricsValuePerSeverity m_newFindings;
    bool m_newFindingsHasBeenSet = false;

    FindingMetricsValuePerSeverity m_closedFindings;
    bool m_closedFindingsHasBeenSet = false;

    FindingMetricsValuePerSeverity m_openFindings;
    bool m_openFindingsHasBeenSet = false;

    FindingMetricsValuePerSeverity m_meanTimeToClose;
    bool m_meanTimeToCloseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
