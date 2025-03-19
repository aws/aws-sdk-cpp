/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteVirtualService.h>
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
   * <p>An object that represents a gateway route target.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteTarget">AWS
   * API Reference</a></p>
   */
  class GatewayRouteTarget
  {
  public:
    AWS_APPMESH_API GatewayRouteTarget() = default;
    AWS_APPMESH_API GatewayRouteTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The port number of the gateway route target.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline GatewayRouteTarget& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline const GatewayRouteVirtualService& GetVirtualService() const { return m_virtualService; }
    inline bool VirtualServiceHasBeenSet() const { return m_virtualServiceHasBeenSet; }
    template<typename VirtualServiceT = GatewayRouteVirtualService>
    void SetVirtualService(VirtualServiceT&& value) { m_virtualServiceHasBeenSet = true; m_virtualService = std::forward<VirtualServiceT>(value); }
    template<typename VirtualServiceT = GatewayRouteVirtualService>
    GatewayRouteTarget& WithVirtualService(VirtualServiceT&& value) { SetVirtualService(std::forward<VirtualServiceT>(value)); return *this;}
    ///@}
  private:

    int m_port{0};
    bool m_portHasBeenSet = false;

    GatewayRouteVirtualService m_virtualService;
    bool m_virtualServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
