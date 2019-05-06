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
   */
  class AWS_EC2_API DescribeSnapshotsRequest : public EC2Request
  {
  public:
    DescribeSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline DescribeSnapshotsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline DescribeSnapshotsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline DescribeSnapshotsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>description</code> - A description of
     * the snapshot.</p> </li> <li> <p> <code>encrypted</code> - Indicates whether the
     * snapshot is encrypted (<code>true</code> | <code>false</code>)</p> </li> <li>
     * <p> <code>owner-alias</code> - Value from an Amazon-maintained list
     * (<code>amazon</code> | <code>self</code> | <code>all</code> |
     * <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not
     * to be confused with the user-configured AWS account alias, which is set from the
     * IAM console.</p> </li> <li> <p> <code>owner-id</code> - The ID of the AWS
     * account that owns the snapshot.</p> </li> <li> <p> <code>progress</code> - The
     * progress of the snapshot, as a percentage (for example, 80%).</p> </li> <li> <p>
     * <code>snapshot-id</code> - The snapshot ID.</p> </li> <li> <p>
     * <code>start-time</code> - The time stamp when the snapshot was initiated.</p>
     * </li> <li> <p> <code>status</code> - The status of the snapshot
     * (<code>pending</code> | <code>completed</code> | <code>error</code>).</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> <li> <p>
     * <code>volume-id</code> - The ID of the volume the snapshot is for.</p> </li>
     * <li> <p> <code>volume-size</code> - The size of the volume, in GiB.</p> </li>
     * </ul>
     */
    inline DescribeSnapshotsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of snapshot results returned by
     * <code>DescribeSnapshots</code> in paginated output. When this parameter is used,
     * <code>DescribeSnapshots</code> only returns <code>MaxResults</code> results in a
     * single page along with a <code>NextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeSnapshots</code> request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000; if <code>MaxResults</code> is given
     * a value larger than 1000, only 1000 results are returned. If this parameter is
     * not used, then <code>DescribeSnapshots</code> returns all results. You cannot
     * specify this parameter and the snapshot IDs parameter in the same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of snapshot results returned by
     * <code>DescribeSnapshots</code> in paginated output. When this parameter is used,
     * <code>DescribeSnapshots</code> only returns <code>MaxResults</code> results in a
     * single page along with a <code>NextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeSnapshots</code> request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000; if <code>MaxResults</code> is given
     * a value larger than 1000, only 1000 results are returned. If this parameter is
     * not used, then <code>DescribeSnapshots</code> returns all results. You cannot
     * specify this parameter and the snapshot IDs parameter in the same request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of snapshot results returned by
     * <code>DescribeSnapshots</code> in paginated output. When this parameter is used,
     * <code>DescribeSnapshots</code> only returns <code>MaxResults</code> results in a
     * single page along with a <code>NextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeSnapshots</code> request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000; if <code>MaxResults</code> is given
     * a value larger than 1000, only 1000 results are returned. If this parameter is
     * not used, then <code>DescribeSnapshots</code> returns all results. You cannot
     * specify this parameter and the snapshot IDs parameter in the same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of snapshot results returned by
     * <code>DescribeSnapshots</code> in paginated output. When this parameter is used,
     * <code>DescribeSnapshots</code> only returns <code>MaxResults</code> results in a
     * single page along with a <code>NextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeSnapshots</code> request with the returned <code>NextToken</code>
     * value. This value can be between 5 and 1000; if <code>MaxResults</code> is given
     * a value larger than 1000, only 1000 results are returned. If this parameter is
     * not used, then <code>DescribeSnapshots</code> returns all results. You cannot
     * specify this parameter and the snapshot IDs parameter in the same request.</p>
     */
    inline DescribeSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used
     * and the results exceeded the value of that parameter. Pagination continues from
     * the end of the previous results that returned the <code>NextToken</code> value.
     * This value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOwnerIds() const{ return m_ownerIds; }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline bool OwnerIdsHasBeenSet() const { return m_ownerIdsHasBeenSet; }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline void SetOwnerIds(const Aws::Vector<Aws::String>& value) { m_ownerIdsHasBeenSet = true; m_ownerIds = value; }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline void SetOwnerIds(Aws::Vector<Aws::String>&& value) { m_ownerIdsHasBeenSet = true; m_ownerIds = std::move(value); }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline DescribeSnapshotsRequest& WithOwnerIds(const Aws::Vector<Aws::String>& value) { SetOwnerIds(value); return *this;}

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline DescribeSnapshotsRequest& WithOwnerIds(Aws::Vector<Aws::String>&& value) { SetOwnerIds(std::move(value)); return *this;}

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline DescribeSnapshotsRequest& AddOwnerIds(const Aws::String& value) { m_ownerIdsHasBeenSet = true; m_ownerIds.push_back(value); return *this; }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline DescribeSnapshotsRequest& AddOwnerIds(Aws::String&& value) { m_ownerIdsHasBeenSet = true; m_ownerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Describes the snapshots owned by these owners.</p>
     */
    inline DescribeSnapshotsRequest& AddOwnerIds(const char* value) { m_ownerIdsHasBeenSet = true; m_ownerIds.push_back(value); return *this; }


    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRestorableByUserIds() const{ return m_restorableByUserIds; }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline bool RestorableByUserIdsHasBeenSet() const { return m_restorableByUserIdsHasBeenSet; }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline void SetRestorableByUserIds(const Aws::Vector<Aws::String>& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds = value; }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline void SetRestorableByUserIds(Aws::Vector<Aws::String>&& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds = std::move(value); }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline DescribeSnapshotsRequest& WithRestorableByUserIds(const Aws::Vector<Aws::String>& value) { SetRestorableByUserIds(value); return *this;}

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline DescribeSnapshotsRequest& WithRestorableByUserIds(Aws::Vector<Aws::String>&& value) { SetRestorableByUserIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline DescribeSnapshotsRequest& AddRestorableByUserIds(const Aws::String& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline DescribeSnapshotsRequest& AddRestorableByUserIds(Aws::String&& value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the AWS accounts that can create volumes from the snapshot.</p>
     */
    inline DescribeSnapshotsRequest& AddRestorableByUserIds(const char* value) { m_restorableByUserIdsHasBeenSet = true; m_restorableByUserIds.push_back(value); return *this; }


    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotIds() const{ return m_snapshotIds; }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline bool SnapshotIdsHasBeenSet() const { return m_snapshotIdsHasBeenSet; }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline void SetSnapshotIds(const Aws::Vector<Aws::String>& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = value; }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline void SetSnapshotIds(Aws::Vector<Aws::String>&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds = std::move(value); }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSnapshotIds(value); return *this;}

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSnapshotIds(std::move(value)); return *this;}

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const Aws::String& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(Aws::String&& value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The snapshot IDs.</p> <p>Default: Describes the snapshots for which you have
     * create volume permissions.</p>
     */
    inline DescribeSnapshotsRequest& AddSnapshotIds(const char* value) { m_snapshotIdsHasBeenSet = true; m_snapshotIds.push_back(value); return *this; }


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
    inline DescribeSnapshotsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_ownerIds;
    bool m_ownerIdsHasBeenSet;

    Aws::Vector<Aws::String> m_restorableByUserIds;
    bool m_restorableByUserIdsHasBeenSet;

    Aws::Vector<Aws::String> m_snapshotIds;
    bool m_snapshotIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
