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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeVpcEndpointConnectionNotificationsRequest : public EC2Request
  {
  public:
    DescribeVpcEndpointConnectionNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointConnectionNotifications"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const{ return m_connectionNotificationId; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const Aws::String& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = value; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(Aws::String&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::move(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const char* value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId.assign(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationId(const Aws::String& value) { SetConnectionNotificationId(value); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationId(Aws::String&& value) { SetConnectionNotificationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithConnectionNotificationId(const char* value) { SetConnectionNotificationId(value); return *this;}


    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>connection-notification-arn</code> - The ARN of SNS topic for the
     * notification.</p> </li> <li> <p> <code>connection-notification-id</code> - The
     * ID of the notification.</p> </li> <li> <p>
     * <code>connection-notification-state</code> - The state of the notification
     * (<code>Enabled</code> | <code>Disabled</code>).</p> </li> <li> <p>
     * <code>connection-notification-type</code> - The type of notification
     * (<code>Topic</code>).</p> </li> <li> <p> <code>service-id</code> - The ID of the
     * endpoint service.</p> </li> <li> <p> <code>vpc-endpoint-id</code> - The ID of
     * the VPC endpoint.</p> </li> </ul>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned <code>NextToken</code>
     * value.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeVpcEndpointConnectionNotificationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
