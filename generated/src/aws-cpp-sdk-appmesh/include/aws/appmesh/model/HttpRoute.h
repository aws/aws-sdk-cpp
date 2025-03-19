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
    AWS_APPMESH_API HttpRoute() = default;
    AWS_APPMESH_API HttpRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API HttpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const HttpRouteAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = HttpRouteAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = HttpRouteAction>
    HttpRoute& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const HttpRouteMatch& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = HttpRouteMatch>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = HttpRouteMatch>
    HttpRoute& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline const HttpRetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = HttpRetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = HttpRetryPolicy>
    HttpRoute& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const HttpTimeout& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = HttpTimeout>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = HttpTimeout>
    HttpRoute& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
    ///@}
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
