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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The AWSMediaTailor configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PlaybackConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API PlaybackConfiguration
  {
  public:
    PlaybackConfiguration();
    PlaybackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    PlaybackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline void SetAdDecisionServerUrl(const Aws::String& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = value; }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(Aws::String&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::move(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline void SetAdDecisionServerUrl(const char* value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl.assign(value); }

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PlaybackConfiguration& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PlaybackConfiguration& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25000 characters.</p>
     */
    inline PlaybackConfiguration& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}


    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const{ return m_cdnConfiguration; }

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
    inline PlaybackConfiguration& WithCdnConfiguration(const CdnConfiguration& value) { SetCdnConfiguration(value); return *this;}

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management. </p>
     */
    inline PlaybackConfiguration& WithCdnConfiguration(CdnConfiguration&& value) { SetCdnConfiguration(std::move(value)); return *this;}


    /**
     * <p>The identifier for the configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PlaybackConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PlaybackConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the configuration.</p>
     */
    inline PlaybackConfiguration& WithName(const char* value) { SetName(value); return *this;}


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
    inline void SetSlateAdUrl(const Aws::String& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = value; }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(Aws::String&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::move(value); }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline void SetSlateAdUrl(const char* value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl.assign(value); }

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(const Aws::String& value) { SetSlateAdUrl(value); return *this;}

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(Aws::String&& value) { SetSlateAdUrl(std::move(value)); return *this;}

    /**
     * <p>URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because AWS Elemental
     * MediaTailor provides it in the slots designated for dynamic ad content. The
     * slate must be a high-quality asset that contains both audio and video. </p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(const char* value) { SetSlateAdUrl(value); return *this;}


    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const{ return m_videoContentSourceUrl; }

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
    inline PlaybackConfiguration& WithVideoContentSourceUrl(const Aws::String& value) { SetVideoContentSourceUrl(value); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PlaybackConfiguration& WithVideoContentSourceUrl(Aws::String&& value) { SetVideoContentSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL prefix for the master playlist for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PlaybackConfiguration& WithVideoContentSourceUrl(const char* value) { SetVideoContentSourceUrl(value); return *this;}

  private:

    Aws::String m_adDecisionServerUrl;
    bool m_adDecisionServerUrlHasBeenSet;

    CdnConfiguration m_cdnConfiguration;
    bool m_cdnConfigurationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_slateAdUrl;
    bool m_slateAdUrlHasBeenSet;

    Aws::String m_videoContentSourceUrl;
    bool m_videoContentSourceUrlHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
