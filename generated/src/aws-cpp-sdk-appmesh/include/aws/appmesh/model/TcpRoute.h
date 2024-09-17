/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/TcpRouteAction.h>
#include <aws/appmesh/model/TcpRouteMatch.h>
#include <aws/appmesh/model/TcpTimeout.h>
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
   * <p>An object that represents a TCP route type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/TcpRoute">AWS
   * API Reference</a></p>
   */
  class TcpRoute
  {
  public:
    AWS_APPMESH_API TcpRoute();
    AWS_APPMESH_API TcpRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API TcpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline const TcpRouteAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const TcpRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(TcpRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline TcpRoute& WithAction(const TcpRouteAction& value) { SetAction(value); return *this;}
    inline TcpRoute& WithAction(TcpRouteAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const TcpRouteMatch& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const TcpRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(TcpRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline TcpRoute& WithMatch(const TcpRouteMatch& value) { SetMatch(value); return *this;}
    inline TcpRoute& WithMatch(TcpRouteMatch&& value) { SetMatch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const TcpTimeout& GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(const TcpTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline void SetTimeout(TcpTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }
    inline TcpRoute& WithTimeout(const TcpTimeout& value) { SetTimeout(value); return *this;}
    inline TcpRoute& WithTimeout(TcpTimeout&& value) { SetTimeout(std::move(value)); return *this;}
    ///@}
  private:

    TcpRouteAction m_action;
    bool m_actionHasBeenSet = false;

    TcpRouteMatch m_match;
    bool m_matchHasBeenSet = false;

    TcpTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
