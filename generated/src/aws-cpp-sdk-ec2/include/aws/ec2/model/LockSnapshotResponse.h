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
    AWS_EC2_API LockSnapshotResponse() = default;
    AWS_EC2_API LockSnapshotResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API LockSnapshotResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the snapshot</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    LockSnapshotResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
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
    inline LockState GetLockState() const { return m_lockState; }
    inline void SetLockState(LockState value) { m_lockStateHasBeenSet = true; m_lockState = value; }
    inline LockSnapshotResponse& WithLockState(LockState value) { SetLockState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time for which the snapshot is locked, in days.</p>
     */
    inline int GetLockDuration() const { return m_lockDuration; }
    inline void SetLockDuration(int value) { m_lockDurationHasBeenSet = true; m_lockDuration = value; }
    inline LockSnapshotResponse& WithLockDuration(int value) { SetLockDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compliance mode cooling-off period, in hours.</p>
     */
    inline int GetCoolOffPeriod() const { return m_coolOffPeriod; }
    inline void SetCoolOffPeriod(int value) { m_coolOffPeriodHasBeenSet = true; m_coolOffPeriod = value; }
    inline LockSnapshotResponse& WithCoolOffPeriod(int value) { SetCoolOffPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the compliance mode cooling-off period expires, in
     * the UTC time zone (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCoolOffPeriodExpiresOn() const { return m_coolOffPeriodExpiresOn; }
    template<typename CoolOffPeriodExpiresOnT = Aws::Utils::DateTime>
    void SetCoolOffPeriodExpiresOn(CoolOffPeriodExpiresOnT&& value) { m_coolOffPeriodExpiresOnHasBeenSet = true; m_coolOffPeriodExpiresOn = std::forward<CoolOffPeriodExpiresOnT>(value); }
    template<typename CoolOffPeriodExpiresOnT = Aws::Utils::DateTime>
    LockSnapshotResponse& WithCoolOffPeriodExpiresOn(CoolOffPeriodExpiresOnT&& value) { SetCoolOffPeriodExpiresOn(std::forward<CoolOffPeriodExpiresOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the snapshot was locked, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockCreatedOn() const { return m_lockCreatedOn; }
    template<typename LockCreatedOnT = Aws::Utils::DateTime>
    void SetLockCreatedOn(LockCreatedOnT&& value) { m_lockCreatedOnHasBeenSet = true; m_lockCreatedOn = std::forward<LockCreatedOnT>(value); }
    template<typename LockCreatedOnT = Aws::Utils::DateTime>
    LockSnapshotResponse& WithLockCreatedOn(LockCreatedOnT&& value) { SetLockCreatedOn(std::forward<LockCreatedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the lock will expire, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockExpiresOn() const { return m_lockExpiresOn; }
    template<typename LockExpiresOnT = Aws::Utils::DateTime>
    void SetLockExpiresOn(LockExpiresOnT&& value) { m_lockExpiresOnHasBeenSet = true; m_lockExpiresOn = std::forward<LockExpiresOnT>(value); }
    template<typename LockExpiresOnT = Aws::Utils::DateTime>
    LockSnapshotResponse& WithLockExpiresOn(LockExpiresOnT&& value) { SetLockExpiresOn(std::forward<LockExpiresOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the lock duration started, in the UTC time zone
     * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLockDurationStartTime() const { return m_lockDurationStartTime; }
    template<typename LockDurationStartTimeT = Aws::Utils::DateTime>
    void SetLockDurationStartTime(LockDurationStartTimeT&& value) { m_lockDurationStartTimeHasBeenSet = true; m_lockDurationStartTime = std::forward<LockDurationStartTimeT>(value); }
    template<typename LockDurationStartTimeT = Aws::Utils::DateTime>
    LockSnapshotResponse& WithLockDurationStartTime(LockDurationStartTimeT&& value) { SetLockDurationStartTime(std::forward<LockDurationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    LockSnapshotResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    LockState m_lockState{LockState::NOT_SET};
    bool m_lockStateHasBeenSet = false;

    int m_lockDuration{0};
    bool m_lockDurationHasBeenSet = false;

    int m_coolOffPeriod{0};
    bool m_coolOffPeriodHasBeenSet = false;

    Aws::Utils::DateTime m_coolOffPeriodExpiresOn{};
    bool m_coolOffPeriodExpiresOnHasBeenSet = false;

    Aws::Utils::DateTime m_lockCreatedOn{};
    bool m_lockCreatedOnHasBeenSet = false;

    Aws::Utils::DateTime m_lockExpiresOn{};
    bool m_lockExpiresOnHasBeenSet = false;

    Aws::Utils::DateTime m_lockDurationStartTime{};
    bool m_lockDurationStartTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
