/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcGatewayRouteRewrite.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRouteAction">AWS
   * API Reference</a></p>
   */
  class GrpcGatewayRouteAction
  {
  public:
    AWS_APPMESH_API GrpcGatewayRouteAction();
    AWS_APPMESH_API GrpcGatewayRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline const GrpcGatewayRouteRewrite& GetRewrite() const{ return m_rewrite; }

    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline bool RewriteHasBeenSet() const { return m_rewriteHasBeenSet; }

    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline void SetRewrite(const GrpcGatewayRouteRewrite& value) { m_rewriteHasBeenSet = true; m_rewrite = value; }

    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline void SetRewrite(GrpcGatewayRouteRewrite&& value) { m_rewriteHasBeenSet = true; m_rewrite = std::move(value); }

    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline GrpcGatewayRouteAction& WithRewrite(const GrpcGatewayRouteRewrite& value) { SetRewrite(value); return *this;}

    /**
     * <p>The gateway route action to rewrite.</p>
     */
    inline GrpcGatewayRouteAction& WithRewrite(GrpcGatewayRouteRewrite&& value) { SetRewrite(std::move(value)); return *this;}


    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline const GatewayRouteTarget& GetTarget() const{ return m_target; }

    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline void SetTarget(const GatewayRouteTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline void SetTarget(GatewayRouteTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline GrpcGatewayRouteAction& WithTarget(const GatewayRouteTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>An object that represents the target that traffic is routed to when a request
     * matches the gateway route.</p>
     */
    inline GrpcGatewayRouteAction& WithTarget(GatewayRouteTarget&& value) { SetTarget(std::move(value)); return *this;}

  private:

    GrpcGatewayRouteRewrite m_rewrite;
    bool m_rewriteHasBeenSet = false;

    GatewayRouteTarget m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
