/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/DashPlaylistSettings.h>
#include <aws/mediatailor/model/HlsPlaylistSettings.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>This response includes only the "property" : "type" property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ResponseOutputItem">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API ResponseOutputItem
  {
  public:
    ResponseOutputItem();
    ResponseOutputItem(Aws::Utils::Json::JsonView jsonValue);
    ResponseOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline const DashPlaylistSettings& GetDashPlaylistSettings() const{ return m_dashPlaylistSettings; }

    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline bool DashPlaylistSettingsHasBeenSet() const { return m_dashPlaylistSettingsHasBeenSet; }

    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline void SetDashPlaylistSettings(const DashPlaylistSettings& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = value; }

    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline void SetDashPlaylistSettings(DashPlaylistSettings&& value) { m_dashPlaylistSettingsHasBeenSet = true; m_dashPlaylistSettings = std::move(value); }

    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline ResponseOutputItem& WithDashPlaylistSettings(const DashPlaylistSettings& value) { SetDashPlaylistSettings(value); return *this;}

    /**
     * <p>DASH manifest configuration settings.</p>
     */
    inline ResponseOutputItem& WithDashPlaylistSettings(DashPlaylistSettings&& value) { SetDashPlaylistSettings(std::move(value)); return *this;}


    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline const HlsPlaylistSettings& GetHlsPlaylistSettings() const{ return m_hlsPlaylistSettings; }

    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline bool HlsPlaylistSettingsHasBeenSet() const { return m_hlsPlaylistSettingsHasBeenSet; }

    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline void SetHlsPlaylistSettings(const HlsPlaylistSettings& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = value; }

    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline void SetHlsPlaylistSettings(HlsPlaylistSettings&& value) { m_hlsPlaylistSettingsHasBeenSet = true; m_hlsPlaylistSettings = std::move(value); }

    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline ResponseOutputItem& WithHlsPlaylistSettings(const HlsPlaylistSettings& value) { SetHlsPlaylistSettings(value); return *this;}

    /**
     * <p>HLS manifest configuration settings.</p>
     */
    inline ResponseOutputItem& WithHlsPlaylistSettings(HlsPlaylistSettings&& value) { SetHlsPlaylistSettings(std::move(value)); return *this;}


    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline ResponseOutputItem& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline ResponseOutputItem& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * <p>The name of the manifest for the channel that will appear in the channel
     * output's playback URL.</p>
     */
    inline ResponseOutputItem& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const{ return m_playbackUrl; }

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline void SetPlaybackUrl(const Aws::String& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = value; }

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline void SetPlaybackUrl(Aws::String&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::move(value); }

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline void SetPlaybackUrl(const char* value) { m_playbackUrlHasBeenSet = true; m_playbackUrl.assign(value); }

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline ResponseOutputItem& WithPlaybackUrl(const Aws::String& value) { SetPlaybackUrl(value); return *this;}

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline ResponseOutputItem& WithPlaybackUrl(Aws::String&& value) { SetPlaybackUrl(std::move(value)); return *this;}

    /**
     * <p>The URL used for playback by content players.</p>
     */
    inline ResponseOutputItem& WithPlaybackUrl(const char* value) { SetPlaybackUrl(value); return *this;}


    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline const Aws::String& GetSourceGroup() const{ return m_sourceGroup; }

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline void SetSourceGroup(const Aws::String& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = value; }

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline void SetSourceGroup(Aws::String&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::move(value); }

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline void SetSourceGroup(const char* value) { m_sourceGroupHasBeenSet = true; m_sourceGroup.assign(value); }

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline ResponseOutputItem& WithSourceGroup(const Aws::String& value) { SetSourceGroup(value); return *this;}

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline ResponseOutputItem& WithSourceGroup(Aws::String&& value) { SetSourceGroup(std::move(value)); return *this;}

    /**
     * <p>A string used to associate a package configuration source group with a
     * channel output.</p>
     */
    inline ResponseOutputItem& WithSourceGroup(const char* value) { SetSourceGroup(value); return *this;}

  private:

    DashPlaylistSettings m_dashPlaylistSettings;
    bool m_dashPlaylistSettingsHasBeenSet;

    HlsPlaylistSettings m_hlsPlaylistSettings;
    bool m_hlsPlaylistSettingsHasBeenSet;

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet;

    Aws::String m_sourceGroup;
    bool m_sourceGroupHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
