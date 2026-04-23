/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALING_API Activity
  {
  public:
    Activity();
    Activity(const Aws::Utils::Xml::XmlNode& xmlNode);
    Activity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the activity.</p>
     */
    inline const Aws::String& GetActivityId() const{ return m_activityId; }

    /**
     * <p>The ID of the activity.</p>
     */
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }

    /**
     * <p>The ID of the activity.</p>
     */
    inline void SetActivityId(const Aws::String& value) { m_activityIdHasBeenSet = true; m_activityId = value; }

    /**
     * <p>The ID of the activity.</p>
     */
    inline void SetActivityId(Aws::String&& value) { m_activityIdHasBeenSet = true; m_activityId = std::move(value); }

    /**
     * <p>The ID of the activity.</p>
     */
    inline void SetActivityId(const char* value) { m_activityIdHasBeenSet = true; m_activityId.assign(value); }

    /**
     * <p>The ID of the activity.</p>
     */
    inline Activity& WithActivityId(const Aws::String& value) { SetActivityId(value); return *this;}

    /**
     * <p>The ID of the activity.</p>
     */
    inline Activity& WithActivityId(Aws::String&& value) { SetActivityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the activity.</p>
     */
    inline Activity& WithActivityId(const char* value) { SetActivityId(value); return *this;}


    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline Activity& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline Activity& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline Activity& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline Activity& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline Activity& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly, more verbose description of the activity.</p>
     */
    inline Activity& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The reason the activity began.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>The reason the activity began.</p>
     */
    inline bool CauseHasBeenSet() const { return m_causeHasBeenSet; }

    /**
     * <p>The reason the activity began.</p>
     */
    inline void SetCause(const Aws::String& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The reason the activity began.</p>
     */
    inline void SetCause(Aws::String&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The reason the activity began.</p>
     */
    inline void SetCause(const char* value) { m_causeHasBeenSet = true; m_cause.assign(value); }

    /**
     * <p>The reason the activity began.</p>
     */
    inline Activity& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>The reason the activity began.</p>
     */
    inline Activity& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>The reason the activity began.</p>
     */
    inline Activity& WithCause(const char* value) { SetCause(value); return *this;}


    /**
     * <p>The start time of the activity.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the activity.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the activity.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the activity.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the activity.</p>
     */
    inline Activity& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the activity.</p>
     */
    inline Activity& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the activity.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the activity.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the activity.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the activity.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the activity.</p>
     */
    inline Activity& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the activity.</p>
     */
    inline Activity& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the activity.</p>
     */
    inline const ScalingActivityStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The current status of the activity.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The current status of the activity.</p>
     */
    inline void SetStatusCode(const ScalingActivityStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The current status of the activity.</p>
     */
    inline void SetStatusCode(ScalingActivityStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The current status of the activity.</p>
     */
    inline Activity& WithStatusCode(const ScalingActivityStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The current status of the activity.</p>
     */
    inline Activity& WithStatusCode(ScalingActivityStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline Activity& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline Activity& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A friendly, more verbose description of the activity status.</p>
     */
    inline Activity& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>A value between 0 and 100 that indicates the progress of the activity.</p>
     */
    inline int GetProgress() const{ return m_progress; }

    /**
     * <p>A value between 0 and 100 that indicates the progress of the activity.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>A value between 0 and 100 that indicates the progress of the activity.</p>
     */
    inline void SetProgress(int value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>A value between 0 and 100 that indicates the progress of the activity.</p>
     */
    inline Activity& WithProgress(int value) { SetProgress(value); return *this;}


    /**
     * <p>The details about the activity.</p>
     */
    inline const Aws::String& GetDetails() const{ return m_details; }

    /**
     * <p>The details about the activity.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>The details about the activity.</p>
     */
    inline void SetDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The details about the activity.</p>
     */
    inline void SetDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>The details about the activity.</p>
     */
    inline void SetDetails(const char* value) { m_detailsHasBeenSet = true; m_details.assign(value); }

    /**
     * <p>The details about the activity.</p>
     */
    inline Activity& WithDetails(const Aws::String& value) { SetDetails(value); return *this;}

    /**
     * <p>The details about the activity.</p>
     */
    inline Activity& WithDetails(Aws::String&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>The details about the activity.</p>
     */
    inline Activity& WithDetails(const char* value) { SetDetails(value); return *this;}

  private:

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet;

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_cause;
    bool m_causeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    ScalingActivityStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    int m_progress;
    bool m_progressHasBeenSet;

    Aws::String m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
