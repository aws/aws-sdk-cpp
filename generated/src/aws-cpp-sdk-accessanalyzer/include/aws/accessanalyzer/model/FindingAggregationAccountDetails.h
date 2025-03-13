/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains information about the findings for an Amazon Web Services account in
   * an organization unused access analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingAggregationAccountDetails">AWS
   * API Reference</a></p>
   */
  class FindingAggregationAccountDetails
  {
  public:
    AWS_ACCESSANALYZER_API FindingAggregationAccountDetails() = default;
    AWS_ACCESSANALYZER_API FindingAggregationAccountDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingAggregationAccountDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account for which unused access finding
     * details are provided.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    FindingAggregationAccountDetails& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of active unused access findings for the specified Amazon Web
     * Services account.</p>
     */
    inline int GetNumberOfActiveFindings() const { return m_numberOfActiveFindings; }
    inline bool NumberOfActiveFindingsHasBeenSet() const { return m_numberOfActiveFindingsHasBeenSet; }
    inline void SetNumberOfActiveFindings(int value) { m_numberOfActiveFindingsHasBeenSet = true; m_numberOfActiveFindings = value; }
    inline FindingAggregationAccountDetails& WithNumberOfActiveFindings(int value) { SetNumberOfActiveFindings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the number of active findings for each type of unused access for the
     * specified Amazon Web Services account.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Map<Aws::String, int>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Map<Aws::String, int>>
    FindingAggregationAccountDetails& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    inline FindingAggregationAccountDetails& AddDetails(Aws::String key, int value) {
      m_detailsHasBeenSet = true; m_details.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    int m_numberOfActiveFindings{0};
    bool m_numberOfActiveFindingsHasBeenSet = false;

    Aws::Map<Aws::String, int> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
