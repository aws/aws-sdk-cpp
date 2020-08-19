/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/Channel">AWS API
   * Reference</a></p>
   */
  class AWS_IVS_API Channel
  {
  public:
    Channel();
    Channel(Aws::Utils::Json::JsonView jsonValue);
    Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Channel ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Channel ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Channel ARN.</p>
     */
    inline Channel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline Channel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Channel ARN.</p>
     */
    inline Channel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Channel name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Channel name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Channel name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Channel name.</p>
     */
    inline Channel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline Channel& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline Channel& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline const ChannelLatencyMode& GetLatencyMode() const{ return m_latencyMode; }

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline bool LatencyModeHasBeenSet() const { return m_latencyModeHasBeenSet; }

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline void SetLatencyMode(const ChannelLatencyMode& value) { m_latencyModeHasBeenSet = true; m_latencyMode = value; }

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline void SetLatencyMode(ChannelLatencyMode&& value) { m_latencyModeHasBeenSet = true; m_latencyMode = std::move(value); }

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline Channel& WithLatencyMode(const ChannelLatencyMode& value) { SetLatencyMode(value); return *this;}

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline Channel& WithLatencyMode(ChannelLatencyMode&& value) { SetLatencyMode(std::move(value)); return *this;}


    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline Channel& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>Channel type, which determines the allowable resolution and bitrate. <i>If
     * you exceed the allowable resolution or bitrate, the stream probably will
     * disconnect immediately.</i> Valid values:</p> <ul> <li> <p>
     * <code>STANDARD</code>: Multiple qualities are generated from the original input,
     * to automatically give viewers the best experience for their devices and network
     * conditions. Vertical resolution can be up to 1080 and bitrate can be up to 8.5
     * Mbps.</p> </li> <li> <p> <code>BASIC</code>: Amazon IVS delivers the original
     * input to viewers. The viewer’s video-quality choice is limited to the original
     * input. Vertical resolution can be up to 480 and bitrate can be up to 1.5
     * Mbps.</p> </li> </ul> <p>Default: <code>STANDARD</code>.</p>
     */
    inline Channel& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline const Aws::String& GetIngestEndpoint() const{ return m_ingestEndpoint; }

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline bool IngestEndpointHasBeenSet() const { return m_ingestEndpointHasBeenSet; }

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline void SetIngestEndpoint(const Aws::String& value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint = value; }

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline void SetIngestEndpoint(Aws::String&& value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint = std::move(value); }

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline void SetIngestEndpoint(const char* value) { m_ingestEndpointHasBeenSet = true; m_ingestEndpoint.assign(value); }

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline Channel& WithIngestEndpoint(const Aws::String& value) { SetIngestEndpoint(value); return *this;}

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline Channel& WithIngestEndpoint(Aws::String&& value) { SetIngestEndpoint(std::move(value)); return *this;}

    /**
     * <p>Channel ingest endpoint, part of the definition of an ingest server, used
     * when you set up streaming software.</p>
     */
    inline Channel& WithIngestEndpoint(const char* value) { SetIngestEndpoint(value); return *this;}


    /**
     * <p>Channel playback URL.</p>
     */
    inline const Aws::String& GetPlaybackUrl() const{ return m_playbackUrl; }

    /**
     * <p>Channel playback URL.</p>
     */
    inline bool PlaybackUrlHasBeenSet() const { return m_playbackUrlHasBeenSet; }

    /**
     * <p>Channel playback URL.</p>
     */
    inline void SetPlaybackUrl(const Aws::String& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = value; }

    /**
     * <p>Channel playback URL.</p>
     */
    inline void SetPlaybackUrl(Aws::String&& value) { m_playbackUrlHasBeenSet = true; m_playbackUrl = std::move(value); }

    /**
     * <p>Channel playback URL.</p>
     */
    inline void SetPlaybackUrl(const char* value) { m_playbackUrlHasBeenSet = true; m_playbackUrl.assign(value); }

    /**
     * <p>Channel playback URL.</p>
     */
    inline Channel& WithPlaybackUrl(const Aws::String& value) { SetPlaybackUrl(value); return *this;}

    /**
     * <p>Channel playback URL.</p>
     */
    inline Channel& WithPlaybackUrl(Aws::String&& value) { SetPlaybackUrl(std::move(value)); return *this;}

    /**
     * <p>Channel playback URL.</p>
     */
    inline Channel& WithPlaybackUrl(const char* value) { SetPlaybackUrl(value); return *this;}


    /**
     * <p>Whether the channel is authorized.</p>
     */
    inline bool GetAuthorized() const{ return m_authorized; }

    /**
     * <p>Whether the channel is authorized.</p>
     */
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }

    /**
     * <p>Whether the channel is authorized.</p>
     */
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }

    /**
     * <p>Whether the channel is authorized.</p>
     */
    inline Channel& WithAuthorized(bool value) { SetAuthorized(value); return *this;}


    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Array of 1-50 maps, each of the form <code>string:string
     * (key:value)</code>.</p>
     */
    inline Channel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ChannelLatencyMode m_latencyMode;
    bool m_latencyModeHasBeenSet;

    ChannelType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_ingestEndpoint;
    bool m_ingestEndpointHasBeenSet;

    Aws::String m_playbackUrl;
    bool m_playbackUrlHasBeenSet;

    bool m_authorized;
    bool m_authorizedHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
