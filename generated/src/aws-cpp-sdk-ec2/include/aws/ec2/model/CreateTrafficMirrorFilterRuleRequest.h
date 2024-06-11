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
    AWS_EC2_API CreateTrafficMirrorFilterRuleRequest();

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
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic.</p>
     */
    inline const TrafficDirection& GetTrafficDirection() const{ return m_trafficDirection; }
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }
    inline void SetTrafficDirection(const TrafficDirection& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }
    inline void SetTrafficDirection(TrafficDirection&& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = std::move(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficDirection(const TrafficDirection& value) { SetTrafficDirection(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithTrafficDirection(TrafficDirection&& value) { SetTrafficDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take on the filtered traffic.</p>
     */
    inline const TrafficMirrorRuleAction& GetRuleAction() const{ return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(const TrafficMirrorRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline void SetRuleAction(TrafficMirrorRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithRuleAction(const TrafficMirrorRuleAction& value) { SetRuleAction(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithRuleAction(TrafficMirrorRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port range.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetDestinationPortRange() const{ return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    inline void SetDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }
    inline void SetDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { SetDestinationPortRange(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { SetDestinationPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source port range.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetSourcePortRange() const{ return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    inline void SetSourcePortRange(const TrafficMirrorPortRangeRequest& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }
    inline void SetSourcePortRange(TrafficMirrorPortRangeRequest&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithSourcePortRange(const TrafficMirrorPortRangeRequest& value) { SetSourcePortRange(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithSourcePortRange(TrafficMirrorPortRangeRequest&& value) { SetSourcePortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol, for example UDP, to assign to the Traffic Mirror rule.</p>
     * <p>For information about the protocol value, see <a
     * href="https://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a> on the Internet Assigned Numbers Authority (IANA) website.</p>
     */
    inline int GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithProtocol(int value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const{ return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    inline void SetSourceCidrBlock(const Aws::String& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = value; }
    inline void SetSourceCidrBlock(Aws::String&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::move(value); }
    inline void SetSourceCidrBlock(const char* value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock.assign(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}
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
    inline CreateTrafficMirrorFilterRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateTrafficMirrorFilterRuleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTrafficMirrorFilterRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    TrafficDirection m_trafficDirection;
    bool m_trafficDirectionHasBeenSet = false;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet = false;

    TrafficMirrorRuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet = false;

    TrafficMirrorPortRangeRequest m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet = false;

    TrafficMirrorPortRangeRequest m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet = false;

    int m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
