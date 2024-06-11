/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-security/model/FindingMetricsValuePerSeverity.h>
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
    AWS_CODEGURUSECURITY_API MetricsSummary();
    AWS_CODEGURUSECURITY_API MetricsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API MetricsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most findings.</p>
     */
    inline const Aws::Vector<CategoryWithFindingNum>& GetCategoriesWithMostFindings() const{ return m_categoriesWithMostFindings; }
    inline bool CategoriesWithMostFindingsHasBeenSet() const { return m_categoriesWithMostFindingsHasBeenSet; }
    inline void SetCategoriesWithMostFindings(const Aws::Vector<CategoryWithFindingNum>& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings = value; }
    inline void SetCategoriesWithMostFindings(Aws::Vector<CategoryWithFindingNum>&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings = std::move(value); }
    inline MetricsSummary& WithCategoriesWithMostFindings(const Aws::Vector<CategoryWithFindingNum>& value) { SetCategoriesWithMostFindings(value); return *this;}
    inline MetricsSummary& WithCategoriesWithMostFindings(Aws::Vector<CategoryWithFindingNum>&& value) { SetCategoriesWithMostFindings(std::move(value)); return *this;}
    inline MetricsSummary& AddCategoriesWithMostFindings(const CategoryWithFindingNum& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings.push_back(value); return *this; }
    inline MetricsSummary& AddCategoriesWithMostFindings(CategoryWithFindingNum&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline MetricsSummary& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline MetricsSummary& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open findings of each severity.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetOpenFindings() const{ return m_openFindings; }
    inline bool OpenFindingsHasBeenSet() const { return m_openFindingsHasBeenSet; }
    inline void SetOpenFindings(const FindingMetricsValuePerSeverity& value) { m_openFindingsHasBeenSet = true; m_openFindings = value; }
    inline void SetOpenFindings(FindingMetricsValuePerSeverity&& value) { m_openFindingsHasBeenSet = true; m_openFindings = std::move(value); }
    inline MetricsSummary& WithOpenFindings(const FindingMetricsValuePerSeverity& value) { SetOpenFindings(value); return *this;}
    inline MetricsSummary& WithOpenFindings(FindingMetricsValuePerSeverity&& value) { SetOpenFindings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenCriticalFindings() const{ return m_scansWithMostOpenCriticalFindings; }
    inline bool ScansWithMostOpenCriticalFindingsHasBeenSet() const { return m_scansWithMostOpenCriticalFindingsHasBeenSet; }
    inline void SetScansWithMostOpenCriticalFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings = value; }
    inline void SetScansWithMostOpenCriticalFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings = std::move(value); }
    inline MetricsSummary& WithScansWithMostOpenCriticalFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { SetScansWithMostOpenCriticalFindings(value); return *this;}
    inline MetricsSummary& WithScansWithMostOpenCriticalFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { SetScansWithMostOpenCriticalFindings(std::move(value)); return *this;}
    inline MetricsSummary& AddScansWithMostOpenCriticalFindings(const ScanNameWithFindingNum& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings.push_back(value); return *this; }
    inline MetricsSummary& AddScansWithMostOpenCriticalFindings(ScanNameWithFindingNum&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenFindings() const{ return m_scansWithMostOpenFindings; }
    inline bool ScansWithMostOpenFindingsHasBeenSet() const { return m_scansWithMostOpenFindingsHasBeenSet; }
    inline void SetScansWithMostOpenFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings = value; }
    inline void SetScansWithMostOpenFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings = std::move(value); }
    inline MetricsSummary& WithScansWithMostOpenFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { SetScansWithMostOpenFindings(value); return *this;}
    inline MetricsSummary& WithScansWithMostOpenFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { SetScansWithMostOpenFindings(std::move(value)); return *this;}
    inline MetricsSummary& AddScansWithMostOpenFindings(const ScanNameWithFindingNum& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings.push_back(value); return *this; }
    inline MetricsSummary& AddScansWithMostOpenFindings(ScanNameWithFindingNum&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CategoryWithFindingNum> m_categoriesWithMostFindings;
    bool m_categoriesWithMostFindingsHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    FindingMetricsValuePerSeverity m_openFindings;
    bool m_openFindingsHasBeenSet = false;

    Aws::Vector<ScanNameWithFindingNum> m_scansWithMostOpenCriticalFindings;
    bool m_scansWithMostOpenCriticalFindingsHasBeenSet = false;

    Aws::Vector<ScanNameWithFindingNum> m_scansWithMostOpenFindings;
    bool m_scansWithMostOpenFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
