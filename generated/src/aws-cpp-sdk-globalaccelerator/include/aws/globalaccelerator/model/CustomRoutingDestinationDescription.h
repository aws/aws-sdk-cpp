/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/Protocol.h>
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
   * <p>For a custom routing accelerator, describes the port range and protocol for
   * all endpoints (virtual private cloud subnets) in an endpoint group to accept
   * client traffic on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CustomRoutingDestinationDescription">AWS
   * API Reference</a></p>
   */
  class CustomRoutingDestinationDescription
  {
  public:
    AWS_GLOBALACCELERATOR_API CustomRoutingDestinationDescription();
    AWS_GLOBALACCELERATOR_API CustomRoutingDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The first port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The first port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The first port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The first port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline CustomRoutingDestinationDescription& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The last port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The last port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The last port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The last port, inclusive, in the range of ports for the endpoint group that
     * is associated with a custom routing accelerator.</p>
     */
    inline CustomRoutingDestinationDescription& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline CustomRoutingDestinationDescription& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline CustomRoutingDestinationDescription& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline CustomRoutingDestinationDescription& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocol for the endpoint group that is associated with a custom routing
     * accelerator. The protocol can be either TCP or UDP.</p>
     */
    inline CustomRoutingDestinationDescription& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
