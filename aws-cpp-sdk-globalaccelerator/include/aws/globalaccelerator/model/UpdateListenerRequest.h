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
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/Protocol.h>
#include <aws/globalaccelerator/model/ClientAffinity.h>
#include <aws/globalaccelerator/model/PortRange.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AWS_GLOBALACCELERATOR_API UpdateListenerRequest : public GlobalAcceleratorRequest
  {
  public:
    UpdateListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateListener"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline UpdateListenerRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline UpdateListenerRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to update.</p>
     */
    inline UpdateListenerRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}


    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline const Aws::Vector<PortRange>& GetPortRanges() const{ return m_portRanges; }

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline bool PortRangesHasBeenSet() const { return m_portRangesHasBeenSet; }

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline void SetPortRanges(const Aws::Vector<PortRange>& value) { m_portRangesHasBeenSet = true; m_portRanges = value; }

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline void SetPortRanges(Aws::Vector<PortRange>&& value) { m_portRangesHasBeenSet = true; m_portRanges = std::move(value); }

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline UpdateListenerRequest& WithPortRanges(const Aws::Vector<PortRange>& value) { SetPortRanges(value); return *this;}

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline UpdateListenerRequest& WithPortRanges(Aws::Vector<PortRange>&& value) { SetPortRanges(std::move(value)); return *this;}

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline UpdateListenerRequest& AddPortRanges(const PortRange& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(value); return *this; }

    /**
     * <p>The updated list of port ranges for the connections from clients to the
     * accelerator.</p>
     */
    inline UpdateListenerRequest& AddPortRanges(PortRange&& value) { m_portRangesHasBeenSet = true; m_portRanges.push_back(std::move(value)); return *this; }


    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline UpdateListenerRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The updated protocol for the connections from clients to the accelerator.</p>
     */
    inline UpdateListenerRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline const ClientAffinity& GetClientAffinity() const{ return m_clientAffinity; }

    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline bool ClientAffinityHasBeenSet() const { return m_clientAffinityHasBeenSet; }

    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline void SetClientAffinity(const ClientAffinity& value) { m_clientAffinityHasBeenSet = true; m_clientAffinity = value; }

    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline void SetClientAffinity(ClientAffinity&& value) { m_clientAffinityHasBeenSet = true; m_clientAffinity = std::move(value); }

    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline UpdateListenerRequest& WithClientAffinity(const ClientAffinity& value) { SetClientAffinity(value); return *this;}

    /**
     * <p>Client affinity lets you direct all requests from a user to the same
     * endpoint, if you have stateful applications, regardless of the port and protocol
     * of the client request. Clienty affinity gives you control over whether to always
     * route each client to the same specific endpoint.</p> <p>AWS Global Accelerator
     * uses a consistent-flow hashing algorithm to choose the optimal endpoint for a
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
    inline UpdateListenerRequest& WithClientAffinity(ClientAffinity&& value) { SetClientAffinity(std::move(value)); return *this;}

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet;

    Aws::Vector<PortRange> m_portRanges;
    bool m_portRangesHasBeenSet;

    Protocol m_protocol;
    bool m_protocolHasBeenSet;

    ClientAffinity m_clientAffinity;
    bool m_clientAffinityHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
