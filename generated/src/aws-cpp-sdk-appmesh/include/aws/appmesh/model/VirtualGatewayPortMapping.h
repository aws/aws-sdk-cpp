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
    AWS_APPMESH_API VirtualGatewayPortMapping() = default;
    AWS_APPMESH_API VirtualGatewayPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API VirtualGatewayPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port used for the port mapping. Specify one protocol.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline VirtualGatewayPortMapping& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the port mapping.</p>
     */
    inline VirtualGatewayPortProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(VirtualGatewayPortProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline VirtualGatewayPortMapping& WithProtocol(VirtualGatewayPortProtocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    VirtualGatewayPortProtocol m_protocol{VirtualGatewayPortProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
