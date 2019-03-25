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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/HlsCaptionLanguageSetting.h>
#include <aws/mediaconvert/model/HlsClientCache.h>
#include <aws/mediaconvert/model/HlsCodecSpecification.h>
#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/mediaconvert/model/HlsDirectoryStructure.h>
#include <aws/mediaconvert/model/HlsEncryptionSettings.h>
#include <aws/mediaconvert/model/HlsManifestCompression.h>
#include <aws/mediaconvert/model/HlsManifestDurationFormat.h>
#include <aws/mediaconvert/model/HlsOutputSelection.h>
#include <aws/mediaconvert/model/HlsProgramDateTime.h>
#include <aws/mediaconvert/model/HlsSegmentControl.h>
#include <aws/mediaconvert/model/HlsStreamInfResolution.h>
#include <aws/mediaconvert/model/HlsTimedMetadataId3Frame.h>
#include <aws/mediaconvert/model/HlsAdMarkers.h>
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
   * Required when you set (Type) under (OutputGroups)>(OutputGroupSettings) to
   * HLS_GROUP_SETTINGS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/HlsGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API HlsGroupSettings
  {
  public:
    HlsGroupSettings();
    HlsGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    HlsGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline const Aws::Vector<HlsAdMarkers>& GetAdMarkers() const{ return m_adMarkers; }

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline void SetAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline void SetAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline HlsGroupSettings& WithAdMarkers(const Aws::Vector<HlsAdMarkers>& value) { SetAdMarkers(value); return *this;}

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline HlsGroupSettings& WithAdMarkers(Aws::Vector<HlsAdMarkers>&& value) { SetAdMarkers(std::move(value)); return *this;}

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline HlsGroupSettings& AddAdMarkers(const HlsAdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(value); return *this; }

    /**
     * Choose one or more ad marker types to pass SCTE35 signals through to this group
     * of Apple HLS outputs.
     */
    inline HlsGroupSettings& AddAdMarkers(HlsAdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(std::move(value)); return *this; }


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
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline const HlsClientCache& GetClientCache() const{ return m_clientCache; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline bool ClientCacheHasBeenSet() const { return m_clientCacheHasBeenSet; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline void SetClientCache(const HlsClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline void SetClientCache(HlsClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
     */
    inline HlsGroupSettings& WithClientCache(const HlsClientCache& value) { SetClientCache(value); return *this;}

    /**
     * When set to ENABLED, sets #EXT-X-ALLOW-CACHE:no tag, which prevents client from
     * saving media segments for later replay.
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
     * Length of MPEG-2 Transport Stream segments to create (in seconds). Note that
     * segments will end on the next keyframe after this number of seconds, so actual
     * segment length may be longer.
     */
    inline int GetSegmentLength() const{ return m_segmentLength; }

    /**
     * Length of MPEG-2 Transport Stream segments to create (in seconds). Note that
     * segments will end on the next keyframe after this number of seconds, so actual
     * segment length may be longer.
     */
    inline bool SegmentLengthHasBeenSet() const { return m_segmentLengthHasBeenSet; }

    /**
     * Length of MPEG-2 Transport Stream segments to create (in seconds). Note that
     * segments will end on the next keyframe after this number of seconds, so actual
     * segment length may be longer.
     */
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Length of MPEG-2 Transport Stream segments to create (in seconds). Note that
     * segments will end on the next keyframe after this number of seconds, so actual
     * segment length may be longer.
     */
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


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
     * Indicates ID3 frame that has the timecode.
     */
    inline const HlsTimedMetadataId3Frame& GetTimedMetadataId3Frame() const{ return m_timedMetadataId3Frame; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline bool TimedMetadataId3FrameHasBeenSet() const { return m_timedMetadataId3FrameHasBeenSet; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline void SetTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = value; }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline void SetTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { m_timedMetadataId3FrameHasBeenSet = true; m_timedMetadataId3Frame = std::move(value); }

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline HlsGroupSettings& WithTimedMetadataId3Frame(const HlsTimedMetadataId3Frame& value) { SetTimedMetadataId3Frame(value); return *this;}

    /**
     * Indicates ID3 frame that has the timecode.
     */
    inline HlsGroupSettings& WithTimedMetadataId3Frame(HlsTimedMetadataId3Frame&& value) { SetTimedMetadataId3Frame(std::move(value)); return *this;}


    /**
     * Timed Metadata interval in seconds.
     */
    inline int GetTimedMetadataId3Period() const{ return m_timedMetadataId3Period; }

    /**
     * Timed Metadata interval in seconds.
     */
    inline bool TimedMetadataId3PeriodHasBeenSet() const { return m_timedMetadataId3PeriodHasBeenSet; }

    /**
     * Timed Metadata interval in seconds.
     */
    inline void SetTimedMetadataId3Period(int value) { m_timedMetadataId3PeriodHasBeenSet = true; m_timedMetadataId3Period = value; }

    /**
     * Timed Metadata interval in seconds.
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
    bool m_adMarkersHasBeenSet;

    Aws::String m_baseUrl;
    bool m_baseUrlHasBeenSet;

    Aws::Vector<HlsCaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet;

    HlsCaptionLanguageSetting m_captionLanguageSetting;
    bool m_captionLanguageSettingHasBeenSet;

    HlsClientCache m_clientCache;
    bool m_clientCacheHasBeenSet;

    HlsCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    DestinationSettings m_destinationSettings;
    bool m_destinationSettingsHasBeenSet;

    HlsDirectoryStructure m_directoryStructure;
    bool m_directoryStructureHasBeenSet;

    HlsEncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet;

    HlsManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet;

    HlsManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet;

    double m_minFinalSegmentLength;
    bool m_minFinalSegmentLengthHasBeenSet;

    int m_minSegmentLength;
    bool m_minSegmentLengthHasBeenSet;

    HlsOutputSelection m_outputSelection;
    bool m_outputSelectionHasBeenSet;

    HlsProgramDateTime m_programDateTime;
    bool m_programDateTimeHasBeenSet;

    int m_programDateTimePeriod;
    bool m_programDateTimePeriodHasBeenSet;

    HlsSegmentControl m_segmentControl;
    bool m_segmentControlHasBeenSet;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet;

    int m_segmentsPerSubdirectory;
    bool m_segmentsPerSubdirectoryHasBeenSet;

    HlsStreamInfResolution m_streamInfResolution;
    bool m_streamInfResolutionHasBeenSet;

    HlsTimedMetadataId3Frame m_timedMetadataId3Frame;
    bool m_timedMetadataId3FrameHasBeenSet;

    int m_timedMetadataId3Period;
    bool m_timedMetadataId3PeriodHasBeenSet;

    int m_timestampDeltaMilliseconds;
    bool m_timestampDeltaMillisecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
