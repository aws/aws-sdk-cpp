/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HttpGatewayRouteAction.h>
#include <aws/appmesh/model/HttpGatewayRouteMatch.h>
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
   * <p>An object that represents an HTTP gateway route.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpGatewayRoute">AWS
   * API Reference</a></p>
   */
  class HttpGatewayRoute
  {
  public:
    AWS_APPMESH_API HttpGatewayRoute();
    AWS_APPMESH_API HttpGatewayRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpGatewayRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const HttpGatewayRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(const HttpGatewayRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(HttpGatewayRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline HttpGatewayRoute& WithAction(const HttpGatewayRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline HttpGatewayRoute& WithAction(HttpGatewayRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const HttpGatewayRouteMatch& GetMatch() const{ return m_match; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(const HttpGatewayRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(HttpGatewayRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline HttpGatewayRoute& WithMatch(const HttpGatewayRouteMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline HttpGatewayRoute& WithMatch(HttpGatewayRouteMatch&& value) { SetMatch(std::move(value)); return *this;}

  private:

    HttpGatewayRouteAction m_action;
    bool m_actionHasBeenSet = false;

    HttpGatewayRouteMatch m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
