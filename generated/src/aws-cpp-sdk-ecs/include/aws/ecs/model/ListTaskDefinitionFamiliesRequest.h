/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskDefinitionFamilyStatus.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListTaskDefinitionFamiliesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListTaskDefinitionFamiliesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTaskDefinitionFamilies"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline const Aws::String& GetFamilyPrefix() const { return m_familyPrefix; }
    inline bool FamilyPrefixHasBeenSet() const { return m_familyPrefixHasBeenSet; }
    template<typename FamilyPrefixT = Aws::String>
    void SetFamilyPrefix(FamilyPrefixT&& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = std::forward<FamilyPrefixT>(value); }
    template<typename FamilyPrefixT = Aws::String>
    ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(FamilyPrefixT&& value) { SetFamilyPrefix(std::forward<FamilyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task definition family status to filter the
     * <code>ListTaskDefinitionFamilies</code> results with. By default, both
     * <code>ACTIVE</code> and <code>INACTIVE</code> task definition families are
     * listed. If this parameter is set to <code>ACTIVE</code>, only task definition
     * families that have an <code>ACTIVE</code> task definition revision are returned.
     * If this parameter is set to <code>INACTIVE</code>, only task definition families
     * that do not have any <code>ACTIVE</code> task definition revisions are returned.
     * If you paginate the resulting output, be sure to keep the <code>status</code>
     * value constant in each subsequent request.</p>
     */
    inline TaskDefinitionFamilyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskDefinitionFamilyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTaskDefinitionFamiliesRequest& WithStatus(TaskDefinitionFamilyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
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
    ListTaskDefinitionFamiliesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of task definition family results that
     * <code>ListTaskDefinitionFamilies</code> returned in paginated output. When this
     * parameter is used, <code>ListTaskDefinitions</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTaskDefinitionFamilies</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>ListTaskDefinitionFamilies</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTaskDefinitionFamiliesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_familyPrefix;
    bool m_familyPrefixHasBeenSet = false;

    TaskDefinitionFamilyStatus m_status{TaskDefinitionFamilyStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
