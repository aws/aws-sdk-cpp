﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficDirection.h>
#include <aws/ec2/model/TrafficMirrorRuleAction.h>
#include <aws/ec2/model/TrafficMirrorPortRangeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateTrafficMirrorFilterRuleRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTrafficMirrorFilterRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficMirrorFilterRule"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the filter that this rule is associated with.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    CreateTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic.</p>
     */
    inline TrafficDirection GetTrafficDirection() const { return m_trafficDirection; }
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }
    inline void SetTrafficDirection(TrafficDirection value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficDirection(TrafficDirection value) { SetTrafficDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline int GetRuleNumber() const { return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take on the filtered traffic.</p>
     */
    inline TrafficMirrorRuleAction GetRuleAction() const { return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(TrafficMirrorRuleAction value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithRuleAction(TrafficMirrorRuleAction value) { SetRuleAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port range.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetDestinationPortRange() const { return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    template<typename DestinationPortRangeT = TrafficMirrorPortRangeRequest>
    void SetDestinationPortRange(DestinationPortRangeT&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::forward<DestinationPortRangeT>(value); }
    template<typename DestinationPortRangeT = TrafficMirrorPortRangeRequest>
    CreateTrafficMirrorFilterRuleRequest& WithDestinationPortRange(DestinationPortRangeT&& value) { SetDestinationPortRange(std::forward<DestinationPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port range.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetSourcePortRange() const { return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    template<typename SourcePortRangeT = TrafficMirrorPortRangeRequest>
    void SetSourcePortRange(SourcePortRangeT&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::forward<SourcePortRangeT>(value); }
    template<typename SourcePortRangeT = TrafficMirrorPortRangeRequest>
    CreateTrafficMirrorFilterRuleRequest& WithSourcePortRange(SourcePortRangeT&& value) { SetSourcePortRange(std::forward<SourcePortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol, for example UDP, to assign to the Traffic Mirror rule.</p>
     * <p>For information about the protocol value, see <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a> on the Internet Assigned Numbers Authority (IANA) website.</p>
     */
    inline int GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithProtocol(int value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    CreateTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const { return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    template<typename SourceCidrBlockT = Aws::String>
    void SetSourceCidrBlock(SourceCidrBlockT&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::forward<SourceCidrBlockT>(value); }
    template<typename SourceCidrBlockT = Aws::String>
    CreateTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(SourceCidrBlockT&& value) { SetSourceCidrBlock(std::forward<SourceCidrBlockT>(value)); return *this;}
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
    CreateTrafficMirrorFilterRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTrafficMirrorFilterRuleRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic Mirroring tags specifications.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateTrafficMirrorFilterRuleRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateTrafficMirrorFilterRuleRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    TrafficDirection m_trafficDirection{TrafficDirection::NOT_SET};
    bool m_trafficDirectionHasBeenSet = false;

    int m_ruleNumber{0};
    bool m_ruleNumberHasBeenSet = false;

    TrafficMirrorRuleAction m_ruleAction{TrafficMirrorRuleAction::NOT_SET};
    bool m_ruleActionHasBeenSet = false;

    TrafficMirrorPortRangeRequest m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet = false;

    TrafficMirrorPortRangeRequest m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet = false;

    int m_protocol{0};
    bool m_protocolHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
