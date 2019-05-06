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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/ResourceFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class AWS_RESOURCEGROUPS_API ListGroupResourcesRequest : public ResourceGroupsRequest
  {
  public:
    ListGroupResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupResources"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the resource group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListGroupResourcesRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListGroupResourcesRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group.</p>
     */
    inline ListGroupResourcesRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline const Aws::Vector<ResourceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<ResourceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<ResourceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline ListGroupResourcesRequest& WithFilters(const Aws::Vector<ResourceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline ListGroupResourcesRequest& WithFilters(Aws::Vector<ResourceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline ListGroupResourcesRequest& AddFilters(const ResourceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters, formatted as ResourceFilter objects, that you want to apply to a
     * ListGroupResources operation.</p> <ul> <li> <p> <code>resource-type</code> -
     * Filter resources by their type. Specify up to five resource types in the format
     * AWS::ServiceCode::ResourceType. For example, AWS::EC2::Instance, or
     * AWS::S3::Bucket.</p> </li> </ul>
     */
    inline ListGroupResourcesRequest& AddFilters(ResourceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of group member ARNs that are returned in a single call by
     * ListGroupResources, in paginated output. By default, this number is 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of group member ARNs that are returned in a single call by
     * ListGroupResources, in paginated output. By default, this number is 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of group member ARNs that are returned in a single call by
     * ListGroupResources, in paginated output. By default, this number is 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of group member ARNs that are returned in a single call by
     * ListGroupResources, in paginated output. By default, this number is 50.</p>
     */
    inline ListGroupResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The NextToken value that is returned in a paginated ListGroupResources
     * request. To get the next page of results, run the call again, add the NextToken
     * parameter, and specify the NextToken value.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::Vector<ResourceFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
