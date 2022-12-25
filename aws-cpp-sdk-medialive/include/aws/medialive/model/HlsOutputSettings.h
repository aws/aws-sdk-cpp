/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsH265PackagingType.h>
#include <aws/medialive/model/HlsSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Hls Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsOutputSettings">AWS
   * API Reference</a></p>
   */
  class HlsOutputSettings
  {
  public:
    AWS_MEDIALIVE_API HlsOutputSettings();
    AWS_MEDIALIVE_API HlsOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline const HlsH265PackagingType& GetH265PackagingType() const{ return m_h265PackagingType; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline bool H265PackagingTypeHasBeenSet() const { return m_h265PackagingTypeHasBeenSet; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline void SetH265PackagingType(const HlsH265PackagingType& value) { m_h265PackagingTypeHasBeenSet = true; m_h265PackagingType = value; }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline void SetH265PackagingType(HlsH265PackagingType&& value) { m_h265PackagingTypeHasBeenSet = true; m_h265PackagingType = std::move(value); }

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline HlsOutputSettings& WithH265PackagingType(const HlsH265PackagingType& value) { SetH265PackagingType(value); return *this;}

    /**
     * Only applicable when this output is referencing an H.265 video
     * description.
Specifies whether MP4 segments should be packaged as HEV1 or HVC1.
     */
    inline HlsOutputSettings& WithH265PackagingType(HlsH265PackagingType&& value) { SetH265PackagingType(std::move(value)); return *this;}


    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline const HlsSettings& GetHlsSettings() const{ return m_hlsSettings; }

    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline bool HlsSettingsHasBeenSet() const { return m_hlsSettingsHasBeenSet; }

    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline void SetHlsSettings(const HlsSettings& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = value; }

    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline void SetHlsSettings(HlsSettings&& value) { m_hlsSettingsHasBeenSet = true; m_hlsSettings = std::move(value); }

    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline HlsOutputSettings& WithHlsSettings(const HlsSettings& value) { SetHlsSettings(value); return *this;}

    /**
     * Settings regarding the underlying stream. These settings are different for
     * audio-only outputs.
     */
    inline HlsOutputSettings& WithHlsSettings(HlsSettings&& value) { SetHlsSettings(std::move(value)); return *this;}


    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline const Aws::String& GetNameModifier() const{ return m_nameModifier; }

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline void SetNameModifier(const Aws::String& value) { m_nameModifierHasBeenSet = true; m_nameModifier = value; }

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline void SetNameModifier(Aws::String&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::move(value); }

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline void SetNameModifier(const char* value) { m_nameModifierHasBeenSet = true; m_nameModifier.assign(value); }

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline HlsOutputSettings& WithNameModifier(const Aws::String& value) { SetNameModifier(value); return *this;}

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline HlsOutputSettings& WithNameModifier(Aws::String&& value) { SetNameModifier(std::move(value)); return *this;}

    /**
     * String concatenated to the end of the destination filename. Accepts \"Format
     * Identifiers\":#formatIdentifierParameters.
     */
    inline HlsOutputSettings& WithNameModifier(const char* value) { SetNameModifier(value); return *this;}


    /**
     * String concatenated to end of segment filenames.
     */
    inline const Aws::String& GetSegmentModifier() const{ return m_segmentModifier; }

    /**
     * String concatenated to end of segment filenames.
     */
    inline bool SegmentModifierHasBeenSet() const { return m_segmentModifierHasBeenSet; }

    /**
     * String concatenated to end of segment filenames.
     */
    inline void SetSegmentModifier(const Aws::String& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = value; }

    /**
     * String concatenated to end of segment filenames.
     */
    inline void SetSegmentModifier(Aws::String&& value) { m_segmentModifierHasBeenSet = true; m_segmentModifier = std::move(value); }

    /**
     * String concatenated to end of segment filenames.
     */
    inline void SetSegmentModifier(const char* value) { m_segmentModifierHasBeenSet = true; m_segmentModifier.assign(value); }

    /**
     * String concatenated to end of segment filenames.
     */
    inline HlsOutputSettings& WithSegmentModifier(const Aws::String& value) { SetSegmentModifier(value); return *this;}

    /**
     * String concatenated to end of segment filenames.
     */
    inline HlsOutputSettings& WithSegmentModifier(Aws::String&& value) { SetSegmentModifier(std::move(value)); return *this;}

    /**
     * String concatenated to end of segment filenames.
     */
    inline HlsOutputSettings& WithSegmentModifier(const char* value) { SetSegmentModifier(value); return *this;}

  private:

    HlsH265PackagingType m_h265PackagingType;
    bool m_h265PackagingTypeHasBeenSet = false;

    HlsSettings m_hlsSettings;
    bool m_hlsSettingsHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;

    Aws::String m_segmentModifier;
    bool m_segmentModifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
