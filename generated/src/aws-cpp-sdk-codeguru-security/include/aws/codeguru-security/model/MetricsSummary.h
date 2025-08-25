/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-security/model/CategoryWithFindingNum.h>
#include <aws/codeguru-security/model/ScanNameWithFindingNum.h>
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
   * <p>A summary of metrics for an account as of a specified date.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/MetricsSummary">AWS
   * API Reference</a></p>
   */
  class MetricsSummary
  {
  public:
    AWS_CODEGURUSECURITY_API MetricsSummary() = default;
    AWS_CODEGURUSECURITY_API MetricsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API MetricsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    MetricsSummary& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open findings of each severity.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetOpenFindings() const { return m_openFindings; }
    inline bool OpenFindingsHasBeenSet() const { return m_openFindingsHasBeenSet; }
    template<typename OpenFindingsT = FindingMetricsValuePerSeverity>
    void SetOpenFindings(OpenFindingsT&& value) { m_openFindingsHasBeenSet = true; m_openFindings = std::forward<OpenFindingsT>(value); }
    template<typename OpenFindingsT = FindingMetricsValuePerSeverity>
    MetricsSummary& WithOpenFindings(OpenFindingsT&& value) { SetOpenFindings(std::forward<OpenFindingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most findings.</p>
     */
    inline const Aws::Vector<CategoryWithFindingNum>& GetCategoriesWithMostFindings() const { return m_categoriesWithMostFindings; }
    inline bool CategoriesWithMostFindingsHasBeenSet() const { return m_categoriesWithMostFindingsHasBeenSet; }
    template<typename CategoriesWithMostFindingsT = Aws::Vector<CategoryWithFindingNum>>
    void SetCategoriesWithMostFindings(CategoriesWithMostFindingsT&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings = std::forward<CategoriesWithMostFindingsT>(value); }
    template<typename CategoriesWithMostFindingsT = Aws::Vector<CategoryWithFindingNum>>
    MetricsSummary& WithCategoriesWithMostFindings(CategoriesWithMostFindingsT&& value) { SetCategoriesWithMostFindings(std::forward<CategoriesWithMostFindingsT>(value)); return *this;}
    template<typename CategoriesWithMostFindingsT = CategoryWithFindingNum>
    MetricsSummary& AddCategoriesWithMostFindings(CategoriesWithMostFindingsT&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings.emplace_back(std::forward<CategoriesWithMostFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenFindings() const { return m_scansWithMostOpenFindings; }
    inline bool ScansWithMostOpenFindingsHasBeenSet() const { return m_scansWithMostOpenFindingsHasBeenSet; }
    template<typename ScansWithMostOpenFindingsT = Aws::Vector<ScanNameWithFindingNum>>
    void SetScansWithMostOpenFindings(ScansWithMostOpenFindingsT&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings = std::forward<ScansWithMostOpenFindingsT>(value); }
    template<typename ScansWithMostOpenFindingsT = Aws::Vector<ScanNameWithFindingNum>>
    MetricsSummary& WithScansWithMostOpenFindings(ScansWithMostOpenFindingsT&& value) { SetScansWithMostOpenFindings(std::forward<ScansWithMostOpenFindingsT>(value)); return *this;}
    template<typename ScansWithMostOpenFindingsT = ScanNameWithFindingNum>
    MetricsSummary& AddScansWithMostOpenFindings(ScansWithMostOpenFindingsT&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings.emplace_back(std::forward<ScansWithMostOpenFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenCriticalFindings() const { return m_scansWithMostOpenCriticalFindings; }
    inline bool ScansWithMostOpenCriticalFindingsHasBeenSet() const { return m_scansWithMostOpenCriticalFindingsHasBeenSet; }
    template<typename ScansWithMostOpenCriticalFindingsT = Aws::Vector<ScanNameWithFindingNum>>
    void SetScansWithMostOpenCriticalFindings(ScansWithMostOpenCriticalFindingsT&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings = std::forward<ScansWithMostOpenCriticalFindingsT>(value); }
    template<typename ScansWithMostOpenCriticalFindingsT = Aws::Vector<ScanNameWithFindingNum>>
    MetricsSummary& WithScansWithMostOpenCriticalFindings(ScansWithMostOpenCriticalFindingsT&& value) { SetScansWithMostOpenCriticalFindings(std::forward<ScansWithMostOpenCriticalFindingsT>(value)); return *this;}
    template<typename ScansWithMostOpenCriticalFindingsT = ScanNameWithFindingNum>
    MetricsSummary& AddScansWithMostOpenCriticalFindings(ScansWithMostOpenCriticalFindingsT&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings.emplace_back(std::forward<ScansWithMostOpenCriticalFindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    FindingMetricsValuePerSeverity m_openFindings;
    bool m_openFindingsHasBeenSet = false;

    Aws::Vector<CategoryWithFindingNum> m_categoriesWithMostFindings;
    bool m_categoriesWithMostFindingsHasBeenSet = false;

    Aws::Vector<ScanNameWithFindingNum> m_scansWithMostOpenFindings;
    bool m_scansWithMostOpenFindingsHasBeenSet = false;

    Aws::Vector<ScanNameWithFindingNum> m_scansWithMostOpenCriticalFindings;
    bool m_scansWithMostOpenCriticalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
