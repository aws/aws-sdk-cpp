/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/InstanceRefreshStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/InstanceRefreshProgressDetails.h>
#include <aws/autoscaling/model/RefreshPreferences.h>
#include <aws/autoscaling/model/DesiredConfiguration.h>
#include <aws/autoscaling/model/RollbackDetails.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes an instance refresh for an Auto Scaling group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceRefresh">AWS
   * API Reference</a></p>
   */
  class InstanceRefresh
  {
  public:
    AWS_AUTOSCALING_API InstanceRefresh() = default;
    AWS_AUTOSCALING_API InstanceRefresh(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceRefresh& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance refresh ID.</p>
     */
    inline const Aws::String& GetInstanceRefreshId() const { return m_instanceRefreshId; }
    inline bool InstanceRefreshIdHasBeenSet() const { return m_instanceRefreshIdHasBeenSet; }
    template<typename InstanceRefreshIdT = Aws::String>
    void SetInstanceRefreshId(InstanceRefreshIdT&& value) { m_instanceRefreshIdHasBeenSet = true; m_instanceRefreshId = std::forward<InstanceRefreshIdT>(value); }
    template<typename InstanceRefreshIdT = Aws::String>
    InstanceRefresh& WithInstanceRefreshId(InstanceRefreshIdT&& value) { SetInstanceRefreshId(std::forward<InstanceRefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    InstanceRefresh& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the instance refresh operation:</p> <ul> <li> <p>
     * <code>Pending</code> - The request was created, but the instance refresh has not
     * started.</p> </li> <li> <p> <code>InProgress</code> - An instance refresh is in
     * progress.</p> </li> <li> <p> <code>Successful</code> - An instance refresh
     * completed successfully.</p> </li> <li> <p> <code>Failed</code> - An instance
     * refresh failed to complete. You can troubleshoot using the status reason and the
     * scaling activities. </p> </li> <li> <p> <code>Cancelling</code> - An ongoing
     * instance refresh is being cancelled.</p> </li> <li> <p> <code>Cancelled</code> -
     * The instance refresh is cancelled. </p> </li> <li> <p>
     * <code>RollbackInProgress</code> - An instance refresh is being rolled back.</p>
     * </li> <li> <p> <code>RollbackFailed</code> - The rollback failed to complete.
     * You can troubleshoot using the status reason and the scaling activities.</p>
     * </li> <li> <p> <code>RollbackSuccessful</code> - The rollback completed
     * successfully.</p> </li> <li> <p> <code>Baking</code> - Waiting the specified
     * bake time after an instance refresh has finished updating instances.</p> </li>
     * </ul>
     */
    inline InstanceRefreshStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceRefreshStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceRefresh& WithStatus(InstanceRefreshStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation for the specific status assigned to this operation.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    InstanceRefresh& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the instance refresh began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    InstanceRefresh& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the instance refresh ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    InstanceRefresh& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the instance refresh that is complete. For each instance
     * replacement, Amazon EC2 Auto Scaling tracks the instance's health status and
     * warm-up time. When the instance's health status changes to healthy and the
     * specified warm-up time passes, the instance is considered updated and is added
     * to the percentage complete.</p>  <p> <code>PercentageComplete</code> does
     * not include instances that are replaced during a rollback. This value gradually
     * goes back down to zero during a rollback.</p> 
     */
    inline int GetPercentageComplete() const { return m_percentageComplete; }
    inline bool PercentageCompleteHasBeenSet() const { return m_percentageCompleteHasBeenSet; }
    inline void SetPercentageComplete(int value) { m_percentageCompleteHasBeenSet = true; m_percentageComplete = value; }
    inline InstanceRefresh& WithPercentageComplete(int value) { SetPercentageComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances remaining to update before the instance refresh is
     * complete.</p>  <p>If you roll back the instance refresh,
     * <code>InstancesToUpdate</code> shows you the number of instances that were not
     * yet updated by the instance refresh. Therefore, these instances don't need to be
     * replaced as part of the rollback.</p> 
     */
    inline int GetInstancesToUpdate() const { return m_instancesToUpdate; }
    inline bool InstancesToUpdateHasBeenSet() const { return m_instancesToUpdateHasBeenSet; }
    inline void SetInstancesToUpdate(int value) { m_instancesToUpdateHasBeenSet = true; m_instancesToUpdate = value; }
    inline InstanceRefresh& WithInstancesToUpdate(int value) { SetInstancesToUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional progress details for an Auto Scaling group that has a warm
     * pool.</p>
     */
    inline const InstanceRefreshProgressDetails& GetProgressDetails() const { return m_progressDetails; }
    inline bool ProgressDetailsHasBeenSet() const { return m_progressDetailsHasBeenSet; }
    template<typename ProgressDetailsT = InstanceRefreshProgressDetails>
    void SetProgressDetails(ProgressDetailsT&& value) { m_progressDetailsHasBeenSet = true; m_progressDetails = std::forward<ProgressDetailsT>(value); }
    template<typename ProgressDetailsT = InstanceRefreshProgressDetails>
    InstanceRefresh& WithProgressDetails(ProgressDetailsT&& value) { SetProgressDetails(std::forward<ProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferences for an instance refresh.</p>
     */
    inline const RefreshPreferences& GetPreferences() const { return m_preferences; }
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
    template<typename PreferencesT = RefreshPreferences>
    void SetPreferences(PreferencesT&& value) { m_preferencesHasBeenSet = true; m_preferences = std::forward<PreferencesT>(value); }
    template<typename PreferencesT = RefreshPreferences>
    InstanceRefresh& WithPreferences(PreferencesT&& value) { SetPreferences(std::forward<PreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the desired configuration for the instance refresh.</p>
     */
    inline const DesiredConfiguration& GetDesiredConfiguration() const { return m_desiredConfiguration; }
    inline bool DesiredConfigurationHasBeenSet() const { return m_desiredConfigurationHasBeenSet; }
    template<typename DesiredConfigurationT = DesiredConfiguration>
    void SetDesiredConfiguration(DesiredConfigurationT&& value) { m_desiredConfigurationHasBeenSet = true; m_desiredConfiguration = std::forward<DesiredConfigurationT>(value); }
    template<typename DesiredConfigurationT = DesiredConfiguration>
    InstanceRefresh& WithDesiredConfiguration(DesiredConfigurationT&& value) { SetDesiredConfiguration(std::forward<DesiredConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback details.</p>
     */
    inline const RollbackDetails& GetRollbackDetails() const { return m_rollbackDetails; }
    inline bool RollbackDetailsHasBeenSet() const { return m_rollbackDetailsHasBeenSet; }
    template<typename RollbackDetailsT = RollbackDetails>
    void SetRollbackDetails(RollbackDetailsT&& value) { m_rollbackDetailsHasBeenSet = true; m_rollbackDetails = std::forward<RollbackDetailsT>(value); }
    template<typename RollbackDetailsT = RollbackDetails>
    InstanceRefresh& WithRollbackDetails(RollbackDetailsT&& value) { SetRollbackDetails(std::forward<RollbackDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceRefreshId;
    bool m_instanceRefreshIdHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    InstanceRefreshStatus m_status{InstanceRefreshStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_percentageComplete{0};
    bool m_percentageCompleteHasBeenSet = false;

    int m_instancesToUpdate{0};
    bool m_instancesToUpdateHasBeenSet = false;

    InstanceRefreshProgressDetails m_progressDetails;
    bool m_progressDetailsHasBeenSet = false;

    RefreshPreferences m_preferences;
    bool m_preferencesHasBeenSet = false;

    DesiredConfiguration m_desiredConfiguration;
    bool m_desiredConfigurationHasBeenSet = false;

    RollbackDetails m_rollbackDetails;
    bool m_rollbackDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
