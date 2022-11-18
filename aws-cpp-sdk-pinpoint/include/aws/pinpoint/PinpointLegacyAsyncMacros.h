/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateAppAsync(...)  SubmitAsync(&PinpointClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateApp, REQUEST)

#define CreateCampaignAsync(...)  SubmitAsync(&PinpointClient::CreateCampaign, __VA_ARGS__)
#define CreateCampaignCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateCampaign, REQUEST)

#define CreateEmailTemplateAsync(...)  SubmitAsync(&PinpointClient::CreateEmailTemplate, __VA_ARGS__)
#define CreateEmailTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateEmailTemplate, REQUEST)

#define CreateExportJobAsync(...)  SubmitAsync(&PinpointClient::CreateExportJob, __VA_ARGS__)
#define CreateExportJobCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateExportJob, REQUEST)

#define CreateImportJobAsync(...)  SubmitAsync(&PinpointClient::CreateImportJob, __VA_ARGS__)
#define CreateImportJobCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateImportJob, REQUEST)

#define CreateInAppTemplateAsync(...)  SubmitAsync(&PinpointClient::CreateInAppTemplate, __VA_ARGS__)
#define CreateInAppTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateInAppTemplate, REQUEST)

#define CreateJourneyAsync(...)  SubmitAsync(&PinpointClient::CreateJourney, __VA_ARGS__)
#define CreateJourneyCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateJourney, REQUEST)

#define CreatePushTemplateAsync(...)  SubmitAsync(&PinpointClient::CreatePushTemplate, __VA_ARGS__)
#define CreatePushTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::CreatePushTemplate, REQUEST)

#define CreateRecommenderConfigurationAsync(...)  SubmitAsync(&PinpointClient::CreateRecommenderConfiguration, __VA_ARGS__)
#define CreateRecommenderConfigurationCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateRecommenderConfiguration, REQUEST)

#define CreateSegmentAsync(...)  SubmitAsync(&PinpointClient::CreateSegment, __VA_ARGS__)
#define CreateSegmentCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateSegment, REQUEST)

#define CreateSmsTemplateAsync(...)  SubmitAsync(&PinpointClient::CreateSmsTemplate, __VA_ARGS__)
#define CreateSmsTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateSmsTemplate, REQUEST)

#define CreateVoiceTemplateAsync(...)  SubmitAsync(&PinpointClient::CreateVoiceTemplate, __VA_ARGS__)
#define CreateVoiceTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::CreateVoiceTemplate, REQUEST)

#define DeleteAdmChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteAdmChannel, __VA_ARGS__)
#define DeleteAdmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteAdmChannel, REQUEST)

#define DeleteApnsChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteApnsChannel, __VA_ARGS__)
#define DeleteApnsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteApnsChannel, REQUEST)

#define DeleteApnsSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteApnsSandboxChannel, __VA_ARGS__)
#define DeleteApnsSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteApnsSandboxChannel, REQUEST)

#define DeleteApnsVoipChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteApnsVoipChannel, __VA_ARGS__)
#define DeleteApnsVoipChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteApnsVoipChannel, REQUEST)

#define DeleteApnsVoipSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteApnsVoipSandboxChannel, __VA_ARGS__)
#define DeleteApnsVoipSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteApnsVoipSandboxChannel, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&PinpointClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteApp, REQUEST)

#define DeleteBaiduChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteBaiduChannel, __VA_ARGS__)
#define DeleteBaiduChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteBaiduChannel, REQUEST)

#define DeleteCampaignAsync(...)  SubmitAsync(&PinpointClient::DeleteCampaign, __VA_ARGS__)
#define DeleteCampaignCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteCampaign, REQUEST)

#define DeleteEmailChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteEmailChannel, __VA_ARGS__)
#define DeleteEmailChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteEmailChannel, REQUEST)

#define DeleteEmailTemplateAsync(...)  SubmitAsync(&PinpointClient::DeleteEmailTemplate, __VA_ARGS__)
#define DeleteEmailTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteEmailTemplate, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&PinpointClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteEndpoint, REQUEST)

