/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/HttpRouteAction.h>
#include <aws/appmesh/model/HttpRouteMatch.h>
#include <aws/appmesh/model/HttpRetryPolicy.h>
#include <aws/appmesh/model/HttpTimeout.h>
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
   * <p>An object that represents an HTTP or HTTP/2 route type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpRoute">AWS
   * API Reference</a></p>
   */
  class HttpRoute
  {
  public:
    AWS_APPMESH_API HttpRoute();
    AWS_APPMESH_API HttpRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const HttpRouteAction& GetAction() const{ return m_action; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(const HttpRouteAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline void SetAction(HttpRouteAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline HttpRoute& WithAction(const HttpRouteAction& value) { SetAction(value); return *this;}

    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline HttpRoute& WithAction(HttpRouteAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const HttpRouteMatch& GetMatch() const{ return m_match; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(const HttpRouteMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline void SetMatch(HttpRouteMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline HttpRoute& WithMatch(const HttpRouteMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline HttpRoute& WithMatch(HttpRouteMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline const HttpRetryPolicy& GetRetryPolicy() const{ return m_retryPolicy; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline void SetRetryPolicy(const HttpRetryPolicy& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = value; }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline void SetRetryPolicy(HttpRetryPolicy&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::move(value); }

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline HttpRoute& WithRetryPolicy(const HttpRetryPolicy& value) { SetRetryPolicy(value); return *this;}

    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline HttpRoute& WithRetryPolicy(HttpRetryPolicy&& value) { SetRetryPolicy(std::move(value)); return *this;}


    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetTimeout() const{ return m_timeout; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline void SetTimeout(const HttpTimeout& value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline void SetTimeout(HttpTimeout&& value) { m_timeoutHasBeenSet = true; m_timeout = std::move(value); }

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline HttpRoute& WithTimeout(const HttpTimeout& value) { SetTimeout(value); return *this;}

    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline HttpRoute& WithTimeout(HttpTimeout&& value) { SetTimeout(std::move(value)); return *this;}

  private:

    HttpRouteAction m_action;
    bool m_actionHasBeenSet = false;

    HttpRouteMatch m_match;
    bool m_matchHasBeenSet = false;

    HttpRetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    HttpTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
