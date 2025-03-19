/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HttpGatewayRouteRewrite.h>
#include <aws/appmesh/model/GatewayRouteTarget.h>
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
   * <p>An object that represents the action to take if a match is
   * determined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRouteAction">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRouteAction
  {
  public:
    AWS_APPMESH_API HttpGatewayRouteAction() = default;
    AWS_APPMESH_API HttpGatewayRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline const HttpGatewayRouteRewrite& GetRewrite() const { return m_rewrite; }
    inline bool RewriteHasBeenSet() const { return m_rewriteHasBeenSet; }
    template<typename RewriteT = HttpGatewayRouteRewrite>
    void SetRewrite(RewriteT&& value) { m_rewriteHasBeenSet = true; m_rewrite = std::forward<RewriteT>(value); }
    template<typename RewriteT = HttpGatewayRouteRewrite>
    HttpGatewayRouteAction& WithRewrite(RewriteT&& value) { SetRewrite(std::forward<RewriteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline const GatewayRouteTarget& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = GatewayRouteTarget>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = GatewayRouteTarget>
    HttpGatewayRouteAction& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    HttpGatewayRouteRewrite m_rewrite;
    bool m_rewriteHasBeenSet = false;

    GatewayRouteTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
