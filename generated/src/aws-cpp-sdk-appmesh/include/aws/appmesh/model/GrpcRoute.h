/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/GrpcRouteAction.h>
#include <aws/appmesh/model/GrpcRouteMatch.h>
#include <aws/appmesh/model/GrpcRetryPolicy.h>
#include <aws/appmesh/model/GrpcTimeout.h>
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
   * <p>An object that represents a gRPC route type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/GrpcRoute">AWS
   * API Reference</a></p>
   */
  class GrpcRoute
  {
  public:
    AWS_APPMESH_API GrpcRoute() = default;
    AWS_APPMESH_API GrpcRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API GrpcRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the action to take if a match is determined.</p>
     */
    inline const GrpcRouteAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = GrpcRouteAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = GrpcRouteAction>
    GrpcRoute& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the criteria for determining a request match.</p>
     */
    inline const GrpcRouteMatch& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = GrpcRouteMatch>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = GrpcRouteMatch>
    GrpcRoute& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents a retry policy.</p>
     */
    inline const GrpcRetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = GrpcRetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = GrpcRetryPolicy>
    GrpcRoute& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents types of timeouts. </p>
     */
    inline const GrpcTimeout& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = GrpcTimeout>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = GrpcTimeout>
    GrpcRoute& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
    ///@}
  private:

    GrpcRouteAction m_action;
    bool m_actionHasBeenSet = false;

    GrpcRouteMatch m_match;
    bool m_matchHasBeenSet = false;

    GrpcRetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;

    GrpcTimeout m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
