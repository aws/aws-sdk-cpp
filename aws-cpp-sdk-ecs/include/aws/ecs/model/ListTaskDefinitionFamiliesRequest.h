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
    AWS_ECS_API ListTaskDefinitionFamiliesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTaskDefinitionFamilies"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline const Aws::String& GetFamilyPrefix() const{ return m_familyPrefix; }

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline bool FamilyPrefixHasBeenSet() const { return m_familyPrefixHasBeenSet; }

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(const Aws::String& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = value; }

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(Aws::String&& value) { m_familyPrefixHasBeenSet = true; m_familyPrefix = std::move(value); }

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline void SetFamilyPrefix(const char* value) { m_familyPrefixHasBeenSet = true; m_familyPrefix.assign(value); }

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(const Aws::String& value) { SetFamilyPrefix(value); return *this;}

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(Aws::String&& value) { SetFamilyPrefix(std::move(value)); return *this;}

    /**
     * <p>The <code>familyPrefix</code> is a string that's used to filter the results
     * of <code>ListTaskDefinitionFamilies</code>. If you specify a
     * <code>familyPrefix</code>, only task definition family names that begin with the
     * <code>familyPrefix</code> string are returned.</p>
     */
    inline ListTaskDefinitionFamiliesRequest& WithFamilyPrefix(const char* value) { SetFamilyPrefix(value); return *this;}


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
    inline const TaskDefinitionFamilyStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const TaskDefinitionFamilyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(TaskDefinitionFamilyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline ListTaskDefinitionFamiliesRequest& WithStatus(const TaskDefinitionFamilyStatus& value) { SetStatus(value); return *this;}

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
    inline ListTaskDefinitionFamiliesRequest& WithStatus(TaskDefinitionFamilyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a
     * <code>ListTaskDefinitionFamilies</code> request indicating that more results are
     * available to fulfill the request and further calls will be needed. If
     * <code>maxResults</code> was provided, it is possible the number of results to be
     * fewer than <code>maxResults</code>.</p>  <p>This token should be treated
     * as an opaque identifier that is only used to retrieve the next items in a list
     * and not for other programmatic purposes.</p> 
     */
    inline ListTaskDefinitionFamiliesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline int GetMaxResults() const{ return m_maxResults; }

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
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

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
    inline ListTaskDefinitionFamiliesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_familyPrefix;
    bool m_familyPrefixHasBeenSet = false;

    TaskDefinitionFamilyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
