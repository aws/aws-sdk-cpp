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
    AWS_MACIE2_API GetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline GetFindingsRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline GetFindingsRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline GetFindingsRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline GetFindingsRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that lists the unique identifiers for the findings to
     * retrieve. You can specify as many as 50 unique identifiers in this array.</p>
     */
    inline GetFindingsRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }


    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline const SortCriteria& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline void SetSortCriteria(const SortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline void SetSortCriteria(SortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(const SortCriteria& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The criteria for sorting the results of the request.</p>
     */
    inline GetFindingsRequest& WithSortCriteria(SortCriteria&& value) { SetSortCriteria(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    SortCriteria m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
