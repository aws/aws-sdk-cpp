/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayPolicyRule.h>
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
   * <p>Describes a transit gateway policy table entry</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPolicyTableEntry">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPolicyTableEntry
  {
  public:
    AWS_EC2_API TransitGatewayPolicyTableEntry() = default;
    AWS_EC2_API TransitGatewayPolicyTableEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyTableEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline const Aws::String& GetPolicyRuleNumber() const { return m_policyRuleNumber; }
    inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }
    template<typename PolicyRuleNumberT = Aws::String>
    void SetPolicyRuleNumber(PolicyRuleNumberT&& value) { m_policyRuleNumberHasBeenSet = true; m_policyRuleNumber = std::forward<PolicyRuleNumberT>(value); }
    template<typename PolicyRuleNumberT = Aws::String>
    TransitGatewayPolicyTableEntry& WithPolicyRuleNumber(PolicyRuleNumberT&& value) { SetPolicyRuleNumber(std::forward<PolicyRuleNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline const TransitGatewayPolicyRule& GetPolicyRule() const { return m_policyRule; }
    inline bool PolicyRuleHasBeenSet() const { return m_policyRuleHasBeenSet; }
    template<typename PolicyRuleT = TransitGatewayPolicyRule>
    void SetPolicyRule(PolicyRuleT&& value) { m_policyRuleHasBeenSet = true; m_policyRule = std::forward<PolicyRuleT>(value); }
    template<typename PolicyRuleT = TransitGatewayPolicyRule>
    TransitGatewayPolicyTableEntry& WithPolicyRule(PolicyRuleT&& value) { SetPolicyRule(std::forward<PolicyRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target route table.</p>
     */
    inline const Aws::String& GetTargetRouteTableId() const { return m_targetRouteTableId; }
    inline bool TargetRouteTableIdHasBeenSet() const { return m_targetRouteTableIdHasBeenSet; }
    template<typename TargetRouteTableIdT = Aws::String>
    void SetTargetRouteTableId(TargetRouteTableIdT&& value) { m_targetRouteTableIdHasBeenSet = true; m_targetRouteTableId = std::forward<TargetRouteTableIdT>(value); }
    template<typename TargetRouteTableIdT = Aws::String>
    TransitGatewayPolicyTableEntry& WithTargetRouteTableId(TargetRouteTableIdT&& value) { SetTargetRouteTableId(std::forward<TargetRouteTableIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyRuleNumber;
    bool m_policyRuleNumberHasBeenSet = false;

    TransitGatewayPolicyRule m_policyRule;
    bool m_policyRuleHasBeenSet = false;

    Aws::String m_targetRouteTableId;
    bool m_targetRouteTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
