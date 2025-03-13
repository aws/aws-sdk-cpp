/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PortRange.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a stateful rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FirewallStatefulRule">AWS
   * API Reference</a></p>
   */
  class FirewallStatefulRule
  {
  public:
    AWS_EC2_API FirewallStatefulRule() = default;
    AWS_EC2_API FirewallStatefulRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FirewallStatefulRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const { return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    template<typename RuleGroupArnT = Aws::String>
    void SetRuleGroupArn(RuleGroupArnT&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::forward<RuleGroupArnT>(value); }
    template<typename RuleGroupArnT = Aws::String>
    FirewallStatefulRule& WithRuleGroupArn(RuleGroupArnT&& value) { SetRuleGroupArn(std::forward<RuleGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<Aws::String>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<Aws::String>>
    FirewallStatefulRule& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = Aws::String>
    FirewallStatefulRule& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<Aws::String>>
    FirewallStatefulRule& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = Aws::String>
    FirewallStatefulRule& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const { return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    template<typename SourcePortsT = Aws::Vector<PortRange>>
    void SetSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::forward<SourcePortsT>(value); }
    template<typename SourcePortsT = Aws::Vector<PortRange>>
    FirewallStatefulRule& WithSourcePorts(SourcePortsT&& value) { SetSourcePorts(std::forward<SourcePortsT>(value)); return *this;}
    template<typename SourcePortsT = PortRange>
    FirewallStatefulRule& AddSourcePorts(SourcePortsT&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.emplace_back(std::forward<SourcePortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const { return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    template<typename DestinationPortsT = Aws::Vector<PortRange>>
    void SetDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::forward<DestinationPortsT>(value); }
    template<typename DestinationPortsT = Aws::Vector<PortRange>>
    FirewallStatefulRule& WithDestinationPorts(DestinationPortsT&& value) { SetDestinationPorts(std::forward<DestinationPortsT>(value)); return *this;}
    template<typename DestinationPortsT = PortRange>
    FirewallStatefulRule& AddDestinationPorts(DestinationPortsT&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.emplace_back(std::forward<DestinationPortsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    FirewallStatefulRule& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>alert</code>.</p>
     */
    inline const Aws::String& GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    template<typename RuleActionT = Aws::String>
    void SetRuleAction(RuleActionT&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::forward<RuleActionT>(value); }
    template<typename RuleActionT = Aws::String>
    FirewallStatefulRule& WithRuleAction(RuleActionT&& value) { SetRuleAction(std::forward<RuleActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The possible values are <code>FORWARD</code> and
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    template<typename DirectionT = Aws::String>
    void SetDirection(DirectionT&& value) { m_directionHasBeenSet = true; m_direction = std::forward<DirectionT>(value); }
    template<typename DirectionT = Aws::String>
    FirewallStatefulRule& WithDirection(DirectionT&& value) { SetDirection(std::forward<DirectionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleGroupArn;
    bool m_ruleGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sources;
    bool m_sourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::Vector<PortRange> m_sourcePorts;
    bool m_sourcePortsHasBeenSet = false;

    Aws::Vector<PortRange> m_destinationPorts;
    bool m_destinationPortsHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    Aws::String m_direction;
    bool m_directionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
