/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/autoscaling/model/ScalingActivityStatusCode.h>
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
   * <p>Describes scaling activity, which is a long-running process that represents a
   * change to your Auto Scaling group, such as changing its size or replacing an
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/Activity">AWS
   * API Reference</a></p>
   */
  class Activity
  {
  public:
    AWS_AUTOSCALING_API Activity();
    AWS_AUTOSCALING_API Activity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API Activity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the activity.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }
    inline Activity& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}
    inline Activity& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}
    inline Activity& WithActivityId(const char* value) { SetActivityId(value); return *this;}
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
    inline Activity& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline Activity& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline Activity& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Activity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Activity& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Activity& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the activity began.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }
    inline Activity& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline Activity& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline Activity& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the activity.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Activity& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Activity& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the activity.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Activity& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Activity& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the activity.</p>
     */
    inline const ScalingActivityStatusCode& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const ScalingActivityStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(ScalingActivityStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline Activity& WithStatusCode(const ScalingActivityStatusCode& value) { SetStatusCode(value); return *this;}
    inline Activity& WithStatusCode(ScalingActivityStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline Activity& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline Activity& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline Activity& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value between 0 and 100 that indicates the progress of the activity.</p>
     */
    inline int GetProgress() const{ return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(int value) { m_progressHasBeenSet = true; m_progress = value; }
    inline Activity& WithProgress(int value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the activity.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }
    inline Activity& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}
    inline Activity& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}
    inline Activity& WithDetails(const char* value) { SetDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Auto Scaling group, which is either <code>InService</code>
     * or <code>Deleted</code>.</p>
     */
    inline const Aws::String& GetAutoScalingGroupState() const{ return m_autoScalingGroupState; }
    inline bool AutoScalingGroupStateHasBeenSet() const { return m_autoScalingGroupStateHasBeenSet; }
    inline void SetAutoScalingGroupState(const Aws::String& value) { m_autoScalingGroupStateHasBeenSet = true; m_autoScalingGroupState = value; }
    inline void SetAutoScalingGroupState(Aws::String&& value) { m_autoScalingGroupStateHasBeenSet = true; m_autoScalingGroupState = std::move(value); }
    inline void SetAutoScalingGroupState(const char* value) { m_autoScalingGroupStateHasBeenSet = true; m_autoScalingGroupState.assign(value); }
    inline Activity& WithAutoScalingGroupState(const Aws::String& value) { SetAutoScalingGroupState(value); return *this;}
    inline Activity& WithAutoScalingGroupState(Aws::String&& value) { SetAutoScalingGroupState(std::move(value)); return *this;}
    inline Activity& WithAutoScalingGroupState(const char* value) { SetAutoScalingGroupState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupARN() const{ return m_autoScalingGroupARN; }
    inline bool AutoScalingGroupARNHasBeenSet() const { return m_autoScalingGroupARNHasBeenSet; }
    inline void SetAutoScalingGroupARN(const Aws::String& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = value; }
    inline void SetAutoScalingGroupARN(Aws::String&& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = std::move(value); }
    inline void SetAutoScalingGroupARN(const char* value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN.assign(value); }
    inline Activity& WithAutoScalingGroupARN(const Aws::String& value) { SetAutoScalingGroupARN(value); return *this;}
    inline Activity& WithAutoScalingGroupARN(Aws::String&& value) { SetAutoScalingGroupARN(std::move(value)); return *this;}
    inline Activity& WithAutoScalingGroupARN(const char* value) { SetAutoScalingGroupARN(value); return *this;}
    ///@}
  private:

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    ScalingActivityStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    int m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_details;
    bool m_detailsHasBeenSet = false;

    Aws::String m_autoScalingGroupState;
    bool m_autoScalingGroupStateHasBeenSet = false;

    Aws::String m_autoScalingGroupARN;
    bool m_autoScalingGroupARNHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
