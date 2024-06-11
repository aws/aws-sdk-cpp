/**
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
#include <aws/ec2/model/TrafficMirrorFilterRuleField.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyTrafficMirrorFilterRuleRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorFilterRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorFilterRule"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterRuleId() const{ return m_trafficMirrorFilterRuleId; }
    inline bool TrafficMirrorFilterRuleIdHasBeenSet() const { return m_trafficMirrorFilterRuleIdHasBeenSet; }
    inline void SetTrafficMirrorFilterRuleId(const Aws::String& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = value; }
    inline void SetTrafficMirrorFilterRuleId(Aws::String&& value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId = std::move(value); }
    inline void SetTrafficMirrorFilterRuleId(const char* value) { m_trafficMirrorFilterRuleIdHasBeenSet = true; m_trafficMirrorFilterRuleId.assign(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(const Aws::String& value) { SetTrafficMirrorFilterRuleId(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(Aws::String&& value) { SetTrafficMirrorFilterRuleId(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(const char* value) { SetTrafficMirrorFilterRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic to assign to the rule.</p>
     */
    inline const TrafficDirection& GetTrafficDirection() const{ return m_trafficDirection; }
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }
    inline void SetTrafficDirection(const TrafficDirection& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }
    inline void SetTrafficDirection(TrafficDirection&& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = std::move(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficDirection(const TrafficDirection& value) { SetTrafficDirection(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficDirection(TrafficDirection&& value) { SetTrafficDirection(std::move(value)); return *this;}
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
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to assign to the rule.</p>
     */
    inline const TrafficMirrorRuleAction& GetRuleAction() const{ return m_ruleAction; }
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }
    inline void SetRuleAction(const TrafficMirrorRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }
    inline void SetRuleAction(TrafficMirrorRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleAction(const TrafficMirrorRuleAction& value) { SetRuleAction(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleAction(TrafficMirrorRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetDestinationPortRange() const{ return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    inline void SetDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }
    inline void SetDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { SetDestinationPortRange(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { SetDestinationPortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetSourcePortRange() const{ return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    inline void SetSourcePortRange(const TrafficMirrorPortRangeRequest& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }
    inline void SetSourcePortRange(TrafficMirrorPortRangeRequest&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourcePortRange(const TrafficMirrorPortRangeRequest& value) { SetSourcePortRange(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourcePortRange(TrafficMirrorPortRangeRequest&& value) { SetSourcePortRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol, for example TCP, to assign to the Traffic Mirror rule.</p>
     */
    inline int GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ModifyTrafficMirrorFilterRuleRequest& WithProtocol(int value) { SetProtocol(value); return *this;}
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
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
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
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRuleField>& GetRemoveFields() const{ return m_removeFields; }
    inline bool RemoveFieldsHasBeenSet() const { return m_removeFieldsHasBeenSet; }
    inline void SetRemoveFields(const Aws::Vector<TrafficMirrorFilterRuleField>& value) { m_removeFieldsHasBeenSet = true; m_removeFields = value; }
    inline void SetRemoveFields(Aws::Vector<TrafficMirrorFilterRuleField>&& value) { m_removeFieldsHasBeenSet = true; m_removeFields = std::move(value); }
    inline ModifyTrafficMirrorFilterRuleRequest& WithRemoveFields(const Aws::Vector<TrafficMirrorFilterRuleField>& value) { SetRemoveFields(value); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& WithRemoveFields(Aws::Vector<TrafficMirrorFilterRuleField>&& value) { SetRemoveFields(std::move(value)); return *this;}
    inline ModifyTrafficMirrorFilterRuleRequest& AddRemoveFields(const TrafficMirrorFilterRuleField& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(value); return *this; }
    inline ModifyTrafficMirrorFilterRuleRequest& AddRemoveFields(TrafficMirrorFilterRuleField&& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(std::move(value)); return *this; }
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
    inline ModifyTrafficMirrorFilterRuleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorFilterRuleId;
    bool m_trafficMirrorFilterRuleIdHasBeenSet = false;

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

    Aws::Vector<TrafficMirrorFilterRuleField> m_removeFields;
    bool m_removeFieldsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
