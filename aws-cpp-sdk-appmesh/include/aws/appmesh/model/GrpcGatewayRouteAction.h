/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
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
  class AWS_APPMESH_API GrpcGatewayRouteAction
  {
  public:
    GrpcGatewayRouteAction();
    GrpcGatewayRouteAction(Aws::Utils::Json::JsonView jsonValue);
    GrpcGatewayRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

    GatewayRouteTarget m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
