﻿/*
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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/HlsCaptionLanguageSetting.h>
#include <aws/medialive/model/HlsClientCache.h>
#include <aws/medialive/model/HlsCodecSpecification.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/HlsDirectoryStructure.h>
#include <aws/medialive/model/HlsEncryptionType.h>
#include <aws/medialive/model/HlsCdnSettings.h>
#include <aws/medialive/model/InputLossActionForHlsOut.h>
#include <aws/medialive/model/HlsIvInManifest.h>
#include <aws/medialive/model/HlsIvSource.h>
#include <aws/medialive/model/KeyProviderSettings.h>
#include <aws/medialive/model/HlsManifestCompression.h>
#include <aws/medialive/model/HlsManifestDurationFormat.h>
#include <aws/medialive/model/HlsMode.h>
#include <aws/medialive/model/HlsOutputSelection.h>
#include <aws/medialive/model/HlsProgramDateTime.h>
#include <aws/medialive/model/HlsSegmentationMode.h>
#include <aws/medialive/model/HlsStreamInfResolution.h>
#include <aws/medialive/model/HlsTimedMetadataId3Frame.h>
#include <aws/medialive/model/HlsTsFileMode.h>
#include <aws/medialive/model/HlsAdMarkers.h>
#include <aws/medialive/model/CaptionLanguageMapping.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for HlsGroupSettings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsGroupSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API HlsGroupSettings
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
    inline const Aws::String& GetBaseUrlContent() const{ return m_baseUrlContent; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlContent(const Aws::String& value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent = value; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlContent(Aws::String&& value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent = std::move(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlContent(const char* value) { m_baseUrlContentHasBeenSet = true; m_baseUrlContent.assign(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlContent(const Aws::String& value) { SetBaseUrlContent(value); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlContent(Aws::String&& value) { SetBaseUrlContent(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlContent(const char* value) { SetBaseUrlContent(value); return *this;}


    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline const Aws::String& GetBaseUrlManifest() const{ return m_baseUrlManifest; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlManifest(const Aws::String& value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest = value; }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlManifest(Aws::String&& value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest = std::move(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline void SetBaseUrlManifest(const char* value) { m_baseUrlManifestHasBeenSet = true; m_baseUrlManifest.assign(value); }

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlManifest(const Aws::String& value) { SetBaseUrlManifest(value); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlManifest(Aws::String&& value) { SetBaseUrlManifest(std::move(value)); return *this;}

    /**
     * A partial URI prefix that will be prepended to each output in the media .m3u8
     * file. Can be used if base manifest is delivered from a different URL than the
     * main .m3u8 file.
     */
    inline HlsGroupSettings& WithBaseUrlManifest(const char* value) { SetBaseUrlManifest(value); return *this;}


    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline const Aws::Vector<CaptionLanguageMapping>& GetCaptionLanguageMappings() const{ return m_captionLanguageMappings; }

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline void SetCaptionLanguageMappings(const Aws::Vector<CaptionLanguageMapping>& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = value; }

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline void SetCaptionLanguageMappings(Aws::Vector<CaptionLanguageMapping>&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings = std::move(value); }

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline HlsGroupSettings& WithCaptionLanguageMappings(const Aws::Vector<CaptionLanguageMapping>& value) { SetCaptionLanguageMappings(value); return *this;}

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline HlsGroupSettings& WithCaptionLanguageMappings(Aws::Vector<CaptionLanguageMapping>&& value) { SetCaptionLanguageMappings(std::move(value)); return *this;}

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline HlsGroupSettings& AddCaptionLanguageMappings(const CaptionLanguageMapping& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(value); return *this; }

    /**
     * Mapping of up to 4 caption channels to caption languages.  Is only meaningful if
     * captionLanguageSetting is set to "insert".
     */
    inline HlsGroupSettings& AddCaptionLanguageMappings(CaptionLanguageMapping&& value) { m_captionLanguageMappingsHasBeenSet = true; m_captionLanguageMappings.push_back(std::move(value)); return *this; }


    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline const HlsCaptionLanguageSetting& GetCaptionLanguageSetting() const{ return m_captionLanguageSetting; }

    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline void SetCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = value; }

    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline void SetCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { m_captionLanguageSettingHasBeenSet = true; m_captionLanguageSetting = std::move(value); }

    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline HlsGroupSettings& WithCaptionLanguageSetting(const HlsCaptionLanguageSetting& value) { SetCaptionLanguageSetting(value); return *this;}

    /**
     * Applies only to 608 Embedded output captions.
insert: Include CLOSED-CAPTIONS
     * lines in the manifest. Specify at least one language in the CC1 Language Code
     * field. One CLOSED-CAPTION line is added for each Language Code you specify. Make
     * sure to specify the languages in the order in which they appear in the original
     * source (if the source is embedded format) or the order of the caption selectors
     * (if the source is other than embedded). Otherwise, languages in the manifest
     * will not match up properly with the output captions.
none: Include
     * CLOSED-CAPTIONS=NONE line in the manifest.
omit: Omit any CLOSED-CAPTIONS line
     * from the manifest.
     */
    inline HlsGroupSettings& WithCaptionLanguageSetting(HlsCaptionLanguageSetting&& value) { SetCaptionLanguageSetting(std::move(value)); return *this;}


    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline const HlsClientCache& GetClientCache() const{ return m_clientCache; }

    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline void SetClientCache(const HlsClientCache& value) { m_clientCacheHasBeenSet = true; m_clientCache = value; }

    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline void SetClientCache(HlsClientCache&& value) { m_clientCacheHasBeenSet = true; m_clientCache = std::move(value); }

    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
     */
    inline HlsGroupSettings& WithClientCache(const HlsClientCache& value) { SetClientCache(value); return *this;}

    /**
     * When set to "disabled", sets the #EXT-X-ALLOW-CACHE:no tag in the manifest,
     * which prevents clients from saving media segments for later replay.
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
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline const Aws::String& GetConstantIv() const{ return m_constantIv; }

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline void SetConstantIv(const Aws::String& value) { m_constantIvHasBeenSet = true; m_constantIv = value; }

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline void SetConstantIv(Aws::String&& value) { m_constantIvHasBeenSet = true; m_constantIv = std::move(value); }

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline void SetConstantIv(const char* value) { m_constantIvHasBeenSet = true; m_constantIv.assign(value); }

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline HlsGroupSettings& WithConstantIv(const Aws::String& value) { SetConstantIv(value); return *this;}

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline HlsGroupSettings& WithConstantIv(Aws::String&& value) { SetConstantIv(std::move(value)); return *this;}

    /**
     * For use with encryptionType. This is a 128-bit, 16-byte hex value represented by
     * a 32-character text string. If ivSource is set to "explicit" then this parameter
     * is required and is used as the IV for encryption.
     */
    inline HlsGroupSettings& WithConstantIv(const char* value) { SetConstantIv(value); return *this;}


    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline HlsGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * A directory or HTTP destination for the HLS segments, manifest files, and
     * encryption keys (if enabled).
     */
    inline HlsGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * Place segments in subdirectories.
     */
    inline const HlsDirectoryStructure& GetDirectoryStructure() const{ return m_directoryStructure; }

    /**
     * Place segments in subdirectories.
     */
    inline void SetDirectoryStructure(const HlsDirectoryStructure& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = value; }

    /**
     * Place segments in subdirectories.
     */
    inline void SetDirectoryStructure(HlsDirectoryStructure&& value) { m_directoryStructureHasBeenSet = true; m_directoryStructure = std::move(value); }

    /**
     * Place segments in subdirectories.
     */
    inline HlsGroupSettings& WithDirectoryStructure(const HlsDirectoryStructure& value) { SetDirectoryStructure(value); return *this;}

    /**
     * Place segments in subdirectories.
     */
    inline HlsGroupSettings& WithDirectoryStructure(HlsDirectoryStructure&& value) { SetDirectoryStructure(std::move(value)); return *this;}


    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline const HlsEncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline void SetEncryptionType(const HlsEncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline void SetEncryptionType(HlsEncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline HlsGroupSettings& WithEncryptionType(const HlsEncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * Encrypts the segments with the given encryption scheme.  Exclude this parameter
     * if no encryption is desired.
     */
    inline HlsGroupSettings& WithEncryptionType(HlsEncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * Parameters that control interactions with the CDN.
     */
    inline const HlsCdnSettings& GetHlsCdnSettings() const{ return m_hlsCdnSettings; }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline void SetHlsCdnSettings(const HlsCdnSettings& value) { m_hlsCdnSettingsHasBeenSet = true; m_hlsCdnSettings = value; }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline void SetHlsCdnSettings(HlsCdnSettings&& value) { m_hlsCdnSettingsHasBeenSet = true; m_hlsCdnSettings = std::move(value); }

    /**
     * Parameters that control interactions with the CDN.
     */
    inline HlsGroupSettings& WithHlsCdnSettings(const HlsCdnSettings& value) { SetHlsCdnSettings(value); return *this;}

    /**
     * Parameters that control interactions with the CDN.
     */
    inline HlsGroupSettings& WithHlsCdnSettings(HlsCdnSettings&& value) { SetHlsCdnSettings(std::move(value)); return *this;}


    /**
     * If mode is "live", the number of segments to retain in the manifest (.m3u8)
     * file. This number must be less than or equal to keepSegments. If mode is "vod",
     * this parameter has no effect.
     */
    inline int GetIndexNSegments() const{ return m_indexNSegments; }

    /**
     * If mode is "live", the number of segments to retain in the manifest (.m3u8)
     * file. This number must be less than or equal to keepSegments. If mode is "vod",
     * this parameter has no effect.
     */
    inline void SetIndexNSegments(int value) { m_indexNSegmentsHasBeenSet = true; m_indexNSegments = value; }

    /**
     * If mode is "live", the number of segments to retain in the manifest (.m3u8)
     * file. This number must be less than or equal to keepSegments. If mode is "vod",
     * this parameter has no effect.
     */
    inline HlsGroupSettings& WithIndexNSegments(int value) { SetIndexNSegments(value); return *this;}


    /**
     * Parameter that control output group behavior on input loss.
     */
    inline const InputLossActionForHlsOut& GetInputLossAction() const{ return m_inputLossAction; }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline void SetInputLossAction(const InputLossActionForHlsOut& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline void SetInputLossAction(InputLossActionForHlsOut&& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = std::move(value); }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline HlsGroupSettings& WithInputLossAction(const InputLossActionForHlsOut& value) { SetInputLossAction(value); return *this;}

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline HlsGroupSettings& WithInputLossAction(InputLossActionForHlsOut&& value) { SetInputLossAction(std::move(value)); return *this;}


    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline const HlsIvInManifest& GetIvInManifest() const{ return m_ivInManifest; }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline void SetIvInManifest(const HlsIvInManifest& value) { m_ivInManifestHasBeenSet = true; m_ivInManifest = value; }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline void SetIvInManifest(HlsIvInManifest&& value) { m_ivInManifestHasBeenSet = true; m_ivInManifest = std::move(value); }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline HlsGroupSettings& WithIvInManifest(const HlsIvInManifest& value) { SetIvInManifest(value); return *this;}

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If set to "include", IV
     * is listed in the manifest, otherwise the IV is not in the manifest.
     */
    inline HlsGroupSettings& WithIvInManifest(HlsIvInManifest&& value) { SetIvInManifest(std::move(value)); return *this;}


    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline const HlsIvSource& GetIvSource() const{ return m_ivSource; }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline void SetIvSource(const HlsIvSource& value) { m_ivSourceHasBeenSet = true; m_ivSource = value; }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline void SetIvSource(HlsIvSource&& value) { m_ivSourceHasBeenSet = true; m_ivSource = std::move(value); }

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline HlsGroupSettings& WithIvSource(const HlsIvSource& value) { SetIvSource(value); return *this;}

    /**
     * For use with encryptionType. The IV (Initialization Vector) is a 128-bit number
     * used in conjunction with the key for encrypting blocks. If this setting is
     * "followsSegmentNumber", it will cause the IV to change every segment (to match
     * the segment number). If this is set to "explicit", you must enter a constantIv
     * value.
     */
    inline HlsGroupSettings& WithIvSource(HlsIvSource&& value) { SetIvSource(std::move(value)); return *this;}


    /**
     * If mode is "live", the number of TS segments to retain in the destination
     * directory. If mode is "vod", this parameter has no effect.
     */
    inline int GetKeepSegments() const{ return m_keepSegments; }

    /**
     * If mode is "live", the number of TS segments to retain in the destination
     * directory. If mode is "vod", this parameter has no effect.
     */
    inline void SetKeepSegments(int value) { m_keepSegmentsHasBeenSet = true; m_keepSegments = value; }

    /**
     * If mode is "live", the number of TS segments to retain in the destination
     * directory. If mode is "vod", this parameter has no effect.
     */
    inline HlsGroupSettings& WithKeepSegments(int value) { SetKeepSegments(value); return *this;}


    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline const Aws::String& GetKeyFormat() const{ return m_keyFormat; }

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline void SetKeyFormat(const Aws::String& value) { m_keyFormatHasBeenSet = true; m_keyFormat = value; }

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline void SetKeyFormat(Aws::String&& value) { m_keyFormatHasBeenSet = true; m_keyFormat = std::move(value); }

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline void SetKeyFormat(const char* value) { m_keyFormatHasBeenSet = true; m_keyFormat.assign(value); }

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline HlsGroupSettings& WithKeyFormat(const Aws::String& value) { SetKeyFormat(value); return *this;}

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline HlsGroupSettings& WithKeyFormat(Aws::String&& value) { SetKeyFormat(std::move(value)); return *this;}

    /**
     * The value specifies how the key is represented in the resource identified by the
     * URI.  If parameter is absent, an implicit value of "identity" is used.  A
     * reverse DNS string can also be given.
     */
    inline HlsGroupSettings& WithKeyFormat(const char* value) { SetKeyFormat(value); return *this;}


    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline const Aws::String& GetKeyFormatVersions() const{ return m_keyFormatVersions; }

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline void SetKeyFormatVersions(const Aws::String& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = value; }

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline void SetKeyFormatVersions(Aws::String&& value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions = std::move(value); }

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline void SetKeyFormatVersions(const char* value) { m_keyFormatVersionsHasBeenSet = true; m_keyFormatVersions.assign(value); }

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline HlsGroupSettings& WithKeyFormatVersions(const Aws::String& value) { SetKeyFormatVersions(value); return *this;}

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline HlsGroupSettings& WithKeyFormatVersions(Aws::String&& value) { SetKeyFormatVersions(std::move(value)); return *this;}

    /**
     * Either a single positive integer version value or a slash delimited list of
     * version values (1/2/3).
     */
    inline HlsGroupSettings& WithKeyFormatVersions(const char* value) { SetKeyFormatVersions(value); return *this;}


    /**
     * The key provider settings.
     */
    inline const KeyProviderSettings& GetKeyProviderSettings() const{ return m_keyProviderSettings; }

    /**
     * The key provider settings.
     */
    inline void SetKeyProviderSettings(const KeyProviderSettings& value) { m_keyProviderSettingsHasBeenSet = true; m_keyProviderSettings = value; }

    /**
     * The key provider settings.
     */
    inline void SetKeyProviderSettings(KeyProviderSettings&& value) { m_keyProviderSettingsHasBeenSet = true; m_keyProviderSettings = std::move(value); }

    /**
     * The key provider settings.
     */
    inline HlsGroupSettings& WithKeyProviderSettings(const KeyProviderSettings& value) { SetKeyProviderSettings(value); return *this;}

    /**
     * The key provider settings.
     */
    inline HlsGroupSettings& WithKeyProviderSettings(KeyProviderSettings&& value) { SetKeyProviderSettings(std::move(value)); return *this;}


    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline const HlsManifestCompression& GetManifestCompression() const{ return m_manifestCompression; }

    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline void SetManifestCompression(const HlsManifestCompression& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = value; }

    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline void SetManifestCompression(HlsManifestCompression&& value) { m_manifestCompressionHasBeenSet = true; m_manifestCompression = std::move(value); }

    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline HlsGroupSettings& WithManifestCompression(const HlsManifestCompression& value) { SetManifestCompression(value); return *this;}

    /**
     * When set to gzip, compresses HLS playlist.
     */
    inline HlsGroupSettings& WithManifestCompression(HlsManifestCompression&& value) { SetManifestCompression(std::move(value)); return *this;}


    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline const HlsManifestDurationFormat& GetManifestDurationFormat() const{ return m_manifestDurationFormat; }

    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline void SetManifestDurationFormat(const HlsManifestDurationFormat& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = value; }

    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline void SetManifestDurationFormat(HlsManifestDurationFormat&& value) { m_manifestDurationFormatHasBeenSet = true; m_manifestDurationFormat = std::move(value); }

    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline HlsGroupSettings& WithManifestDurationFormat(const HlsManifestDurationFormat& value) { SetManifestDurationFormat(value); return *this;}

    /**
     * Indicates whether the output manifest should use floating point or integer
     * values for segment duration.
     */
    inline HlsGroupSettings& WithManifestDurationFormat(HlsManifestDurationFormat&& value) { SetManifestDurationFormat(std::move(value)); return *this;}


    /**
     * When set, minimumSegmentLength is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline int GetMinSegmentLength() const{ return m_minSegmentLength; }

    /**
     * When set, minimumSegmentLength is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline void SetMinSegmentLength(int value) { m_minSegmentLengthHasBeenSet = true; m_minSegmentLength = value; }

    /**
     * When set, minimumSegmentLength is enforced by looking ahead and back within the
     * specified range for a nearby avail and extending the segment size if needed.
     */
    inline HlsGroupSettings& WithMinSegmentLength(int value) { SetMinSegmentLength(value); return *this;}


    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline const HlsMode& GetMode() const{ return m_mode; }

    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline void SetMode(const HlsMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline void SetMode(HlsMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline HlsGroupSettings& WithMode(const HlsMode& value) { SetMode(value); return *this;}

    /**
     * If "vod", all segments are indexed and kept permanently in the destination and
     * manifest. If "live", only the number segments specified in keepSegments and
     * indexNSegments are kept; newer segments replace older segments, which may
     * prevent players from rewinding all the way to the beginning of the event.

VOD
     * mode uses HLS EXT-X-PLAYLIST-TYPE of EVENT while the channel is running,
     * converting it to a "VOD" type manifest on completion of the stream.
     */
    inline HlsGroupSettings& WithMode(HlsMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * Generates the .m3u8 playlist file for this HLS output group. The segmentsOnly
     * option will output segments without the .m3u8 file.
     */
    inline const HlsOutputSelection& GetOutputSelection() const{ return m_outputSelection; }

    /**
     * Generates the .m3u8 playlist file for this HLS output group. The segmentsOnly
     * option will output segments without the .m3u8 file.
     */
    inline void SetOutputSelection(const HlsOutputSelection& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = value; }

    /**
     * Generates the .m3u8 playlist file for this HLS output group. The segmentsOnly
     * option will output segments without the .m3u8 file.
     */
    inline void SetOutputSelection(HlsOutputSelection&& value) { m_outputSelectionHasBeenSet = true; m_outputSelection = std::move(value); }

    /**
     * Generates the .m3u8 playlist file for this HLS output group. The segmentsOnly
     * option will output segments without the .m3u8 file.
     */
    inline HlsGroupSettings& WithOutputSelection(const HlsOutputSelection& value) { SetOutputSelection(value); return *this;}

    /**
     * Generates the .m3u8 playlist file for this HLS output group. The segmentsOnly
     * option will output segments without the .m3u8 file.
     */
    inline HlsGroupSettings& WithOutputSelection(HlsOutputSelection&& value) { SetOutputSelection(std::move(value)); return *this;}


    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestampOffset.
     */
    inline const HlsProgramDateTime& GetProgramDateTime() const{ return m_programDateTime; }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestampOffset.
     */
    inline void SetProgramDateTime(const HlsProgramDateTime& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = value; }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestampOffset.
     */
    inline void SetProgramDateTime(HlsProgramDateTime&& value) { m_programDateTimeHasBeenSet = true; m_programDateTime = std::move(value); }

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestampOffset.
     */
    inline HlsGroupSettings& WithProgramDateTime(const HlsProgramDateTime& value) { SetProgramDateTime(value); return *this;}

    /**
     * Includes or excludes EXT-X-PROGRAM-DATE-TIME tag in .m3u8 manifest files. The
     * value is calculated as follows: either the program date and time are initialized
     * using the input timecode source, or the time is initialized using the input
     * timecode source and the date is initialized using the timestampOffset.
     */
    inline HlsGroupSettings& WithProgramDateTime(HlsProgramDateTime&& value) { SetProgramDateTime(std::move(value)); return *this;}


    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline int GetProgramDateTimePeriod() const{ return m_programDateTimePeriod; }

    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline void SetProgramDateTimePeriod(int value) { m_programDateTimePeriodHasBeenSet = true; m_programDateTimePeriod = value; }

    /**
     * Period of insertion of EXT-X-PROGRAM-DATE-TIME entry, in seconds.
     */
    inline HlsGroupSettings& WithProgramDateTimePeriod(int value) { SetProgramDateTimePeriod(value); return *this;}


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
    inline void SetSegmentLength(int value) { m_segmentLengthHasBeenSet = true; m_segmentLength = value; }

    /**
     * Length of MPEG-2 Transport Stream segments to create (in seconds). Note that
     * segments will end on the next keyframe after this number of seconds, so actual
     * segment length may be longer.
     */
    inline HlsGroupSettings& WithSegmentLength(int value) { SetSegmentLength(value); return *this;}


    /**
     * When set to useInputSegmentation, the output segment or fragment points are set
     * by the RAI markers from the input streams.
     */
    inline const HlsSegmentationMode& GetSegmentationMode() const{ return m_segmentationMode; }

    /**
     * When set to useInputSegmentation, the output segment or fragment points are set
     * by the RAI markers from the input streams.
     */
    inline void SetSegmentationMode(const HlsSegmentationMode& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = value; }

    /**
     * When set to useInputSegmentation, the output segment or fragment points are set
     * by the RAI markers from the input streams.
     */
    inline void SetSegmentationMode(HlsSegmentationMode&& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = std::move(value); }

    /**
     * When set to useInputSegmentation, the output segment or fragment points are set
     * by the RAI markers from the input streams.
     */
    inline HlsGroupSettings& WithSegmentationMode(const HlsSegmentationMode& value) { SetSegmentationMode(value); return *this;}

    /**
     * When set to useInputSegmentation, the output segment or fragment points are set
     * by the RAI markers from the input streams.
     */
    inline HlsGroupSettings& WithSegmentationMode(HlsSegmentationMode&& value) { SetSegmentationMode(std::move(value)); return *this;}


    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be subdirectoryPerStream for this setting to have an
     * effect.
     */
    inline int GetSegmentsPerSubdirectory() const{ return m_segmentsPerSubdirectory; }

    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be subdirectoryPerStream for this setting to have an
     * effect.
     */
    inline void SetSegmentsPerSubdirectory(int value) { m_segmentsPerSubdirectoryHasBeenSet = true; m_segmentsPerSubdirectory = value; }

    /**
     * Number of segments to write to a subdirectory before starting a new one.
     * directoryStructure must be subdirectoryPerStream for this setting to have an
     * effect.
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
    inline void SetTimestampDeltaMilliseconds(int value) { m_timestampDeltaMillisecondsHasBeenSet = true; m_timestampDeltaMilliseconds = value; }

    /**
     * Provides an extra millisecond delta offset to fine tune the timestamps.
     */
    inline HlsGroupSettings& WithTimestampDeltaMilliseconds(int value) { SetTimestampDeltaMilliseconds(value); return *this;}


    /**
     * When set to "singleFile", emits the program as a single media resource (.ts)
     * file, and uses #EXT-X-BYTERANGE tags to index segment for playback. Playback of
     * VOD mode content during event is not guaranteed due to HTTP server caching.
     */
    inline const HlsTsFileMode& GetTsFileMode() const{ return m_tsFileMode; }

    /**
     * When set to "singleFile", emits the program as a single media resource (.ts)
     * file, and uses #EXT-X-BYTERANGE tags to index segment for playback. Playback of
     * VOD mode content during event is not guaranteed due to HTTP server caching.
     */
    inline void SetTsFileMode(const HlsTsFileMode& value) { m_tsFileModeHasBeenSet = true; m_tsFileMode = value; }

    /**
     * When set to "singleFile", emits the program as a single media resource (.ts)
     * file, and uses #EXT-X-BYTERANGE tags to index segment for playback. Playback of
     * VOD mode content during event is not guaranteed due to HTTP server caching.
     */
    inline void SetTsFileMode(HlsTsFileMode&& value) { m_tsFileModeHasBeenSet = true; m_tsFileMode = std::move(value); }

    /**
     * When set to "singleFile", emits the program as a single media resource (.ts)
     * file, and uses #EXT-X-BYTERANGE tags to index segment for playback. Playback of
     * VOD mode content during event is not guaranteed due to HTTP server caching.
     */
    inline HlsGroupSettings& WithTsFileMode(const HlsTsFileMode& value) { SetTsFileMode(value); return *this;}

    /**
     * When set to "singleFile", emits the program as a single media resource (.ts)
     * file, and uses #EXT-X-BYTERANGE tags to index segment for playback. Playback of
     * VOD mode content during event is not guaranteed due to HTTP server caching.
     */
    inline HlsGroupSettings& WithTsFileMode(HlsTsFileMode&& value) { SetTsFileMode(std::move(value)); return *this;}

  private:

    Aws::Vector<HlsAdMarkers> m_adMarkers;
    bool m_adMarkersHasBeenSet;

    Aws::String m_baseUrlContent;
    bool m_baseUrlContentHasBeenSet;

    Aws::String m_baseUrlManifest;
    bool m_baseUrlManifestHasBeenSet;

    Aws::Vector<CaptionLanguageMapping> m_captionLanguageMappings;
    bool m_captionLanguageMappingsHasBeenSet;

    HlsCaptionLanguageSetting m_captionLanguageSetting;
    bool m_captionLanguageSettingHasBeenSet;

    HlsClientCache m_clientCache;
    bool m_clientCacheHasBeenSet;

    HlsCodecSpecification m_codecSpecification;
    bool m_codecSpecificationHasBeenSet;

    Aws::String m_constantIv;
    bool m_constantIvHasBeenSet;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet;

    HlsDirectoryStructure m_directoryStructure;
    bool m_directoryStructureHasBeenSet;

    HlsEncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet;

    HlsCdnSettings m_hlsCdnSettings;
    bool m_hlsCdnSettingsHasBeenSet;

    int m_indexNSegments;
    bool m_indexNSegmentsHasBeenSet;

    InputLossActionForHlsOut m_inputLossAction;
    bool m_inputLossActionHasBeenSet;

    HlsIvInManifest m_ivInManifest;
    bool m_ivInManifestHasBeenSet;

    HlsIvSource m_ivSource;
    bool m_ivSourceHasBeenSet;

    int m_keepSegments;
    bool m_keepSegmentsHasBeenSet;

    Aws::String m_keyFormat;
    bool m_keyFormatHasBeenSet;

    Aws::String m_keyFormatVersions;
    bool m_keyFormatVersionsHasBeenSet;

    KeyProviderSettings m_keyProviderSettings;
    bool m_keyProviderSettingsHasBeenSet;

    HlsManifestCompression m_manifestCompression;
    bool m_manifestCompressionHasBeenSet;

    HlsManifestDurationFormat m_manifestDurationFormat;
    bool m_manifestDurationFormatHasBeenSet;

    int m_minSegmentLength;
    bool m_minSegmentLengthHasBeenSet;

    HlsMode m_mode;
    bool m_modeHasBeenSet;

    HlsOutputSelection m_outputSelection;
    bool m_outputSelectionHasBeenSet;

    HlsProgramDateTime m_programDateTime;
    bool m_programDateTimeHasBeenSet;

    int m_programDateTimePeriod;
    bool m_programDateTimePeriodHasBeenSet;

    int m_segmentLength;
    bool m_segmentLengthHasBeenSet;

    HlsSegmentationMode m_segmentationMode;
    bool m_segmentationModeHasBeenSet;

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

    HlsTsFileMode m_tsFileMode;
    bool m_tsFileModeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
