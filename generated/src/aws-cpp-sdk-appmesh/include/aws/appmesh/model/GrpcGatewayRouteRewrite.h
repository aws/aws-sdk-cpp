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
    AWS_APPMESH_API GrpcGatewayRouteRewrite() = default;
    AWS_APPMESH_API GrpcGatewayRouteRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRouteRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the gateway route to rewrite.</p>
     */
    inline const GatewayRouteHostnameRewrite& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = GatewayRouteHostnameRewrite>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = GatewayRouteHostnameRewrite>
    GrpcGatewayRouteRewrite& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}
  private:

    GatewayRouteHostnameRewrite m_hostname;
    bool m_hostnameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
