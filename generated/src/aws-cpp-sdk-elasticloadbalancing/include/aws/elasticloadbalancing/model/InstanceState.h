/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceState
  {
  public:
    AWS_ELASTICLOADBALANCING_API InstanceState() = default;
    AWS_ELASTICLOADBALANCING_API InstanceState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API InstanceState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceState& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the instance.</p> <p>Valid values:
     * <code>InService</code> | <code>OutOfService</code> | <code>Unknown</code> </p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    InstanceState& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the cause of <code>OutOfService</code> instances.
     * Specifically, whether the cause is Elastic Load Balancing or the instance.</p>
     * <p>Valid values: <code>ELB</code> | <code>Instance</code> | <code>N/A</code>
     * </p>
     */
    inline const Aws::String& GetReasonCode() const { return m_reasonCode; }
    inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
    template<typename ReasonCodeT = Aws::String>
    void SetReasonCode(ReasonCodeT&& value) { m_reasonCodeHasBeenSet = true; m_reasonCode = std::forward<ReasonCodeT>(value); }
    template<typename ReasonCodeT = Aws::String>
    InstanceState& WithReasonCode(ReasonCodeT&& value) { SetReasonCode(std::forward<ReasonCodeT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InstanceState& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_reasonCode;
    bool m_reasonCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
