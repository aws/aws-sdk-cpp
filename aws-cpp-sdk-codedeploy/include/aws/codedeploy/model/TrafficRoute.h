﻿/**
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
  class AWS_CODEDEPLOY_API TrafficRoute
  {
  public:
    TrafficRoute();
    TrafficRoute(Aws::Utils::Json::JsonView jsonValue);
    TrafficRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline const Aws::Vector<Aws::String>& GetListenerArns() const{ return m_listenerArns; }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline bool ListenerArnsHasBeenSet() const { return m_listenerArnsHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline void SetListenerArns(const Aws::Vector<Aws::String>& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline void SetListenerArns(Aws::Vector<Aws::String>&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline TrafficRoute& WithListenerArns(const Aws::Vector<Aws::String>& value) { SetListenerArns(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline TrafficRoute& WithListenerArns(Aws::Vector<Aws::String>&& value) { SetListenerArns(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline TrafficRoute& AddListenerArns(const Aws::String& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(value); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline TrafficRoute& AddListenerArns(Aws::String&& value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(std::move(value)); return *this; }

    /**
     * <p> The Amazon Resource Name (ARN) of one listener. The listener identifies the
     * route between a target group and a load balancer. This is an array of strings
     * with a maximum size of one. </p>
     */
    inline TrafficRoute& AddListenerArns(const char* value) { m_listenerArnsHasBeenSet = true; m_listenerArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_listenerArns;
    bool m_listenerArnsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
