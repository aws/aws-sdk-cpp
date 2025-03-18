/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SortCriteria.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class GetFindingsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetFindingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    void SetFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::forward<FindingIdsT>(value); }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    GetFindingsRequest& WithFindingIds(FindingIdsT&& value) { SetFindingIds(std::forward<FindingIdsT>(value)); return *this;}
    template<typename FindingIdsT = Aws::String>
    GetFindingsRequest& AddFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds.emplace_back(std::forward<FindingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline const SortCriteria& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = SortCriteria>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = SortCriteria>
    GetFindingsRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
