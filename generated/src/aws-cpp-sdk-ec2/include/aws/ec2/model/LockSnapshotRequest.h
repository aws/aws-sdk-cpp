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
    AWS_EC2_API LockSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LockSnapshot"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline LockSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline LockSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot to lock.</p>
     */
    inline LockSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


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
    inline LockSnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


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
    inline const LockMode& GetLockMode() const{ return m_lockMode; }

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
    inline bool LockModeHasBeenSet() const { return m_lockModeHasBeenSet; }

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
    inline void SetLockMode(const LockMode& value) { m_lockModeHasBeenSet = true; m_lockMode = value; }

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
    inline void SetLockMode(LockMode&& value) { m_lockModeHasBeenSet = true; m_lockMode = std::move(value); }

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
    inline LockSnapshotRequest& WithLockMode(const LockMode& value) { SetLockMode(value); return *this;}

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
    inline LockSnapshotRequest& WithLockMode(LockMode&& value) { SetLockMode(std::move(value)); return *this;}


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
    inline int GetCoolOffPeriod() const{ return m_coolOffPeriod; }

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
    inline bool CoolOffPeriodHasBeenSet() const { return m_coolOffPeriodHasBeenSet; }

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
    inline void SetCoolOffPeriod(int value) { m_coolOffPeriodHasBeenSet = true; m_coolOffPeriod = value; }

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
    inline LockSnapshotRequest& WithCoolOffPeriod(int value) { SetCoolOffPeriod(value); return *this;}


    /**
     * <p>The period of time for which to lock the snapshot, in days. The snapshot lock
     * will automatically expire after this period lapses.</p> <p>You must specify
     * either this parameter or <b>ExpirationDate</b>, but not both.</p> <p>Allowed
     * values: Min: 1, max 36500</p>
     */
    inline int GetLockDuration() const{ return m_lockDuration; }

    /**
     * <p>The period of time for which to lock the snapshot, in days. The snapshot lock
     * will automatically expire after this period lapses.</p> <p>You must specify
     * either this parameter or <b>ExpirationDate</b>, but not both.</p> <p>Allowed
     * values: Min: 1, max 36500</p>
     */
    inline bool LockDurationHasBeenSet() const { return m_lockDurationHasBeenSet; }

    /**
     * <p>The period of time for which to lock the snapshot, in days. The snapshot lock
     * will automatically expire after this period lapses.</p> <p>You must specify
     * either this parameter or <b>ExpirationDate</b>, but not both.</p> <p>Allowed
     * values: Min: 1, max 36500</p>
     */
    inline void SetLockDuration(int value) { m_lockDurationHasBeenSet = true; m_lockDuration = value; }

    /**
     * <p>The period of time for which to lock the snapshot, in days. The snapshot lock
     * will automatically expire after this period lapses.</p> <p>You must specify
     * either this parameter or <b>ExpirationDate</b>, but not both.</p> <p>Allowed
     * values: Min: 1, max 36500</p>
     */
    inline LockSnapshotRequest& WithLockDuration(int value) { SetLockDuration(value); return *this;}


    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline LockSnapshotRequest& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date and time at which the snapshot lock is to automatically expire, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>You must
     * specify either this parameter or <b>LockDuration</b>, but not both.</p>
     */
    inline LockSnapshotRequest& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    LockMode m_lockMode;
    bool m_lockModeHasBeenSet = false;

    int m_coolOffPeriod;
    bool m_coolOffPeriodHasBeenSet = false;

    int m_lockDuration;
    bool m_lockDurationHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