#define DeleteEventStreamAsync(...)  SubmitAsync(&PinpointClient::DeleteEventStream, __VA_ARGS__)
#define DeleteEventStreamCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteEventStream, REQUEST)

#define DeleteGcmChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteGcmChannel, __VA_ARGS__)
#define DeleteGcmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteGcmChannel, REQUEST)

#define DeleteInAppTemplateAsync(...)  SubmitAsync(&PinpointClient::DeleteInAppTemplate, __VA_ARGS__)
#define DeleteInAppTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteInAppTemplate, REQUEST)

#define DeleteJourneyAsync(...)  SubmitAsync(&PinpointClient::DeleteJourney, __VA_ARGS__)
#define DeleteJourneyCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteJourney, REQUEST)

#define DeletePushTemplateAsync(...)  SubmitAsync(&PinpointClient::DeletePushTemplate, __VA_ARGS__)
#define DeletePushTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::DeletePushTemplate, REQUEST)

#define DeleteRecommenderConfigurationAsync(...)  SubmitAsync(&PinpointClient::DeleteRecommenderConfiguration, __VA_ARGS__)
#define DeleteRecommenderConfigurationCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteRecommenderConfiguration, REQUEST)

#define DeleteSegmentAsync(...)  SubmitAsync(&PinpointClient::DeleteSegment, __VA_ARGS__)
#define DeleteSegmentCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteSegment, REQUEST)

#define DeleteSmsChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteSmsChannel, __VA_ARGS__)
#define DeleteSmsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteSmsChannel, REQUEST)

#define DeleteSmsTemplateAsync(...)  SubmitAsync(&PinpointClient::DeleteSmsTemplate, __VA_ARGS__)
#define DeleteSmsTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteSmsTemplate, REQUEST)

#define DeleteUserEndpointsAsync(...)  SubmitAsync(&PinpointClient::DeleteUserEndpoints, __VA_ARGS__)
#define DeleteUserEndpointsCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteUserEndpoints, REQUEST)

#define DeleteVoiceChannelAsync(...)  SubmitAsync(&PinpointClient::DeleteVoiceChannel, __VA_ARGS__)
#define DeleteVoiceChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteVoiceChannel, REQUEST)

#define DeleteVoiceTemplateAsync(...)  SubmitAsync(&PinpointClient::DeleteVoiceTemplate, __VA_ARGS__)
#define DeleteVoiceTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::DeleteVoiceTemplate, REQUEST)

#define GetAdmChannelAsync(...)  SubmitAsync(&PinpointClient::GetAdmChannel, __VA_ARGS__)
#define GetAdmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetAdmChannel, REQUEST)

#define GetApnsChannelAsync(...)  SubmitAsync(&PinpointClient::GetApnsChannel, __VA_ARGS__)
#define GetApnsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApnsChannel, REQUEST)

#define GetApnsSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::GetApnsSandboxChannel, __VA_ARGS__)
#define GetApnsSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApnsSandboxChannel, REQUEST)

#define GetApnsVoipChannelAsync(...)  SubmitAsync(&PinpointClient::GetApnsVoipChannel, __VA_ARGS__)
#define GetApnsVoipChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApnsVoipChannel, REQUEST)

#define GetApnsVoipSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::GetApnsVoipSandboxChannel, __VA_ARGS__)
#define GetApnsVoipSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApnsVoipSandboxChannel, REQUEST)

#define GetAppAsync(...)  SubmitAsync(&PinpointClient::GetApp, __VA_ARGS__)
#define GetAppCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApp, REQUEST)

#define GetApplicationDateRangeKpiAsync(...)  SubmitAsync(&PinpointClient::GetApplicationDateRangeKpi, __VA_ARGS__)
#define GetApplicationDateRangeKpiCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApplicationDateRangeKpi, REQUEST)

#define GetApplicationSettingsAsync(...)  SubmitAsync(&PinpointClient::GetApplicationSettings, __VA_ARGS__)
#define GetApplicationSettingsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApplicationSettings, REQUEST)

