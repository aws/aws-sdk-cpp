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
    AWS_EC2_API TransitGatewayPolicyTableEntry();
    AWS_EC2_API TransitGatewayPolicyTableEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyTableEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline const Aws::String& GetPolicyRuleNumber() const{ return m_policyRuleNumber; }

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline bool PolicyRuleNumberHasBeenSet() const { return m_policyRuleNumberHasBeenSet; }

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline void SetPolicyRuleNumber(const Aws::String& value) { m_policyRuleNumberHasBeenSet = true; m_policyRuleNumber = value; }

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline void SetPolicyRuleNumber(Aws::String&& value) { m_policyRuleNumberHasBeenSet = true; m_policyRuleNumber = std::move(value); }

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline void SetPolicyRuleNumber(const char* value) { m_policyRuleNumberHasBeenSet = true; m_policyRuleNumber.assign(value); }

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithPolicyRuleNumber(const Aws::String& value) { SetPolicyRuleNumber(value); return *this;}

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithPolicyRuleNumber(Aws::String&& value) { SetPolicyRuleNumber(std::move(value)); return *this;}

    /**
     * <p>The rule number for the transit gateway policy table entry.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithPolicyRuleNumber(const char* value) { SetPolicyRuleNumber(value); return *this;}


    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline const TransitGatewayPolicyRule& GetPolicyRule() const{ return m_policyRule; }

    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline bool PolicyRuleHasBeenSet() const { return m_policyRuleHasBeenSet; }

    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline void SetPolicyRule(const TransitGatewayPolicyRule& value) { m_policyRuleHasBeenSet = true; m_policyRule = value; }

    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline void SetPolicyRule(TransitGatewayPolicyRule&& value) { m_policyRuleHasBeenSet = true; m_policyRule = std::move(value); }

    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithPolicyRule(const TransitGatewayPolicyRule& value) { SetPolicyRule(value); return *this;}

    /**
     * <p>The policy rule associated with the transit gateway policy table.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithPolicyRule(TransitGatewayPolicyRule&& value) { SetPolicyRule(std::move(value)); return *this;}


    /**
     * <p>The ID of the target route table.</p>
     */
    inline const Aws::String& GetTargetRouteTableId() const{ return m_targetRouteTableId; }

    /**
     * <p>The ID of the target route table.</p>
     */
    inline bool TargetRouteTableIdHasBeenSet() const { return m_targetRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the target route table.</p>
     */
    inline void SetTargetRouteTableId(const Aws::String& value) { m_targetRouteTableIdHasBeenSet = true; m_targetRouteTableId = value; }

    /**
     * <p>The ID of the target route table.</p>
     */
    inline void SetTargetRouteTableId(Aws::String&& value) { m_targetRouteTableIdHasBeenSet = true; m_targetRouteTableId = std::move(value); }

    /**
     * <p>The ID of the target route table.</p>
     */
    inline void SetTargetRouteTableId(const char* value) { m_targetRouteTableIdHasBeenSet = true; m_targetRouteTableId.assign(value); }

    /**
     * <p>The ID of the target route table.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithTargetRouteTableId(const Aws::String& value) { SetTargetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the target route table.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithTargetRouteTableId(Aws::String&& value) { SetTargetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target route table.</p>
     */
    inline TransitGatewayPolicyTableEntry& WithTargetRouteTableId(const char* value) { SetTargetRouteTableId(value); return *this;}

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
