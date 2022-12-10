/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/HlsAudioOnlyHeader.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsCaptionLanguageSetting.h>
#include <aws/mediaconvert/model/HlsCaptionSegmentLengthControl.h>
#include <aws/mediaconvert/model/HlsClientCache.h>
#include <aws/mediaconvert/model/HlsCodecSpecification.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/HlsDirectoryStructure.h>
#include <aws/mediaconvert/model/HlsEncryptionSettings.h>
#include <aws/mediaconvert/model/HlsImageBasedTrickPlay.h>
#include <aws/mediaconvert/model/HlsImageBasedTrickPlaySettings.h>
#include <aws/mediaconvert/model/HlsManifestCompression.h>
#include <aws/mediaconvert/model/HlsManifestDurationFormat.h>
#include <aws/mediaconvert/model/HlsOutputSelection.h>
#include <aws/mediaconvert/model/HlsProgramDateTime.h>
#include <aws/mediaconvert/model/HlsSegmentControl.h>
#include <aws/mediaconvert/model/HlsSegmentLengthControl.h>
#include <aws/mediaconvert/model/HlsStreamInfResolution.h>
#include <aws/mediaconvert/model/HlsTargetDurationCompatibilityMode.h>
#include <aws/mediaconvert/model/HlsTimedMetadataId3Frame.h>
#include <aws/mediaconvert/model/HlsAdMarkers.h>
#include <aws/mediaconvert/model/HlsAdditionalManifest.h>
#include <aws/mediaconvert/model/HlsCaptionLanguageMapping.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to your HLS output package. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/outputs-file-ABR.html. When
   * you work directly in your JSON job specification, include this object and any
   * required children when you set Type, under OutputGroupSettings, to
   * HLS_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsGroupSettings">AWS
   * API Reference</a></p>
   */
  class HlsGroupSettings
  {
  public:
    AWS_MEDIACONVERT_API HlsGroupSettings();
    AWS_MEDIACONVERT_API HlsGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API HlsGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline const Aws::Vector<HlsAdMarkers>& GetAdMarkers() const{ return m_adMarkers; }

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline void SetAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline void SetAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline HlsGroupSettings& WithAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { SetAdMarkers(value); return *this;}

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline HlsGroupSettings& WithAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { SetAdMarkers(std::move(value)); return *this;}

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline HlsGroupSettings& AddAdMarkers(const HlsAdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(value); return *this; }

    /**
     * Choose one or more ad marker types to decorate your Apple HLS manifest. This
     * setting does not determine whether SCTE-35 markers appear in the outputs
     * themselves.
     */
    inline HlsGroupSettings& AddAdMarkers(HlsAdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(std::move(value)); return *this; }


    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline const Aws::Vector<HlsAdditionalManifest>& GetAdditionalManifests() const{ return m_additionalManifests; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline bool AdditionalManifestsHasBeenSet() const { return m_additionalManifestsHasBeenSet; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline void SetAdditionalManifests(const Aws::Vector<HlsAdditionalManifest>& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = value; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline void SetAdditionalManifests(Aws::Vector<HlsAdditionalManifest>&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests = std::move(value); }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline HlsGroupSettings& WithAdditionalManifests(const Aws::Vector<HlsAdditionalManifest>& value) { SetAdditionalManifests(value); return *this;}

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline HlsGroupSettings& WithAdditionalManifests(Aws::Vector<HlsAdditionalManifest>&& value) { SetAdditionalManifests(std::move(value)); return *this;}

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline HlsGroupSettings& AddAdditionalManifests(const HlsAdditionalManifest& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(value); return *this; }

    /**
     * By default, the service creates one top-level .m3u8 HLS manifest for each HLS
     * output group in your job. This default manifest references every output in the
     * output group. To create additional top-level manifests that reference a subset
     * of the outputs in the output group, specify a list of them here.
     */
    inline HlsGroupSettings& AddAdditionalManifests(HlsAdditionalManifest&& value) { m_additionalManifestsHasBeenSet = true; m_additionalManifests.push_back(std::move(value)); return *this; }


    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline const HlsAudioOnlyHeader& GetAudioOnlyHeader() const{ return m_audioOnlyHeader; }

    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline bool AudioOnlyHeaderHasBeenSet() const { return m_audioOnlyHeaderHasBeenSet; }

    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline void SetAudioOnlyHeader(const HlsAudioOnlyHeader& value) { m_audioOnlyHeaderHasBeenSet = true; m_audioOnlyHeader = value; }

    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline void SetAudioOnlyHeader(HlsAudioOnlyHeader&& value) { m_audioOnlyHeaderHasBeenSet = true; m_audioOnlyHeader = std::move(value); }

    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline HlsGroupSettings& WithAudioOnlyHeader(const HlsAudioOnlyHeader& value) { SetAudioOnlyHeader(value); return *this;}

    /**
     * Ignore this setting unless you are using FairPlay DRM with Verimatrix and you
     * encounter playback issues. Keep the default value, Include (INCLUDE), to output
     * audio-only headers. Choose Exclude (EXCLUDE) to remove the audio-only headers
     * from your audio segments.
     */
    inline HlsGroupSettings& WithAudioOnlyHeader(HlsAudioOnlyHeader&& value) { SetAudioOnlyHeader(std::move(value)); return *this;}


    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrl() const{ return m_baseUrl; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline bool BaseUrlHasBeenSet() const { return m_baseUrlHasBeenSet; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrl(const Aws::String& value) { m_baseUrlHasBeenSet = true; m_baseUrl = value; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrl(Aws::String&& value) { m_baseUrlHasBeenSet = true; m_baseUrl = std::move(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrl(const char* value) { m_baseUrlHasBeenSet = true; m_baseUrl.assign(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrl(const Aws::String& value) { SetBaseUrl(value); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrl(Aws::String&& value) { SetBaseUrl(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrl(const char* value) { SetBaseUrl(value); return *this;}


    /**
     * Language to be used on Caption outputs
     */
    inline const Aws::Vector<HlsCaptionLanguageMapping>& GetCaptionLanguageMappings() const{ return m_captionLanguageMappings; }

    /**
     * Language to be used on Caption outputs
     */
    inline bool CaptionLanguageMappingsHasBeenSet() const { return m_captionLanguageMappingsHasBeenSet; }

    /**
     * Language to be used on Caption outputs
     */
    inline void SetCaptionLanguageMappings(const Aws::Vector<HlsCaptionLanguageMapping>& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = value; }

    /**
     * Language to be used on Caption outputs
     */
    inline void SetCaptionLanguageMappings(Aws::Vector<HlsCaptionLanguageMapping>&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::move(value); }

    /**
     * Language to be used on Caption outputs
     */
    inline HlsGroupSettings& WithCaptionLanguageMappings(const Aws::Vector<HlsCaptionLanguageMapping>& value) { SetCaptionLanguageMappings(value); return *this;}

    /**
     * Language to be used on Caption outputs
     */
    inline HlsGroupSettings& WithCaptionLanguageMappings(Aws::Vector<HlsCaptionLanguageMapping>&& value) { SetCaptionLanguageMappings(std::move(value)); return *this;}

    /**
     * Language to be used on Caption outputs
     */
    inline HlsGroupSettings& AddCaptionLanguageMappings(const HlsCaptionLanguageMapping& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(value); return *this; }

    /**
     * Language to be used on Caption outputs
     */
    inline HlsGroupSettings& AddCaptionLanguageMappings(HlsCaptionLanguageMapping&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(std::move(value)); return *this; }


    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline const HlsCaptionLanguageSetting& GetCaptionLanguageSetting() const{ return m_captionLanguageSetting; }

    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline bool CaptionLanguageSettingHasBeenSet() const { return m_captionLanguageSettingHasBeenSet; }

    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline void SetCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = value; }

    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline void SetCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = std::move(value); }

    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline HlsGroupSettings& WithCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { SetCaptionLanguageSetting(value); return *this;}

    /**
     * Applies only to 608 Embedded output captions. Insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions. None: Include
     * CLOSED-CAPTIONS=NONE line in the manifest. Omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline HlsGroupSettings& WithCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { SetCaptionLanguageSetting(std::move(value)); return *this;}


    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline const HlsCaptionSegmentLengthControl& GetCaptionSegmentLengthControl() const{ return m_captionSegmentLengthControl; }

    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline bool CaptionSegmentLengthControlHasBeenSet() const { return m_captionSegmentLengthControlHasBeenSet; }

    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline void SetCaptionSegmentLengthControl(const HlsCaptionSegmentLengthControl& value) { m_captionSegmentLengthControlHasBeenSet = true; m_captionSegmentLengthControl = value; }

    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline void SetCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl&& value) { m_captionSegmentLengthControlHasBeenSet = true; m_captionSegmentLengthControl = std::move(value); }

    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline HlsGroupSettings& WithCaptionSegmentLengthControl(const HlsCaptionSegmentLengthControl& value) { SetCaptionSegmentLengthControl(value); return *this;}

    /**
     * Set Caption segment length control (CaptionSegmentLengthControl) to Match video
     * (MATCH_VIDEO) to create caption segments that align with the video segments from
     * the first video output in this output group. For example, if the video segments
     * are 2 seconds long, your WebVTT segments will also be 2 seconds long. Keep the
     * default setting, Large segments (LARGE_SEGMENTS) to create caption segments that
     * are 300 seconds long.
     */
    inline HlsGroupSettings& WithCaptionSegmentLengthControl(HlsCaptionSegmentLengthControl&& value) { SetCaptionSegmentLengthControl(std::move(value)); return *this;}


    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline const HlsClientCache& GetClientCache() const{ return m_clientCache; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline void SetClientCache(const HlsClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline void SetClientCache(HlsClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline HlsGroupSettings& WithClientCache(const HlsClientCache& value) { SetClientCache(value); return *this;}

    /**
     * Disable this setting only when your workflow requires the #EXT-X-ALLOW-CACHE:no
     * tag. Otherwise, keep the default value Enabled (ENABLED) and control caching in
     * your video distribution set up. For example, use the Cache-Control http header.
     */
    inline HlsGroupSettings& WithClientCache(HlsClientCache&& value) { SetClientCache(std::move(value)); return *this;}


    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline const HlsCodecSpecification& GetCodecSpecification() const{ return m_codecSpecification; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline bool CodecSpecificationHasBeenSet() const { return m_codecSpecificationHasBeenSet; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(const HlsCodecSpecification& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = value; }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline void SetCodecSpecification(HlsCodecSpecification&& value) { m_codecSpecificationHasBeenSet = true; m_codecSpecification = std::move(value); }

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline HlsGroupSettings& WithCodecSpecification(const HlsCodecSpecification& value) { SetCodecSpecification(value); return *this;}

    /**
     * Specification to use (RFC-6381 or the default RFC-4281) during m3u8 playlist
     * generation.
     */
    inline HlsGroupSettings& WithCodecSpecification(HlsCodecSpecification&& value) { SetCodecSpecification(std::move(value)); return *this;}


    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline HlsGroupSettings& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline HlsGroupSettings& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * Use Destination (Destination) to specify the S3 output location and the output
     * filename base. Destination accepts format identifiers. If you do not specify the
     * base filename in the URI, the service will use the filename of the input file.
     * If your job has multiple inputs, the service uses the filename of the first
     * input file.
     */
    inline HlsGroupSettings& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline const DestinationSettings& GetDestinationSettings() const{ return m_destinationSettings; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline bool DestinationSettingsHasBeenSet() const { return m_destinationSettingsHasBeenSet; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(const DestinationSettings& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = value; }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline void SetDestinationSettings(DestinationSettings&& value) { m_destinationSettingsHasBeenSet = true; m_destinationSettings = std::move(value); }

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline HlsGroupSettings& WithDestinationSettings(const DestinationSettings& value) { SetDestinationSettings(value); return *this;}

    /**
     * Settings associated with the destination. Will vary based on the type of
     * destination
     */
    inline HlsGroupSettings& WithDestinationSettings(DestinationSettings&& value) { SetDestinationSettings(std::move(value)); return *this;}


    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline const HlsDirectoryStructure& GetDirectoryStructure() const{ return m_directoryStructure; }

    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline bool DirectoryStructureHasBeenSet() const { return m_directoryStructureHasBeenSet; }

    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline void SetDirectoryStructure(const HlsDirectoryStructure& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = value; }

    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline void SetDirectoryStructure(HlsDirectoryStructure&& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = std::move(value); }

    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline HlsGroupSettings& WithDirectoryStructure(const HlsDirectoryStructure& value) { SetDirectoryStructure(value); return *this;}

    /**
     * Indicates whether segments should be placed in subdirectories.
     */
    inline HlsGroupSettings& WithDirectoryStructure(HlsDirectoryStructure&& value) { SetDirectoryStructure(std::move(value)); return *this;}


    /**
     * DRM settings.
     */
    inline const HlsEncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * DRM settings.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(const HlsEncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * DRM settings.
     */
    inline void SetEncryption(HlsEncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * DRM settings.
     */
    inline HlsGroupSettings& WithEncryption(const HlsEncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * DRM settings.
     */
    inline HlsGroupSettings& WithEncryption(HlsEncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline const HlsImageBasedTrickPlay& GetImageBasedTrickPlay() const{ return m_imageBasedTrickPlay; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline bool ImageBasedTrickPlayHasBeenSet() const { return m_imageBasedTrickPlayHasBeenSet; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(const HlsImageBasedTrickPlay& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = value; }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline void SetImageBasedTrickPlay(HlsImageBasedTrickPlay&& value) { m_imageBasedTrickPlayHasBeenSet = true; m_imageBasedTrickPlay = std::move(value); }

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline HlsGroupSettings& WithImageBasedTrickPlay(const HlsImageBasedTrickPlay& value) { SetImageBasedTrickPlay(value); return *this;}

    /**
     * Specify whether MediaConvert generates images for trick play. Keep the default
     * value, None (NONE), to not generate any images. Choose Thumbnail (THUMBNAIL) to
     * generate tiled thumbnails. Choose Thumbnail and full frame
     * (THUMBNAIL_AND_FULLFRAME) to generate tiled thumbnails and full-resolution
     * images of single frames. MediaConvert creates a child manifest for each set of
     * images that you generate and adds corresponding entries to the parent manifest.
     * A common application for these images is Roku trick mode. The thumbnails and
     * full-frame images that MediaConvert creates with this feature are compatible
     * with this Roku specification:
     * https://developer.roku.com/docs/developer-program/media-playback/trick-mode/hls-and-dash.md
     */
    inline HlsGroupSettings& WithImageBasedTrickPlay(HlsImageBasedTrickPlay&& value) { SetImageBasedTrickPlay(std::move(value)); return *this;}


    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline const HlsImageBasedTrickPlaySettings& GetImageBasedTrickPlaySettings() const{ return m_imageBasedTrickPlaySettings; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline bool ImageBasedTrickPlaySettingsHasBeenSet() const { return m_imageBasedTrickPlaySettingsHasBeenSet; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(const HlsImageBasedTrickPlaySettings& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = value; }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline void SetImageBasedTrickPlaySettings(HlsImageBasedTrickPlaySettings&& value) { m_imageBasedTrickPlaySettingsHasBeenSet = true; m_imageBasedTrickPlaySettings = std::move(value); }

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline HlsGroupSettings& WithImageBasedTrickPlaySettings(const HlsImageBasedTrickPlaySettings& value) { SetImageBasedTrickPlaySettings(value); return *this;}

    /**
     * Tile and thumbnail settings applicable when imageBasedTrickPlay is ADVANCED
     */
    inline HlsGroupSettings& WithImageBasedTrickPlaySettings(HlsImageBasedTrickPlaySettings&& value) { SetImageBasedTrickPlaySettings(std::move(value)); return *this;}


    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline const HlsManifestCompression& GetManifestCompression() const{ return m_manifestCompression; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline bool ManifestCompressionHasBeenSet() const { return m_manifestCompressionHasBeenSet; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(const HlsManifestCompression& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline void SetManifestCompression(HlsManifestCompression&& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = std::move(value); }

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline HlsGroupSettings& WithManifestCompression(const HlsManifestCompression& value) { SetManifestCompression(value); return *this;}

    /**
     * When set to GZIP, compresses HLS playlist.
     */
    inline HlsGroupSettings& WithManifestCompression(HlsManifestCompression&& value) { SetManifestCompression(std::move(value)); return *this;}


    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline const HlsManifestDurationFormat& GetManifestDurationFormat() const{ return m_manifestDurationFormat; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline bool ManifestDurationFormatHasBeenSet() const { return m_manifestDurationFormatHasBeenSet; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(const HlsManifestDurationFormat& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline void SetManifestDurationFormat(HlsManifestDurationFormat&& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = std::move(value); }

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline HlsGroupSettings& WithManifestDurationFormat(const HlsManifestDurationFormat& value) { SetManifestDurationFormat(value); return *this;}

    /**
     * Indicates whether the output manifest should use floating point values for
     * segment duration.
     */
    inline HlsGroupSettings& WithManifestDurationFormat(HlsManifestDurationFormat&& value) { SetManifestDurationFormat(std::move(value)); return *this;}


    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline double GetMinFinalSegmentLength() const{ return m_minFinalSegmentLength; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline bool MinFinalSegmentLengthHasBeenSet() const { return m_minFinalSegmentLengthHasBeenSet; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline void SetMinFinalSegmentLength(double value) { m_minFinalSegmentLengthHasBeenSet = true; m_minFinalSegmentLength = value; }

    /**
     * Keep this setting at the default value of 0, unless you are troubleshooting a
     * problem with how devices play back the end of your video asset. If you know that
     * player devices are hanging on the final segment of your video because the length
     * of your final segment is too short, use this setting to specify a minimum final
     * segment length, in seconds. Choose a value that is greater than or equal to 1
     * and less than your segment length. When you specify a value for this setting,
     * the encoder will combine any final segment that is shorter than the length that
     * you specify with the previous segment. For example, your segment length is 3
     * seconds and your final segment is .5 seconds without a minimum final segment
     * length; when you set the minimum final segment length to 1, your final segment
     * is 3.5 seconds.
     */
    inline HlsGroupSettings& WithMinFinalSegmentLength(double value) { SetMinFinalSegmentLength(value); return *this;}


    /**
     * When set, Minimum Segment Size is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline int GetMinSegmentLength() const{ return m_minSegmentLength; }

    /**
     * When set, Minimum Segment Size is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline bool MinSegmentLengthHasBeenSet() const { return m_minSegmentLengthHasBeenSet; }

    /**
     * When set, Minimum Segment Size is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline void SetMinSegmentLength(int value) { m_minSegmentLengthHasBeenSet = true; m_minSegmentLength = value; }

    /**
     * When set, Minimum Segment Size is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline HlsGroupSettings& WithMinSegmentLength(int value) { SetMinSegmentLength(value); return *this;}


    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline const HlsOutputSelection& GetOutputSelection() const{ return m_outputSelection; }

    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline bool OutputSelectionHasBeenSet() const { return m_outputSelectionHasBeenSet; }

    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline void SetOutputSelection(const HlsOutputSelection& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = value; }

    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline void SetOutputSelection(HlsOutputSelection&& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = std::move(value); }

    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline HlsGroupSettings& WithOutputSelection(const HlsOutputSelection& value) { SetOutputSelection(value); return *this;}

    /**
     * Indicates whether the .m3u8 manifest file should be generated for this HLS
     * output group.
     */
    inline HlsGroupSettings& WithOutputSelection(HlsOutputSelection&& value) { SetOutputSelection(std::move(value)); return *this;}


    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline const HlsProgramDateTime& GetProgramDateTime() const{ return m_programDateTime; }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline bool ProgramDateTimeHasBeenSet() const { return m_programDateTimeHasBeenSet; }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline void SetProgramDateTime(const HlsProgramDateTime& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = value; }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline void SetProgramDateTime(HlsProgramDateTime&& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = std::move(value); }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline HlsGroupSettings& WithProgramDateTime(const HlsProgramDateTime& value) { SetProgramDateTime(value); return *this;}

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestamp_offset.
     */
    inline HlsGroupSettings& WithProgramDateTime(HlsProgramDateTime&& value) { SetProgramDateTime(std::move(value)); return *this;}


    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline int GetProgramDateTimePeriod() const{ return m_programDateTimePeriod; }

    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline bool ProgramDateTimePeriodHasBeenSet() const { return m_programDateTimePeriodHasBeenSet; }

    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline void SetProgramDateTimePeriod(int value) { m_programDateTimePeriodHasBeenSet = true; m_programDateTimePeriod = value; }

    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline HlsGroupSettings& WithProgramDateTimePeriod(int value) { SetProgramDateTimePeriod(value); return *this;}


    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline const HlsSegmentControl& GetSegmentControl() const{ return m_segmentControl; }

    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline bool SegmentControlHasBeenSet() const { return m_segmentControlHasBeenSet; }

    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline void SetSegmentControl(const HlsSegmentControl& value) { m_segmentControlHasBeenSet = true; m_segmentControl = value; }

    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline void SetSegmentControl(HlsSegmentControl&& value) { m_segmentControlHasBeenSet = true; m_segmentControl = std::move(value); }

    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline HlsGroupSettings& WithSegmentControl(const HlsSegmentControl& value) { SetSegmentControl(value); return *this;}

    /**
     * When set to SINGLE_FILE, emits program as a single media resource (.ts) file,
     * uses #EXT-X-BYTERANGE tags to index segment for playback.
     */
    inline HlsGroupSettings& WithSegmentControl(HlsSegmentControl&& value) { SetSegmentControl(std::move(value)); return *this;}


    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (HlsSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (HlsSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (HlsSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Specify the length, in whole seconds, of each segment. When you don't specify a
     * value, MediaConvert defaults to 10. Related settings: Use Segment length control
     * (SegmentLengthControl) to specify whether the encoder enforces this value
     * strictly. Use Segment control (HlsSegmentControl) to specify whether
     * MediaConvert creates separate segment files or one content file that has
     * metadata to mark the segment boundaries.
     */
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline const HlsSegmentLengthControl& GetSegmentLengthControl() const{ return m_segmentLengthControl; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline bool SegmentLengthControlHasBeenSet() const { return m_segmentLengthControlHasBeenSet; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(const HlsSegmentLengthControl& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = value; }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline void SetSegmentLengthControl(HlsSegmentLengthControl&& value) { m_segmentLengthControlHasBeenSet = true; m_segmentLengthControl = std::move(value); }

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline HlsGroupSettings& WithSegmentLengthControl(const HlsSegmentLengthControl& value) { SetSegmentLengthControl(value); return *this;}

    /**
     * Specify how you want MediaConvert to determine the segment length. Choose Exact
     * (EXACT) to have the encoder use the exact length that you specify with the
     * setting Segment length (SegmentLength). This might result in extra I-frames.
     * Choose Multiple of GOP (GOP_MULTIPLE) to have the encoder round up the segment
     * lengths to match the next GOP boundary.
     */
    inline HlsGroupSettings& WithSegmentLengthControl(HlsSegmentLengthControl&& value) { SetSegmentLengthControl(std::move(value)); return *this;}


    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be SINGLE_DIRECTORY for this setting to have an effect.
     */
    inline int GetSegmentsPerSubdirectory() const{ return m_segmentsPerSubdirectory; }

    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be SINGLE_DIRECTORY for this setting to have an effect.
     */
    inline bool SegmentsPerSubdirectoryHasBeenSet() const { return m_segmentsPerSubdirectoryHasBeenSet; }

    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be SINGLE_DIRECTORY for this setting to have an effect.
     */
    inline void SetSegmentsPerSubdirectory(int value) { m_segmentsPerSubdirectoryHasBeenSet = true; m_segmentsPerSubdirectory = value; }

    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be SINGLE_DIRECTORY for this setting to have an effect.
     */
    inline HlsGroupSettings& WithSegmentsPerSubdirectory(int value) { SetSegmentsPerSubdirectory(value); return *this;}


    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline const HlsStreamInfResolution& GetStreamInfResolution() const{ return m_streamInfResolution; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline bool StreamInfResolutionHasBeenSet() const { return m_streamInfResolutionHasBeenSet; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(const HlsStreamInfResolution& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = value; }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline void SetStreamInfResolution(HlsStreamInfResolution&& value) { m_streamInfResolutionHasBeenSet = true; m_streamInfResolution = std::move(value); }

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline HlsGroupSettings& WithStreamInfResolution(const HlsStreamInfResolution& value) { SetStreamInfResolution(value); return *this;}

    /**
     * Include or exclude RESOLUTION attribute for video in EXT-X-STREAM-INF tag of
     * variant manifest.
     */
    inline HlsGroupSettings& WithStreamInfResolution(HlsStreamInfResolution&& value) { SetStreamInfResolution(std::move(value)); return *this;}


    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline const HlsTargetDurationCompatibilityMode& GetTargetDurationCompatibilityMode() const{ return m_targetDurationCompatibilityMode; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline bool TargetDurationCompatibilityModeHasBeenSet() const { return m_targetDurationCompatibilityModeHasBeenSet; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline void SetTargetDurationCompatibilityMode(const HlsTargetDurationCompatibilityMode& value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = value; }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline void SetTargetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode&& value) { m_targetDurationCompatibilityModeHasBeenSet = true; m_targetDurationCompatibilityMode = std::move(value); }

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline HlsGroupSettings& WithTargetDurationCompatibilityMode(const HlsTargetDurationCompatibilityMode& value) { SetTargetDurationCompatibilityMode(value); return *this;}

    /**
     * When set to LEGACY, the segment target duration is always rounded up to the
     * nearest integer value above its current value in seconds. When set to
     * SPEC\\_COMPLIANT, the segment target duration is rounded up to the nearest
     * integer value if fraction seconds are greater than or equal to 0.5 (>= 0.5) and
     * rounded down if less than 0.5 (< 0.5). You may need to use LEGACY if your client
     * needs to ensure that the target duration is always longer than the actual
     * duration of the segment. Some older players may experience interrupted playback
     * when the actual duration of a track in a segment is longer than the target
     * duration.
     */
    inline HlsGroupSettings& WithTargetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode&& value) { SetTargetDurationCompatibilityMode(std::move(value)); return *this;}


    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline const HlsTimedMetadataId3Frame& GetTimedMetadataId3Frame() const{ return m_timedMetadataId3Frame; }

    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }

    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline void SetTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }

    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline void SetTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = std::move(value); }

    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline HlsGroupSettings& WithTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { SetTimedMetadataId3Frame(value); return *this;}

    /**
     * Specify the type of the ID3 frame (timedMetadataId3Frame) to use for ID3
     * timestamps (timedMetadataId3Period) in your output. To include ID3 timestamps:
     * Specify PRIV (PRIV) or TDRL (TDRL) and set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). To exclude ID3 timestamps: Set ID3 timestamp frame
     * type to None (NONE).
     */
    inline HlsGroupSettings& WithTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { SetTimedMetadataId3Frame(std::move(value)); return *this;}


    /**
     * Specify the interval in seconds to write ID3 timestamps in your output. The
     * first timestamp starts at the output timecode and date, and increases
     * incrementally with each ID3 timestamp. To use the default interval of 10
     * seconds: Leave blank. To include this metadata in your output: Set ID3 timestamp
     * frame type (timedMetadataId3Frame) to PRIV (PRIV) or TDRL (TDRL), and set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline int GetTimedMetadataId3Period() const{ return m_timedMetadataId3Period; }

    /**
     * Specify the interval in seconds to write ID3 timestamps in your output. The
     * first timestamp starts at the output timecode and date, and increases
     * incrementally with each ID3 timestamp. To use the default interval of 10
     * seconds: Leave blank. To include this metadata in your output: Set ID3 timestamp
     * frame type (timedMetadataId3Frame) to PRIV (PRIV) or TDRL (TDRL), and set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }

    /**
     * Specify the interval in seconds to write ID3 timestamps in your output. The
     * first timestamp starts at the output timecode and date, and increases
     * incrementally with each ID3 timestamp. To use the default interval of 10
     * seconds: Leave blank. To include this metadata in your output: Set ID3 timestamp
     * frame type (timedMetadataId3Frame) to PRIV (PRIV) or TDRL (TDRL), and set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }

    /**
     * Specify the interval in seconds to write ID3 timestamps in your output. The
     * first timestamp starts at the output timecode and date, and increases
     * incrementally with each ID3 timestamp. To use the default interval of 10
     * seconds: Leave blank. To include this metadata in your output: Set ID3 timestamp
     * frame type (timedMetadataId3Frame) to PRIV (PRIV) or TDRL (TDRL), and set ID3
     * metadata (timedMetadata) to Passthrough (PASSTHROUGH).
     */
    inline HlsGroupSettings& WithTimedMetadataId3Period(int value) { SetTimedMetadataId3Period(value); return *this;}


    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline int GetTimestampDeltaMilliseconds() const{ return m_timestampDeltaMilliseconds; }

    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline bool TimestampDeltaMillisecondsHasBeenSet() const { return m_timestampDeltaMillisecondsHasBeenSet; }

    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline void SetTimestampDeltaMilliseconds(int value) { m_timestampDeltaMillisecondsHasBeenSet = true; m_timestampDeltaMilliseconds = value; }

    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline HlsGroupSettings& WithTimestampDeltaMilliseconds(int value) { SetTimestampDeltaMilliseconds(value); return *this;}

  private:

    Aws::Vector<HlsAdMarkers> m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    Aws::Vector<HlsAdditionalManifest> m_additionalManifests;
    bool m_additionalManifestsHasBeenSet = false;

    HlsAudioOnlyHeader m_audioOnlyHeader;
    bool m_audioOnlyHeaderHasBeenSet = false;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet = false;

    Aws::Vector<HlsCaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet = false;

    HlsCaptionLanguageSetting m_captionLanguageSetting;
    bool m_captionLanguageSettingHasBeenSet = false;

    HlsCaptionSegmentLengthControl m_captionSegmentLengthControl;
    bool m_captionSegmentLengthControlHasBeenSet = false;

    HlsClientCache m_clientCache;
    bool m_clientCacheHasBeenSet = false;

    HlsCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet = false;

    HlsDirectoryStructure m_directoryStructure;
    bool m_directoryStructureHasBeenSet = false;

    HlsEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    HlsImageBasedTrickPlay m_imageBasedTrickPlay;
    bool m_imageBasedTrickPlayHasBeenSet = false;

    HlsImageBasedTrickPlaySettings m_imageBasedTrickPlaySettings;
    bool m_imageBasedTrickPlaySettingsHasBeenSet = false;

    HlsManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet = false;

    HlsManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet = false;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet = false;

    int m_minSegmentLength;
    bool m_minSegmentLengthHasBeenSet = false;

    HlsOutputSelection m_outputSelection;
    bool m_outputSelectionHasBeenSet = false;

    HlsProgramDateTime m_programDateTime;
    bool m_programDateTimeHasBeenSet = false;

    int m_programDateTimePeriod;
    bool m_programDateTimePeriodHasBeenSet = false;

    HlsSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet = false;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet = false;

    HlsSegmentLengthControl m_segmentLengthControl;
    bool m_segmentLengthControlHasBeenSet = false;

    int m_segmentsPerSubdirectory;
    bool m_segmentsPerSubdirectoryHasBeenSet = false;

    HlsStreamInfResolution m_streamInfResolution;
    bool m_streamInfResolutionHasBeenSet = false;

    HlsTargetDurationCompatibilityMode m_targetDurationCompatibilityMode;
    bool m_targetDurationCompatibilityModeHasBeenSet = false;

    HlsTimedMetadataId3Frame m_timedMetadataId3Frame;
    bool m_timedMetadataId3FrameHasBeenSet = false;

    int m_timedMetadataId3Period;
    bool m_timedMetadataId3PeriodHasBeenSet = false;

    int m_timestampDeltaMilliseconds;
    bool m_timestampDeltaMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
