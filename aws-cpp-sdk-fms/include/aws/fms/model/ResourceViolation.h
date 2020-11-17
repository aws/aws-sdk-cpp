/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/AwsVPCSecurityGroupViolation.h>
#include <aws/fms/model/AwsEc2NetworkInterfaceViolation.h>
#include <aws/fms/model/AwsEc2InstanceViolation.h>
#include <aws/fms/model/NetworkFirewallMissingFirewallViolation.h>
#include <aws/fms/model/NetworkFirewallMissingSubnetViolation.h>
#include <aws/fms/model/NetworkFirewallMissingExpectedRTViolation.h>
#include <aws/fms/model/NetworkFirewallPolicyModifiedViolation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Violation detail based on resource type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceViolation">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API ResourceViolation
  {
  public:
    ResourceViolation();
    ResourceViolation(Aws::Utils::Json::JsonView jsonValue);
    ResourceViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Violation details for security groups.</p>
     */
    inline const AwsVPCSecurityGroupViolation& GetAwsVPCSecurityGroupViolation() const{ return m_awsVPCSecurityGroupViolation; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline bool AwsVPCSecurityGroupViolationHasBeenSet() const { return m_awsVPCSecurityGroupViolationHasBeenSet; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = value; }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline void SetAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { m_awsVPCSecurityGroupViolationHasBeenSet = true; m_awsVPCSecurityGroupViolation = std::move(value); }

    /**
     * <p>Violation details for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(const AwsVPCSecurityGroupViolation& value) { SetAwsVPCSecurityGroupViolation(value); return *this;}

    /**
     * <p>Violation details for security groups.</p>
     */
    inline ResourceViolation& WithAwsVPCSecurityGroupViolation(AwsVPCSecurityGroupViolation&& value) { SetAwsVPCSecurityGroupViolation(std::move(value)); return *this;}


    /**
     * <p>Violation details for network interface.</p>
     */
    inline const AwsEc2NetworkInterfaceViolation& GetAwsEc2NetworkInterfaceViolation() const{ return m_awsEc2NetworkInterfaceViolation; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline bool AwsEc2NetworkInterfaceViolationHasBeenSet() const { return m_awsEc2NetworkInterfaceViolationHasBeenSet; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = value; }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline void SetAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { m_awsEc2NetworkInterfaceViolationHasBeenSet = true; m_awsEc2NetworkInterfaceViolation = std::move(value); }

    /**
     * <p>Violation details for network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(const AwsEc2NetworkInterfaceViolation& value) { SetAwsEc2NetworkInterfaceViolation(value); return *this;}

    /**
     * <p>Violation details for network interface.</p>
     */
    inline ResourceViolation& WithAwsEc2NetworkInterfaceViolation(AwsEc2NetworkInterfaceViolation&& value) { SetAwsEc2NetworkInterfaceViolation(std::move(value)); return *this;}


    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline const AwsEc2InstanceViolation& GetAwsEc2InstanceViolation() const{ return m_awsEc2InstanceViolation; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline bool AwsEc2InstanceViolationHasBeenSet() const { return m_awsEc2InstanceViolationHasBeenSet; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = value; }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline void SetAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { m_awsEc2InstanceViolationHasBeenSet = true; m_awsEc2InstanceViolation = std::move(value); }

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(const AwsEc2InstanceViolation& value) { SetAwsEc2InstanceViolation(value); return *this;}

    /**
     * <p>Violation details for an EC2 instance.</p>
     */
    inline ResourceViolation& WithAwsEc2InstanceViolation(AwsEc2InstanceViolation&& value) { SetAwsEc2InstanceViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline const NetworkFirewallMissingFirewallViolation& GetNetworkFirewallMissingFirewallViolation() const{ return m_networkFirewallMissingFirewallViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline bool NetworkFirewallMissingFirewallViolationHasBeenSet() const { return m_networkFirewallMissingFirewallViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline void SetNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline void SetNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { m_networkFirewallMissingFirewallViolationHasBeenSet = true; m_networkFirewallMissingFirewallViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(const NetworkFirewallMissingFirewallViolation& value) { SetNetworkFirewallMissingFirewallViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * has no Firewall Manager managed firewall in its VPC. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingFirewallViolation(NetworkFirewallMissingFirewallViolation&& value) { SetNetworkFirewallMissingFirewallViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline const NetworkFirewallMissingSubnetViolation& GetNetworkFirewallMissingSubnetViolation() const{ return m_networkFirewallMissingSubnetViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline bool NetworkFirewallMissingSubnetViolationHasBeenSet() const { return m_networkFirewallMissingSubnetViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline void SetNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline void SetNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { m_networkFirewallMissingSubnetViolationHasBeenSet = true; m_networkFirewallMissingSubnetViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(const NetworkFirewallMissingSubnetViolation& value) { SetNetworkFirewallMissingSubnetViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that an
     * Availability Zone is missing the expected Firewall Manager managed subnet.</p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingSubnetViolation(NetworkFirewallMissingSubnetViolation&& value) { SetNetworkFirewallMissingSubnetViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline const NetworkFirewallMissingExpectedRTViolation& GetNetworkFirewallMissingExpectedRTViolation() const{ return m_networkFirewallMissingExpectedRTViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline bool NetworkFirewallMissingExpectedRTViolationHasBeenSet() const { return m_networkFirewallMissingExpectedRTViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline void SetNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline void SetNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { m_networkFirewallMissingExpectedRTViolationHasBeenSet = true; m_networkFirewallMissingExpectedRTViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(const NetworkFirewallMissingExpectedRTViolation& value) { SetNetworkFirewallMissingExpectedRTViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a subnet
     * is not associated with the expected Firewall Manager managed route table. </p>
     */
    inline ResourceViolation& WithNetworkFirewallMissingExpectedRTViolation(NetworkFirewallMissingExpectedRTViolation&& value) { SetNetworkFirewallMissingExpectedRTViolation(std::move(value)); return *this;}


    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline const NetworkFirewallPolicyModifiedViolation& GetNetworkFirewallPolicyModifiedViolation() const{ return m_networkFirewallPolicyModifiedViolation; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline bool NetworkFirewallPolicyModifiedViolationHasBeenSet() const { return m_networkFirewallPolicyModifiedViolationHasBeenSet; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline void SetNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = value; }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline void SetNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { m_networkFirewallPolicyModifiedViolationHasBeenSet = true; m_networkFirewallPolicyModifiedViolation = std::move(value); }

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(const NetworkFirewallPolicyModifiedViolation& value) { SetNetworkFirewallPolicyModifiedViolation(value); return *this;}

    /**
     * <p>Violation detail for an Network Firewall policy that indicates that a
     * firewall policy in an individual account has been modified in a way that makes
     * it noncompliant. For example, the individual account owner might have deleted a
     * rule group, changed the priority of a stateless rule group, or changed a policy
     * default action.</p>
     */
    inline ResourceViolation& WithNetworkFirewallPolicyModifiedViolation(NetworkFirewallPolicyModifiedViolation&& value) { SetNetworkFirewallPolicyModifiedViolation(std::move(value)); return *this;}

  private:

    AwsVPCSecurityGroupViolation m_awsVPCSecurityGroupViolation;
    bool m_awsVPCSecurityGroupViolationHasBeenSet;

    AwsEc2NetworkInterfaceViolation m_awsEc2NetworkInterfaceViolation;
    bool m_awsEc2NetworkInterfaceViolationHasBeenSet;

    AwsEc2InstanceViolation m_awsEc2InstanceViolation;
    bool m_awsEc2InstanceViolationHasBeenSet;

    NetworkFirewallMissingFirewallViolation m_networkFirewallMissingFirewallViolation;
    bool m_networkFirewallMissingFirewallViolationHasBeenSet;

    NetworkFirewallMissingSubnetViolation m_networkFirewallMissingSubnetViolation;
    bool m_networkFirewallMissingSubnetViolationHasBeenSet;

    NetworkFirewallMissingExpectedRTViolation m_networkFirewallMissingExpectedRTViolation;
    bool m_networkFirewallMissingExpectedRTViolationHasBeenSet;

    NetworkFirewallPolicyModifiedViolation m_networkFirewallPolicyModifiedViolation;
    bool m_networkFirewallPolicyModifiedViolationHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
