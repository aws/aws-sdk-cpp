/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LockState.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about a locked snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LockedSnapshotsInfo">AWS
   * API Reference</a></p>
   */
  class LockedSnapshotsInfo
  {
  public:
    AWS_EC2_API LockedSnapshotsInfo();
    AWS_EC2_API LockedSnapshotsInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LockedSnapshotsInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The account ID of the Amazon Web Services account that owns the snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline LockedSnapshotsInfo& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline LockedSnapshotsInfo& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline LockedSnapshotsInfo& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }
    inline LockedSnapshotsInfo& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline LockedSnapshotsInfo& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline LockedSnapshotsInfo& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the snapshot lock. Valid states include:</p> <ul> <li> <p>
     * <code>compliance-cooloff</code> - The snapshot has been locked in compliance
     * mode but it is still within the cooling-off period. The snapshot can't be
     * deleted, but it can be unlocked and the lock settings can be modified by users
     * with appropriate permissions.</p> </li> <li> <p> <code>governance</code> - The
     * snapshot is locked in governance mode. The snapshot can't be deleted, but it can
     * be unlocked and the lock settings can be modified by users with appropriate
     * permissions.</p> </li> <li> <p> <code>compliance</code> - The snapshot is locked
     * in compliance mode and the cooling-off period has expired. The snapshot can't be
     * unlocked or deleted. The lock duration can only be increased by users with
     * appropriate permissions.</p> </li> <li> <p> <code>expired</code> - The snapshot
     * was locked in compliance or governance mode but the lock duration has expired.
     * The snapshot is not locked and can be deleted.</p> </li> </ul>
     */
    inline const LockState& GetLockState() const{ return m_lockState; }
    inline bool LockStateHasBeenSet() const { return m_lockStateHasBeenSet; }
    inline void SetLockState(const LockState& value) { m_lockStateHasBeenSet = true; m_lockState = value; }
    inline void SetLockState(LockState&& value) { m_lockStateHasBeenSet = true; m_lockState = std::move(value); }
    inline LockedSnapshotsInfo& WithLockState(const LockState& value) { SetLockState(value); return *this;}
    inline LockedSnapshotsInfo& WithLockState(LockState&& value) { SetLockState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time for which the snapshot is locked, in days.</p>
     */
    inline int GetLockDuration() const{ return m_lockDuration; }
    inline bool LockDurationHasBeenSet() const { return m_lockDurationHasBeenSet; }
    inline void SetLockDuration(int value) { m_lockDurationHasBeenSet = true; m_lockDuration = value; }
    inline LockedSnapshotsInfo& WithLockDuration(int value) { SetLockDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance mode cooling-off period, in hours.</p>
     */
    inline int GetCoolOffPeriod() const{ return m_coolOffPeriod; }
    inline bool CoolOffPeriodHasBeenSet() const { return m_coolOffPeriodHasBeenSet; }
    inline void SetCoolOffPeriod(int value) { m_coolOffPeriodHasBeenSet = true; m_coolOffPeriod = value; }
    inline LockedSnapshotsInfo& WithCoolOffPeriod(int value) { SetCoolOffPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCoolOffPeriodExpiresOn() const{ return m_coolOffPeriodExpiresOn; }
    inline bool CoolOffPeriodExpiresOnHasBeenSet() const { return m_coolOffPeriodExpiresOnHasBeenSet; }
    inline void SetCoolOffPeriodExpiresOn(const Aws::Utils::DateTime& value) { m_coolOffPeriodExpiresOnHasBeenSet = true; m_coolOffPeriodExpiresOn = value; }
    inline void SetCoolOffPeriodExpiresOn(Aws::Utils::DateTime&& value) { m_coolOffPeriodExpiresOnHasBeenSet = true; m_coolOffPeriodExpiresOn = std::move(value); }
    inline LockedSnapshotsInfo& WithCoolOffPeriodExpiresOn(const Aws::Utils::DateTime& value) { SetCoolOffPeriodExpiresOn(value); return *this;}
    inline LockedSnapshotsInfo& WithCoolOffPeriodExpiresOn(Aws::Utils::DateTime&& value) { SetCoolOffPeriodExpiresOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockCreatedOn() const{ return m_lockCreatedOn; }
    inline bool LockCreatedOnHasBeenSet() const { return m_lockCreatedOnHasBeenSet; }
    inline void SetLockCreatedOn(const Aws::Utils::DateTime& value) { m_lockCreatedOnHasBeenSet = true; m_lockCreatedOn = value; }
    inline void SetLockCreatedOn(Aws::Utils::DateTime&& value) { m_lockCreatedOnHasBeenSet = true; m_lockCreatedOn = std::move(value); }
    inline LockedSnapshotsInfo& WithLockCreatedOn(const Aws::Utils::DateTime& value) { SetLockCreatedOn(value); return *this;}
    inline LockedSnapshotsInfo& WithLockCreatedOn(Aws::Utils::DateTime&& value) { SetLockCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p> <p>If you lock a snapshot that is
     * in the <code>pending</code> state, the lock duration starts only once the
     * snapshot enters the <code>completed</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetLockDurationStartTime() const{ return m_lockDurationStartTime; }
    inline bool LockDurationStartTimeHasBeenSet() const { return m_lockDurationStartTimeHasBeenSet; }
    inline void SetLockDurationStartTime(const Aws::Utils::DateTime& value) { m_lockDurationStartTimeHasBeenSet = true; m_lockDurationStartTime = value; }
    inline void SetLockDurationStartTime(Aws::Utils::DateTime&& value) { m_lockDurationStartTimeHasBeenSet = true; m_lockDurationStartTime = std::move(value); }
    inline LockedSnapshotsInfo& WithLockDurationStartTime(const Aws::Utils::DateTime& value) { SetLockDurationStartTime(value); return *this;}
    inline LockedSnapshotsInfo& WithLockDurationStartTime(Aws::Utils::DateTime&& value) { SetLockDurationStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockExpiresOn() const{ return m_lockExpiresOn; }
    inline bool LockExpiresOnHasBeenSet() const { return m_lockExpiresOnHasBeenSet; }
    inline void SetLockExpiresOn(const Aws::Utils::DateTime& value) { m_lockExpiresOnHasBeenSet = true; m_lockExpiresOn = value; }
    inline void SetLockExpiresOn(Aws::Utils::DateTime&& value) { m_lockExpiresOnHasBeenSet = true; m_lockExpiresOn = std::move(value); }
    inline LockedSnapshotsInfo& WithLockExpiresOn(const Aws::Utils::DateTime& value) { SetLockExpiresOn(value); return *this;}
    inline LockedSnapshotsInfo& WithLockExpiresOn(Aws::Utils::DateTime&& value) { SetLockExpiresOn(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    LockState m_lockState;
    bool m_lockStateHasBeenSet = false;

    int m_lockDuration;
    bool m_lockDurationHasBeenSet = false;

    int m_coolOffPeriod;
    bool m_coolOffPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_coolOffPeriodExpiresOn;
    bool m_coolOffPeriodExpiresOnHasBeenSet = false;

    Aws::Utils::DateTime m_lockCreatedOn;
    bool m_lockCreatedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lockDurationStartTime;
    bool m_lockDurationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lockExpiresOn;
    bool m_lockExpiresOnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