#define GetAppsAsync(...)  SubmitAsync(&PinpointClient::GetApps, __VA_ARGS__)
#define GetAppsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetApps, REQUEST)

#define GetBaiduChannelAsync(...)  SubmitAsync(&PinpointClient::GetBaiduChannel, __VA_ARGS__)
#define GetBaiduChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetBaiduChannel, REQUEST)

#define GetCampaignAsync(...)  SubmitAsync(&PinpointClient::GetCampaign, __VA_ARGS__)
#define GetCampaignCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaign, REQUEST)

#define GetCampaignActivitiesAsync(...)  SubmitAsync(&PinpointClient::GetCampaignActivities, __VA_ARGS__)
#define GetCampaignActivitiesCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaignActivities, REQUEST)

#define GetCampaignDateRangeKpiAsync(...)  SubmitAsync(&PinpointClient::GetCampaignDateRangeKpi, __VA_ARGS__)
#define GetCampaignDateRangeKpiCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaignDateRangeKpi, REQUEST)

#define GetCampaignVersionAsync(...)  SubmitAsync(&PinpointClient::GetCampaignVersion, __VA_ARGS__)
#define GetCampaignVersionCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaignVersion, REQUEST)

#define GetCampaignVersionsAsync(...)  SubmitAsync(&PinpointClient::GetCampaignVersions, __VA_ARGS__)
#define GetCampaignVersionsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaignVersions, REQUEST)

#define GetCampaignsAsync(...)  SubmitAsync(&PinpointClient::GetCampaigns, __VA_ARGS__)
#define GetCampaignsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetCampaigns, REQUEST)

#define GetChannelsAsync(...)  SubmitAsync(&PinpointClient::GetChannels, __VA_ARGS__)
#define GetChannelsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetChannels, REQUEST)

#define GetEmailChannelAsync(...)  SubmitAsync(&PinpointClient::GetEmailChannel, __VA_ARGS__)
#define GetEmailChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetEmailChannel, REQUEST)

#define GetEmailTemplateAsync(...)  SubmitAsync(&PinpointClient::GetEmailTemplate, __VA_ARGS__)
#define GetEmailTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::GetEmailTemplate, REQUEST)

#define GetEndpointAsync(...)  SubmitAsync(&PinpointClient::GetEndpoint, __VA_ARGS__)
#define GetEndpointCallable(REQUEST)  SubmitCallable(&PinpointClient::GetEndpoint, REQUEST)

#define GetEventStreamAsync(...)  SubmitAsync(&PinpointClient::GetEventStream, __VA_ARGS__)
#define GetEventStreamCallable(REQUEST)  SubmitCallable(&PinpointClient::GetEventStream, REQUEST)

#define GetExportJobAsync(...)  SubmitAsync(&PinpointClient::GetExportJob, __VA_ARGS__)
#define GetExportJobCallable(REQUEST)  SubmitCallable(&PinpointClient::GetExportJob, REQUEST)

#define GetExportJobsAsync(...)  SubmitAsync(&PinpointClient::GetExportJobs, __VA_ARGS__)
#define GetExportJobsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetExportJobs, REQUEST)

#define GetGcmChannelAsync(...)  SubmitAsync(&PinpointClient::GetGcmChannel, __VA_ARGS__)
#define GetGcmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetGcmChannel, REQUEST)

#define GetImportJobAsync(...)  SubmitAsync(&PinpointClient::GetImportJob, __VA_ARGS__)
#define GetImportJobCallable(REQUEST)  SubmitCallable(&PinpointClient::GetImportJob, REQUEST)

#define GetImportJobsAsync(...)  SubmitAsync(&PinpointClient::GetImportJobs, __VA_ARGS__)
#define GetImportJobsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetImportJobs, REQUEST)

#define GetInAppMessagesAsync(...)  SubmitAsync(&PinpointClient::GetInAppMessages, __VA_ARGS__)
#define GetInAppMessagesCallable(REQUEST)  SubmitCallable(&PinpointClient::GetInAppMessages, REQUEST)

