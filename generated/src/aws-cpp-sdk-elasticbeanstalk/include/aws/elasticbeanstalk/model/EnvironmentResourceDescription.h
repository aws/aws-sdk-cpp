/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/AutoScalingGroup.h>
#include <aws/elasticbeanstalk/model/Instance.h>
#include <aws/elasticbeanstalk/model/LaunchConfiguration.h>
#include <aws/elasticbeanstalk/model/LaunchTemplate.h>
#include <aws/elasticbeanstalk/model/LoadBalancer.h>
#include <aws/elasticbeanstalk/model/Trigger.h>
#include <aws/elasticbeanstalk/model/Queue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Describes the AWS resources in use by this environment. This data is
   * live.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentResourceDescription">AWS
   * API Reference</a></p>
   */
  class EnvironmentResourceDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API EnvironmentResourceDescription() = default;
    AWS_ELASTICBEANSTALK_API EnvironmentResourceDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API EnvironmentResourceDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    EnvironmentResourceDescription& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const { return m_autoScalingGroups; }
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    void SetAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::forward<AutoScalingGroupsT>(value); }
    template<typename AutoScalingGroupsT = Aws::Vector<AutoScalingGroup>>
    EnvironmentResourceDescription& WithAutoScalingGroups(AutoScalingGroupsT&& value) { SetAutoScalingGroups(std::forward<AutoScalingGroupsT>(value)); return *this;}
    template<typename AutoScalingGroupsT = AutoScalingGroup>
    EnvironmentResourceDescription& AddAutoScalingGroups(AutoScalingGroupsT&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.emplace_back(std::forward<AutoScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Instance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Instance>>
    EnvironmentResourceDescription& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Instance>
    EnvironmentResourceDescription& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline const Aws::Vector<LaunchConfiguration>& GetLaunchConfigurations() const { return m_launchConfigurations; }
    inline bool LaunchConfigurationsHasBeenSet() const { return m_launchConfigurationsHasBeenSet; }
    template<typename LaunchConfigurationsT = Aws::Vector<LaunchConfiguration>>
    void SetLaunchConfigurations(LaunchConfigurationsT&& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations = std::forward<LaunchConfigurationsT>(value); }
    template<typename LaunchConfigurationsT = Aws::Vector<LaunchConfiguration>>
    EnvironmentResourceDescription& WithLaunchConfigurations(LaunchConfigurationsT&& value) { SetLaunchConfigurations(std::forward<LaunchConfigurationsT>(value)); return *this;}
    template<typename LaunchConfigurationsT = LaunchConfiguration>
    EnvironmentResourceDescription& AddLaunchConfigurations(LaunchConfigurationsT&& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations.emplace_back(std::forward<LaunchConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline const Aws::Vector<LaunchTemplate>& GetLaunchTemplates() const { return m_launchTemplates; }
    inline bool LaunchTemplatesHasBeenSet() const { return m_launchTemplatesHasBeenSet; }
    template<typename LaunchTemplatesT = Aws::Vector<LaunchTemplate>>
    void SetLaunchTemplates(LaunchTemplatesT&& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates = std::forward<LaunchTemplatesT>(value); }
    template<typename LaunchTemplatesT = Aws::Vector<LaunchTemplate>>
    EnvironmentResourceDescription& WithLaunchTemplates(LaunchTemplatesT&& value) { SetLaunchTemplates(std::forward<LaunchTemplatesT>(value)); return *this;}
    template<typename LaunchTemplatesT = LaunchTemplate>
    EnvironmentResourceDescription& AddLaunchTemplates(LaunchTemplatesT&& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates.emplace_back(std::forward<LaunchTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const { return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    void SetLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::forward<LoadBalancersT>(value); }
    template<typename LoadBalancersT = Aws::Vector<LoadBalancer>>
    EnvironmentResourceDescription& WithLoadBalancers(LoadBalancersT&& value) { SetLoadBalancers(std::forward<LoadBalancersT>(value)); return *this;}
    template<typename LoadBalancersT = LoadBalancer>
    EnvironmentResourceDescription& AddLoadBalancers(LoadBalancersT&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.emplace_back(std::forward<LoadBalancersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const { return m_triggers; }
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }
    template<typename TriggersT = Aws::Vector<Trigger>>
    void SetTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers = std::forward<TriggersT>(value); }
    template<typename TriggersT = Aws::Vector<Trigger>>
    EnvironmentResourceDescription& WithTriggers(TriggersT&& value) { SetTriggers(std::forward<TriggersT>(value)); return *this;}
    template<typename TriggersT = Trigger>
    EnvironmentResourceDescription& AddTriggers(TriggersT&& value) { m_triggersHasBeenSet = true; m_triggers.emplace_back(std::forward<TriggersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The queues used by this environment.</p>
     */
    inline const Aws::Vector<Queue>& GetQueues() const { return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    template<typename QueuesT = Aws::Vector<Queue>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Queue>>
    EnvironmentResourceDescription& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Queue>
    EnvironmentResourceDescription& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<LaunchConfiguration> m_launchConfigurations;
    bool m_launchConfigurationsHasBeenSet = false;

    Aws::Vector<LaunchTemplate> m_launchTemplates;
    bool m_launchTemplatesHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<Trigger> m_triggers;
    bool m_triggersHasBeenSet = false;

    Aws::Vector<Queue> m_queues;
    bool m_queuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
