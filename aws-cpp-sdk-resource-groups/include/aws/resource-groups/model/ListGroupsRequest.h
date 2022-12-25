/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupFilter.h>
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
  class ListGroupsRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API ListGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroups"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline const Aws::Vector<GroupFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<GroupFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<GroupFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline ListGroupsRequest& WithFilters(const Aws::Vector<GroupFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline ListGroupsRequest& WithFilters(Aws::Vector<GroupFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline ListGroupsRequest& AddFilters(const GroupFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters, formatted as <a>GroupFilter</a> objects, that you want to apply to a
     * <code>ListGroups</code> operation.</p> <ul> <li> <p> <code>resource-type</code>
     * - Filter the results to include only those of the specified resource types.
     * Specify up to five resource types in the format
     * <code>AWS::<i>ServiceCode</i>::<i>ResourceType</i> </code>. For example,
     * <code>AWS::EC2::Instance</code>, or <code>AWS::S3::Bucket</code>.</p> </li> <li>
     * <p> <code>configuration-type</code> - Filter the results to include only those
     * groups that have the specified configuration types attached. The current
     * supported values are:</p> <ul> <li> <p>
     * <code>AWS:EC2::CapacityReservationPool</code> </p> </li> <li> <p>
     * <code>AWS:EC2::HostManagement</code> </p> </li> </ul> </li> </ul>
     */
    inline ListGroupsRequest& AddFilters(GroupFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline ListGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value provided by a previous call's <code>NextToken</code> response to indicate
     * where the output should continue from.</p>
     */
    inline ListGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroupFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
