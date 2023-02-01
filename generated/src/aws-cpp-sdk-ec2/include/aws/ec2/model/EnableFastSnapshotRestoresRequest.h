/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class EnableFastSnapshotRestoresRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableFastSnapshotRestoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableFastSnapshotRestores"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline EnableFastSnapshotRestoresRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline EnableFastSnapshotRestoresRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceSnapshotIds() const{ return m_sourceSnapshotIds; }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline bool SourceSnapshotIdsHasBeenSet() const { return m_sourceSnapshotIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline void SetSourceSnapshotIds(const Aws::Vector<Aws::String>& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds = value; }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline void SetSourceSnapshotIds(Aws::Vector<Aws::String>&& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds = std::move(value); }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline EnableFastSnapshotRestoresRequest& WithSourceSnapshotIds(const Aws::Vector<Aws::String>& value) { SetSourceSnapshotIds(value); return *this;}

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline EnableFastSnapshotRestoresRequest& WithSourceSnapshotIds(Aws::Vector<Aws::String>&& value) { SetSourceSnapshotIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddSourceSnapshotIds(const Aws::String& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddSourceSnapshotIds(Aws::String&& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>. You can specify a snapshot that was shared
     * with you from another Amazon Web Services account.</p>
     */
    inline EnableFastSnapshotRestoresRequest& AddSourceSnapshotIds(const char* value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds.push_back(value); return *this; }


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
    inline EnableFastSnapshotRestoresRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceSnapshotIds;
    bool m_sourceSnapshotIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
