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
   */
  class DescribeVolumesModificationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVolumesModificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumesModifications"; }

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
    inline DescribeVolumesModificationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the volumes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline DescribeVolumesModificationsRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline DescribeVolumesModificationsRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the volumes.</p>
     */
    inline DescribeVolumesModificationsRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline DescribeVolumesModificationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline DescribeVolumesModificationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
     */
    inline DescribeVolumesModificationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>modification-state</code> - The current
     * modification state (modifying | optimizing | completed | failed).</p> </li> <li>
     * <p> <code>original-iops</code> - The original IOPS rate of the volume.</p> </li>
     * <li> <p> <code>original-size</code> - The original size of the volume, in
     * GiB.</p> </li> <li> <p> <code>original-volume-type</code> - The original volume
     * type of the volume (standard | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>originalMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * was enabled (true | false).</p> </li> <li> <p> <code>start-time</code> - The
     * modification start time.</p> </li> <li> <p> <code>target-iops</code> - The
     * target IOPS rate of the volume.</p> </li> <li> <p> <code>target-size</code> -
     * The target size of the volume, in GiB.</p> </li> <li> <p>
     * <code>target-volume-type</code> - The target volume type of the volume (standard
     * | io1 | io2 | gp2 | sc1 | st1).</p> </li> <li> <p>
     * <code>targetMultiAttachEnabled</code> - Indicates whether Multi-Attach support
     * is to be enabled (true | false).</p> </li> <li> <p> <code>volume-id</code> - The
     * ID of the volume.</p> </li> </ul>
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
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
