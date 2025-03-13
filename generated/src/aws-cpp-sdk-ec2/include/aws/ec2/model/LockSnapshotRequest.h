/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LockMode.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class LockSnapshotRequest : public EC2Request
  {
  public:
    AWS_EC2_API LockSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LockSnapshot"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    LockSnapshotRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
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
    inline LockSnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode in which to lock the snapshot. Specify one of the following:</p>
     * <ul> <li> <p> <code>governance</code> - Locks the snapshot in governance mode.
     * Snapshots locked in governance mode can't be deleted until one of the following
     * conditions are met:</p> <ul> <li> <p>The lock duration expires.</p> </li> <li>
     * <p>The snapshot is unlocked by a user with the appropriate permissions.</p>
     * </li> </ul> <p>Users with the appropriate IAM permissions can unlock the
     * snapshot, increase or decrease the lock duration, and change the lock mode to
     * <code>compliance</code> at any time.</p> <p>If you lock a snapshot in
     * <code>governance</code> mode, omit <b> CoolOffPeriod</b>.</p> </li> <li> <p>
     * <code>compliance</code> - Locks the snapshot in compliance mode. Snapshots
     * locked in compliance mode can't be unlocked by any user. They can be deleted
     * only after the lock duration expires. Users can't decrease the lock duration or
     * change the lock mode to <code>governance</code>. However, users with appropriate
     * IAM permissions can increase the lock duration at any time.</p> <p>If you lock a
     * snapshot in <code>compliance</code> mode, you can optionally specify
     * <b>CoolOffPeriod</b>.</p> </li> </ul>
     */
    inline LockMode GetLockMode() const { return m_lockMode; }
    inline bool LockModeHasBeenSet() const { return m_lockModeHasBeenSet; }
    inline void SetLockMode(LockMode value) { m_lockModeHasBeenSet = true; m_lockMode = value; }
    inline LockSnapshotRequest& WithLockMode(LockMode value) { SetLockMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cooling-off period during which you can unlock the snapshot or modify the
     * lock settings after locking the snapshot in compliance mode, in hours. After the
     * cooling-off period expires, you can't unlock or delete the snapshot, decrease
     * the lock duration, or change the lock mode. You can increase the lock duration
     * after the cooling-off period expires.</p> <p>The cooling-off period is optional
     * when locking a snapshot in compliance mode. If you are locking the snapshot in
     * governance mode, omit this parameter.</p> <p>To lock the snapshot in compliance
     * mode immediately without a cooling-off period, omit this parameter.</p> <p>If
     * you are extending the lock duration for a snapshot that is locked in compliance
     * mode after the cooling-off period has expired, omit this parameter. If you
     * specify a cooling-period in a such a request, the request fails.</p> <p>Allowed
     * values: Min 1, max 72.</p>
     */
    inline int GetCoolOffPeriod() const { return m_coolOffPeriod; }
    inline bool CoolOffPeriodHasBeenSet() const { return m_coolOffPeriodHasBeenSet; }
    inline void SetCoolOffPeriod(int value) { m_coolOffPeriodHasBeenSet = true; m_coolOffPeriod = value; }
    inline LockSnapshotRequest& WithCoolOffPeriod(int value) { SetCoolOffPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time for which to lock the snapshot, in days. The snapshot lock
     * will automatically expire after this period lapses.</p> <p>You must specify
     * either this parameter or <b>ExpirationDate</b>, but not both.</p> <p>Allowed
     * values: Min: 1, max 36500</p>
     */
    inline int GetLockDuration() const { return m_lockDuration; }
    inline bool LockDurationHasBeenSet() const { return m_lockDurationHasBeenSet; }
    inline void SetLockDuration(int value) { m_lockDurationHasBeenSet = true; m_lockDuration = value; }
    inline LockSnapshotRequest& WithLockDuration(int value) { SetLockDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    LockSnapshotRequest& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    LockMode m_lockMode{LockMode::NOT_SET};
    bool m_lockModeHasBeenSet = false;

    int m_coolOffPeriod{0};
    bool m_coolOffPeriodHasBeenSet = false;

    int m_lockDuration{0};
    bool m_lockDurationHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
