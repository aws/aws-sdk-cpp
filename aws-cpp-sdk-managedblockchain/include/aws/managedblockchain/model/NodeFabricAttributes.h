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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes of Hyperledger Fabric for a peer node on a Managed Blockchain
   * network that uses Hyperledger Fabric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeFabricAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API NodeFabricAttributes
  {
  public:
    NodeFabricAttributes();
    NodeFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    NodeFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline const Aws::String& GetPeerEndpoint() const{ return m_peerEndpoint; }

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline bool PeerEndpointHasBeenSet() const { return m_peerEndpointHasBeenSet; }

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline void SetPeerEndpoint(const Aws::String& value) { m_peerEndpointHasBeenSet = true; m_peerEndpoint = value; }

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline void SetPeerEndpoint(Aws::String&& value) { m_peerEndpointHasBeenSet = true; m_peerEndpoint = std::move(value); }

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline void SetPeerEndpoint(const char* value) { m_peerEndpointHasBeenSet = true; m_peerEndpoint.assign(value); }

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline NodeFabricAttributes& WithPeerEndpoint(const Aws::String& value) { SetPeerEndpoint(value); return *this;}

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline NodeFabricAttributes& WithPeerEndpoint(Aws::String&& value) { SetPeerEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline NodeFabricAttributes& WithPeerEndpoint(const char* value) { SetPeerEndpoint(value); return *this;}


    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline const Aws::String& GetPeerEventEndpoint() const{ return m_peerEventEndpoint; }

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline bool PeerEventEndpointHasBeenSet() const { return m_peerEventEndpointHasBeenSet; }

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline void SetPeerEventEndpoint(const Aws::String& value) { m_peerEventEndpointHasBeenSet = true; m_peerEventEndpoint = value; }

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline void SetPeerEventEndpoint(Aws::String&& value) { m_peerEventEndpointHasBeenSet = true; m_peerEventEndpoint = std::move(value); }

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline void SetPeerEventEndpoint(const char* value) { m_peerEventEndpointHasBeenSet = true; m_peerEventEndpoint.assign(value); }

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline NodeFabricAttributes& WithPeerEventEndpoint(const Aws::String& value) { SetPeerEventEndpoint(value); return *this;}

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline NodeFabricAttributes& WithPeerEventEndpoint(Aws::String&& value) { SetPeerEventEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline NodeFabricAttributes& WithPeerEventEndpoint(const char* value) { SetPeerEventEndpoint(value); return *this;}

  private:

    Aws::String m_peerEndpoint;
    bool m_peerEndpointHasBeenSet;

    Aws::String m_peerEventEndpoint;
    bool m_peerEventEndpointHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
