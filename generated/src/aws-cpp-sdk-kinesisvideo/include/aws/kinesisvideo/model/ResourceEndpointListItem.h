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
    AWS_KINESISVIDEO_API ResourceEndpointListItem() = default;
    AWS_KINESISVIDEO_API ResourceEndpointListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API ResourceEndpointListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The protocol of the signaling channel returned by the
     * <code>GetSignalingChannelEndpoint</code> API.</p>
     */
    inline ChannelProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ChannelProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ResourceEndpointListItem& WithProtocol(ChannelProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the signaling channel returned by the
     * <code>GetSignalingChannelEndpoint</code> API.</p>
     */
    inline const Aws::String& GetResourceEndpoint() const { return m_resourceEndpoint; }
    inline bool ResourceEndpointHasBeenSet() const { return m_resourceEndpointHasBeenSet; }
    template<typename ResourceEndpointT = Aws::String>
    void SetResourceEndpoint(ResourceEndpointT&& value) { m_resourceEndpointHasBeenSet = true; m_resourceEndpoint = std::forward<ResourceEndpointT>(value); }
    template<typename ResourceEndpointT = Aws::String>
    ResourceEndpointListItem& WithResourceEndpoint(ResourceEndpointT&& value) { SetResourceEndpoint(std::forward<ResourceEndpointT>(value)); return *this;}
    ///@}
  private:

    ChannelProtocol m_protocol{ChannelProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_resourceEndpoint;
    bool m_resourceEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
