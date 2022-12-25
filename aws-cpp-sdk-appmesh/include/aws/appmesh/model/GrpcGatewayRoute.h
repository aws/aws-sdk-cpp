/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcGatewayRouteAction.h>
#include <aws/appmesh/model/GrpcGatewayRouteMatch.h>
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
   * <p>An object that represents a gRPC gateway route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcGatewayRoute">AWS
   * API Reference</a></p>
   */
  class GrpcGatewayRoute
  {
  public:
    AWS_APPMESH_API GrpcGatewayRoute();
    AWS_APPMESH_API GrpcGatewayRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcGatewayRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const GrpcGatewayRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(const GrpcGatewayRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(GrpcGatewayRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline GrpcGatewayRoute& WithAction(const GrpcGatewayRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline GrpcGatewayRoute& WithAction(GrpcGatewayRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const GrpcGatewayRouteMatch& GetMatch() const{ return m_match; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(const GrpcGatewayRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(GrpcGatewayRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline GrpcGatewayRoute& WithMatch(const GrpcGatewayRouteMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline GrpcGatewayRoute& WithMatch(GrpcGatewayRouteMatch&& value) { SetMatch(std::move(value)); return *this;}

  private:

    GrpcGatewayRouteAction m_action;
    bool m_actionHasBeenSet = false;

    GrpcGatewayRouteMatch m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
