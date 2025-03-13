/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/OriginationRouteProtocol.h>
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
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>Origination routes define call distribution properties for your SIP hosts to
   * receive inbound calls using an Amazon Chime SDK Voice Connector. Limit: Ten
   * origination routes for each Voice Connector.</p>  <p>The parameters listed
   * below are not required, but you must use at least one.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/OriginationRoute">AWS
   * API Reference</a></p>
   */
  class OriginationRoute
  {
  public:
    AWS_CHIMESDKVOICE_API OriginationRoute() = default;
    AWS_CHIMESDKVOICE_API OriginationRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API OriginationRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The FQDN or IP address to contact for origination traffic.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    OriginationRoute& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The designated origination route port. Defaults to 5060.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline OriginationRoute& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use for the origination route. Encryption-enabled Amazon
     * Chime SDK Voice Connectors use TCP protocol by default.</p>
     */
    inline OriginationRouteProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(OriginationRouteProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline OriginationRoute& WithProtocol(OriginationRouteProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority associated with the host, with 1 being the highest priority.
     * Higher priority hosts are attempted first.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline OriginationRoute& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight assigned to an origination route. When hosts have equal priority,
     * calls are distributed between them based on their relative weights.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline OriginationRoute& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    OriginationRouteProtocol m_protocol{OriginationRouteProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
