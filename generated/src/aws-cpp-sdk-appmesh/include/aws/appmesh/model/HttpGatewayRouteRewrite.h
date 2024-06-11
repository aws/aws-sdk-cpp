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
    AWS_APPMESH_API HttpGatewayRouteRewrite();
    AWS_APPMESH_API HttpGatewayRouteRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRouteRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name to rewrite.</p>
     */
    inline const GatewayRouteHostnameRewrite& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const GatewayRouteHostnameRewrite& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(GatewayRouteHostnameRewrite&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline HttpGatewayRouteRewrite& WithHostname(const GatewayRouteHostnameRewrite& value) { SetHostname(value); return *this;}
    inline HttpGatewayRouteRewrite& WithHostname(GatewayRouteHostnameRewrite&& value) { SetHostname(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to rewrite.</p>
     */
    inline const HttpGatewayRoutePathRewrite& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const HttpGatewayRoutePathRewrite& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(HttpGatewayRoutePathRewrite&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline HttpGatewayRouteRewrite& WithPath(const HttpGatewayRoutePathRewrite& value) { SetPath(value); return *this;}
    inline HttpGatewayRouteRewrite& WithPath(HttpGatewayRoutePathRewrite&& value) { SetPath(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified beginning characters to rewrite.</p>
     */
    inline const HttpGatewayRoutePrefixRewrite& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const HttpGatewayRoutePrefixRewrite& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(HttpGatewayRoutePrefixRewrite&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline HttpGatewayRouteRewrite& WithPrefix(const HttpGatewayRoutePrefixRewrite& value) { SetPrefix(value); return *this;}
    inline HttpGatewayRouteRewrite& WithPrefix(HttpGatewayRoutePrefixRewrite&& value) { SetPrefix(std::move(value)); return *this;}
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
