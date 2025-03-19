/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/Protocol.h>
#include <aws/globalaccelerator/model/ClientAffinity.h>
#include <aws/globalaccelerator/model/PortRange.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for a listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/Listener">AWS
   * API Reference</a></p>
   */
  class Listener
  {
  public:
    AWS_GLOBALACCELERATOR_API Listener() = default;
    AWS_GLOBALACCELERATOR_API Listener(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Listener& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    Listener& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const { return m_portRanges; }
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    void SetPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::forward<PortRangesT>(value); }
    template<typename PortRangesT = Aws::Vector<PortRange>>
    Listener& WithPortRanges(PortRangesT&& value) { SetPortRanges(std::forward<PortRangesT>(value)); return *this;}
    template<typename PortRangesT = PortRange>
    Listener& AddPortRanges(PortRangesT&& value) { m_portRangesHasBeenSet = true; m_portRanges.emplace_back(std::forward<PortRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol for the connections from clients to the accelerator.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline Listener& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Client affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>Global Accelerator uses
     * a consistent-flow hashing algorithm to choose the optimal endpoint for a
     * connection. If client affinity is <code>NONE</code>, Global Accelerator uses the
     * "five-tuple" (5-tuple) properties—source IP address, source port, destination IP
     * address, destination port, and protocol—to select the hash value, and then
     * chooses the best endpoint. However, with this setting, if someone uses different
     * ports to connect to Global Accelerator, their connections might not be always
     * routed to the same endpoint because the hash value changes. </p> <p>If you want
     * a given client to always be routed to the same endpoint, set client affinity to
     * <code>SOURCE_IP</code> instead. When you use the <code>SOURCE_IP</code> setting,
     * Global Accelerator uses the "two-tuple" (2-tuple) properties— source (client) IP
     * address and destination IP address—to select the hash value.</p> <p>The default
     * value is <code>NONE</code>.</p>
     */
    inline ClientAffinity GetClientAffinity() const { return m_clientAffinity; }
    inline bool ClientAffinityHasBeenSet() const { return m_clientAffinityHasBeenSet; }
    inline void SetClientAffinity(ClientAffinity value) { m_clientAffinityHasBeenSet = true; m_clientAffinity = value; }
    inline Listener& WithClientAffinity(ClientAffinity value) { SetClientAffinity(value); return *this;}
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::Vector<PortRange> m_portRanges;
    bool m_portRangesHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    ClientAffinity m_clientAffinity{ClientAffinity::NOT_SET};
    bool m_clientAffinityHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
