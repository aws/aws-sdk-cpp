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
   * <p>Provides information about the status, configuration, and other settings for
   * a campaign.</p><p><h3>See Also:</h3>   <a
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
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline const Aws::Vector<TreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline void SetAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline void SetAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline CampaignResponse& WithAdditionalTreatments(const Aws::Vector<TreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline CampaignResponse& WithAdditionalTreatments(Aws::Vector<TreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline CampaignResponse& AddAdditionalTreatments(const TreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }

    /**
     * <p>An array of responses, one for each treatment that you defined for the
     * campaign, in addition to the default treatment.</p>
     */
    inline CampaignResponse& AddAdditionalTreatments(TreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline CampaignResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline CampaignResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the campaign applies to.</p>
     */
    inline CampaignResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CampaignResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CampaignResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the campaign.</p>
     */
    inline CampaignResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline CampaignResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline CampaignResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date, ISO 8601 format, when the campaign was created.</p>
     */
    inline CampaignResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline const CampaignState& GetDefaultState() const{ return m_defaultState; }

    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline bool DefaultStateHasBeenSet() const { return m_defaultStateHasBeenSet; }

    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline void SetDefaultState(const CampaignState& value) { m_defaultStateHasBeenSet = true; m_defaultState = value; }

    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline void SetDefaultState(CampaignState&& value) { m_defaultStateHasBeenSet = true; m_defaultState = std::move(value); }

    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline CampaignResponse& WithDefaultState(const CampaignState& value) { SetDefaultState(value); return *this;}

    /**
     * <p>The current status of the campaign's default treatment. This value exists
     * only for campaigns that have more than one treatment, to support A/B
     * testing.</p>
     */
    inline CampaignResponse& WithDefaultState(CampaignState&& value) { SetDefaultState(std::move(value)); return *this;}


    /**
     * <p>The custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline CampaignResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline CampaignResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of the campaign.</p>
     */
    inline CampaignResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline int GetHoldoutPercent() const{ return m_holdoutPercent; }

    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline bool HoldoutPercentHasBeenSet() const { return m_holdoutPercentHasBeenSet; }

    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline void SetHoldoutPercent(int value) { m_holdoutPercentHasBeenSet = true; m_holdoutPercent = value; }

    /**
     * <p>The allocated percentage of users (segment members) who shouldn't receive
     * messages from the campaign.</p>
     */
    inline CampaignResponse& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}


    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline const CampaignHook& GetHook() const{ return m_hook; }

    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }

    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline void SetHook(const CampaignHook& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline void SetHook(CampaignHook&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }

    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline CampaignResponse& WithHook(const CampaignHook& value) { SetHook(value); return *this;}

    /**
     * <p>The settings for the AWS Lambda function to use as a code hook for the
     * campaign.</p>
     */
    inline CampaignResponse& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline CampaignResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline CampaignResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign.</p>
     */
    inline CampaignResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const{ return m_isPaused; }

    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }

    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }

    /**
     * <p>Specifies whether the campaign is paused. A paused campaign doesn't run
     * unless you resume it by changing this value to false.</p>
     */
    inline CampaignResponse& WithIsPaused(bool value) { SetIsPaused(value); return *this;}


    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::String& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::String&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline void SetLastModifiedDate(const char* value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate.assign(value); }

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline CampaignResponse& WithLastModifiedDate(const Aws::String& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline CampaignResponse& WithLastModifiedDate(Aws::String&& value) { SetLastModifiedDate(std::move(value)); return *this;}

    /**
     * <p>The date, in ISO 8601 format, when the campaign was last modified.</p>
     */
    inline CampaignResponse& WithLastModifiedDate(const char* value) { SetLastModifiedDate(value); return *this;}


    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline const CampaignLimits& GetLimits() const{ return m_limits; }

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline bool LimitsHasBeenSet() const { return m_limitsHasBeenSet; }

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline void SetLimits(const CampaignLimits& value) { m_limitsHasBeenSet = true; m_limits = value; }

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline void SetLimits(CampaignLimits&& value) { m_limitsHasBeenSet = true; m_limits = std::move(value); }

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline CampaignResponse& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline CampaignResponse& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline const MessageConfiguration& GetMessageConfiguration() const{ return m_messageConfiguration; }

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline bool MessageConfigurationHasBeenSet() const { return m_messageConfigurationHasBeenSet; }

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline void SetMessageConfiguration(const MessageConfiguration& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = value; }

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline void SetMessageConfiguration(MessageConfiguration&& value) { m_messageConfigurationHasBeenSet = true; m_messageConfiguration = std::move(value); }

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline CampaignResponse& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline CampaignResponse& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the campaign.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the campaign.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the campaign.</p>
     */
    inline CampaignResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the campaign.</p>
     */
    inline CampaignResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the campaign.</p>
     */
    inline CampaignResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline CampaignResponse& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline CampaignResponse& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline CampaignResponse& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline CampaignResponse& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the segment that's associated with the
     * campaign.</p>
     */
    inline CampaignResponse& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }

    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }

    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }

    /**
     * <p>The version number of the segment that's associated with the campaign.</p>
     */
    inline CampaignResponse& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}


    /**
     * <p>The current status of the campaign.</p>
     */
    inline const CampaignState& GetState() const{ return m_state; }

    /**
     * <p>The current status of the campaign.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current status of the campaign.</p>
     */
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current status of the campaign.</p>
     */
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current status of the campaign.</p>
     */
    inline CampaignResponse& WithState(const CampaignState& value) { SetState(value); return *this;}

    /**
     * <p>The current status of the campaign.</p>
     */
    inline CampaignResponse& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that identifies the tags that are
     * associated with the campaign. Each tag consists of a required tag key and an
     * associated tag value.</p>
     */
    inline CampaignResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * <p>The custom description of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * <p>The custom name of a variation of the campaign that's used for A/B
     * testing.</p>
     */
    inline CampaignResponse& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}


    /**
     * <p>The version number of the campaign.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the campaign.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the campaign.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the campaign.</p>
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
