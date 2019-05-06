/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ECS_API ListTaskDefinitionsRequest : public ECSRequest
  {
  public:
    ListTaskDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTaskDefinitions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline const Aws::String& GetFamilyPrefix() const{ return m_familyPrefix; }

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline bool FamilyPrefixHasBeenSet() const { return m_familyPrefixHasBeenSet; }

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline void SetFamilyPrefix(const Aws::String& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = value; }

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline void SetFamilyPrefix(Aws::String&& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = std::move(value); }

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline void SetFamilyPrefix(const char* value) { m_familyPrefixHasBeenSet = true; m_familyPrefix.assign(value); }

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline ListTaskDefinitionsRequest& WithFamilyPrefix(const Aws::String& value) { SetFamilyPrefix(value); return *this;}

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline ListTaskDefinitionsRequest& WithFamilyPrefix(Aws::String&& value) { SetFamilyPrefix(std::move(value)); return *this;}

    /**
     * <p>The full family name with which to filter the
     * <code>ListTaskDefinitions</code> results. Specifying a <code>familyPrefix</code>
     * limits the listed task definitions to task definition revisions that belong to
     * that family.</p>
     */
    inline ListTaskDefinitionsRequest& WithFamilyPrefix(const char* value) { SetFamilyPrefix(value); return *this;}


    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline const TaskDefinitionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline void SetStatus(const TaskDefinitionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline void SetStatus(TaskDefinitionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline ListTaskDefinitionsRequest& WithStatus(const TaskDefinitionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The task definition status with which to filter the
     * <code>ListTaskDefinitions</code> results. By default, only <code>ACTIVE</code>
     * task definitions are listed. By setting this parameter to <code>INACTIVE</code>,
     * you can view task definitions that are <code>INACTIVE</code> as long as an
     * active task or service still references them. If you paginate the resulting
     * output, be sure to keep the <code>status</code> value constant in each
     * subsequent request.</p>
     */
    inline ListTaskDefinitionsRequest& WithStatus(TaskDefinitionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline const SortOrder& GetSort() const{ return m_sort; }

    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline void SetSort(const SortOrder& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline void SetSort(SortOrder&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline ListTaskDefinitionsRequest& WithSort(const SortOrder& value) { SetSort(value); return *this;}

    /**
     * <p>The order in which to sort the results. Valid values are <code>ASC</code> and
     * <code>DESC</code>. By default (<code>ASC</code>), task definitions are listed
     * lexicographically by family name and in ascending numerical order by revision so
     * that the newest task definitions in a family are listed last. Setting this
     * parameter to <code>DESC</code> reverses the sort order on family name and
     * revision so that the newest task definitions in a family are listed first.</p>
     */
    inline ListTaskDefinitionsRequest& WithSort(SortOrder&& value) { SetSort(std::move(value)); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTaskDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTaskDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTaskDefinitions</code> request where <code>maxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>nextToken</code>
     * value.</p> <note> <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTaskDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of task definition results returned by
     * <code>ListTaskDefinitions</code> in paginated output. When this parameter is
     * used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitions</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of task definition results returned by
     * <code>ListTaskDefinitions</code> in paginated output. When this parameter is
     * used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitions</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of task definition results returned by
     * <code>ListTaskDefinitions</code> in paginated output. When this parameter is
     * used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitions</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of task definition results returned by
     * <code>ListTaskDefinitions</code> in paginated output. When this parameter is
     * used, <code>ListTaskDefinitions</code> only returns <code>maxResults</code>
     * results in a single page along with a <code>nextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>ListTaskDefinitions</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter is not used, then <code>ListTaskDefinitions</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListTaskDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_familyPrefix;
    bool m_familyPrefixHasBeenSet;

    TaskDefinitionStatus m_status;
    bool m_statusHasBeenSet;

    SortOrder m_sort;
    bool m_sortHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
