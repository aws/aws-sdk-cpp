﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/CustomDeliveryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/CampaignHook.h>
#include <aws/pinpoint/model/CampaignLimits.h>
#include <aws/pinpoint/model/MessageConfiguration.h>
#include <aws/pinpoint/model/Schedule.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/TemplateConfiguration.h>
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
   * <p>Specifies the configuration and other settings for a campaign.</p><p><h3>See
   * Also:</h3>   <a
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
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline const Aws::Vector<WriteTreatmentResource>& GetAdditionalTreatments() const{ return m_additionalTreatments; }

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline bool AdditionalTreatmentsHasBeenSet() const { return m_additionalTreatmentsHasBeenSet; }

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline void SetAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = value; }

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline void SetAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments = std::move(value); }

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& WithAdditionalTreatments(const Aws::Vector<WriteTreatmentResource>& value) { SetAdditionalTreatments(value); return *this;}

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& WithAdditionalTreatments(Aws::Vector<WriteTreatmentResource>&& value) { SetAdditionalTreatments(std::move(value)); return *this;}

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& AddAdditionalTreatments(const WriteTreatmentResource& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(value); return *this; }

    /**
     * <p>An array of requests that defines additional treatments for the campaign, in
     * addition to the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& AddAdditionalTreatments(WriteTreatmentResource&& value) { m_additionalTreatmentsHasBeenSet = true; m_additionalTreatments.push_back(std::move(value)); return *this; }


    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline const CustomDeliveryConfiguration& GetCustomDeliveryConfiguration() const{ return m_customDeliveryConfiguration; }

    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline bool CustomDeliveryConfigurationHasBeenSet() const { return m_customDeliveryConfigurationHasBeenSet; }

    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline void SetCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = value; }

    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline void SetCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { m_customDeliveryConfigurationHasBeenSet = true; m_customDeliveryConfiguration = std::move(value); }

    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline WriteCampaignRequest& WithCustomDeliveryConfiguration(const CustomDeliveryConfiguration& value) { SetCustomDeliveryConfiguration(value); return *this;}

    /**
     * <p>The delivery configuration settings for sending the campaign through a custom
     * channel. This object is required if the MessageConfiguration object for the
     * campaign specifies a CustomMessage object.</p>
     */
    inline WriteCampaignRequest& WithCustomDeliveryConfiguration(CustomDeliveryConfiguration&& value) { SetCustomDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>A custom description of the campaign.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline WriteCampaignRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline WriteCampaignRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the campaign.</p>
     */
    inline WriteCampaignRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline WriteCampaignRequest& WithHoldoutPercent(int value) { SetHoldoutPercent(value); return *this;}


    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline const CampaignHook& GetHook() const{ return m_hook; }

    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline bool HookHasBeenSet() const { return m_hookHasBeenSet; }

    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline void SetHook(const CampaignHook& value) { m_hookHasBeenSet = true; m_hook = value; }

    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline void SetHook(CampaignHook&& value) { m_hookHasBeenSet = true; m_hook = std::move(value); }

    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline WriteCampaignRequest& WithHook(const CampaignHook& value) { SetHook(value); return *this;}

    /**
     * <p>The settings for the AWS Lambda function to invoke as a code hook for the
     * campaign. You can use this hook to customize the segment that's used by the
     * campaign.</p>
     */
    inline WriteCampaignRequest& WithHook(CampaignHook&& value) { SetHook(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline bool GetIsPaused() const{ return m_isPaused; }

    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline bool IsPausedHasBeenSet() const { return m_isPausedHasBeenSet; }

    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline void SetIsPaused(bool value) { m_isPausedHasBeenSet = true; m_isPaused = value; }

    /**
     * <p>Specifies whether to pause the campaign. A paused campaign doesn't run unless
     * you resume it by changing this value to false.</p>
     */
    inline WriteCampaignRequest& WithIsPaused(bool value) { SetIsPaused(value); return *this;}


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
    inline WriteCampaignRequest& WithLimits(const CampaignLimits& value) { SetLimits(value); return *this;}

    /**
     * <p>The messaging limits for the campaign.</p>
     */
    inline WriteCampaignRequest& WithLimits(CampaignLimits&& value) { SetLimits(std::move(value)); return *this;}


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
    inline WriteCampaignRequest& WithMessageConfiguration(const MessageConfiguration& value) { SetMessageConfiguration(value); return *this;}

    /**
     * <p>The message configuration settings for the campaign.</p>
     */
    inline WriteCampaignRequest& WithMessageConfiguration(MessageConfiguration&& value) { SetMessageConfiguration(std::move(value)); return *this;}


    /**
     * <p>A custom name for the campaign.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline WriteCampaignRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline WriteCampaignRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A custom name for the campaign.</p>
     */
    inline WriteCampaignRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline WriteCampaignRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule settings for the campaign.</p>
     */
    inline WriteCampaignRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline WriteCampaignRequest& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline WriteCampaignRequest& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the segment to associate with the campaign.</p>
     */
    inline WriteCampaignRequest& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}


    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline int GetSegmentVersion() const{ return m_segmentVersion; }

    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline bool SegmentVersionHasBeenSet() const { return m_segmentVersionHasBeenSet; }

    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline void SetSegmentVersion(int value) { m_segmentVersionHasBeenSet = true; m_segmentVersion = value; }

    /**
     * <p>The version of the segment to associate with the campaign.</p>
     */
    inline WriteCampaignRequest& WithSegmentVersion(int value) { SetSegmentVersion(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the campaign. Each tag consists of a required tag key and an associated tag
     * value.</p>
     */
    inline WriteCampaignRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }

    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }

    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }

    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline WriteCampaignRequest& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>The message template to use for the campaign.</p>
     */
    inline WriteCampaignRequest& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}


    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline const Aws::String& GetTreatmentDescription() const{ return m_treatmentDescription; }

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline bool TreatmentDescriptionHasBeenSet() const { return m_treatmentDescriptionHasBeenSet; }

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline void SetTreatmentDescription(const Aws::String& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = value; }

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline void SetTreatmentDescription(Aws::String&& value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription = std::move(value); }

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline void SetTreatmentDescription(const char* value) { m_treatmentDescriptionHasBeenSet = true; m_treatmentDescription.assign(value); }

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& WithTreatmentDescription(const Aws::String& value) { SetTreatmentDescription(value); return *this;}

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& WithTreatmentDescription(Aws::String&& value) { SetTreatmentDescription(std::move(value)); return *this;}

    /**
     * <p>A custom description of the default treatment for the campaign.</p>
     */
    inline WriteCampaignRequest& WithTreatmentDescription(const char* value) { SetTreatmentDescription(value); return *this;}


    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline const Aws::String& GetTreatmentName() const{ return m_treatmentName; }

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline bool TreatmentNameHasBeenSet() const { return m_treatmentNameHasBeenSet; }

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline void SetTreatmentName(const Aws::String& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = value; }

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline void SetTreatmentName(Aws::String&& value) { m_treatmentNameHasBeenSet = true; m_treatmentName = std::move(value); }

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline void SetTreatmentName(const char* value) { m_treatmentNameHasBeenSet = true; m_treatmentName.assign(value); }

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline WriteCampaignRequest& WithTreatmentName(const Aws::String& value) { SetTreatmentName(value); return *this;}

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline WriteCampaignRequest& WithTreatmentName(Aws::String&& value) { SetTreatmentName(std::move(value)); return *this;}

    /**
     * <p>A custom name of the default treatment for the campaign, if the campaign has
     * multiple treatments. A <i>treatment</i> is a variation of a campaign that's used
     * for A/B testing.</p>
     */
    inline WriteCampaignRequest& WithTreatmentName(const char* value) { SetTreatmentName(value); return *this;}


    /**
     * <p>Defines the priority of the campaign, used to decide the order of messages
     * displayed to user if there are multiple messages scheduled to be displayed at
     * the same moment.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>Defines the priority of the campaign, used to decide the order of messages
     * displayed to user if there are multiple messages scheduled to be displayed at
     * the same moment.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>Defines the priority of the campaign, used to decide the order of messages
     * displayed to user if there are multiple messages scheduled to be displayed at
     * the same moment.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>Defines the priority of the campaign, used to decide the order of messages
     * displayed to user if there are multiple messages scheduled to be displayed at
     * the same moment.</p>
     */
    inline WriteCampaignRequest& WithPriority(int value) { SetPriority(value); return *this;}

  private:

    Aws::Vector<WriteTreatmentResource> m_additionalTreatments;
    bool m_additionalTreatmentsHasBeenSet;

    CustomDeliveryConfiguration m_customDeliveryConfiguration;
    bool m_customDeliveryConfigurationHasBeenSet;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    TemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet;

    Aws::String m_treatmentDescription;
    bool m_treatmentDescriptionHasBeenSet;

    Aws::String m_treatmentName;
    bool m_treatmentNameHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
