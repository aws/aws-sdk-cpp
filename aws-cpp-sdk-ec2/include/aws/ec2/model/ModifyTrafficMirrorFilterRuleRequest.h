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
  class AWS_EC2_API ModifyTrafficMirrorFilterRuleRequest : public EC2Request
  {
  public:
    ModifyTrafficMirrorFilterRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorFilterRule"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(const Aws::String& value) { SetTrafficMirrorFilterRuleId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(Aws::String&& value) { SetTrafficMirrorFilterRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficMirrorFilterRuleId(const char* value) { SetTrafficMirrorFilterRuleId(value); return *this;}


    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline const TrafficDirection& GetTrafficDirection() const{ return m_trafficDirection; }

    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline bool TrafficDirectionHasBeenSet() const { return m_trafficDirectionHasBeenSet; }

    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline void SetTrafficDirection(const TrafficDirection& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = value; }

    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline void SetTrafficDirection(TrafficDirection&& value) { m_trafficDirectionHasBeenSet = true; m_trafficDirection = std::move(value); }

    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficDirection(const TrafficDirection& value) { SetTrafficDirection(value); return *this;}

    /**
     * <p>The type of traffic (<code>ingress</code> | <code>egress</code>) to assign to
     * the rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithTrafficDirection(TrafficDirection&& value) { SetTrafficDirection(std::move(value)); return *this;}


    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline int GetRuleNumber() const{ return m_ruleNumber; }

    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline bool RuleNumberHasBeenSet() const { return m_ruleNumberHasBeenSet; }

    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline void SetRuleNumber(int value) { m_ruleNumberHasBeenSet = true; m_ruleNumber = value; }

    /**
     * <p>The number of the Traffic Mirror rule. This number must be unique for each
     * Traffic Mirror rule in a given direction. The rules are processed in ascending
     * order by rule number.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleNumber(int value) { SetRuleNumber(value); return *this;}


    /**
     * <p>The action to assign to the rule.</p>
     */
    inline const TrafficMirrorRuleAction& GetRuleAction() const{ return m_ruleAction; }

    /**
     * <p>The action to assign to the rule.</p>
     */
    inline bool RuleActionHasBeenSet() const { return m_ruleActionHasBeenSet; }

    /**
     * <p>The action to assign to the rule.</p>
     */
    inline void SetRuleAction(const TrafficMirrorRuleAction& value) { m_ruleActionHasBeenSet = true; m_ruleAction = value; }

    /**
     * <p>The action to assign to the rule.</p>
     */
    inline void SetRuleAction(TrafficMirrorRuleAction&& value) { m_ruleActionHasBeenSet = true; m_ruleAction = std::move(value); }

    /**
     * <p>The action to assign to the rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleAction(const TrafficMirrorRuleAction& value) { SetRuleAction(value); return *this;}

    /**
     * <p>The action to assign to the rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithRuleAction(TrafficMirrorRuleAction&& value) { SetRuleAction(std::move(value)); return *this;}


    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetDestinationPortRange() const{ return m_destinationPortRange; }

    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }

    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline void SetDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }

    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline void SetDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }

    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationPortRange(const TrafficMirrorPortRangeRequest& value) { SetDestinationPortRange(value); return *this;}

    /**
     * <p>The destination ports that are associated with the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationPortRange(TrafficMirrorPortRangeRequest&& value) { SetDestinationPortRange(std::move(value)); return *this;}


    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorPortRangeRequest& GetSourcePortRange() const{ return m_sourcePortRange; }

    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }

    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline void SetSourcePortRange(const TrafficMirrorPortRangeRequest& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }

    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline void SetSourcePortRange(TrafficMirrorPortRangeRequest&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }

    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourcePortRange(const TrafficMirrorPortRangeRequest& value) { SetSourcePortRange(value); return *this;}

    /**
     * <p>The port range to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourcePortRange(TrafficMirrorPortRangeRequest&& value) { SetSourcePortRange(std::move(value)); return *this;}


    /**
     * <p>The protocol, for example TCP, to assign to the Traffic Mirror rule.</p>
     */
    inline int GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol, for example TCP, to assign to the Traffic Mirror rule.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol, for example TCP, to assign to the Traffic Mirror rule.</p>
     */
    inline void SetProtocol(int value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol, for example TCP, to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithProtocol(int value) { SetProtocol(value); return *this;}


    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The destination CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const{ return m_sourceCidrBlock; }

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(const Aws::String& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = value; }

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(Aws::String&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::move(value); }

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline void SetSourceCidrBlock(const char* value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock.assign(value); }

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The source CIDR block to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}


    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to assign to the Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRuleField>& GetRemoveFields() const{ return m_removeFields; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline bool RemoveFieldsHasBeenSet() const { return m_removeFieldsHasBeenSet; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline void SetRemoveFields(const Aws::Vector<TrafficMirrorFilterRuleField>& value) { m_removeFieldsHasBeenSet = true; m_removeFields = value; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline void SetRemoveFields(Aws::Vector<TrafficMirrorFilterRuleField>&& value) { m_removeFieldsHasBeenSet = true; m_removeFields = std::move(value); }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithRemoveFields(const Aws::Vector<TrafficMirrorFilterRuleField>& value) { SetRemoveFields(value); return *this;}

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithRemoveFields(Aws::Vector<TrafficMirrorFilterRuleField>&& value) { SetRemoveFields(std::move(value)); return *this;}

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& AddRemoveFields(const TrafficMirrorFilterRuleField& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(value); return *this; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror filter
     * rule.</p> <p>When you remove a property from a Traffic Mirror filter rule, the
     * property is set to the default.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& AddRemoveFields(TrafficMirrorFilterRuleField&& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyTrafficMirrorFilterRuleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_trafficMirrorFilterRuleId;
    bool m_trafficMirrorFilterRuleIdHasBeenSet;

    TrafficDirection m_trafficDirection;
    bool m_trafficDirectionHasBeenSet;

    int m_ruleNumber;
    bool m_ruleNumberHasBeenSet;

    TrafficMirrorRuleAction m_ruleAction;
    bool m_ruleActionHasBeenSet;

    TrafficMirrorPortRangeRequest m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet;

    TrafficMirrorPortRangeRequest m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet;

    int m_protocol;
    bool m_protocolHasBeenSet;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<TrafficMirrorFilterRuleField> m_removeFields;
    bool m_removeFieldsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
