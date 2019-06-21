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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/AdMarkers.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/PlaylistType.h>
#include <aws/mediapackage/model/__AdTriggersElement.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A HTTP Live Streaming (HLS) manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsManifestCreateOrUpdateParameters">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API HlsManifestCreateOrUpdateParameters
  {
  public:
    HlsManifestCreateOrUpdateParameters();
    HlsManifestCreateOrUpdateParameters(Aws::Utils::Json::JsonView jsonValue);
    HlsManifestCreateOrUpdateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline HlsManifestCreateOrUpdateParameters& WithAdMarkers(const AdMarkers& value) { SetAdMarkers(value); return *this;}

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
    inline HlsManifestCreateOrUpdateParameters& WithAdMarkers(AdMarkers&& value) { SetAdMarkers(std::move(value)); return *this;}


    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const{ return m_adTriggers; }

    
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }

    
    inline void SetAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { m_adTriggersHasBeenSet = true; m_adTriggers = value; }

    
    inline void SetAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::move(value); }

    
    inline HlsManifestCreateOrUpdateParameters& WithAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { SetAdTriggers(value); return *this;}

    
    inline HlsManifestCreateOrUpdateParameters& WithAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { SetAdTriggers(std::move(value)); return *this;}

    
    inline HlsManifestCreateOrUpdateParameters& AddAdTriggers(const __AdTriggersElement& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }

    
    inline HlsManifestCreateOrUpdateParameters& AddAdTriggers(__AdTriggersElement&& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(std::move(value)); return *this; }


    
    inline const AdsOnDeliveryRestrictions& GetAdsOnDeliveryRestrictions() const{ return m_adsOnDeliveryRestrictions; }

    
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }

    
    inline void SetAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }

    
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = std::move(value); }

    
    inline HlsManifestCreateOrUpdateParameters& WithAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { SetAdsOnDeliveryRestrictions(value); return *this;}

    
    inline HlsManifestCreateOrUpdateParameters& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { SetAdsOnDeliveryRestrictions(std::move(value)); return *this;}


    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline HlsManifestCreateOrUpdateParameters& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline HlsManifestCreateOrUpdateParameters& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the manifest. The ID must be unique within the OriginEndpoint and it
     * cannot be changed after it is created.
     */
    inline HlsManifestCreateOrUpdateParameters& WithId(const char* value) { SetId(value); return *this;}


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
    inline HlsManifestCreateOrUpdateParameters& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}


    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * An optional short string appended to the end of the OriginEndpoint URL. If not
     * specified, defaults to the manifestName for the OriginEndpoint.
     */
    inline HlsManifestCreateOrUpdateParameters& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline const PlaylistType& GetPlaylistType() const{ return m_playlistType; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline bool PlaylistTypeHasBeenSet() const { return m_playlistTypeHasBeenSet; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline void SetPlaylistType(const PlaylistType& value) { m_playlistTypeHasBeenSet = true; m_playlistType = value; }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline void SetPlaylistType(PlaylistType&& value) { m_playlistTypeHasBeenSet = true; m_playlistType = std::move(value); }

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistType(const PlaylistType& value) { SetPlaylistType(value); return *this;}

    /**
     * The HTTP Live Streaming (HLS) playlist type.
When either "EVENT" or "VOD" is
     * specified, a corresponding EXT-X-PLAYLIST-TYPE
entry will be included in the
     * media playlist.

     */
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistType(PlaylistType&& value) { SetPlaylistType(std::move(value)); return *this;}


    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline int GetPlaylistWindowSeconds() const{ return m_playlistWindowSeconds; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline bool PlaylistWindowSecondsHasBeenSet() const { return m_playlistWindowSecondsHasBeenSet; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline void SetPlaylistWindowSeconds(int value) { m_playlistWindowSecondsHasBeenSet = true; m_playlistWindowSeconds = value; }

    /**
     * Time window (in seconds) contained in each parent manifest.
     */
    inline HlsManifestCreateOrUpdateParameters& WithPlaylistWindowSeconds(int value) { SetPlaylistWindowSeconds(value); return *this;}


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
    inline HlsManifestCreateOrUpdateParameters& WithProgramDateTimeIntervalSeconds(int value) { SetProgramDateTimeIntervalSeconds(value); return *this;}

  private:

    AdMarkers m_adMarkers;
    bool m_adMarkersHasBeenSet;

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions;
    bool m_adsOnDeliveryRestrictionsHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet;

    PlaylistType m_playlistType;
    bool m_playlistTypeHasBeenSet;

    int m_playlistWindowSeconds;
    bool m_playlistWindowSecondsHasBeenSet;

    int m_programDateTimeIntervalSeconds;
    bool m_programDateTimeIntervalSecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
