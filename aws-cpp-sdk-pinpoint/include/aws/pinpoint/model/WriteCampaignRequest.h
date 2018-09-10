﻿/*
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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/pinpoint/model/WriteTreatmentResource.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * Used to create a campaign.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WriteCampaignRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API WriteCampaignRequest
  {
  public:
    WriteCampaignRequest();
    WriteCampaignRequest(Aws::Utils::Json::JsonView jsonValue);
    WriteCampaignRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline const Aws::Vector<WriteTreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline void SetAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline void SetAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline WriteCampaignRequest& WithAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline WriteCampaignRequest& WithAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline WriteCampaignRequest& AddAdditionalTreatments(const WriteTreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline WriteCampaignRequest& AddAdditionalTreatments(WriteTreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }


    /**
     * A description of the campaign.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the campaign.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the campaign.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the campaign.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the campaign.
     */
    inline WriteCampaignRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the campaign.
     */
    inline WriteCampaignRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the campaign.
     */
    inline WriteCampaignRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline int GetHoldoutPercent() const{ return m_holdoutPercent; }

    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline void SetHoldoutPercent(int value) { m_holdoutPercentHasBeenSet = true; m_holdoutPercent = value; }

    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline WriteCampaignRequest& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}


    /**
     * Campaign hook information.
     */
    inline const CampaignHook& GetHook() const{ return m_hook; }

    /**
     * Campaign hook information.
     */
    inline void SetHook(const CampaignHook& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * Campaign hook information.
     */
    inline void SetHook(CampaignHook&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }

    /**
     * Campaign hook information.
     */
    inline WriteCampaignRequest& WithHook(const CampaignHook& value) { SetHook(value); return *this;}

    /**
     * Campaign hook information.
     */
    inline WriteCampaignRequest& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}


    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline bool GetIsPaused() const{ return m_isPaused; }

    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }

    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline WriteCampaignRequest& WithIsPaused(bool value) { SetIsPaused(value); return *this;}


    /**
     * The campaign limits settings.
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * The campaign limits settings.
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * The campaign limits settings.
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * The campaign limits settings.
     */
    inline WriteCampaignRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * The campaign limits settings.
     */
    inline WriteCampaignRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * The message configuration settings.
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * The message configuration settings.
     */
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * The message configuration settings.
     */
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * The message configuration settings.
     */
    inline WriteCampaignRequest& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * The message configuration settings.
     */
    inline WriteCampaignRequest& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * The custom name of the campaign.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The custom name of the campaign.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The custom name of the campaign.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The custom name of the campaign.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The custom name of the campaign.
     */
    inline WriteCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The custom name of the campaign.
     */
    inline WriteCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The custom name of the campaign.
     */
    inline WriteCampaignRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The campaign schedule.
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * The campaign schedule.
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * The campaign schedule.
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * The campaign schedule.
     */
    inline WriteCampaignRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * The campaign schedule.
     */
    inline WriteCampaignRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline WriteCampaignRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline WriteCampaignRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline WriteCampaignRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }

    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }

    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline WriteCampaignRequest& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}


    /**
     * A custom description for the treatment.
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }

    /**
     * A custom description for the treatment.
     */
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }

    /**
     * A custom description for the treatment.
     */
    inline WriteCampaignRequest& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline WriteCampaignRequest& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline WriteCampaignRequest& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteCampaignRequest& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteCampaignRequest& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline WriteCampaignRequest& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}

  private:

    Aws::Vector<WriteTreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_holdoutPercent;
    bool m_holdoutPercentHasBeenSet;

    CampaignHook m_hook;
    bool m_hookHasBeenSet;

    bool m_isPaused;
    bool m_isPausedHasBeenSet;

    CampaignLimits m_limits;
    bool m_limitsHasBeenSet;

    MessageConfiguration m_messageConfiguration;
    bool m_messageConfigurationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet;

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet;

    int m_segmentVersion;
    bool m_segmentVersionHasBeenSet;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
