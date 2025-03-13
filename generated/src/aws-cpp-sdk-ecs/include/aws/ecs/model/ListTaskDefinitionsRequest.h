/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListTaskDefinitionsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListTaskDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTaskDefinitions"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The full family name to filter the <code>ListTaskDefinitions</code> results
     * with. Specifying a <code>familyPrefix</code> limits the listed task definitions
     * to task definition revisions that belong to that family.</p>
     */
    inline const Aws::String& GetFamilyPrefix() const { return m_familyPrefix; }
    inline bool FamilyPrefixHasBeenSet() const { return m_familyPrefixHasBeenSet; }
    template<typename FamilyPrefixT = Aws::String>
    void SetFamilyPrefix(FamilyPrefixT&& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = std::forward<FamilyPrefixT>(value); }
    template<typename FamilyPrefixT = Aws::String>
    ListTaskDefinitionsRequest& WithFamilyPrefix(FamilyPrefixT&& value) { SetFamilyPrefix(std::forward<FamilyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition status to filter the <code>ListTaskDefinitions</code>
     * results with. By default, only <code>ACTIVE</code> task definitions are listed.
     * By setting this parameter to <code>INACTIVE</code>, you can view task
     * definitions that are <code>INACTIVE</code> as long as an active task or service
     * still references them. If you paginate the resulting output, be sure to keep the
     * <code>status</code> value constant in each subsequent request.</p>
     */
    inline TaskDefinitionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskDefinitionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTaskDefinitionsRequest& WithStatus(TaskDefinitionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort the results in. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default, (<code>ASC</code>) task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision. This is so that the newest task definitions in a family are listed
     * first.</p>
     */
    inline SortOrder GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(SortOrder value) { m_sortHasBeenSet = true; m_sort = value; }
    inline ListTaskDefinitionsRequest& WithSort(SortOrder value) { SetSort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitions</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTaskDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of task definition results that
     * <code>ListTaskDefinitions</code> returned in paginated output. When this
     * parameter is used, <code>ListTaskDefinitions</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTaskDefinitions</code> request
     * with the returned <code>nextToken</code> value. This value can be between 1 and
     * 100. If this parameter isn't used, then <code>ListTaskDefinitions</code> returns
     * up to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTaskDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_familyPrefix;
    bool m_familyPrefixHasBeenSet = false;

    TaskDefinitionStatus m_status{TaskDefinitionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SortOrder m_sort{SortOrder::NOT_SET};
    bool m_sortHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
