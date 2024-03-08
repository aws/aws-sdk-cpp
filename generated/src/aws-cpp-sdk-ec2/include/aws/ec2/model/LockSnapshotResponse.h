/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LockState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class LockSnapshotResponse
  {
  public:
    AWS_EC2_API LockSnapshotResponse();
    AWS_EC2_API LockSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API LockSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the snapshot</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot</p>
     */
    inline LockSnapshotResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot</p>
     */
    inline LockSnapshotResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot</p>
     */
    inline LockSnapshotResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


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
    inline void SetLockState(const LockState& value) { m_lockState = value; }

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
    inline void SetLockState(LockState&& value) { m_lockState = std::move(value); }

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
    inline LockSnapshotResponse& WithLockState(const LockState& value) { SetLockState(value); return *this;}

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
    inline LockSnapshotResponse& WithLockState(LockState&& value) { SetLockState(std::move(value)); return *this;}


    /**
     * <p>The period of time for which the snapshot is locked, in days.</p>
     */
    inline int GetLockDuration() const{ return m_lockDuration; }

    /**
     * <p>The period of time for which the snapshot is locked, in days.</p>
     */
    inline void SetLockDuration(int value) { m_lockDuration = value; }

    /**
     * <p>The period of time for which the snapshot is locked, in days.</p>
     */
    inline LockSnapshotResponse& WithLockDuration(int value) { SetLockDuration(value); return *this;}


    /**
     * <p>The compliance mode cooling-off period, in hours.</p>
     */
    inline int GetCoolOffPeriod() const{ return m_coolOffPeriod; }

    /**
     * <p>The compliance mode cooling-off period, in hours.</p>
     */
    inline void SetCoolOffPeriod(int value) { m_coolOffPeriod = value; }

    /**
     * <p>The compliance mode cooling-off period, in hours.</p>
     */
    inline LockSnapshotResponse& WithCoolOffPeriod(int value) { SetCoolOffPeriod(value); return *this;}


    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCoolOffPeriodExpiresOn() const{ return m_coolOffPeriodExpiresOn; }

    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetCoolOffPeriodExpiresOn(const Aws::Utils::DateTime& value) { m_coolOffPeriodExpiresOn = value; }

    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetCoolOffPeriodExpiresOn(Aws::Utils::DateTime&& value) { m_coolOffPeriodExpiresOn = std::move(value); }

    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithCoolOffPeriodExpiresOn(const Aws::Utils::DateTime& value) { SetCoolOffPeriodExpiresOn(value); return *this;}

    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithCoolOffPeriodExpiresOn(Aws::Utils::DateTime&& value) { SetCoolOffPeriodExpiresOn(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockCreatedOn() const{ return m_lockCreatedOn; }

    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockCreatedOn(const Aws::Utils::DateTime& value) { m_lockCreatedOn = value; }

    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockCreatedOn(Aws::Utils::DateTime&& value) { m_lockCreatedOn = std::move(value); }

    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockCreatedOn(const Aws::Utils::DateTime& value) { SetLockCreatedOn(value); return *this;}

    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockCreatedOn(Aws::Utils::DateTime&& value) { SetLockCreatedOn(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockExpiresOn() const{ return m_lockExpiresOn; }

    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockExpiresOn(const Aws::Utils::DateTime& value) { m_lockExpiresOn = value; }

    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockExpiresOn(Aws::Utils::DateTime&& value) { m_lockExpiresOn = std::move(value); }

    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockExpiresOn(const Aws::Utils::DateTime& value) { SetLockExpiresOn(value); return *this;}

    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockExpiresOn(Aws::Utils::DateTime&& value) { SetLockExpiresOn(std::move(value)); return *this;}


    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockDurationStartTime() const{ return m_lockDurationStartTime; }

    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockDurationStartTime(const Aws::Utils::DateTime& value) { m_lockDurationStartTime = value; }

    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline void SetLockDurationStartTime(Aws::Utils::DateTime&& value) { m_lockDurationStartTime = std::move(value); }

    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockDurationStartTime(const Aws::Utils::DateTime& value) { SetLockDurationStartTime(value); return *this;}

    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline LockSnapshotResponse& WithLockDurationStartTime(Aws::Utils::DateTime&& value) { SetLockDurationStartTime(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline LockSnapshotResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline LockSnapshotResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;

    LockState m_lockState;

    int m_lockDuration;

    int m_coolOffPeriod;

    Aws::Utils::DateTime m_coolOffPeriodExpiresOn;

    Aws::Utils::DateTime m_lockCreatedOn;

    Aws::Utils::DateTime m_lockExpiresOn;

    Aws::Utils::DateTime m_lockDurationStartTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
