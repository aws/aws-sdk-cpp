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
  class DisableFastSnapshotRestoresRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoresRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableFastSnapshotRestores"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more Availability Zones. For example, <code>us-east-2a</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    DisableFastSnapshotRestoresRequest& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    DisableFastSnapshotRestoresRequest& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more snapshots. For example,
     * <code>snap-1234567890abcdef0</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceSnapshotIds() const { return m_sourceSnapshotIds; }
    inline bool SourceSnapshotIdsHasBeenSet() const { return m_sourceSnapshotIdsHasBeenSet; }
    template<typename SourceSnapshotIdsT = Aws::Vector<Aws::String>>
    void SetSourceSnapshotIds(SourceSnapshotIdsT&& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds = std::forward<SourceSnapshotIdsT>(value); }
    template<typename SourceSnapshotIdsT = Aws::Vector<Aws::String>>
    DisableFastSnapshotRestoresRequest& WithSourceSnapshotIds(SourceSnapshotIdsT&& value) { SetSourceSnapshotIds(std::forward<SourceSnapshotIdsT>(value)); return *this;}
    template<typename SourceSnapshotIdsT = Aws::String>
    DisableFastSnapshotRestoresRequest& AddSourceSnapshotIds(SourceSnapshotIdsT&& value) { m_sourceSnapshotIdsHasBeenSet = true; m_sourceSnapshotIds.emplace_back(std::forward<SourceSnapshotIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DisableFastSnapshotRestoresRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceSnapshotIds;
    bool m_sourceSnapshotIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
