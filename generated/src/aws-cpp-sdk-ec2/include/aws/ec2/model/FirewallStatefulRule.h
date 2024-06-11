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
    AWS_EC2_API FirewallStatefulRule();
    AWS_EC2_API FirewallStatefulRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FirewallStatefulRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }
    inline FirewallStatefulRule& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}
    inline FirewallStatefulRule& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}
    inline FirewallStatefulRule& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<Aws::String>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<Aws::String>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline FirewallStatefulRule& WithSources(const Aws::Vector<Aws::String>& value) { SetSources(value); return *this;}
    inline FirewallStatefulRule& WithSources(Aws::Vector<Aws::String>&& value) { SetSources(std::move(value)); return *this;}
    inline FirewallStatefulRule& AddSources(const Aws::String& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline FirewallStatefulRule& AddSources(Aws::String&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
    inline FirewallStatefulRule& AddSources(const char* value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }
    inline FirewallStatefulRule& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}
    inline FirewallStatefulRule& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}
    inline FirewallStatefulRule& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    inline FirewallStatefulRule& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }
    inline FirewallStatefulRule& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const{ return m_sourcePorts; }
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }
    inline void SetSourcePorts(const Aws::Vector<PortRange>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }
    inline void SetSourcePorts(Aws::Vector<PortRange>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }
    inline FirewallStatefulRule& WithSourcePorts(const Aws::Vector<PortRange>& value) { SetSourcePorts(value); return *this;}
    inline FirewallStatefulRule& WithSourcePorts(Aws::Vector<PortRange>&& value) { SetSourcePorts(std::move(value)); return *this;}
    inline FirewallStatefulRule& AddSourcePorts(const PortRange& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }
    inline FirewallStatefulRule& AddSourcePorts(PortRange&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The destination ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const{ return m_destinationPorts; }
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }
    inline void SetDestinationPorts(const Aws::Vector<PortRange>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }
    inline void SetDestinationPorts(Aws::Vector<PortRange>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }
    inline FirewallStatefulRule& WithDestinationPorts(const Aws::Vector<PortRange>& value) { SetDestinationPorts(value); return *this;}
    inline FirewallStatefulRule& WithDestinationPorts(Aws::Vector<PortRange>&& value) { SetDestinationPorts(std::move(value)); return *this;}
    inline FirewallStatefulRule& AddDestinationPorts(const PortRange& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }
    inline FirewallStatefulRule& AddDestinationPorts(PortRange&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline FirewallStatefulRule& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline FirewallStatefulRule& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline FirewallStatefulRule& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>alert</code>.</p>
     */
    inline const Aws::String& GetRuleAction() const{ return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(const Aws::String& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline void SetRuleAction(Aws::String&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }
    inline void SetRuleAction(const char* value) { m_ruleActionHasBeenSet = true; m_ruleAction.assign(value); }
    inline FirewallStatefulRule& WithRuleAction(const Aws::String& value) { SetRuleAction(value); return *this;}
    inline FirewallStatefulRule& WithRuleAction(Aws::String&& value) { SetRuleAction(std::move(value)); return *this;}
    inline FirewallStatefulRule& WithRuleAction(const char* value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction. The possible values are <code>FORWARD</code> and
     * <code>ANY</code>.</p>
     */
    inline const Aws::String& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const Aws::String& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(Aws::String&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline void SetDirection(const char* value) { m_directionHasBeenSet = true; m_direction.assign(value); }
    inline FirewallStatefulRule& WithDirection(const Aws::String& value) { SetDirection(value); return *this;}
    inline FirewallStatefulRule& WithDirection(Aws::String&& value) { SetDirection(std::move(value)); return *this;}
    inline FirewallStatefulRule& WithDirection(const char* value) { SetDirection(value); return *this;}
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
