/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs/model/ChannelLatencyMode.h>
#include <aws/ivs/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class AWS_IVS_API CreateChannelRequest : public IVSRequest
  {
  public:
    CreateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateChannel"; }

    Aws::String SerializePayload() const override;


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
    inline CreateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline CreateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Channel name.</p>
     */
    inline CreateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateChannelRequest& WithLatencyMode(const ChannelLatencyMode& value) { SetLatencyMode(value); return *this;}

    /**
     * <p>Channel latency mode. Default: <code>LOW</code>.</p>
     */
    inline CreateChannelRequest& WithLatencyMode(ChannelLatencyMode&& value) { SetLatencyMode(std::move(value)); return *this;}


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
    inline CreateChannelRequest& WithType(const ChannelType& value) { SetType(value); return *this;}

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
    inline CreateChannelRequest& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Whether the channel is authorized. Default: <code>false</code>.</p>
     */
    inline bool GetAuthorized() const{ return m_authorized; }

    /**
     * <p>Whether the channel is authorized. Default: <code>false</code>.</p>
     */
    inline bool AuthorizedHasBeenSet() const { return m_authorizedHasBeenSet; }

    /**
     * <p>Whether the channel is authorized. Default: <code>false</code>.</p>
     */
    inline void SetAuthorized(bool value) { m_authorizedHasBeenSet = true; m_authorized = value; }

    /**
     * <p>Whether the channel is authorized. Default: <code>false</code>.</p>
     */
    inline CreateChannelRequest& WithAuthorized(bool value) { SetAuthorized(value); return *this;}


    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>See <a>Channel$tags</a>.</p>
     */
    inline CreateChannelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ChannelLatencyMode m_latencyMode;
    bool m_latencyModeHasBeenSet;

    ChannelType m_type;
    bool m_typeHasBeenSet;

    bool m_authorized;
    bool m_authorizedHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
