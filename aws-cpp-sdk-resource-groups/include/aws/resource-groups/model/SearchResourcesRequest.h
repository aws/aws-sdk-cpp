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
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/resource-groups/model/ResourceQuery.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API SearchResourcesRequest : public ResourceGroupsRequest
  {
  public:
    SearchResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchResources"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline const ResourceQuery& GetResourceQuery() const{ return m_resourceQuery; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline bool ResourceQueryHasBeenSet() const { return m_resourceQueryHasBeenSet; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline void SetResourceQuery(const ResourceQuery& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = value; }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline void SetResourceQuery(ResourceQuery&& value) { m_resourceQueryHasBeenSet = true; m_resourceQuery = std::move(value); }

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline SearchResourcesRequest& WithResourceQuery(const ResourceQuery& value) { SetResourceQuery(value); return *this;}

    /**
     * <p>The search query, using the same formats that are supported for resource
     * group definition.</p>
     */
    inline SearchResourcesRequest& WithResourceQuery(ResourceQuery&& value) { SetResourceQuery(std::move(value)); return *this;}


    /**
     * <p>The maximum number of group member ARNs returned by
     * <code>SearchResources</code> in paginated output. By default, this number is
     * 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of group member ARNs returned by
     * <code>SearchResources</code> in paginated output. By default, this number is
     * 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of group member ARNs returned by
     * <code>SearchResources</code> in paginated output. By default, this number is
     * 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of group member ARNs returned by
     * <code>SearchResources</code> in paginated output. By default, this number is
     * 50.</p>
     */
    inline SearchResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline SearchResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken value that is returned in a paginated
     * <code>SearchResources</code> request. To get the next page of results, run the
     * call again, add the NextToken parameter, and specify the NextToken value.</p>
     */
    inline SearchResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceQuery m_resourceQuery;
    bool m_resourceQueryHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
