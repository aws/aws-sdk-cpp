/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/ManifestLayout.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/mediapackage-vod/model/ScteMarkersSource.h>
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
   * A DASH manifest configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/DashManifest">AWS
   * API Reference</a></p>
   */
  class DashManifest
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DashManifest();
    AWS_MEDIAPACKAGEVOD_API DashManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API DashManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline const ManifestLayout& GetManifestLayout() const{ return m_manifestLayout; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline void SetManifestLayout(const ManifestLayout& value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline void SetManifestLayout(ManifestLayout&& value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = std::move(value); }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline DashManifest& WithManifestLayout(const ManifestLayout& value) { SetManifestLayout(value); return *this;}

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline DashManifest& WithManifestLayout(ManifestLayout&& value) { SetManifestLayout(std::move(value)); return *this;}


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
    inline DashManifest& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline DashManifest& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * An optional string to include in the name of the manifest.
     */
    inline DashManifest& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline DashManifest& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(const Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline void SetProfile(Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashManifest& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled.
     */
    inline DashManifest& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline const ScteMarkersSource& GetScteMarkersSource() const{ return m_scteMarkersSource; }

    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline bool ScteMarkersSourceHasBeenSet() const { return m_scteMarkersSourceHasBeenSet; }

    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline void SetScteMarkersSource(const ScteMarkersSource& value) { m_scteMarkersSourceHasBeenSet = true; m_scteMarkersSource = value; }

    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline void SetScteMarkersSource(ScteMarkersSource&& value) { m_scteMarkersSourceHasBeenSet = true; m_scteMarkersSource = std::move(value); }

    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline DashManifest& WithScteMarkersSource(const ScteMarkersSource& value) { SetScteMarkersSource(value); return *this;}

    /**
     * The source of scte markers used. When set to SEGMENTS, the scte markers are
     * sourced from the segments of the ingested content. When set to MANIFEST, the
     * scte markers are sourced from the manifest of the ingested content. The MANIFEST
     * value is compatible with source HLS playlists using the SCTE-35 Enhanced syntax
     * (#EXT-OATCLS-SCTE35 tags). SCTE-35 Elemental and SCTE-35 Daterange syntaxes are
     * not supported with this option.
     */
    inline DashManifest& WithScteMarkersSource(ScteMarkersSource&& value) { SetScteMarkersSource(std::move(value)); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline DashManifest& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline DashManifest& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}

  private:

    ManifestLayout m_manifestLayout;
    bool m_manifestLayoutHasBeenSet = false;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet = false;

    Profile m_profile;
    bool m_profileHasBeenSet = false;

    ScteMarkersSource m_scteMarkersSource;
    bool m_scteMarkersSourceHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
