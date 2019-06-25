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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficDirection.h>
#include <aws/ec2/model/TrafficMirrorRuleAction.h>
#include <aws/ec2/model/TrafficMirrorPortRange.h>
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
   * <p>Describes the Traffic Mirror rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrafficMirrorFilterRule">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TrafficMirrorFilterRule
  {
  public:
    TrafficMirrorFilterRule();
    TrafficMirrorFilterRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficMirrorFilterRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterRuleId() const{ return m_trafficMirrorFilterRuleId; }

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline bool TrafficMirrorFilterRuleIdHasBeenSet() const { return m_trafficMirrorFilterRuleIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(const Aws::String& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = value; }

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(Aws::String&& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(const char* value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(const Aws::String& value) { SetTrafficMirrorFilterRuleId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(Aws::String&& value) { SetTrafficMirrorFilterRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(const char* value) { SetTrafficMirrorFilterRuleId(value); return *this;}


    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficDirection& GetTrafficDirection() const{ return m_trafficDirection; }

    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }

    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline void SetTrafficDirection(const TrafficDirection& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }

    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline void SetTrafficDirection(TrafficDirection&& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = std::move(value); }

    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficDirection(const TrafficDirection& value) { SetTrafficDirection(value); return *this;}

    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithTrafficDirection(TrafficDirection&& value) { SetTrafficDirection(std::move(value)); return *this;}


    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }

    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}


    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorRuleAction& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline void SetRuleAction(const TrafficMirrorRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline void SetRuleAction(TrafficMirrorRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithRuleAction(const TrafficMirrorRuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithRuleAction(TrafficMirrorRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}


    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline int GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithProtocol(int value) { SetProtocol(value); return *this;}


    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetDestinationPortRange() const{ return m_destinationPortRange; }

    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }

    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationPortRange(const TrafficMirrorPortRange& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }

    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationPortRange(TrafficMirrorPortRange&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }

    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDestinationPortRange(const TrafficMirrorPortRange& value) { SetDestinationPortRange(value); return *this;}

    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDestinationPortRange(TrafficMirrorPortRange&& value) { SetDestinationPortRange(std::move(value)); return *this;}


    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetSourcePortRange() const{ return m_sourcePortRange; }

    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }

    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline void SetSourcePortRange(const TrafficMirrorPortRange& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }

    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline void SetSourcePortRange(TrafficMirrorPortRange&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }

    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithSourcePortRange(const TrafficMirrorPortRange& value) { SetSourcePortRange(value); return *this;}

    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithSourcePortRange(TrafficMirrorPortRange&& value) { SetSourcePortRange(std::move(value)); return *this;}


    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const{ return m_sourceCidrBlock; }

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(const Aws::String& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = value; }

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(Aws::String&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::move(value); }

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(const char* value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock.assign(value); }

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}


    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorFilterRule& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_trafficMirrorFilterRuleId;
    bool m_trafficMirrorFilterRuleIdHasBeenSet;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet;

    TrafficDirection m_trafficDirection;
    bool m_trafficDirectionHasBeenSet;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet;

    TrafficMirrorRuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet;

    int m_protocol;
    bool m_protocolHasBeenSet;

    TrafficMirrorPortRange m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet;

    TrafficMirrorPortRange m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