#define GetInAppTemplateAsync(...)  SubmitAsync(&PinpointClient::GetInAppTemplate, __VA_ARGS__)
#define GetInAppTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::GetInAppTemplate, REQUEST)

#define GetJourneyAsync(...)  SubmitAsync(&PinpointClient::GetJourney, __VA_ARGS__)
#define GetJourneyCallable(REQUEST)  SubmitCallable(&PinpointClient::GetJourney, REQUEST)

#define GetJourneyDateRangeKpiAsync(...)  SubmitAsync(&PinpointClient::GetJourneyDateRangeKpi, __VA_ARGS__)
#define GetJourneyDateRangeKpiCallable(REQUEST)  SubmitCallable(&PinpointClient::GetJourneyDateRangeKpi, REQUEST)

#define GetJourneyExecutionActivityMetricsAsync(...)  SubmitAsync(&PinpointClient::GetJourneyExecutionActivityMetrics, __VA_ARGS__)
#define GetJourneyExecutionActivityMetricsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetJourneyExecutionActivityMetrics, REQUEST)

#define GetJourneyExecutionMetricsAsync(...)  SubmitAsync(&PinpointClient::GetJourneyExecutionMetrics, __VA_ARGS__)
#define GetJourneyExecutionMetricsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetJourneyExecutionMetrics, REQUEST)

#define GetPushTemplateAsync(...)  SubmitAsync(&PinpointClient::GetPushTemplate, __VA_ARGS__)
#define GetPushTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::GetPushTemplate, REQUEST)

#define GetRecommenderConfigurationAsync(...)  SubmitAsync(&PinpointClient::GetRecommenderConfiguration, __VA_ARGS__)
#define GetRecommenderConfigurationCallable(REQUEST)  SubmitCallable(&PinpointClient::GetRecommenderConfiguration, REQUEST)

#define GetRecommenderConfigurationsAsync(...)  SubmitAsync(&PinpointClient::GetRecommenderConfigurations, __VA_ARGS__)
#define GetRecommenderConfigurationsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetRecommenderConfigurations, REQUEST)

#define GetSegmentAsync(...)  SubmitAsync(&PinpointClient::GetSegment, __VA_ARGS__)
#define GetSegmentCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegment, REQUEST)

#define GetSegmentExportJobsAsync(...)  SubmitAsync(&PinpointClient::GetSegmentExportJobs, __VA_ARGS__)
#define GetSegmentExportJobsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegmentExportJobs, REQUEST)

#define GetSegmentImportJobsAsync(...)  SubmitAsync(&PinpointClient::GetSegmentImportJobs, __VA_ARGS__)
#define GetSegmentImportJobsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegmentImportJobs, REQUEST)

#define GetSegmentVersionAsync(...)  SubmitAsync(&PinpointClient::GetSegmentVersion, __VA_ARGS__)
#define GetSegmentVersionCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegmentVersion, REQUEST)

#define GetSegmentVersionsAsync(...)  SubmitAsync(&PinpointClient::GetSegmentVersions, __VA_ARGS__)
#define GetSegmentVersionsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegmentVersions, REQUEST)

#define GetSegmentsAsync(...)  SubmitAsync(&PinpointClient::GetSegments, __VA_ARGS__)
#define GetSegmentsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSegments, REQUEST)

#define GetSmsChannelAsync(...)  SubmitAsync(&PinpointClient::GetSmsChannel, __VA_ARGS__)
#define GetSmsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSmsChannel, REQUEST)

#define GetSmsTemplateAsync(...)  SubmitAsync(&PinpointClient::GetSmsTemplate, __VA_ARGS__)
#define GetSmsTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::GetSmsTemplate, REQUEST)

#define GetUserEndpointsAsync(...)  SubmitAsync(&PinpointClient::GetUserEndpoints, __VA_ARGS__)
#define GetUserEndpointsCallable(REQUEST)  SubmitCallable(&PinpointClient::GetUserEndpoints, REQUEST)

#define GetVoiceChannelAsync(...)  SubmitAsync(&PinpointClient::GetVoiceChannel, __VA_ARGS__)
#define GetVoiceChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::GetVoiceChannel, REQUEST)

