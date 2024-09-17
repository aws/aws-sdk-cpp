/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficDirection.h>
#include <aws/ec2/model/TrafficMirrorRuleAction.h>
#include <aws/ec2/model/TrafficMirrorPortRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
  class TrafficMirrorFilterRule
  {
  public:
    AWS_EC2_API TrafficMirrorFilterRule();
    AWS_EC2_API TrafficMirrorFilterRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorFilterRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterRuleId() const{ return m_trafficMirrorFilterRuleId; }
    inline bool TrafficMirrorFilterRuleIdHasBeenSet() const { return m_trafficMirrorFilterRuleIdHasBeenSet; }
    inline void SetTrafficMirrorFilterRuleId(const Aws::String& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = value; }
    inline void SetTrafficMirrorFilterRuleId(Aws::String&& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = std::move(value); }
    inline void SetTrafficMirrorFilterRuleId(const char* value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId.assign(value); }
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(const Aws::String& value) { SetTrafficMirrorFilterRuleId(value); return *this;}
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(Aws::String&& value) { SetTrafficMirrorFilterRuleId(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(const char* value) { SetTrafficMirrorFilterRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficDirection& GetTrafficDirection() const{ return m_trafficDirection; }
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }
    inline void SetTrafficDirection(const TrafficDirection& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }
    inline void SetTrafficDirection(TrafficDirection&& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = std::move(value); }
    inline TrafficMirrorFilterRule& WithTrafficDirection(const TrafficDirection& value) { SetTrafficDirection(value); return *this;}
    inline TrafficMirrorFilterRule& WithTrafficDirection(TrafficDirection&& value) { SetTrafficDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline TrafficMirrorFilterRule& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorRuleAction& GetRuleAction() const{ return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(const TrafficMirrorRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline void SetRuleAction(TrafficMirrorRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }
    inline TrafficMirrorFilterRule& WithRuleAction(const TrafficMirrorRuleAction& value) { SetRuleAction(value); return *this;}
    inline TrafficMirrorFilterRule& WithRuleAction(TrafficMirrorRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline int GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TrafficMirrorFilterRule& WithProtocol(int value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetDestinationPortRange() const{ return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    inline void SetDestinationPortRange(const TrafficMirrorPortRange& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }
    inline void SetDestinationPortRange(TrafficMirrorPortRange&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }
    inline TrafficMirrorFilterRule& WithDestinationPortRange(const TrafficMirrorPortRange& value) { SetDestinationPortRange(value); return *this;}
    inline TrafficMirrorFilterRule& WithDestinationPortRange(TrafficMirrorPortRange&& value) { SetDestinationPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetSourcePortRange() const{ return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    inline void SetSourcePortRange(const TrafficMirrorPortRange& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }
    inline void SetSourcePortRange(TrafficMirrorPortRange&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }
    inline TrafficMirrorFilterRule& WithSourcePortRange(const TrafficMirrorPortRange& value) { SetSourcePortRange(value); return *this;}
    inline TrafficMirrorFilterRule& WithSourcePortRange(TrafficMirrorPortRange&& value) { SetSourcePortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const{ return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    inline void SetSourceCidrBlock(const Aws::String& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = value; }
    inline void SetSourceCidrBlock(Aws::String&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::move(value); }
    inline void SetSourceCidrBlock(const char* value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock.assign(value); }
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrafficMirrorFilterRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrafficMirrorFilterRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags on Traffic Mirroring filter rules.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TrafficMirrorFilterRule& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TrafficMirrorFilterRule& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TrafficMirrorFilterRule& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TrafficMirrorFilterRule& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trafficMirrorFilterRuleId;
    bool m_trafficMirrorFilterRuleIdHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    TrafficDirection m_trafficDirection;
    bool m_trafficDirectionHasBeenSet = false;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet = false;

    TrafficMirrorRuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    int m_protocol;
    bool m_protocolHasBeenSet = false;

    TrafficMirrorPortRange m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet = false;

    TrafficMirrorPortRange m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
