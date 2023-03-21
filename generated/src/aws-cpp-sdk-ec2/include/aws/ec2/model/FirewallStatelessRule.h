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
   * <p>Describes a stateless rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FirewallStatelessRule">AWS
   * API Reference</a></p>
   */
  class FirewallStatelessRule
  {
  public:
    AWS_EC2_API FirewallStatelessRule();
    AWS_EC2_API FirewallStatelessRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FirewallStatelessRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline const Aws::String& GetRuleGroupArn() const{ return m_ruleGroupArn; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline bool RuleGroupArnHasBeenSet() const { return m_ruleGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetRuleGroupArn(const Aws::String& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = value; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetRuleGroupArn(Aws::String&& value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn = std::move(value); }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetRuleGroupArn(const char* value) { m_ruleGroupArnHasBeenSet = true; m_ruleGroupArn.assign(value); }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallStatelessRule& WithRuleGroupArn(const Aws::String& value) { SetRuleGroupArn(value); return *this;}

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallStatelessRule& WithRuleGroupArn(Aws::String&& value) { SetRuleGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallStatelessRule& WithRuleGroupArn(const char* value) { SetRuleGroupArn(value); return *this;}


    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSources() const{ return m_sources; }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline void SetSources(const Aws::Vector<Aws::String>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline void SetSources(Aws::Vector<Aws::String>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& WithSources(const Aws::Vector<Aws::String>& value) { SetSources(value); return *this;}

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& WithSources(Aws::Vector<Aws::String>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddSources(const Aws::String& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddSources(Aws::String&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

    /**
     * <p>The source IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddSources(const char* value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }


    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline void SetDestinations(Aws::Vector<Aws::String>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& WithDestinations(Aws::Vector<Aws::String>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddDestinations(Aws::String&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

    /**
     * <p>The destination IP addresses, in CIDR notation.</p>
     */
    inline FirewallStatelessRule& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }


    /**
     * <p>The source ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetSourcePorts() const{ return m_sourcePorts; }

    /**
     * <p>The source ports.</p>
     */
    inline bool SourcePortsHasBeenSet() const { return m_sourcePortsHasBeenSet; }

    /**
     * <p>The source ports.</p>
     */
    inline void SetSourcePorts(const Aws::Vector<PortRange>& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = value; }

    /**
     * <p>The source ports.</p>
     */
    inline void SetSourcePorts(Aws::Vector<PortRange>&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts = std::move(value); }

    /**
     * <p>The source ports.</p>
     */
    inline FirewallStatelessRule& WithSourcePorts(const Aws::Vector<PortRange>& value) { SetSourcePorts(value); return *this;}

    /**
     * <p>The source ports.</p>
     */
    inline FirewallStatelessRule& WithSourcePorts(Aws::Vector<PortRange>&& value) { SetSourcePorts(std::move(value)); return *this;}

    /**
     * <p>The source ports.</p>
     */
    inline FirewallStatelessRule& AddSourcePorts(const PortRange& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(value); return *this; }

    /**
     * <p>The source ports.</p>
     */
    inline FirewallStatelessRule& AddSourcePorts(PortRange&& value) { m_sourcePortsHasBeenSet = true; m_sourcePorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The destination ports.</p>
     */
    inline const Aws::Vector<PortRange>& GetDestinationPorts() const{ return m_destinationPorts; }

    /**
     * <p>The destination ports.</p>
     */
    inline bool DestinationPortsHasBeenSet() const { return m_destinationPortsHasBeenSet; }

    /**
     * <p>The destination ports.</p>
     */
    inline void SetDestinationPorts(const Aws::Vector<PortRange>& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = value; }

    /**
     * <p>The destination ports.</p>
     */
    inline void SetDestinationPorts(Aws::Vector<PortRange>&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts = std::move(value); }

    /**
     * <p>The destination ports.</p>
     */
    inline FirewallStatelessRule& WithDestinationPorts(const Aws::Vector<PortRange>& value) { SetDestinationPorts(value); return *this;}

    /**
     * <p>The destination ports.</p>
     */
    inline FirewallStatelessRule& WithDestinationPorts(Aws::Vector<PortRange>&& value) { SetDestinationPorts(std::move(value)); return *this;}

    /**
     * <p>The destination ports.</p>
     */
    inline FirewallStatelessRule& AddDestinationPorts(const PortRange& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(value); return *this; }

    /**
     * <p>The destination ports.</p>
     */
    inline FirewallStatelessRule& AddDestinationPorts(PortRange&& value) { m_destinationPortsHasBeenSet = true; m_destinationPorts.push_back(std::move(value)); return *this; }


    /**
     * <p>The protocols.</p>
     */
    inline const Aws::Vector<int>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocols.</p>
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocols.</p>
     */
    inline void SetProtocols(const Aws::Vector<int>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocols.</p>
     */
    inline void SetProtocols(Aws::Vector<int>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocols.</p>
     */
    inline FirewallStatelessRule& WithProtocols(const Aws::Vector<int>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocols.</p>
     */
    inline FirewallStatelessRule& WithProtocols(Aws::Vector<int>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocols.</p>
     */
    inline FirewallStatelessRule& AddProtocols(int value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }


    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline const Aws::String& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline void SetRuleAction(const Aws::String& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline void SetRuleAction(Aws::String&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline void SetRuleAction(const char* value) { m_ruleActionHasBeenSet = true; m_ruleAction.assign(value); }

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline FirewallStatelessRule& WithRuleAction(const Aws::String& value) { SetRuleAction(value); return *this;}

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline FirewallStatelessRule& WithRuleAction(Aws::String&& value) { SetRuleAction(std::move(value)); return *this;}

    /**
     * <p>The rule action. The possible values are <code>pass</code>,
     * <code>drop</code>, and <code>forward_to_site</code>.</p>
     */
    inline FirewallStatelessRule& WithRuleAction(const char* value) { SetRuleAction(value); return *this;}


    /**
     * <p>The rule priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The rule priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The rule priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The rule priority.</p>
     */
    inline FirewallStatelessRule& WithPriority(int value) { SetPriority(value); return *this;}

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

    Aws::Vector<int> m_protocols;
    bool m_protocolsHasBeenSet = false;

    Aws::String m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
