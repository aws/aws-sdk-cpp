/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/DefaultGatewayRouteRewrite.h>
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
   * <p>An object representing the gateway route host name to rewrite.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GatewayRouteHostnameRewrite">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API GatewayRouteHostnameRewrite
  {
  public:
    GatewayRouteHostnameRewrite();
    GatewayRouteHostnameRewrite(Aws::Utils::Json::JsonView jsonValue);
    GatewayRouteHostnameRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default target host name to write to.</p>
     */
    inline const DefaultGatewayRouteRewrite& GetDefaultTargetHostname() const{ return m_defaultTargetHostname; }

    /**
     * <p>The default target host name to write to.</p>
     */
    inline bool DefaultTargetHostnameHasBeenSet() const { return m_defaultTargetHostnameHasBeenSet; }

    /**
     * <p>The default target host name to write to.</p>
     */
    inline void SetDefaultTargetHostname(const DefaultGatewayRouteRewrite& value) { m_defaultTargetHostnameHasBeenSet = true; m_defaultTargetHostname = value; }

    /**
     * <p>The default target host name to write to.</p>
     */
    inline void SetDefaultTargetHostname(DefaultGatewayRouteRewrite&& value) { m_defaultTargetHostnameHasBeenSet = true; m_defaultTargetHostname = std::move(value); }

    /**
     * <p>The default target host name to write to.</p>
     */
    inline GatewayRouteHostnameRewrite& WithDefaultTargetHostname(const DefaultGatewayRouteRewrite& value) { SetDefaultTargetHostname(value); return *this;}

    /**
     * <p>The default target host name to write to.</p>
     */
    inline GatewayRouteHostnameRewrite& WithDefaultTargetHostname(DefaultGatewayRouteRewrite&& value) { SetDefaultTargetHostname(std::move(value)); return *this;}

  private:

    DefaultGatewayRouteRewrite m_defaultTargetHostname;
    bool m_defaultTargetHostnameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