#define GetVoiceTemplateAsync(...)  SubmitAsync(&PinpointClient::GetVoiceTemplate, __VA_ARGS__)
#define GetVoiceTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::GetVoiceTemplate, REQUEST)

#define ListJourneysAsync(...)  SubmitAsync(&PinpointClient::ListJourneys, __VA_ARGS__)
#define ListJourneysCallable(REQUEST)  SubmitCallable(&PinpointClient::ListJourneys, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PinpointClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PinpointClient::ListTagsForResource, REQUEST)

#define ListTemplateVersionsAsync(...)  SubmitAsync(&PinpointClient::ListTemplateVersions, __VA_ARGS__)
#define ListTemplateVersionsCallable(REQUEST)  SubmitCallable(&PinpointClient::ListTemplateVersions, REQUEST)

#define ListTemplatesAsync(...)  SubmitAsync(&PinpointClient::ListTemplates, __VA_ARGS__)
#define ListTemplatesCallable(REQUEST)  SubmitCallable(&PinpointClient::ListTemplates, REQUEST)

#define PhoneNumberValidateAsync(...)  SubmitAsync(&PinpointClient::PhoneNumberValidate, __VA_ARGS__)
#define PhoneNumberValidateCallable(REQUEST)  SubmitCallable(&PinpointClient::PhoneNumberValidate, REQUEST)

#define PutEventStreamAsync(...)  SubmitAsync(&PinpointClient::PutEventStream, __VA_ARGS__)
#define PutEventStreamCallable(REQUEST)  SubmitCallable(&PinpointClient::PutEventStream, REQUEST)

#define PutEventsAsync(...)  SubmitAsync(&PinpointClient::PutEvents, __VA_ARGS__)
#define PutEventsCallable(REQUEST)  SubmitCallable(&PinpointClient::PutEvents, REQUEST)

#define RemoveAttributesAsync(...)  SubmitAsync(&PinpointClient::RemoveAttributes, __VA_ARGS__)
#define RemoveAttributesCallable(REQUEST)  SubmitCallable(&PinpointClient::RemoveAttributes, REQUEST)

#define SendMessagesAsync(...)  SubmitAsync(&PinpointClient::SendMessages, __VA_ARGS__)
#define SendMessagesCallable(REQUEST)  SubmitCallable(&PinpointClient::SendMessages, REQUEST)

#define SendOTPMessageAsync(...)  SubmitAsync(&PinpointClient::SendOTPMessage, __VA_ARGS__)
#define SendOTPMessageCallable(REQUEST)  SubmitCallable(&PinpointClient::SendOTPMessage, REQUEST)

#define SendUsersMessagesAsync(...)  SubmitAsync(&PinpointClient::SendUsersMessages, __VA_ARGS__)
#define SendUsersMessagesCallable(REQUEST)  SubmitCallable(&PinpointClient::SendUsersMessages, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&PinpointClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PinpointClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PinpointClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PinpointClient::UntagResource, REQUEST)

#define UpdateAdmChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateAdmChannel, __VA_ARGS__)
#define UpdateAdmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateAdmChannel, REQUEST)

#define UpdateApnsChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateApnsChannel, __VA_ARGS__)
#define UpdateApnsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateApnsChannel, REQUEST)

#define UpdateApnsSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateApnsSandboxChannel, __VA_ARGS__)
#define UpdateApnsSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateApnsSandboxChannel, REQUEST)

#define UpdateApnsVoipChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateApnsVoipChannel, __VA_ARGS__)
#define UpdateApnsVoipChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateApnsVoipChannel, REQUEST)

#define UpdateApnsVoipSandboxChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateApnsVoipSandboxChannel, __VA_ARGS__)
#define UpdateApnsVoipSandboxChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateApnsVoipSandboxChannel, REQUEST)

#define UpdateApplicationSettingsAsync(...)  SubmitAsync(&PinpointClient::UpdateApplicationSettings, __VA_ARGS__)
#define UpdateApplicationSettingsCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateApplicationSettings, REQUEST)

