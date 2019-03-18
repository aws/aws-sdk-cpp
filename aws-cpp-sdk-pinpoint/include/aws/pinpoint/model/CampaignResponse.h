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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignState.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TreatmentResource.h>
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
   * Campaign definition<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CampaignResponse
  {
  public:
    CampaignResponse();
    CampaignResponse(Aws::Utils::Json::JsonView jsonValue);
    CampaignResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline const Aws::Vector<TreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline void SetAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline void SetAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline CampaignResponse& WithAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline CampaignResponse& WithAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline CampaignResponse& AddAdditionalTreatments(const TreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }

    /**
     * Treatments that are defined in addition to the default treatment.
     */
    inline CampaignResponse& AddAdditionalTreatments(TreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }


    /**
     * The ID of the application to which the campaign applies.
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * The ID of the application to which the campaign applies.
     */
    inline CampaignResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * The ID of the application to which the campaign applies.
     */
    inline CampaignResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * The ID of the application to which the campaign applies.
     */
    inline CampaignResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * The arn for the campaign.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The arn for the campaign.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The arn for the campaign.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The arn for the campaign.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The arn for the campaign.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The arn for the campaign.
     */
    inline CampaignResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The arn for the campaign.
     */
    inline CampaignResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The arn for the campaign.
     */
    inline CampaignResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline CampaignResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline CampaignResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * The date the campaign was created in ISO 8601 format.
     */
    inline CampaignResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline const CampaignState& GetDefaultState() const{ return m_defaultState; }

    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline bool DefaultStateHasBeenSet() const { return m_defaultStateHasBeenSet; }

    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline void SetDefaultState(const CampaignState& value) { m_defaultStateHasBeenSet = true; m_defaultState = value; }

    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline void SetDefaultState(CampaignState&& value) { m_defaultStateHasBeenSet = true; m_defaultState = std::move(value); }

    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline CampaignResponse& WithDefaultState(const CampaignState& value) { SetDefaultState(value); return *this;}

    /**
     * The status of the campaign's default treatment. Only present for A/B test
     * campaigns.
     */
    inline CampaignResponse& WithDefaultState(CampaignState&& value) { SetDefaultState(std::move(value)); return *this;}


    /**
     * A description of the campaign.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the campaign.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline CampaignResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the campaign.
     */
    inline CampaignResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the campaign.
     */
    inline CampaignResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline int GetHoldoutPercent() const{ return m_holdoutPercent; }

    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline bool HoldoutPercentHasBeenSet() const { return m_holdoutPercentHasBeenSet; }

    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline void SetHoldoutPercent(int value) { m_holdoutPercentHasBeenSet = true; m_holdoutPercent = value; }

    /**
     * The allocated percentage of end users who will not receive messages from this
     * campaign.
     */
    inline CampaignResponse& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}


    /**
     * Campaign hook information.
     */
    inline const CampaignHook& GetHook() const{ return m_hook; }

    /**
     * Campaign hook information.
     */
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }

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
    inline CampaignResponse& WithHook(const CampaignHook& value) { SetHook(value); return *this;}

    /**
     * Campaign hook information.
     */
    inline CampaignResponse& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}


    /**
     * The unique campaign ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique campaign ID.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique campaign ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique campaign ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique campaign ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique campaign ID.
     */
    inline CampaignResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique campaign ID.
     */
    inline CampaignResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique campaign ID.
     */
    inline CampaignResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline bool GetIsPaused() const{ return m_isPaused; }

    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }

    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }

    /**
     * Indicates whether the campaign is paused. A paused campaign does not send
     * messages unless you resume it by setting IsPaused to false.
     */
    inline CampaignResponse& WithIsPaused(bool value) { SetIsPaused(value); return *this;}


    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline CampaignResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline CampaignResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * The date the campaign was last updated in ISO 8601 format.	
     */
    inline CampaignResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * The campaign limits settings.
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * The campaign limits settings.
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

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
    inline CampaignResponse& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * The campaign limits settings.
     */
    inline CampaignResponse& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * The message configuration settings.
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * The message configuration settings.
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

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
    inline CampaignResponse& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * The message configuration settings.
     */
    inline CampaignResponse& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * The custom name of the campaign.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The custom name of the campaign.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

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
    inline CampaignResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The custom name of the campaign.
     */
    inline CampaignResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The custom name of the campaign.
     */
    inline CampaignResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The campaign schedule.
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * The campaign schedule.
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

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
    inline CampaignResponse& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * The campaign schedule.
     */
    inline CampaignResponse& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

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
    inline CampaignResponse& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline CampaignResponse& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * The ID of the segment to which the campaign sends messages.
     */
    inline CampaignResponse& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }

    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }

    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }

    /**
     * The version of the segment to which the campaign sends messages.
     */
    inline CampaignResponse& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}


    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline const CampaignState& GetState() const{ return m_state; }

    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline CampaignResponse& WithState(const CampaignState& value) { SetState(value); return *this;}

    /**
     * The campaign status.

An A/B test campaign will have a status of COMPLETED only
     * when all treatments have a status of COMPLETED.
     */
    inline CampaignResponse& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}


    /**
     * The Tags for the campaign.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The Tags for the campaign.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The Tags for the campaign.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The Tags for the campaign.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the campaign.
     */
    inline CampaignResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * A custom description for the treatment.
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * A custom description for the treatment.
     */
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }

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
    inline CampaignResponse& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline CampaignResponse& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * A custom description for the treatment.
     */
    inline CampaignResponse& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }

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
    inline CampaignResponse& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline CampaignResponse& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * The custom name of a variation of the campaign used for A/B testing.
     */
    inline CampaignResponse& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}


    /**
     * The campaign version number.
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * The campaign version number.
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * The campaign version number.
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * The campaign version number.
     */
    inline CampaignResponse& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::Vector<TreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet;

    CampaignState m_defaultState;
    bool m_defaultStateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_holdoutPercent;
    bool m_holdoutPercentHasBeenSet;

    CampaignHook m_hook;
    bool m_hookHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_isPaused;
    bool m_isPausedHasBeenSet;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

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

    CampaignState m_state;
    bool m_stateHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet;

    int m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
