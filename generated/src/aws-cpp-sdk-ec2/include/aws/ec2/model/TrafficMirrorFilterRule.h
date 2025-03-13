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
    AWS_EC2_API TrafficMirrorFilterRule() = default;
    AWS_EC2_API TrafficMirrorFilterRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorFilterRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterRuleId() const { return m_trafficMirrorFilterRuleId; }
    inline bool TrafficMirrorFilterRuleIdHasBeenSet() const { return m_trafficMirrorFilterRuleIdHasBeenSet; }
    template<typename TrafficMirrorFilterRuleIdT = Aws::String>
    void SetTrafficMirrorFilterRuleId(TrafficMirrorFilterRuleIdT&& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = std::forward<TrafficMirrorFilterRuleIdT>(value); }
    template<typename TrafficMirrorFilterRuleIdT = Aws::String>
    TrafficMirrorFilterRule& WithTrafficMirrorFilterRuleId(TrafficMirrorFilterRuleIdT&& value) { SetTrafficMirrorFilterRuleId(std::forward<TrafficMirrorFilterRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter that the rule is associated with.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    TrafficMirrorFilterRule& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The traffic direction assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficDirection GetTrafficDirection() const { return m_trafficDirection; }
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }
    inline void SetTrafficDirection(TrafficDirection value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }
    inline TrafficMirrorFilterRule& WithTrafficDirection(TrafficDirection value) { SetTrafficDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule number of the Traffic Mirror rule.</p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline TrafficMirrorFilterRule& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action assigned to the Traffic Mirror rule.</p>
     */
    inline TrafficMirrorRuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(TrafficMirrorRuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline TrafficMirrorFilterRule& WithRuleAction(TrafficMirrorRuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol assigned to the Traffic Mirror rule.</p>
     */
    inline int GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TrafficMirrorFilterRule& WithProtocol(int value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetDestinationPortRange() const { return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    template<typename DestinationPortRangeT = TrafficMirrorPortRange>
    void SetDestinationPortRange(DestinationPortRangeT&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::forward<DestinationPortRangeT>(value); }
    template<typename DestinationPortRangeT = TrafficMirrorPortRange>
    TrafficMirrorFilterRule& WithDestinationPortRange(DestinationPortRangeT&& value) { SetDestinationPortRange(std::forward<DestinationPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port range assigned to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRange& GetSourcePortRange() const { return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    template<typename SourcePortRangeT = TrafficMirrorPortRange>
    void SetSourcePortRange(SourcePortRangeT&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::forward<SourcePortRangeT>(value); }
    template<typename SourcePortRangeT = TrafficMirrorPortRange>
    TrafficMirrorFilterRule& WithSourcePortRange(SourcePortRangeT&& value) { SetSourcePortRange(std::forward<SourcePortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    TrafficMirrorFilterRule& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source CIDR block assigned to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const { return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    template<typename SourceCidrBlockT = Aws::String>
    void SetSourceCidrBlock(SourceCidrBlockT&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::forward<SourceCidrBlockT>(value); }
    template<typename SourceCidrBlockT = Aws::String>
    TrafficMirrorFilterRule& WithSourceCidrBlock(SourceCidrBlockT&& value) { SetSourceCidrBlock(std::forward<SourceCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TrafficMirrorFilterRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags on Traffic Mirroring filter rules.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrafficMirrorFilterRule& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrafficMirrorFilterRule& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trafficMirrorFilterRuleId;
    bool m_trafficMirrorFilterRuleIdHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    TrafficDirection m_trafficDirection{TrafficDirection::NOT_SET};
    bool m_trafficDirectionHasBeenSet = false;

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;

    TrafficMirrorRuleAction m_ruleAction{TrafficMirrorRuleAction::NOT_SET};
    bool m_ruleActionHasBeenSet = false;

    int m_protocol{0};
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
