/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SeverityCounts.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A response that contains the results of a finding type
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/FindingTypeAggregationResponse">AWS
   * API Reference</a></p>
   */
  class FindingTypeAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API FindingTypeAggregationResponse() = default;
    AWS_INSPECTOR2_API FindingTypeAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API FindingTypeAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account associated with the findings.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    FindingTypeAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    FindingTypeAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of findings that have an exploit available.</p>
     */
    inline long long GetExploitAvailableCount() const { return m_exploitAvailableCount; }
    inline bool ExploitAvailableCountHasBeenSet() const { return m_exploitAvailableCountHasBeenSet; }
    inline void SetExploitAvailableCount(long long value) { m_exploitAvailableCountHasBeenSet = true; m_exploitAvailableCount = value; }
    inline FindingTypeAggregationResponse& WithExploitAvailableCount(long long value) { SetExploitAvailableCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Details about the number of fixes. </p>
     */
    inline long long GetFixAvailableCount() const { return m_fixAvailableCount; }
    inline bool FixAvailableCountHasBeenSet() const { return m_fixAvailableCountHasBeenSet; }
    inline void SetFixAvailableCount(long long value) { m_fixAvailableCountHasBeenSet = true; m_fixAvailableCount = value; }
    inline FindingTypeAggregationResponse& WithFixAvailableCount(long long value) { SetFixAvailableCount(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    long long m_exploitAvailableCount{0};
    bool m_exploitAvailableCountHasBeenSet = false;

    long long m_fixAvailableCount{0};
    bool m_fixAvailableCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
