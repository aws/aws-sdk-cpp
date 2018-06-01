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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/mediatailor/model/HlsConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class AWS_MEDIATAILOR_API PutPlaybackConfigurationResult
  {
  public:
    PutPlaybackConfigurationResult();
    PutPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutPlaybackConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const{ return m_adDecisionServerUrl; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const Aws::String& value) { m_adDecisionServerUrl = value; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(Aws::String&& value) { m_adDecisionServerUrl = std::move(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const char* value) { m_adDecisionServerUrl.assign(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}


    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const{ return m_cdnConfiguration; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline void SetCdnConfiguration(const CdnConfiguration& value) { m_cdnConfiguration = value; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline void SetCdnConfiguration(CdnConfiguration&& value) { m_cdnConfiguration = std::move(value); }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline PutPlaybackConfigurationResult& WithCdnConfiguration(const CdnConfiguration& value) { SetCdnConfiguration(value); return *this;}

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline PutPlaybackConfigurationResult& WithCdnConfiguration(CdnConfiguration&& value) { SetCdnConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for HLS content. </p>
     */
    inline const HlsConfiguration& GetHlsConfiguration() const{ return m_hlsConfiguration; }

    /**
     * <p>The configuration for HLS content. </p>
     */
    inline void SetHlsConfiguration(const HlsConfiguration& value) { m_hlsConfiguration = value; }

    /**
     * <p>The configuration for HLS content. </p>
     */
    inline void SetHlsConfiguration(HlsConfiguration&& value) { m_hlsConfiguration = std::move(value); }

    /**
     * <p>The configuration for HLS content. </p>
     */
    inline PutPlaybackConfigurationResult& WithHlsConfiguration(const HlsConfiguration& value) { SetHlsConfiguration(value); return *this;}

    /**
     * <p>The configuration for HLS content. </p>
     */
    inline PutPlaybackConfigurationResult& WithHlsConfiguration(HlsConfiguration&& value) { SetHlsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier for the configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PutPlaybackConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PutPlaybackConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PutPlaybackConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline const Aws::String& GetPlaybackEndpointPrefix() const{ return m_playbackEndpointPrefix; }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline void SetPlaybackEndpointPrefix(const Aws::String& value) { m_playbackEndpointPrefix = value; }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline void SetPlaybackEndpointPrefix(Aws::String&& value) { m_playbackEndpointPrefix = std::move(value); }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline void SetPlaybackEndpointPrefix(const char* value) { m_playbackEndpointPrefix.assign(value); }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithPlaybackEndpointPrefix(const Aws::String& value) { SetPlaybackEndpointPrefix(value); return *this;}

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithPlaybackEndpointPrefix(Aws::String&& value) { SetPlaybackEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithPlaybackEndpointPrefix(const char* value) { SetPlaybackEndpointPrefix(value); return *this;}


    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline const Aws::String& GetSessionInitializationEndpointPrefix() const{ return m_sessionInitializationEndpointPrefix; }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline void SetSessionInitializationEndpointPrefix(const Aws::String& value) { m_sessionInitializationEndpointPrefix = value; }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline void SetSessionInitializationEndpointPrefix(Aws::String&& value) { m_sessionInitializationEndpointPrefix = std::move(value); }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline void SetSessionInitializationEndpointPrefix(const char* value) { m_sessionInitializationEndpointPrefix.assign(value); }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithSessionInitializationEndpointPrefix(const Aws::String& value) { SetSessionInitializationEndpointPrefix(value); return *this;}

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithSessionInitializationEndpointPrefix(Aws::String&& value) { SetSessionInitializationEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting. </p>
     */
    inline PutPlaybackConfigurationResult& WithSessionInitializationEndpointPrefix(const char* value) { SetSessionInitializationEndpointPrefix(value); return *this;}


    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline const Aws::String& GetSlateAdUrl() const{ return m_slateAdUrl; }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(const Aws::String& value) { m_slateAdUrl = value; }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(Aws::String&& value) { m_slateAdUrl = std::move(value); }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(const char* value) { m_slateAdUrl.assign(value); }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationResult& WithSlateAdUrl(const Aws::String& value) { SetSlateAdUrl(value); return *this;}

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationResult& WithSlateAdUrl(Aws::String&& value) { SetSlateAdUrl(std::move(value)); return *this;}

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PutPlaybackConfigurationResult& WithSlateAdUrl(const char* value) { SetSlateAdUrl(value); return *this;}


    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const{ return m_videoContentSourceUrl; }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const Aws::String& value) { m_videoContentSourceUrl = value; }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(Aws::String&& value) { m_videoContentSourceUrl = std::move(value); }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const char* value) { m_videoContentSourceUrl.assign(value); }

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithVideoContentSourceUrl(const Aws::String& value) { SetVideoContentSourceUrl(value); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithVideoContentSourceUrl(Aws::String&& value) { SetVideoContentSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PutPlaybackConfigurationResult& WithVideoContentSourceUrl(const char* value) { SetVideoContentSourceUrl(value); return *this;}

  private:

    Aws::String m_adDecisionServerUrl;

    CdnConfiguration m_cdnConfiguration;

    HlsConfiguration m_hlsConfiguration;

    Aws::String m_name;

    Aws::String m_playbackEndpointPrefix;

    Aws::String m_sessionInitializationEndpointPrefix;

    Aws::String m_slateAdUrl;

    Aws::String m_videoContentSourceUrl;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
