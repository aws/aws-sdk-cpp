/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/PortProtocol.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/PortMapping">AWS
   * API Reference</a></p>
   */
  class PortMapping
  {
  public:
    AWS_APPMESH_API PortMapping() = default;
    AWS_APPMESH_API PortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API PortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port used for the port mapping.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline PortMapping& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used for the port mapping. Specify one protocol.</p>
     */
    inline PortProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(PortProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline PortMapping& WithProtocol(PortProtocol value) { SetProtocol(value); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    PortProtocol m_protocol{PortProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
