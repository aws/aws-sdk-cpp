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
    AWS_APPMESH_API GatewayRouteTarget();
    AWS_APPMESH_API GatewayRouteTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The port number of the gateway route target.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number of the gateway route target.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number of the gateway route target.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number of the gateway route target.</p>
     */
    inline GatewayRouteTarget& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline const GatewayRouteVirtualService& GetVirtualService() const{ return m_virtualService; }

    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline bool VirtualServiceHasBeenSet() const { return m_virtualServiceHasBeenSet; }

    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline void SetVirtualService(const GatewayRouteVirtualService& value) { m_virtualServiceHasBeenSet = true; m_virtualService = value; }

    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline void SetVirtualService(GatewayRouteVirtualService&& value) { m_virtualServiceHasBeenSet = true; m_virtualService = std::move(value); }

    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline GatewayRouteTarget& WithVirtualService(const GatewayRouteVirtualService& value) { SetVirtualService(value); return *this;}

    /**
     * <p>An object that represents a virtual service gateway route target.</p>
     */
    inline GatewayRouteTarget& WithVirtualService(GatewayRouteVirtualService&& value) { SetVirtualService(std::move(value)); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;

    GatewayRouteVirtualService m_virtualService;
    bool m_virtualServiceHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
