/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/TcpRouteAction.h>
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
  class AWS_APPMESH_API TcpRoute
  {
  public:
    TcpRoute();
    TcpRoute(Aws::Utils::Json::JsonView jsonValue);
    TcpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline const TcpRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline void SetAction(const TcpRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline void SetAction(TcpRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline TcpRoute& WithAction(const TcpRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take if a match is determined.</p>
     */
    inline TcpRoute& WithAction(TcpRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const TcpTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline void SetTimeout(const TcpTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline void SetTimeout(TcpTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline TcpRoute& WithTimeout(const TcpTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline TcpRoute& WithTimeout(TcpTimeout&& value) { SetTimeout(std::move(value)); return *this;}

  private:

    TcpRouteAction m_action;
    bool m_actionHasBeenSet;

    TcpTimeout m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
