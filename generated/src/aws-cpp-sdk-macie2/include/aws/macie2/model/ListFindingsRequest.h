/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/FindingCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SortCriteria.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class ListFindingsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API ListFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFindings"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The criteria to use to filter the results.</p>
     */
    inline const FindingCriteria& GetFindingCriteria() const { return m_findingCriteria; }
    inline bool FindingCriteriaHasBeenSet() const { return m_findingCriteriaHasBeenSet; }
    template<typename FindingCriteriaT = FindingCriteria>
    void SetFindingCriteria(FindingCriteriaT&& value) { m_findingCriteriaHasBeenSet = true; m_findingCriteria = std::forward<FindingCriteriaT>(value); }
    template<typename FindingCriteriaT = FindingCriteria>
    ListFindingsRequest& WithFindingCriteria(FindingCriteriaT&& value) { SetFindingCriteria(std::forward<FindingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to include in each page of the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFindingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to use to sort the results.</p>
     */
    inline const SortCriteria& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = SortCriteria>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = SortCriteria>
    ListFindingsRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    ///@}
  private:

    FindingCriteria m_findingCriteria;
    bool m_findingCriteriaHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
