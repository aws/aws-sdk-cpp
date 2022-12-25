/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about the firewall subnet that violates the policy
   * scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/FirewallSubnetIsOutOfScopeViolation">AWS
   * API Reference</a></p>
   */
  class FirewallSubnetIsOutOfScopeViolation
  {
  public:
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation();
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const{ return m_firewallSubnetId; }

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetFirewallSubnetId(const Aws::String& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = value; }

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetFirewallSubnetId(Aws::String&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::move(value); }

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetFirewallSubnetId(const char* value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId.assign(value); }

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithFirewallSubnetId(const Aws::String& value) { SetFirewallSubnetId(value); return *this;}

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithFirewallSubnetId(Aws::String&& value) { SetFirewallSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithFirewallSubnetId(const char* value) { SetFirewallSubnetId(value); return *this;}


    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const{ return m_subnetAvailabilityZone; }

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZone(const Aws::String& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = value; }

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZone(Aws::String&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZone(const char* value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZone(const Aws::String& value) { SetSubnetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZone(Aws::String&& value) { SetSubnetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZone(const char* value) { SetSubnetAvailabilityZone(value); return *this;}


    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZoneId() const{ return m_subnetAvailabilityZoneId; }

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline bool SubnetAvailabilityZoneIdHasBeenSet() const { return m_subnetAvailabilityZoneIdHasBeenSet; }

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZoneId(const Aws::String& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = value; }

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZoneId(Aws::String&& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = std::move(value); }

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetSubnetAvailabilityZoneId(const char* value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId.assign(value); }

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZoneId(const Aws::String& value) { SetSubnetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZoneId(Aws::String&& value) { SetSubnetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZoneId(const char* value) { SetSubnetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline FirewallSubnetIsOutOfScopeViolation& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}

  private:

    Aws::String m_firewallSubnetId;
    bool m_firewallSubnetIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetAvailabilityZone;
    bool m_subnetAvailabilityZoneHasBeenSet = false;

    Aws::String m_subnetAvailabilityZoneId;
    bool m_subnetAvailabilityZoneIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
