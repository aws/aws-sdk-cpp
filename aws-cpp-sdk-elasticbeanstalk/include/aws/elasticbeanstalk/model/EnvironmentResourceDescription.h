/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICBEANSTALK_API EnvironmentResourceDescription
  {
  public:
    EnvironmentResourceDescription();
    EnvironmentResourceDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    EnvironmentResourceDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentResourceDescription& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentResourceDescription& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentResourceDescription& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline EnvironmentResourceDescription& WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline EnvironmentResourceDescription& WithAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline EnvironmentResourceDescription& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p> The <code>AutoScalingGroups</code> used by this environment. </p>
     */
    inline EnvironmentResourceDescription& AddAutoScalingGroups(AutoScalingGroup&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instances used by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddInstances(Instance&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline const Aws::Vector<LaunchConfiguration>& GetLaunchConfigurations() const{ return m_launchConfigurations; }

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline bool LaunchConfigurationsHasBeenSet() const { return m_launchConfigurationsHasBeenSet; }

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline void SetLaunchConfigurations(const Aws::Vector<LaunchConfiguration>& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations = value; }

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline void SetLaunchConfigurations(Aws::Vector<LaunchConfiguration>&& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations = std::move(value); }

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLaunchConfigurations(const Aws::Vector<LaunchConfiguration>& value) { SetLaunchConfigurations(value); return *this;}

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLaunchConfigurations(Aws::Vector<LaunchConfiguration>&& value) { SetLaunchConfigurations(std::move(value)); return *this;}

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLaunchConfigurations(const LaunchConfiguration& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations.push_back(value); return *this; }

    /**
     * <p>The Auto Scaling launch configurations in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLaunchConfigurations(LaunchConfiguration&& value) { m_launchConfigurationsHasBeenSet = true; m_launchConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline const Aws::Vector<LaunchTemplate>& GetLaunchTemplates() const{ return m_launchTemplates; }

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline bool LaunchTemplatesHasBeenSet() const { return m_launchTemplatesHasBeenSet; }

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline void SetLaunchTemplates(const Aws::Vector<LaunchTemplate>& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates = value; }

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline void SetLaunchTemplates(Aws::Vector<LaunchTemplate>&& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates = std::move(value); }

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLaunchTemplates(const Aws::Vector<LaunchTemplate>& value) { SetLaunchTemplates(value); return *this;}

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLaunchTemplates(Aws::Vector<LaunchTemplate>&& value) { SetLaunchTemplates(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLaunchTemplates(const LaunchTemplate& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 launch templates in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLaunchTemplates(LaunchTemplate&& value) { m_launchTemplatesHasBeenSet = true; m_launchTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /**
     * <p>The LoadBalancers in use by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline const Aws::Vector<Trigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline void SetTriggers(const Aws::Vector<Trigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline void SetTriggers(Aws::Vector<Trigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline EnvironmentResourceDescription& WithTriggers(const Aws::Vector<Trigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline EnvironmentResourceDescription& WithTriggers(Aws::Vector<Trigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline EnvironmentResourceDescription& AddTriggers(const Trigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>The <code>AutoScaling</code> triggers in use by this environment. </p>
     */
    inline EnvironmentResourceDescription& AddTriggers(Trigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }


    /**
     * <p>The queues used by this environment.</p>
     */
    inline const Aws::Vector<Queue>& GetQueues() const{ return m_queues; }

    /**
     * <p>The queues used by this environment.</p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p>The queues used by this environment.</p>
     */
    inline void SetQueues(const Aws::Vector<Queue>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p>The queues used by this environment.</p>
     */
    inline void SetQueues(Aws::Vector<Queue>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p>The queues used by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithQueues(const Aws::Vector<Queue>& value) { SetQueues(value); return *this;}

    /**
     * <p>The queues used by this environment.</p>
     */
    inline EnvironmentResourceDescription& WithQueues(Aws::Vector<Queue>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>The queues used by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddQueues(const Queue& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p>The queues used by this environment.</p>
     */
    inline EnvironmentResourceDescription& AddQueues(Queue&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet;

    Aws::Vector<LaunchConfiguration> m_launchConfigurations;
    bool m_launchConfigurationsHasBeenSet;

    Aws::Vector<LaunchTemplate> m_launchTemplates;
    bool m_launchTemplatesHasBeenSet;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet;

    Aws::Vector<Trigger> m_triggers;
    bool m_triggersHasBeenSet;

    Aws::Vector<Queue> m_queues;
    bool m_queuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
