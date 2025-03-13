/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GatewayRouteHostnameRewrite.h>
#include <aws/appmesh/model/HttpGatewayRoutePathRewrite.h>
#include <aws/appmesh/model/HttpGatewayRoutePrefixRewrite.h>
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
   * <p>An object representing the gateway route to rewrite.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRouteRewrite">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRouteRewrite
  {
  public:
    AWS_APPMESH_API HttpGatewayRouteRewrite() = default;
    AWS_APPMESH_API HttpGatewayRouteRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRouteRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name to rewrite.</p>
     */
    inline const GatewayRouteHostnameRewrite& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = GatewayRouteHostnameRewrite>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = GatewayRouteHostnameRewrite>
    HttpGatewayRouteRewrite& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to rewrite.</p>
     */
    inline const HttpGatewayRoutePathRewrite& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = HttpGatewayRoutePathRewrite>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = HttpGatewayRoutePathRewrite>
    HttpGatewayRouteRewrite& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified beginning characters to rewrite.</p>
     */
    inline const HttpGatewayRoutePrefixRewrite& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = HttpGatewayRoutePrefixRewrite>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = HttpGatewayRoutePrefixRewrite>
    HttpGatewayRouteRewrite& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    GatewayRouteHostnameRewrite m_hostname;
    bool m_hostnameHasBeenSet = false;

    HttpGatewayRoutePathRewrite m_path;
    bool m_pathHasBeenSet = false;

    HttpGatewayRoutePrefixRewrite m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
