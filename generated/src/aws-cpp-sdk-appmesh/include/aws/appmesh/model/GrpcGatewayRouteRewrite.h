/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteHostnameRewrite.h>
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
   * <p>An object that represents the gateway route to rewrite.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRouteRewrite">AWS
   * API Reference</a></p>
   */
  class GrpcGatewayRouteRewrite
  {
  public:
    AWS_APPMESH_API GrpcGatewayRouteRewrite();
    AWS_APPMESH_API GrpcGatewayRouteRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRouteRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline const GatewayRouteHostnameRewrite& GetHostname() const{ return m_hostname; }

    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline void SetHostname(const GatewayRouteHostnameRewrite& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline void SetHostname(GatewayRouteHostnameRewrite&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline GrpcGatewayRouteRewrite& WithHostname(const GatewayRouteHostnameRewrite& value) { SetHostname(value); return *this;}

    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline GrpcGatewayRouteRewrite& WithHostname(GatewayRouteHostnameRewrite&& value) { SetHostname(std::move(value)); return *this;}

  private:

    GatewayRouteHostnameRewrite m_hostname;
    bool m_hostnameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
