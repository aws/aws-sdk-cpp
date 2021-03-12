/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/AvailSuppression.h>
#include <aws/mediatailor/model/Bumper.h>
#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/DashConfiguration.h>
#include <aws/mediatailor/model/HlsConfiguration.h>
#include <aws/mediatailor/model/LivePreRollConfiguration.h>
#include <aws/mediatailor/model/ManifestProcessingRules.h>
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
   * <p>Creates a playback configuration. For information about MediaTailor
   * configurations, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
   * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
   * <a
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
    inline PlaybackConfiguration& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline PlaybackConfiguration& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline PlaybackConfiguration& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}


    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline const AvailSuppression& GetAvailSuppression() const{ return m_availSuppression; }

    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline bool AvailSuppressionHasBeenSet() const { return m_availSuppressionHasBeenSet; }

    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline void SetAvailSuppression(const AvailSuppression& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = value; }

    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline void SetAvailSuppression(AvailSuppression&& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = std::move(value); }

    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline PlaybackConfiguration& WithAvailSuppression(const AvailSuppression& value) { SetAvailSuppression(value); return *this;}

    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline PlaybackConfiguration& WithAvailSuppression(AvailSuppression&& value) { SetAvailSuppression(std::move(value)); return *this;}


    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline const Bumper& GetBumper() const{ return m_bumper; }

    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline bool BumperHasBeenSet() const { return m_bumperHasBeenSet; }

    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline void SetBumper(const Bumper& value) { m_bumperHasBeenSet = true; m_bumper = value; }

    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline void SetBumper(Bumper&& value) { m_bumperHasBeenSet = true; m_bumper = std::move(value); }

    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline PlaybackConfiguration& WithBumper(const Bumper& value) { SetBumper(value); return *this;}

    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline PlaybackConfiguration& WithBumper(Bumper&& value) { SetBumper(std::move(value)); return *this;}


    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const{ return m_cdnConfiguration; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline bool CdnConfigurationHasBeenSet() const { return m_cdnConfigurationHasBeenSet; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline void SetCdnConfiguration(const CdnConfiguration& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = value; }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline void SetCdnConfiguration(CdnConfiguration&& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = std::move(value); }

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline PlaybackConfiguration& WithCdnConfiguration(const CdnConfiguration& value) { SetCdnConfiguration(value); return *this;}

    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline PlaybackConfiguration& WithCdnConfiguration(CdnConfiguration&& value) { SetCdnConfiguration(std::move(value)); return *this;}


    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetConfigurationAliases() const{ return m_configurationAliases; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline bool ConfigurationAliasesHasBeenSet() const { return m_configurationAliasesHasBeenSet; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline void SetConfigurationAliases(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = value; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline void SetConfigurationAliases(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = std::move(value); }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& WithConfigurationAliases(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetConfigurationAliases(value); return *this;}

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& WithConfigurationAliases(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetConfigurationAliases(std::move(value)); return *this;}

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, value); return *this; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::move(key), value); return *this; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline PlaybackConfiguration& AddConfigurationAliases(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, value); return *this; }


    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline const DashConfiguration& GetDashConfiguration() const{ return m_dashConfiguration; }

    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline bool DashConfigurationHasBeenSet() const { return m_dashConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline void SetDashConfiguration(const DashConfiguration& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = value; }

    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline void SetDashConfiguration(DashConfiguration&& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = std::move(value); }

    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline PlaybackConfiguration& WithDashConfiguration(const DashConfiguration& value) { SetDashConfiguration(value); return *this;}

    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline PlaybackConfiguration& WithDashConfiguration(DashConfiguration&& value) { SetDashConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for HLS content.</p>
     */
    inline const HlsConfiguration& GetHlsConfiguration() const{ return m_hlsConfiguration; }

    /**
     * <p>The configuration for HLS content.</p>
     */
    inline bool HlsConfigurationHasBeenSet() const { return m_hlsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for HLS content.</p>
     */
    inline void SetHlsConfiguration(const HlsConfiguration& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = value; }

    /**
     * <p>The configuration for HLS content.</p>
     */
    inline void SetHlsConfiguration(HlsConfiguration&& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = std::move(value); }

    /**
     * <p>The configuration for HLS content.</p>
     */
    inline PlaybackConfiguration& WithHlsConfiguration(const HlsConfiguration& value) { SetHlsConfiguration(value); return *this;}

    /**
     * <p>The configuration for HLS content.</p>
     */
    inline PlaybackConfiguration& WithHlsConfiguration(HlsConfiguration&& value) { SetHlsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline const LivePreRollConfiguration& GetLivePreRollConfiguration() const{ return m_livePreRollConfiguration; }

    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline bool LivePreRollConfigurationHasBeenSet() const { return m_livePreRollConfigurationHasBeenSet; }

    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline void SetLivePreRollConfiguration(const LivePreRollConfiguration& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = value; }

    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline void SetLivePreRollConfiguration(LivePreRollConfiguration&& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = std::move(value); }

    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline PlaybackConfiguration& WithLivePreRollConfiguration(const LivePreRollConfiguration& value) { SetLivePreRollConfiguration(value); return *this;}

    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline PlaybackConfiguration& WithLivePreRollConfiguration(LivePreRollConfiguration&& value) { SetLivePreRollConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline const ManifestProcessingRules& GetManifestProcessingRules() const{ return m_manifestProcessingRules; }

    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline bool ManifestProcessingRulesHasBeenSet() const { return m_manifestProcessingRulesHasBeenSet; }

    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline void SetManifestProcessingRules(const ManifestProcessingRules& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = value; }

    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline void SetManifestProcessingRules(ManifestProcessingRules&& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = std::move(value); }

    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline PlaybackConfiguration& WithManifestProcessingRules(const ManifestProcessingRules& value) { SetManifestProcessingRules(value); return *this;}

    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline PlaybackConfiguration& WithManifestProcessingRules(ManifestProcessingRules&& value) { SetManifestProcessingRules(std::move(value)); return *this;}


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
    inline PlaybackConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Defines the maximum duration of underfilled ad time (in seconds) allowed in
     * an ad break. If the duration of underfilled ad time exceeds the personalization
     * threshold, then the personalization of the ad break is abandoned and the
     * underlying content is shown. This feature applies to <i>ad replacement</i> in
     * live and VOD streams, rather than ad insertion, because it relies on an
     * underlying content stream. For more information about ad break behavior,
     * including ad replacement and insertion, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Behavior in AWS Elemental MediaTailor</a>.</p>
     */
    inline int GetPersonalizationThresholdSeconds() const{ return m_personalizationThresholdSeconds; }

    /**
     * <p>Defines the maximum duration of underfilled ad time (in seconds) allowed in
     * an ad break. If the duration of underfilled ad time exceeds the personalization
     * threshold, then the personalization of the ad break is abandoned and the
     * underlying content is shown. This feature applies to <i>ad replacement</i> in
     * live and VOD streams, rather than ad insertion, because it relies on an
     * underlying content stream. For more information about ad break behavior,
     * including ad replacement and insertion, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Behavior in AWS Elemental MediaTailor</a>.</p>
     */
    inline bool PersonalizationThresholdSecondsHasBeenSet() const { return m_personalizationThresholdSecondsHasBeenSet; }

    /**
     * <p>Defines the maximum duration of underfilled ad time (in seconds) allowed in
     * an ad break. If the duration of underfilled ad time exceeds the personalization
     * threshold, then the personalization of the ad break is abandoned and the
     * underlying content is shown. This feature applies to <i>ad replacement</i> in
     * live and VOD streams, rather than ad insertion, because it relies on an
     * underlying content stream. For more information about ad break behavior,
     * including ad replacement and insertion, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Behavior in AWS Elemental MediaTailor</a>.</p>
     */
    inline void SetPersonalizationThresholdSeconds(int value) { m_personalizationThresholdSecondsHasBeenSet = true; m_personalizationThresholdSeconds = value; }

    /**
     * <p>Defines the maximum duration of underfilled ad time (in seconds) allowed in
     * an ad break. If the duration of underfilled ad time exceeds the personalization
     * threshold, then the personalization of the ad break is abandoned and the
     * underlying content is shown. This feature applies to <i>ad replacement</i> in
     * live and VOD streams, rather than ad insertion, because it relies on an
     * underlying content stream. For more information about ad break behavior,
     * including ad replacement and insertion, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Behavior in AWS Elemental MediaTailor</a>.</p>
     */
    inline PlaybackConfiguration& WithPersonalizationThresholdSeconds(int value) { SetPersonalizationThresholdSeconds(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationArn() const{ return m_playbackConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline bool PlaybackConfigurationArnHasBeenSet() const { return m_playbackConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationArn(const Aws::String& value) { m_playbackConfigurationArnHasBeenSet = true; m_playbackConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationArn(Aws::String&& value) { m_playbackConfigurationArnHasBeenSet = true; m_playbackConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline void SetPlaybackConfigurationArn(const char* value) { m_playbackConfigurationArnHasBeenSet = true; m_playbackConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithPlaybackConfigurationArn(const Aws::String& value) { SetPlaybackConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithPlaybackConfigurationArn(Aws::String&& value) { SetPlaybackConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithPlaybackConfigurationArn(const char* value) { SetPlaybackConfigurationArn(value); return *this;}


    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline const Aws::String& GetPlaybackEndpointPrefix() const{ return m_playbackEndpointPrefix; }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline bool PlaybackEndpointPrefixHasBeenSet() const { return m_playbackEndpointPrefixHasBeenSet; }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline void SetPlaybackEndpointPrefix(const Aws::String& value) { m_playbackEndpointPrefixHasBeenSet = true; m_playbackEndpointPrefix = value; }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline void SetPlaybackEndpointPrefix(Aws::String&& value) { m_playbackEndpointPrefixHasBeenSet = true; m_playbackEndpointPrefix = std::move(value); }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline void SetPlaybackEndpointPrefix(const char* value) { m_playbackEndpointPrefixHasBeenSet = true; m_playbackEndpointPrefix.assign(value); }

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline PlaybackConfiguration& WithPlaybackEndpointPrefix(const Aws::String& value) { SetPlaybackEndpointPrefix(value); return *this;}

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline PlaybackConfiguration& WithPlaybackEndpointPrefix(Aws::String&& value) { SetPlaybackEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline PlaybackConfiguration& WithPlaybackEndpointPrefix(const char* value) { SetPlaybackEndpointPrefix(value); return *this;}


    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline const Aws::String& GetSessionInitializationEndpointPrefix() const{ return m_sessionInitializationEndpointPrefix; }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline bool SessionInitializationEndpointPrefixHasBeenSet() const { return m_sessionInitializationEndpointPrefixHasBeenSet; }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline void SetSessionInitializationEndpointPrefix(const Aws::String& value) { m_sessionInitializationEndpointPrefixHasBeenSet = true; m_sessionInitializationEndpointPrefix = value; }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline void SetSessionInitializationEndpointPrefix(Aws::String&& value) { m_sessionInitializationEndpointPrefixHasBeenSet = true; m_sessionInitializationEndpointPrefix = std::move(value); }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline void SetSessionInitializationEndpointPrefix(const char* value) { m_sessionInitializationEndpointPrefixHasBeenSet = true; m_sessionInitializationEndpointPrefix.assign(value); }

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline PlaybackConfiguration& WithSessionInitializationEndpointPrefix(const Aws::String& value) { SetSessionInitializationEndpointPrefix(value); return *this;}

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline PlaybackConfiguration& WithSessionInitializationEndpointPrefix(Aws::String&& value) { SetSessionInitializationEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline PlaybackConfiguration& WithSessionInitializationEndpointPrefix(const char* value) { SetSessionInitializationEndpointPrefix(value); return *this;}


    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline const Aws::String& GetSlateAdUrl() const{ return m_slateAdUrl; }

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline bool SlateAdUrlHasBeenSet() const { return m_slateAdUrlHasBeenSet; }

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline void SetSlateAdUrl(const Aws::String& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = value; }

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline void SetSlateAdUrl(Aws::String&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::move(value); }

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline void SetSlateAdUrl(const char* value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl.assign(value); }

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(const Aws::String& value) { SetSlateAdUrl(value); return *this;}

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(Aws::String&& value) { SetSlateAdUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline PlaybackConfiguration& WithSlateAdUrl(const char* value) { SetSlateAdUrl(value); return *this;}


    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the playback configuration.</p>
     */
    inline PlaybackConfiguration& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline PlaybackConfiguration& WithTranscodeProfileName(const Aws::String& value) { SetTranscodeProfileName(value); return *this;}

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline PlaybackConfiguration& WithTranscodeProfileName(Aws::String&& value) { SetTranscodeProfileName(std::move(value)); return *this;}

    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline PlaybackConfiguration& WithTranscodeProfileName(const char* value) { SetTranscodeProfileName(value); return *this;}


    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const{ return m_videoContentSourceUrl; }

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline bool VideoContentSourceUrlHasBeenSet() const { return m_videoContentSourceUrlHasBeenSet; }

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const Aws::String& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = value; }

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(Aws::String&& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = std::move(value); }

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline void SetVideoContentSourceUrl(const char* value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl.assign(value); }

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PlaybackConfiguration& WithVideoContentSourceUrl(const Aws::String& value) { SetVideoContentSourceUrl(value); return *this;}

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PlaybackConfiguration& WithVideoContentSourceUrl(Aws::String&& value) { SetVideoContentSourceUrl(std::move(value)); return *this;}

    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline PlaybackConfiguration& WithVideoContentSourceUrl(const char* value) { SetVideoContentSourceUrl(value); return *this;}

  private:

    Aws::String m_adDecisionServerUrl;
    bool m_adDecisionServerUrlHasBeenSet;

    AvailSuppression m_availSuppression;
    bool m_availSuppressionHasBeenSet;

    Bumper m_bumper;
    bool m_bumperHasBeenSet;

    CdnConfiguration m_cdnConfiguration;
    bool m_cdnConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_configurationAliases;
    bool m_configurationAliasesHasBeenSet;

    DashConfiguration m_dashConfiguration;
    bool m_dashConfigurationHasBeenSet;

    HlsConfiguration m_hlsConfiguration;
    bool m_hlsConfigurationHasBeenSet;

    LivePreRollConfiguration m_livePreRollConfiguration;
    bool m_livePreRollConfigurationHasBeenSet;

    ManifestProcessingRules m_manifestProcessingRules;
    bool m_manifestProcessingRulesHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_personalizationThresholdSeconds;
    bool m_personalizationThresholdSecondsHasBeenSet;

    Aws::String m_playbackConfigurationArn;
    bool m_playbackConfigurationArnHasBeenSet;

    Aws::String m_playbackEndpointPrefix;
    bool m_playbackEndpointPrefixHasBeenSet;

    Aws::String m_sessionInitializationEndpointPrefix;
    bool m_sessionInitializationEndpointPrefixHasBeenSet;

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
