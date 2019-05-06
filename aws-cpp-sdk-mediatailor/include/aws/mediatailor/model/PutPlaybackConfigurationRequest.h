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
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/mediatailor/model/DashConfigurationForPut.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class AWS_MEDIATAILOR_API PutPlaybackConfigurationRequest : public MediaTailorRequest
  {
  public:
    PutPlaybackConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPlaybackConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const{ return m_adDecisionServerUrl; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline bool AdDecisionServerUrlHasBeenSet() const { return m_adDecisionServerUrlHasBeenSet; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const Aws::String& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = value; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(Aws::String&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::move(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const char* value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl.assign(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}


    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const{ return m_cdnConfiguration; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline bool CdnConfigurationHasBeenSet() const { return m_cdnConfigurationHasBeenSet; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline void SetCdnConfiguration(const CdnConfiguration& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = value; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline void SetCdnConfiguration(CdnConfiguration&& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = std::move(value); }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline PutPlaybackConfigurationRequest& WithCdnConfiguration(const CdnConfiguration& value) { SetCdnConfiguration(value); return *this;}

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline PutPlaybackConfigurationRequest& WithCdnConfiguration(CdnConfiguration&& value) { SetCdnConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for DASH content. </p>
     */
    inline const DashConfigurationForPut& GetDashConfiguration() const{ return m_dashConfiguration; }

    /**
     * <p>The configuration for DASH content. </p>
     */
    inline bool DashConfigurationHasBeenSet() const { return m_dashConfigurationHasBeenSet; }

    /**
     * <p>The configuration for DASH content. </p>
     */
    inline void SetDashConfiguration(const DashConfigurationForPut& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = value; }

    /**
     * <p>The configuration for DASH content. </p>
     */
    inline void SetDashConfiguration(DashConfigurationForPut&& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = std::move(value); }

    /**
     * <p>The configuration for DASH content. </p>
     */
    inline PutPlaybackConfigurationRequest& WithDashConfiguration(const DashConfigurationForPut& value) { SetDashConfiguration(value); return *this;}

    /**
     * <p>The configuration for DASH content. </p>
     */
    inline PutPlaybackConfigurationRequest& WithDashConfiguration(DashConfigurationForPut&& value) { SetDashConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline PutPlaybackConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline PutPlaybackConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline PutPlaybackConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline const Aws::String& GetSlateAdUrl() const{ return m_slateAdUrl; }

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline bool SlateAdUrlHasBeenSet() const { return m_slateAdUrlHasBeenSet; }

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(const Aws::String& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = value; }

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(Aws::String&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::move(value); }

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(const char* value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl.assign(value); }

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(const Aws::String& value) { SetSlateAdUrl(value); return *this;}

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(Aws::String&& value) { SetSlateAdUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(const char* value) { SetSlateAdUrl(value); return *this;}


    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration. </p>
     */
    inline PutPlaybackConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline const Aws::String& GetTranscodeProfileName() const{ return m_transcodeProfileName; }

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline bool TranscodeProfileNameHasBeenSet() const { return m_transcodeProfileNameHasBeenSet; }

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline void SetTranscodeProfileName(const Aws::String& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = value; }

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline void SetTranscodeProfileName(Aws::String&& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = std::move(value); }

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline void SetTranscodeProfileName(const char* value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName.assign(value); }

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(const Aws::String& value) { SetTranscodeProfileName(value); return *this;}

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(Aws::String&& value) { SetTranscodeProfileName(std::move(value)); return *this;}

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(const char* value) { SetTranscodeProfileName(value); return *this;}


    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const{ return m_videoContentSourceUrl; }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline bool VideoContentSourceUrlHasBeenSet() const { return m_videoContentSourceUrlHasBeenSet; }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const Aws::String& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = value; }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(Aws::String&& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = std::move(value); }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const char* value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl.assign(value); }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(const Aws::String& value) { SetVideoContentSourceUrl(value); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(Aws::String&& value) { SetVideoContentSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(const char* value) { SetVideoContentSourceUrl(value); return *this;}

  private:

    Aws::String m_adDecisionServerUrl;
    bool m_adDecisionServerUrlHasBeenSet;

    CdnConfiguration m_cdnConfiguration;
    bool m_cdnConfigurationHasBeenSet;

    DashConfigurationForPut m_dashConfiguration;
    bool m_dashConfigurationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_slateAdUrl;
    bool m_slateAdUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_transcodeProfileName;
    bool m_transcodeProfileNameHasBeenSet;

    Aws::String m_videoContentSourceUrl;
    bool m_videoContentSourceUrlHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
