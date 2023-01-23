/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <para>Describe instance event windows by InstanceEventWindow.</para><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeInstanceEventWindowsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeInstanceEventWindowsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstanceEventWindowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceEventWindows"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline DescribeInstanceEventWindowsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the event windows.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceEventWindowIds() const{ return m_instanceEventWindowIds; }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline bool InstanceEventWindowIdsHasBeenSet() const { return m_instanceEventWindowIdsHasBeenSet; }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline void SetInstanceEventWindowIds(const Aws::Vector<Aws::String>& value) { m_instanceEventWindowIdsHasBeenSet = true; m_instanceEventWindowIds = value; }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline void SetInstanceEventWindowIds(Aws::Vector<Aws::String>&& value) { m_instanceEventWindowIdsHasBeenSet = true; m_instanceEventWindowIds = std::move(value); }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline DescribeInstanceEventWindowsRequest& WithInstanceEventWindowIds(const Aws::Vector<Aws::String>& value) { SetInstanceEventWindowIds(value); return *this;}

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline DescribeInstanceEventWindowsRequest& WithInstanceEventWindowIds(Aws::Vector<Aws::String>&& value) { SetInstanceEventWindowIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline DescribeInstanceEventWindowsRequest& AddInstanceEventWindowIds(const Aws::String& value) { m_instanceEventWindowIdsHasBeenSet = true; m_instanceEventWindowIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline DescribeInstanceEventWindowsRequest& AddInstanceEventWindowIds(Aws::String&& value) { m_instanceEventWindowIdsHasBeenSet = true; m_instanceEventWindowIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the event windows.</p>
     */
    inline DescribeInstanceEventWindowsRequest& AddInstanceEventWindowIds(const char* value) { m_instanceEventWindowIdsHasBeenSet = true; m_instanceEventWindowIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline DescribeInstanceEventWindowsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline DescribeInstanceEventWindowsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline DescribeInstanceEventWindowsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dedicated-host-id</code> - The
     * event windows associated with the specified Dedicated Host ID.</p> </li> <li>
     * <p> <code>event-window-name</code> - The event windows associated with the
     * specified names. </p> </li> <li> <p> <code>instance-id</code> - The event
     * windows associated with the specified instance ID.</p> </li> <li> <p>
     * <code>instance-tag</code> - The event windows associated with the specified tag
     * and value.</p> </li> <li> <p> <code>instance-tag-key</code> - The event windows
     * associated with the specified tag key, regardless of the value.</p> </li> <li>
     * <p> <code>instance-tag-value</code> - The event windows associated with the
     * specified tag value, regardless of the key.</p> </li> <li> <p>
     * <code>tag:&lt;key&gt;</code> - The key/value combination of a tag assigned to
     * the event window. Use the tag key in the filter name and the tag value as the
     * filter value. For example, to find all resources that have a tag with the key
     * <code>Owner</code> and the value <code>CMX</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>CMX</code> for the filter
     * value. </p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the event window. Use this filter to find all event windows that have a tag with
     * a specific key, regardless of the tag value. </p> </li> <li> <p>
     * <code>tag-value</code> - The value of a tag assigned to the event window. Use
     * this filter to find all event windows that have a tag with a specific value,
     * regardless of the tag key. </p> </li> </ul>
     */
    inline DescribeInstanceEventWindowsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 20 and 500. You cannot specify this parameter
     * and the event window IDs parameter in the same call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 20 and 500. You cannot specify this parameter
     * and the event window IDs parameter in the same call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 20 and 500. You cannot specify this parameter
     * and the event window IDs parameter in the same call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 20 and 500. You cannot specify this parameter
     * and the event window IDs parameter in the same call.</p>
     */
    inline DescribeInstanceEventWindowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeInstanceEventWindowsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeInstanceEventWindowsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeInstanceEventWindowsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceEventWindowIds;
    bool m_instanceEventWindowIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
