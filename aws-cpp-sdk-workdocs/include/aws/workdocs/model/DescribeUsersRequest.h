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
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserFilterType.h>
#include <aws/workdocs/model/OrderType.h>
#include <aws/workdocs/model/UserSortType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class AWS_WORKDOCS_API DescribeUsersRequest : public WorkDocsRequest
  {
  public:
    DescribeUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUsers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeUsersRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeUsersRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Do not set this field when using
     * administrative API actions, as in accessing the API using AWS credentials.</p>
     */
    inline DescribeUsersRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The ID of the organization.</p>
     */
    inline DescribeUsersRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline DescribeUsersRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the organization.</p>
     */
    inline DescribeUsersRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The IDs of the users.</p>
     */
    inline const Aws::String& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The IDs of the users.</p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>The IDs of the users.</p>
     */
    inline void SetUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The IDs of the users.</p>
     */
    inline void SetUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>The IDs of the users.</p>
     */
    inline void SetUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.assign(value); }

    /**
     * <p>The IDs of the users.</p>
     */
    inline DescribeUsersRequest& WithUserIds(const Aws::String& value) { SetUserIds(value); return *this;}

    /**
     * <p>The IDs of the users.</p>
     */
    inline DescribeUsersRequest& WithUserIds(Aws::String&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the users.</p>
     */
    inline DescribeUsersRequest& WithUserIds(const char* value) { SetUserIds(value); return *this;}


    /**
     * <p>A query to filter users by user name.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline DescribeUsersRequest& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline DescribeUsersRequest& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>A query to filter users by user name.</p>
     */
    inline DescribeUsersRequest& WithQuery(const char* value) { SetQuery(value); return *this;}


    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline const UserFilterType& GetInclude() const{ return m_include; }

    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline void SetInclude(const UserFilterType& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline void SetInclude(UserFilterType&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline DescribeUsersRequest& WithInclude(const UserFilterType& value) { SetInclude(value); return *this;}

    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline DescribeUsersRequest& WithInclude(UserFilterType&& value) { SetInclude(std::move(value)); return *this;}


    /**
     * <p>The order for the results.</p>
     */
    inline const OrderType& GetOrder() const{ return m_order; }

    /**
     * <p>The order for the results.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order for the results.</p>
     */
    inline void SetOrder(const OrderType& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order for the results.</p>
     */
    inline void SetOrder(OrderType&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order for the results.</p>
     */
    inline DescribeUsersRequest& WithOrder(const OrderType& value) { SetOrder(value); return *this;}

    /**
     * <p>The order for the results.</p>
     */
    inline DescribeUsersRequest& WithOrder(OrderType&& value) { SetOrder(std::move(value)); return *this;}


    /**
     * <p>The sorting criteria.</p>
     */
    inline const UserSortType& GetSort() const{ return m_sort; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(const UserSortType& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(UserSortType&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The sorting criteria.</p>
     */
    inline DescribeUsersRequest& WithSort(const UserSortType& value) { SetSort(value); return *this;}

    /**
     * <p>The sorting criteria.</p>
     */
    inline DescribeUsersRequest& WithSort(UserSortType&& value) { SetSort(std::move(value)); return *this;}


    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeUsersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeUsersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeUsersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeUsersRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline DescribeUsersRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline DescribeUsersRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline DescribeUsersRequest& WithFields(const char* value) { SetFields(value); return *this;}

  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_userIds;
    bool m_userIdsHasBeenSet;

    Aws::String m_query;
    bool m_queryHasBeenSet;

    UserFilterType m_include;
    bool m_includeHasBeenSet;

    OrderType m_order;
    bool m_orderHasBeenSet;

    UserSortType m_sort;
    bool m_sortHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
