/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ChannelProtocol.h>
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
namespace KinesisVideo
{
namespace Model
{

  /**
   * <p>An object that describes the endpoint of the signaling channel returned by
   * the <code>GetSignalingChannelEndpoint</code> API.</p> <p>The media server
   * endpoint will correspond to the <code>WEBRTC</code> Protocol.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/ResourceEndpointListItem">AWS
   * API Reference</a></p>
   */
  class ResourceEndpointListItem
  {
  public:
    AWS_KINESISVIDEO_API ResourceEndpointListItem();
    AWS_KINESISVIDEO_API ResourceEndpointListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ResourceEndpointListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol of the signaling channel returned by the
     * <code>GetSignalingChannelEndpoint</code> API.</p>
     */
    inline const ChannelProtocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ChannelProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ChannelProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline ResourceEndpointListItem& WithProtocol(const ChannelProtocol& value) { SetProtocol(value); return *this;}
    inline ResourceEndpointListItem& WithProtocol(ChannelProtocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the signaling channel returned by the
     * <code>GetSignalingChannelEndpoint</code> API.</p>
     */
    inline const Aws::String& GetResourceEndpoint() const{ return m_resourceEndpoint; }
    inline bool ResourceEndpointHasBeenSet() const { return m_resourceEndpointHasBeenSet; }
    inline void SetResourceEndpoint(const Aws::String& value) { m_resourceEndpointHasBeenSet = true; m_resourceEndpoint = value; }
    inline void SetResourceEndpoint(Aws::String&& value) { m_resourceEndpointHasBeenSet = true; m_resourceEndpoint = std::move(value); }
    inline void SetResourceEndpoint(const char* value) { m_resourceEndpointHasBeenSet = true; m_resourceEndpoint.assign(value); }
    inline ResourceEndpointListItem& WithResourceEndpoint(const Aws::String& value) { SetResourceEndpoint(value); return *this;}
    inline ResourceEndpointListItem& WithResourceEndpoint(Aws::String&& value) { SetResourceEndpoint(std::move(value)); return *this;}
    inline ResourceEndpointListItem& WithResourceEndpoint(const char* value) { SetResourceEndpoint(value); return *this;}
    ///@}
  private:

    ChannelProtocol m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_resourceEndpoint;
    bool m_resourceEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
