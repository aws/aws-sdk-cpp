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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/AdMarkers.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/StreamSelection.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/HlsManifest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API HlsManifest
  {
  public:
    HlsManifest();
    HlsManifest(Aws::Utils::Json::JsonView jsonValue);
    HlsManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline const AdMarkers& GetAdMarkers() const{ return m_adMarkers; }

    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }

    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline void SetAdMarkers(const AdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }

    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline void SetAdMarkers(AdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }

    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline HlsManifest& WithAdMarkers(const AdMarkers& value) { SetAdMarkers(value); return *this;}

    /**
     * This setting controls how ad markers are included in the packaged
     * OriginEndpoint.
"NONE" will omit all SCTE-35 ad markers from the
     * output.
"PASSTHROUGH" causes the manifest to contain a copy of the SCTE-35
     * ad
markers (comments) taken directly from the input HTTP Live Streaming (HLS)
     * manifest.
"SCTE35_ENHANCED" generates ad markers and blackout tags based on
     * SCTE-35
messages in the input source.

     */
    inline HlsManifest& WithAdMarkers(AdMarkers&& value) { SetAdMarkers(std::move(value)); return *this;}


    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const{ return m_includeIframeOnlyStream; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline HlsManifest& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}


    /**
     * An optional string to include in the name of the manifest.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * An optional string to include in the name of the manifest.
     */
    inline HlsManifest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline HlsManifest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline HlsManifest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * The interval (in seconds) between each EXT-X-PROGRAM-DATE-TIME tag
inserted into
     * manifests. Additionally, when an interval is specified
ID3Timed Metadata
     * messages will be generated every 5 seconds using the
ingest time of the
     * content.
If the interval is not specified, or set to 0, then
no
     * EXT-X-PROGRAM-DATE-TIME tags will be inserted into manifests and no
ID3Timed
     * Metadata messages will be generated. Note that irrespective
of this parameter,
     * if any ID3 Timed Metadata is found in HTTP Live Streaming (HLS) input,
it will
     * be passed through to HLS output.

     */
    inline int GetProgramDateTimeIntervalSeconds() const{ return m_programDateTimeIntervalSeconds; }

    /**
     * The interval (in seconds) between each EXT-X-PROGRAM-DATE-TIME tag
inserted into
     * manifests. Additionally, when an interval is specified
ID3Timed Metadata
     * messages will be generated every 5 seconds using the
ingest time of the
     * content.
If the interval is not specified, or set to 0, then
no
     * EXT-X-PROGRAM-DATE-TIME tags will be inserted into manifests and no
ID3Timed
     * Metadata messages will be generated. Note that irrespective
of this parameter,
     * if any ID3 Timed Metadata is found in HTTP Live Streaming (HLS) input,
it will
     * be passed through to HLS output.

     */
    inline bool ProgramDateTimeIntervalSecondsHasBeenSet() const { return m_programDateTimeIntervalSecondsHasBeenSet; }

    /**
     * The interval (in seconds) between each EXT-X-PROGRAM-DATE-TIME tag
inserted into
     * manifests. Additionally, when an interval is specified
ID3Timed Metadata
     * messages will be generated every 5 seconds using the
ingest time of the
     * content.
If the interval is not specified, or set to 0, then
no
     * EXT-X-PROGRAM-DATE-TIME tags will be inserted into manifests and no
ID3Timed
     * Metadata messages will be generated. Note that irrespective
of this parameter,
     * if any ID3 Timed Metadata is found in HTTP Live Streaming (HLS) input,
it will
     * be passed through to HLS output.

     */
    inline void SetProgramDateTimeIntervalSeconds(int value) { m_programDateTimeIntervalSecondsHasBeenSet = true; m_programDateTimeIntervalSeconds = value; }

    /**
     * The interval (in seconds) between each EXT-X-PROGRAM-DATE-TIME tag
inserted into
     * manifests. Additionally, when an interval is specified
ID3Timed Metadata
     * messages will be generated every 5 seconds using the
ingest time of the
     * content.
If the interval is not specified, or set to 0, then
no
     * EXT-X-PROGRAM-DATE-TIME tags will be inserted into manifests and no
ID3Timed
     * Metadata messages will be generated. Note that irrespective
of this parameter,
     * if any ID3 Timed Metadata is found in HTTP Live Streaming (HLS) input,
it will
     * be passed through to HLS output.

     */
    inline HlsManifest& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}


    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool GetRepeatExtXKey() const{ return m_repeatExtXKey; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline bool RepeatExtXKeyHasBeenSet() const { return m_repeatExtXKeyHasBeenSet; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline void SetRepeatExtXKey(bool value) { m_repeatExtXKeyHasBeenSet = true; m_repeatExtXKey = value; }

    /**
     * When enabled, the EXT-X-KEY tag will be repeated in output manifests.
     */
    inline HlsManifest& WithRepeatExtXKey(bool value) { SetRepeatExtXKey(value); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline HlsManifest& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline HlsManifest& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    AdMarkers m_adMarkers;
    bool m_adMarkersHasBeenSet;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet;

    int m_programDateTimeIntervalSeconds;
    bool m_programDateTimeIntervalSecondsHasBeenSet;

    bool m_repeatExtXKey;
    bool m_repeatExtXKeyHasBeenSet;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
