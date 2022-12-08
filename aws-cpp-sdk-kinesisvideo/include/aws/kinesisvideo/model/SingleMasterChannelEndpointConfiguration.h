/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisvideo/model/ChannelRole.h>
#include <aws/kinesisvideo/model/ChannelProtocol.h>
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
   * <p>An object that contains the endpoint configuration for the
   * <code>SINGLE_MASTER</code> channel type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisvideo-2017-09-30/SingleMasterChannelEndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class SingleMasterChannelEndpointConfiguration
  {
  public:
    AWS_KINESISVIDEO_API SingleMasterChannelEndpointConfiguration();
    AWS_KINESISVIDEO_API SingleMasterChannelEndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API SingleMasterChannelEndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline const Aws::Vector<ChannelProtocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline void SetProtocols(const Aws::Vector<ChannelProtocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline void SetProtocols(Aws::Vector<ChannelProtocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline SingleMasterChannelEndpointConfiguration& WithProtocols(const Aws::Vector<ChannelProtocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline SingleMasterChannelEndpointConfiguration& WithProtocols(Aws::Vector<ChannelProtocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline SingleMasterChannelEndpointConfiguration& AddProtocols(const ChannelProtocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>This property is used to determine the nature of communication over this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>WSS</code> is specified,
     * this API returns a websocket endpoint. If <code>HTTPS</code> is specified, this
     * API returns an <code>HTTPS</code> endpoint.</p>
     */
    inline SingleMasterChannelEndpointConfiguration& AddProtocols(ChannelProtocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }


    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline const ChannelRole& GetRole() const{ return m_role; }

    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline void SetRole(const ChannelRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline void SetRole(ChannelRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline SingleMasterChannelEndpointConfiguration& WithRole(const ChannelRole& value) { SetRole(value); return *this;}

    /**
     * <p>This property is used to determine messaging permissions in this
     * <code>SINGLE_MASTER</code> signaling channel. If <code>MASTER</code> is
     * specified, this API returns an endpoint that a client can use to receive offers
     * from and send answers to any of the viewers on this signaling channel. If
     * <code>VIEWER</code> is specified, this API returns an endpoint that a client can
     * use only to send offers to another <code>MASTER</code> client on this signaling
     * channel. </p>
     */
    inline SingleMasterChannelEndpointConfiguration& WithRole(ChannelRole&& value) { SetRole(std::move(value)); return *this;}

  private:

    Aws::Vector<ChannelProtocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    ChannelRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
