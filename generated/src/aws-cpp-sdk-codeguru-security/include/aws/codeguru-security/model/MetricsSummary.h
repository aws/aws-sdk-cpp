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
   * <p>Information about summary metrics in an account.</p><p><h3>See Also:</h3>  
   * <a
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


    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline const Aws::Vector<CategoryWithFindingNum>& GetCategoriesWithMostFindings() const{ return m_categoriesWithMostFindings; }

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline bool CategoriesWithMostFindingsHasBeenSet() const { return m_categoriesWithMostFindingsHasBeenSet; }

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline void SetCategoriesWithMostFindings(const Aws::Vector<CategoryWithFindingNum>& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings = value; }

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline void SetCategoriesWithMostFindings(Aws::Vector<CategoryWithFindingNum>&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings = std::move(value); }

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline MetricsSummary& WithCategoriesWithMostFindings(const Aws::Vector<CategoryWithFindingNum>& value) { SetCategoriesWithMostFindings(value); return *this;}

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline MetricsSummary& WithCategoriesWithMostFindings(Aws::Vector<CategoryWithFindingNum>&& value) { SetCategoriesWithMostFindings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline MetricsSummary& AddCategoriesWithMostFindings(const CategoryWithFindingNum& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings.push_back(value); return *this; }

    /**
     * <p>A list of <code>CategoryWithFindingNum</code> objects for the top 5 finding
     * categories with the most open findings in an account.</p>
     */
    inline MetricsSummary& AddCategoriesWithMostFindings(CategoryWithFindingNum&& value) { m_categoriesWithMostFindingsHasBeenSet = true; m_categoriesWithMostFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }

    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }

    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }

    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }

    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline MetricsSummary& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}

    /**
     * <p>The date from which the metrics summary information was retrieved.</p>
     */
    inline MetricsSummary& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}


    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline const FindingMetricsValuePerSeverity& GetOpenFindings() const{ return m_openFindings; }

    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline bool OpenFindingsHasBeenSet() const { return m_openFindingsHasBeenSet; }

    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline void SetOpenFindings(const FindingMetricsValuePerSeverity& value) { m_openFindingsHasBeenSet = true; m_openFindings = value; }

    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline void SetOpenFindings(FindingMetricsValuePerSeverity&& value) { m_openFindingsHasBeenSet = true; m_openFindings = std::move(value); }

    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline MetricsSummary& WithOpenFindings(const FindingMetricsValuePerSeverity& value) { SetOpenFindings(value); return *this;}

    /**
     * <p>The number of open findings of each severity in an account.</p>
     */
    inline MetricsSummary& WithOpenFindings(FindingMetricsValuePerSeverity&& value) { SetOpenFindings(std::move(value)); return *this;}


    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenCriticalFindings() const{ return m_scansWithMostOpenCriticalFindings; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline bool ScansWithMostOpenCriticalFindingsHasBeenSet() const { return m_scansWithMostOpenCriticalFindingsHasBeenSet; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline void SetScansWithMostOpenCriticalFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings = value; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline void SetScansWithMostOpenCriticalFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings = std::move(value); }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline MetricsSummary& WithScansWithMostOpenCriticalFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { SetScansWithMostOpenCriticalFindings(value); return *this;}

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline MetricsSummary& WithScansWithMostOpenCriticalFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { SetScansWithMostOpenCriticalFindings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline MetricsSummary& AddScansWithMostOpenCriticalFindings(const ScanNameWithFindingNum& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings.push_back(value); return *this; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open findings in an account.</p>
     */
    inline MetricsSummary& AddScansWithMostOpenCriticalFindings(ScanNameWithFindingNum&& value) { m_scansWithMostOpenCriticalFindingsHasBeenSet = true; m_scansWithMostOpenCriticalFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline const Aws::Vector<ScanNameWithFindingNum>& GetScansWithMostOpenFindings() const{ return m_scansWithMostOpenFindings; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline bool ScansWithMostOpenFindingsHasBeenSet() const { return m_scansWithMostOpenFindingsHasBeenSet; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline void SetScansWithMostOpenFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings = value; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline void SetScansWithMostOpenFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings = std::move(value); }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline MetricsSummary& WithScansWithMostOpenFindings(const Aws::Vector<ScanNameWithFindingNum>& value) { SetScansWithMostOpenFindings(value); return *this;}

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline MetricsSummary& WithScansWithMostOpenFindings(Aws::Vector<ScanNameWithFindingNum>&& value) { SetScansWithMostOpenFindings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline MetricsSummary& AddScansWithMostOpenFindings(const ScanNameWithFindingNum& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings.push_back(value); return *this; }

    /**
     * <p>A list of <code>ScanNameWithFindingNum</code> objects for the top 3 scans
     * with the most number of open critical findings in an account.</p>
     */
    inline MetricsSummary& AddScansWithMostOpenFindings(ScanNameWithFindingNum&& value) { m_scansWithMostOpenFindingsHasBeenSet = true; m_scansWithMostOpenFindings.push_back(std::move(value)); return *this; }

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
