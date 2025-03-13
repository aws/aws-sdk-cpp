/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Information about a listener. The listener contains the path used to route
   * traffic that is received from the load balancer to a target group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TrafficRoute">AWS
   * API Reference</a></p>
   */
  class TrafficRoute
  {
  public:
    AWS_CODEDEPLOY_API TrafficRoute() = default;
    AWS_CODEDEPLOY_API TrafficRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TrafficRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline const Aws::Vector<Aws::String>& GetListenerArns() const { return m_listenerArns; }
    inline bool ListenerArnsHasBeenSet() const { return m_listenerArnsHasBeenSet; }
    template<typename ListenerArnsT = Aws::Vector<Aws::String>>
    void SetListenerArns(ListenerArnsT&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = std::forward<ListenerArnsT>(value); }
    template<typename ListenerArnsT = Aws::Vector<Aws::String>>
    TrafficRoute& WithListenerArns(ListenerArnsT&& value) { SetListenerArns(std::forward<ListenerArnsT>(value)); return *this;}
    template<typename ListenerArnsT = Aws::String>
    TrafficRoute& AddListenerArns(ListenerArnsT&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.emplace_back(std::forward<ListenerArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_listenerArns;
    bool m_listenerArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
