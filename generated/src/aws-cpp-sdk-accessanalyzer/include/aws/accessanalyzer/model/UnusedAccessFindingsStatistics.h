/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/UnusedAccessTypeStatistics.h>
#include <aws/accessanalyzer/model/FindingAggregationAccountDetails.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Provides aggregate statistics about the findings for the specified unused
   * access analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedAccessFindingsStatistics">AWS
   * API Reference</a></p>
   */
  class UnusedAccessFindingsStatistics
  {
  public:
    AWS_ACCESSANALYZER_API UnusedAccessFindingsStatistics() = default;
    AWS_ACCESSANALYZER_API UnusedAccessFindingsStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedAccessFindingsStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of details about the total number of findings for each type of unused
     * access for the analyzer. </p>
     */
    inline const Aws::Vector<UnusedAccessTypeStatistics>& GetUnusedAccessTypeStatistics() const { return m_unusedAccessTypeStatistics; }
    inline bool UnusedAccessTypeStatisticsHasBeenSet() const { return m_unusedAccessTypeStatisticsHasBeenSet; }
    template<typename UnusedAccessTypeStatisticsT = Aws::Vector<UnusedAccessTypeStatistics>>
    void SetUnusedAccessTypeStatistics(UnusedAccessTypeStatisticsT&& value) { m_unusedAccessTypeStatisticsHasBeenSet = true; m_unusedAccessTypeStatistics = std::forward<UnusedAccessTypeStatisticsT>(value); }
    template<typename UnusedAccessTypeStatisticsT = Aws::Vector<UnusedAccessTypeStatistics>>
    UnusedAccessFindingsStatistics& WithUnusedAccessTypeStatistics(UnusedAccessTypeStatisticsT&& value) { SetUnusedAccessTypeStatistics(std::forward<UnusedAccessTypeStatisticsT>(value)); return *this;}
    template<typename UnusedAccessTypeStatisticsT = UnusedAccessTypeStatistics>
    UnusedAccessFindingsStatistics& AddUnusedAccessTypeStatistics(UnusedAccessTypeStatisticsT&& value) { m_unusedAccessTypeStatisticsHasBeenSet = true; m_unusedAccessTypeStatistics.emplace_back(std::forward<UnusedAccessTypeStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one to ten Amazon Web Services accounts that have the most active
     * findings for the unused access analyzer.</p>
     */
    inline const Aws::Vector<FindingAggregationAccountDetails>& GetTopAccounts() const { return m_topAccounts; }
    inline bool TopAccountsHasBeenSet() const { return m_topAccountsHasBeenSet; }
    template<typename TopAccountsT = Aws::Vector<FindingAggregationAccountDetails>>
    void SetTopAccounts(TopAccountsT&& value) { m_topAccountsHasBeenSet = true; m_topAccounts = std::forward<TopAccountsT>(value); }
    template<typename TopAccountsT = Aws::Vector<FindingAggregationAccountDetails>>
    UnusedAccessFindingsStatistics& WithTopAccounts(TopAccountsT&& value) { SetTopAccounts(std::forward<TopAccountsT>(value)); return *this;}
    template<typename TopAccountsT = FindingAggregationAccountDetails>
    UnusedAccessFindingsStatistics& AddTopAccounts(TopAccountsT&& value) { m_topAccountsHasBeenSet = true; m_topAccounts.emplace_back(std::forward<TopAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of active findings for the unused access analyzer.</p>
     */
    inline int GetTotalActiveFindings() const { return m_totalActiveFindings; }
    inline bool TotalActiveFindingsHasBeenSet() const { return m_totalActiveFindingsHasBeenSet; }
    inline void SetTotalActiveFindings(int value) { m_totalActiveFindingsHasBeenSet = true; m_totalActiveFindings = value; }
    inline UnusedAccessFindingsStatistics& WithTotalActiveFindings(int value) { SetTotalActiveFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of archived findings for the unused access analyzer.</p>
     */
    inline int GetTotalArchivedFindings() const { return m_totalArchivedFindings; }
    inline bool TotalArchivedFindingsHasBeenSet() const { return m_totalArchivedFindingsHasBeenSet; }
    inline void SetTotalArchivedFindings(int value) { m_totalArchivedFindingsHasBeenSet = true; m_totalArchivedFindings = value; }
    inline UnusedAccessFindingsStatistics& WithTotalArchivedFindings(int value) { SetTotalArchivedFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of resolved findings for the unused access analyzer.</p>
     */
    inline int GetTotalResolvedFindings() const { return m_totalResolvedFindings; }
    inline bool TotalResolvedFindingsHasBeenSet() const { return m_totalResolvedFindingsHasBeenSet; }
    inline void SetTotalResolvedFindings(int value) { m_totalResolvedFindingsHasBeenSet = true; m_totalResolvedFindings = value; }
    inline UnusedAccessFindingsStatistics& WithTotalResolvedFindings(int value) { SetTotalResolvedFindings(value); return *this;}
    ///@}
  private:

    Aws::Vector<UnusedAccessTypeStatistics> m_unusedAccessTypeStatistics;
    bool m_unusedAccessTypeStatisticsHasBeenSet = false;

    Aws::Vector<FindingAggregationAccountDetails> m_topAccounts;
    bool m_topAccountsHasBeenSet = false;

    int m_totalActiveFindings{0};
    bool m_totalActiveFindingsHasBeenSet = false;

    int m_totalArchivedFindings{0};
    bool m_totalArchivedFindingsHasBeenSet = false;

    int m_totalResolvedFindings{0};
    bool m_totalResolvedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
