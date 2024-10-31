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
    AWS_AUTOSCALING_API InstanceRefresh();
    AWS_AUTOSCALING_API InstanceRefresh(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstanceRefresh& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance refresh ID.</p>
     */
    inline const Aws::String& GetInstanceRefreshId() const{ return m_instanceRefreshId; }
    inline bool InstanceRefreshIdHasBeenSet() const { return m_instanceRefreshIdHasBeenSet; }
    inline void SetInstanceRefreshId(const Aws::String& value) { m_instanceRefreshIdHasBeenSet = true; m_instanceRefreshId = value; }
    inline void SetInstanceRefreshId(Aws::String&& value) { m_instanceRefreshIdHasBeenSet = true; m_instanceRefreshId = std::move(value); }
    inline void SetInstanceRefreshId(const char* value) { m_instanceRefreshIdHasBeenSet = true; m_instanceRefreshId.assign(value); }
    inline InstanceRefresh& WithInstanceRefreshId(const Aws::String& value) { SetInstanceRefreshId(value); return *this;}
    inline InstanceRefresh& WithInstanceRefreshId(Aws::String&& value) { SetInstanceRefreshId(std::move(value)); return *this;}
    inline InstanceRefresh& WithInstanceRefreshId(const char* value) { SetInstanceRefreshId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline InstanceRefresh& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline InstanceRefresh& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline InstanceRefresh& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
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
    inline const InstanceRefreshStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceRefreshStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceRefreshStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceRefresh& WithStatus(const InstanceRefreshStatus& value) { SetStatus(value); return *this;}
    inline InstanceRefresh& WithStatus(InstanceRefreshStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation for the specific status assigned to this operation.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline InstanceRefresh& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline InstanceRefresh& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline InstanceRefresh& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the instance refresh began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline InstanceRefresh& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline InstanceRefresh& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the instance refresh ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline InstanceRefresh& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline InstanceRefresh& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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
    inline int GetPercentageComplete() const{ return m_percentageComplete; }
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
    inline int GetInstancesToUpdate() const{ return m_instancesToUpdate; }
    inline bool InstancesToUpdateHasBeenSet() const { return m_instancesToUpdateHasBeenSet; }
    inline void SetInstancesToUpdate(int value) { m_instancesToUpdateHasBeenSet = true; m_instancesToUpdate = value; }
    inline InstanceRefresh& WithInstancesToUpdate(int value) { SetInstancesToUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional progress details for an Auto Scaling group that has a warm
     * pool.</p>
     */
    inline const InstanceRefreshProgressDetails& GetProgressDetails() const{ return m_progressDetails; }
    inline bool ProgressDetailsHasBeenSet() const { return m_progressDetailsHasBeenSet; }
    inline void SetProgressDetails(const InstanceRefreshProgressDetails& value) { m_progressDetailsHasBeenSet = true; m_progressDetails = value; }
    inline void SetProgressDetails(InstanceRefreshProgressDetails&& value) { m_progressDetailsHasBeenSet = true; m_progressDetails = std::move(value); }
    inline InstanceRefresh& WithProgressDetails(const InstanceRefreshProgressDetails& value) { SetProgressDetails(value); return *this;}
    inline InstanceRefresh& WithProgressDetails(InstanceRefreshProgressDetails&& value) { SetProgressDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferences for an instance refresh.</p>
     */
    inline const RefreshPreferences& GetPreferences() const{ return m_preferences; }
    inline bool PreferencesHasBeenSet() const { return m_preferencesHasBeenSet; }
    inline void SetPreferences(const RefreshPreferences& value) { m_preferencesHasBeenSet = true; m_preferences = value; }
    inline void SetPreferences(RefreshPreferences&& value) { m_preferencesHasBeenSet = true; m_preferences = std::move(value); }
    inline InstanceRefresh& WithPreferences(const RefreshPreferences& value) { SetPreferences(value); return *this;}
    inline InstanceRefresh& WithPreferences(RefreshPreferences&& value) { SetPreferences(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the desired configuration for the instance refresh.</p>
     */
    inline const DesiredConfiguration& GetDesiredConfiguration() const{ return m_desiredConfiguration; }
    inline bool DesiredConfigurationHasBeenSet() const { return m_desiredConfigurationHasBeenSet; }
    inline void SetDesiredConfiguration(const DesiredConfiguration& value) { m_desiredConfigurationHasBeenSet = true; m_desiredConfiguration = value; }
    inline void SetDesiredConfiguration(DesiredConfiguration&& value) { m_desiredConfigurationHasBeenSet = true; m_desiredConfiguration = std::move(value); }
    inline InstanceRefresh& WithDesiredConfiguration(const DesiredConfiguration& value) { SetDesiredConfiguration(value); return *this;}
    inline InstanceRefresh& WithDesiredConfiguration(DesiredConfiguration&& value) { SetDesiredConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback details.</p>
     */
    inline const RollbackDetails& GetRollbackDetails() const{ return m_rollbackDetails; }
    inline bool RollbackDetailsHasBeenSet() const { return m_rollbackDetailsHasBeenSet; }
    inline void SetRollbackDetails(const RollbackDetails& value) { m_rollbackDetailsHasBeenSet = true; m_rollbackDetails = value; }
    inline void SetRollbackDetails(RollbackDetails&& value) { m_rollbackDetailsHasBeenSet = true; m_rollbackDetails = std::move(value); }
    inline InstanceRefresh& WithRollbackDetails(const RollbackDetails& value) { SetRollbackDetails(value); return *this;}
    inline InstanceRefresh& WithRollbackDetails(RollbackDetails&& value) { SetRollbackDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceRefreshId;
    bool m_instanceRefreshIdHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    InstanceRefreshStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_percentageComplete;
    bool m_percentageCompleteHasBeenSet = false;

    int m_instancesToUpdate;
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
