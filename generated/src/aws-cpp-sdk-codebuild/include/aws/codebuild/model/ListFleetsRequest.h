/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/codebuild/model/FleetSortByType.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListFleetsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListFleetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFleets"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>During a previous call, if there are more than 100 items in the list, only
     * the first 100 items are returned, along with a unique string called a
     * <i>nextToken</i>. To get the next batch of items in the list, call this
     * operation again, adding the next token to the call. To get all of the items in
     * the list, keep calling this operation with each subsequent next token that is
     * returned, until no more next tokens are returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFleetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of paginated compute fleets returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned compute
     * fleets.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order in which to list compute fleets. Valid values include:</p> <ul>
     * <li> <p> <code>ASCENDING</code>: List in ascending order.</p> </li> <li> <p>
     * <code>DESCENDING</code>: List in descending order.</p> </li> </ul> <p>Use
     * <code>sortBy</code> to specify the criterion to be used to list compute fleet
     * names.</p>
     */
    inline SortOrderType GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrderType value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListFleetsRequest& WithSortOrder(SortOrderType value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criterion to be used to list compute fleet names. Valid values
     * include:</p> <ul> <li> <p> <code>CREATED_TIME</code>: List based on when each
     * compute fleet was created.</p> </li> <li> <p> <code>LAST_MODIFIED_TIME</code>:
     * List based on when information about each compute fleet was last changed.</p>
     * </li> <li> <p> <code>NAME</code>: List based on each compute fleet's name.</p>
     * </li> </ul> <p>Use <code>sortOrder</code> to specify in what order to list the
     * compute fleet names based on the preceding criteria.</p>
     */
    inline FleetSortByType GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(FleetSortByType value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListFleetsRequest& WithSortBy(FleetSortByType value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    SortOrderType m_sortOrder{SortOrderType::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    FleetSortByType m_sortBy{FleetSortByType::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
