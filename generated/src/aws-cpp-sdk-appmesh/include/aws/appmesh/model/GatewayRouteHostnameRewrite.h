﻿/**
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
  class GatewayRouteHostnameRewrite
  {
  public:
    AWS_APPMESH_API GatewayRouteHostnameRewrite() = default;
    AWS_APPMESH_API GatewayRouteHostnameRewrite(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GatewayRouteHostnameRewrite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default target host name to write to.</p>
     */
    inline DefaultGatewayRouteRewrite GetDefaultTargetHostname() const { return m_defaultTargetHostname; }
    inline bool DefaultTargetHostnameHasBeenSet() const { return m_defaultTargetHostnameHasBeenSet; }
    inline void SetDefaultTargetHostname(DefaultGatewayRouteRewrite value) { m_defaultTargetHostnameHasBeenSet = true; m_defaultTargetHostname = value; }
    inline GatewayRouteHostnameRewrite& WithDefaultTargetHostname(DefaultGatewayRouteRewrite value) { SetDefaultTargetHostname(value); return *this;}
    ///@}
  private:

    DefaultGatewayRouteRewrite m_defaultTargetHostname{DefaultGatewayRouteRewrite::NOT_SET};
    bool m_defaultTargetHostnameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
