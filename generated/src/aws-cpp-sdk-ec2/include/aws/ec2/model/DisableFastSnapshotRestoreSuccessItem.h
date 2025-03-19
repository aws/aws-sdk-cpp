/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FastSnapshotRestoreStateCode.h>
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
   * <p>Describes fast snapshot restores that were successfully
   * disabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DisableFastSnapshotRestoreSuccessItem">AWS
   * API Reference</a></p>
   */
  class DisableFastSnapshotRestoreSuccessItem
  {
  public:
    AWS_EC2_API DisableFastSnapshotRestoreSuccessItem() = default;
    AWS_EC2_API DisableFastSnapshotRestoreSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DisableFastSnapshotRestoreSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    DisableFastSnapshotRestoreSuccessItem& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DisableFastSnapshotRestoreSuccessItem& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of fast snapshot restores for the snapshot.</p>
     */
    inline FastSnapshotRestoreStateCode GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(FastSnapshotRestoreStateCode value) { m_stateHasBeenSet = true; m_state = value; }
    inline DisableFastSnapshotRestoreSuccessItem& WithState(FastSnapshotRestoreStateCode value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state transition. The possible values are as follows:</p>
     * <ul> <li> <p> <code>Client.UserInitiated</code> - The state successfully
     * transitioned to <code>enabling</code> or <code>disabling</code>.</p> </li> <li>
     * <p> <code>Client.UserInitiated - Lifecycle state transition</code> - The state
     * successfully transitioned to <code>optimizing</code>, <code>enabled</code>, or
     * <code>disabled</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    DisableFastSnapshotRestoreSuccessItem& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that enabled fast snapshot restores
     * on the snapshot.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    DisableFastSnapshotRestoreSuccessItem& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services owner alias that enabled fast snapshot restores on
     * the snapshot. This is intended for future use.</p>
     */
    inline const Aws::String& GetOwnerAlias() const { return m_ownerAlias; }
    inline bool OwnerAliasHasBeenSet() const { return m_ownerAliasHasBeenSet; }
    template<typename OwnerAliasT = Aws::String>
    void SetOwnerAlias(OwnerAliasT&& value) { m_ownerAliasHasBeenSet = true; m_ownerAlias = std::forward<OwnerAliasT>(value); }
    template<typename OwnerAliasT = Aws::String>
    DisableFastSnapshotRestoreSuccessItem& WithOwnerAlias(OwnerAliasT&& value) { SetOwnerAlias(std::forward<OwnerAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>enabling</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetEnablingTime() const { return m_enablingTime; }
    inline bool EnablingTimeHasBeenSet() const { return m_enablingTimeHasBeenSet; }
    template<typename EnablingTimeT = Aws::Utils::DateTime>
    void SetEnablingTime(EnablingTimeT&& value) { m_enablingTimeHasBeenSet = true; m_enablingTime = std::forward<EnablingTimeT>(value); }
    template<typename EnablingTimeT = Aws::Utils::DateTime>
    DisableFastSnapshotRestoreSuccessItem& WithEnablingTime(EnablingTimeT&& value) { SetEnablingTime(std::forward<EnablingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>optimizing</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetOptimizingTime() const { return m_optimizingTime; }
    inline bool OptimizingTimeHasBeenSet() const { return m_optimizingTimeHasBeenSet; }
    template<typename OptimizingTimeT = Aws::Utils::DateTime>
    void SetOptimizingTime(OptimizingTimeT&& value) { m_optimizingTimeHasBeenSet = true; m_optimizingTime = std::forward<OptimizingTimeT>(value); }
    template<typename OptimizingTimeT = Aws::Utils::DateTime>
    DisableFastSnapshotRestoreSuccessItem& WithOptimizingTime(OptimizingTimeT&& value) { SetOptimizingTime(std::forward<OptimizingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>enabled</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledTime() const { return m_enabledTime; }
    inline bool EnabledTimeHasBeenSet() const { return m_enabledTimeHasBeenSet; }
    template<typename EnabledTimeT = Aws::Utils::DateTime>
    void SetEnabledTime(EnabledTimeT&& value) { m_enabledTimeHasBeenSet = true; m_enabledTime = std::forward<EnabledTimeT>(value); }
    template<typename EnabledTimeT = Aws::Utils::DateTime>
    DisableFastSnapshotRestoreSuccessItem& WithEnabledTime(EnabledTimeT&& value) { SetEnabledTime(std::forward<EnabledTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>disabling</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetDisablingTime() const { return m_disablingTime; }
    inline bool DisablingTimeHasBeenSet() const { return m_disablingTimeHasBeenSet; }
    template<typename DisablingTimeT = Aws::Utils::DateTime>
    void SetDisablingTime(DisablingTimeT&& value) { m_disablingTimeHasBeenSet = true; m_disablingTime = std::forward<DisablingTimeT>(value); }
    template<typename DisablingTimeT = Aws::Utils::DateTime>
    DisableFastSnapshotRestoreSuccessItem& WithDisablingTime(DisablingTimeT&& value) { SetDisablingTime(std::forward<DisablingTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which fast snapshot restores entered the <code>disabled</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledTime() const { return m_disabledTime; }
    inline bool DisabledTimeHasBeenSet() const { return m_disabledTimeHasBeenSet; }
    template<typename DisabledTimeT = Aws::Utils::DateTime>
    void SetDisabledTime(DisabledTimeT&& value) { m_disabledTimeHasBeenSet = true; m_disabledTime = std::forward<DisabledTimeT>(value); }
    template<typename DisabledTimeT = Aws::Utils::DateTime>
    DisableFastSnapshotRestoreSuccessItem& WithDisabledTime(DisabledTimeT&& value) { SetDisabledTime(std::forward<DisabledTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    FastSnapshotRestoreStateCode m_state{FastSnapshotRestoreStateCode::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ownerAlias;
    bool m_ownerAliasHasBeenSet = false;

    Aws::Utils::DateTime m_enablingTime{};
    bool m_enablingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_optimizingTime{};
    bool m_optimizingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_enabledTime{};
    bool m_enabledTimeHasBeenSet = false;

    Aws::Utils::DateTime m_disablingTime{};
    bool m_disablingTimeHasBeenSet = false;

    Aws::Utils::DateTime m_disabledTime{};
    bool m_disabledTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
