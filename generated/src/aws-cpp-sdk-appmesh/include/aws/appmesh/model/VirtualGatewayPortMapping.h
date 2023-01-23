/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualGatewayPortProtocol.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents a port mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/VirtualGatewayPortMapping">AWS
   * API Reference</a></p>
   */
  class VirtualGatewayPortMapping
  {
  public:
    AWS_APPMESH_API VirtualGatewayPortMapping();
    AWS_APPMESH_API VirtualGatewayPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port used for the port mapping. Specify one protocol.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port used for the port mapping. Specify one protocol.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port used for the port mapping. Specify one protocol.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port used for the port mapping. Specify one protocol.</p>
     */
    inline VirtualGatewayPortMapping& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline const VirtualGatewayPortProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline void SetProtocol(const VirtualGatewayPortProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline void SetProtocol(VirtualGatewayPortProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline VirtualGatewayPortMapping& WithProtocol(const VirtualGatewayPortProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline VirtualGatewayPortMapping& WithProtocol(VirtualGatewayPortProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;

    VirtualGatewayPortProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
