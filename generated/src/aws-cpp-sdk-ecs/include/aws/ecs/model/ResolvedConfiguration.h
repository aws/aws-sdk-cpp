/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ServiceRevisionLoadBalancer.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The resolved configuration for a service revision, which contains the actual
   * resources your service revision uses, such as which target groups serve
   * traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ResolvedConfiguration">AWS
   * API Reference</a></p>
   */
  class ResolvedConfiguration
  {
  public:
    AWS_ECS_API ResolvedConfiguration() = default;
    AWS_ECS_API ResolvedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ResolvedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resolved load balancer configuration for the service revision. This
     * includes information about which target groups serve traffic and which listener
     * rules direct traffic to them.</p>
     */
    inline const Aws::Vector<ServiceRevisionLoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<ServiceRevisionLoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<ServiceRevisionLoadBalancer>>
    ResolvedConfiguration& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = ServiceRevisionLoadBalancer>
    ResolvedConfiguration& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ServiceRevisionLoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
