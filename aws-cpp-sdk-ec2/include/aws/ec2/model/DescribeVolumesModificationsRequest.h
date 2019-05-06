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
  class AWS_EC2_API DescribeVolumesModificationsRequest : public EC2Request
  {
  public:
    DescribeVolumesModificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumesModifications"; }

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
    inline DescribeVolumesModificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline DescribeVolumesModificationsRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline DescribeVolumesModificationsRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the volumes for which in-progress modifications will be
     * described.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }


    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline DescribeVolumesModificationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline DescribeVolumesModificationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline DescribeVolumesModificationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters. Supported filters: <code>volume-id</code>,
     * <code>modification-state</code>, <code>target-size</code>,
     * <code>target-iops</code>, <code>target-volume-type</code>,
     * <code>original-size</code>, <code>original-iops</code>,
     * <code>original-volume-type</code>, <code>start-time</code>. </p>
     */
    inline DescribeVolumesModificationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline DescribeVolumesModificationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline DescribeVolumesModificationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned by a previous paginated
     * request.</p>
     */
    inline DescribeVolumesModificationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results (up to a limit of 500) to be returned in a
     * paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results (up to a limit of 500) to be returned in a
     * paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results (up to a limit of 500) to be returned in a
     * paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results (up to a limit of 500) to be returned in a
     * paginated request.</p>
     */
    inline DescribeVolumesModificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
