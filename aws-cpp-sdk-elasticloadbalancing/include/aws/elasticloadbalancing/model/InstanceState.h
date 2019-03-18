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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about the state of an EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/InstanceState">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API InstanceState
  {
  public:
    InstanceState();
    InstanceState(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceState& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceState& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceState& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline InstanceState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline InstanceState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline InstanceState& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline const Aws::String& GetReasonCode() const{ return m_reasonCode; }

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline void SetReasonCode(const Aws::String& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = value; }

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline void SetReasonCode(Aws::String&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::move(value); }

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline void SetReasonCode(const char* value) { m_reasonCodeHasBeenSet = true; m_reasonCode.assign(value); }

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline InstanceState& WithReasonCode(const Aws::String& value) { SetReasonCode(value); return *this;}

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline InstanceState& WithReasonCode(Aws::String&& value) { SetReasonCode(std::move(value)); return *this;}

    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline InstanceState& WithReasonCode(const char* value) { SetReasonCode(value); return *this;}


    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline InstanceState& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline InstanceState& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the instance state. This string can contain one or more of
     * the following messages.</p> <ul> <li> <p> <code>N/A</code> </p> </li> <li> <p>
     * <code>A transient error occurred. Please try again later.</code> </p> </li> <li>
     * <p> <code>Instance has failed at least the UnhealthyThreshold number of health
     * checks consecutively.</code> </p> </li> <li> <p> <code>Instance has not passed
     * the configured HealthyThreshold number of health checks consecutively.</code>
     * </p> </li> <li> <p> <code>Instance registration is still in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in the EC2 Availability Zone for which
     * LoadBalancer is not configured to route traffic to.</code> </p> </li> <li> <p>
     * <code>Instance is not currently registered with the LoadBalancer.</code> </p>
     * </li> <li> <p> <code>Instance deregistration currently in progress.</code> </p>
     * </li> <li> <p> <code>Disable Availability Zone is currently in progress.</code>
     * </p> </li> <li> <p> <code>Instance is in pending state.</code> </p> </li> <li>
     * <p> <code>Instance is in stopped state.</code> </p> </li> <li> <p>
     * <code>Instance is in terminated state.</code> </p> </li> </ul>
     */
    inline InstanceState& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