#define UpdateBaiduChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateBaiduChannel, __VA_ARGS__)
#define UpdateBaiduChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateBaiduChannel, REQUEST)

#define UpdateCampaignAsync(...)  SubmitAsync(&PinpointClient::UpdateCampaign, __VA_ARGS__)
#define UpdateCampaignCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateCampaign, REQUEST)

#define UpdateEmailChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateEmailChannel, __VA_ARGS__)
#define UpdateEmailChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateEmailChannel, REQUEST)

#define UpdateEmailTemplateAsync(...)  SubmitAsync(&PinpointClient::UpdateEmailTemplate, __VA_ARGS__)
#define UpdateEmailTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateEmailTemplate, REQUEST)

#define UpdateEndpointAsync(...)  SubmitAsync(&PinpointClient::UpdateEndpoint, __VA_ARGS__)
#define UpdateEndpointCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateEndpoint, REQUEST)

#define UpdateEndpointsBatchAsync(...)  SubmitAsync(&PinpointClient::UpdateEndpointsBatch, __VA_ARGS__)
#define UpdateEndpointsBatchCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateEndpointsBatch, REQUEST)

#define UpdateGcmChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateGcmChannel, __VA_ARGS__)
#define UpdateGcmChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateGcmChannel, REQUEST)

#define UpdateInAppTemplateAsync(...)  SubmitAsync(&PinpointClient::UpdateInAppTemplate, __VA_ARGS__)
#define UpdateInAppTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateInAppTemplate, REQUEST)

#define UpdateJourneyAsync(...)  SubmitAsync(&PinpointClient::UpdateJourney, __VA_ARGS__)
#define UpdateJourneyCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateJourney, REQUEST)

#define UpdateJourneyStateAsync(...)  SubmitAsync(&PinpointClient::UpdateJourneyState, __VA_ARGS__)
#define UpdateJourneyStateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateJourneyState, REQUEST)

#define UpdatePushTemplateAsync(...)  SubmitAsync(&PinpointClient::UpdatePushTemplate, __VA_ARGS__)
#define UpdatePushTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdatePushTemplate, REQUEST)

#define UpdateRecommenderConfigurationAsync(...)  SubmitAsync(&PinpointClient::UpdateRecommenderConfiguration, __VA_ARGS__)
#define UpdateRecommenderConfigurationCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateRecommenderConfiguration, REQUEST)

#define UpdateSegmentAsync(...)  SubmitAsync(&PinpointClient::UpdateSegment, __VA_ARGS__)
#define UpdateSegmentCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateSegment, REQUEST)

#define UpdateSmsChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateSmsChannel, __VA_ARGS__)
#define UpdateSmsChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateSmsChannel, REQUEST)

#define UpdateSmsTemplateAsync(...)  SubmitAsync(&PinpointClient::UpdateSmsTemplate, __VA_ARGS__)
#define UpdateSmsTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateSmsTemplate, REQUEST)

#define UpdateTemplateActiveVersionAsync(...)  SubmitAsync(&PinpointClient::UpdateTemplateActiveVersion, __VA_ARGS__)
#define UpdateTemplateActiveVersionCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateTemplateActiveVersion, REQUEST)

#define UpdateVoiceChannelAsync(...)  SubmitAsync(&PinpointClient::UpdateVoiceChannel, __VA_ARGS__)
#define UpdateVoiceChannelCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateVoiceChannel, REQUEST)

#define UpdateVoiceTemplateAsync(...)  SubmitAsync(&PinpointClient::UpdateVoiceTemplate, __VA_ARGS__)
#define UpdateVoiceTemplateCallable(REQUEST)  SubmitCallable(&PinpointClient::UpdateVoiceTemplate, REQUEST)

#define VerifyOTPMessageAsync(...)  SubmitAsync(&PinpointClient::VerifyOTPMessage, __VA_ARGS__)
#define VerifyOTPMessageCallable(REQUEST)  SubmitCallable(&PinpointClient::VerifyOTPMessage, REQUEST)

