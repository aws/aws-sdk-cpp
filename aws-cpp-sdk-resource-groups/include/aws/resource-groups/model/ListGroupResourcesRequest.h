/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class ListGroupResourcesRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupResources"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline ListGroupResourcesRequest& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline ListGroupResourcesRequest& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name or the ARN of the resource group</p>
     */
    inline ListGroupResourcesRequest& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline const Aws::Vector<ResourceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline void SetFilters(const Aws::Vector<ResourceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline void SetFilters(Aws::Vector<ResourceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline ListGroupResourcesRequest& WithFilters(const Aws::Vector<ResourceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline ListGroupResourcesRequest& WithFilters(Aws::Vector<ResourceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline ListGroupResourcesRequest& AddFilters(const ResourceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters, formatted as <a>ResourceFilter</a> objects, that you want to apply
     * to a <code>ListGroupResources</code> operation. Filters the results to include
     * only those of the specified resource types.</p> <ul> <li> <p>
     * <code>resource-type</code> - Filter resources by their type. Specify up to five
     * resource types in the format <code>AWS::ServiceCode::ResourceType</code>. For
     * example, <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>. </p>
     * </li> </ul> <p>When you specify a <code>resource-type</code> filter for
     * <code>ListGroupResources</code>, AWS Resource Groups validates your filter
     * resource types against the types that are defined in the query associated with
     * the group. For example, if a group contains only S3 buckets because its query
     * specifies only that resource type, but your <code>resource-type</code> filter
     * includes EC2 instances, AWS Resource Groups does not filter for EC2 instances.
     * In this case, a <code>ListGroupResources</code> request returns a
     * <code>BadRequestException</code> error with a message similar to the
     * following:</p> <p> <code>The resource types specified as filters in the request
     * are not valid.</code> </p> <p>The error includes a list of resource types that
     * failed the validation because they are not part of the query associated with the
     * group. This validation doesn't occur when the group query specifies
     * <code>AWS::AllSupported</code>, because a group based on such a query can
     * contain any of the allowed resource types for the query type (tag-based or AWS
     * CloudFormation stack-based queries).</p>
     */
    inline ListGroupResourcesRequest& AddFilters(ResourceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListGroupResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<ResourceFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
