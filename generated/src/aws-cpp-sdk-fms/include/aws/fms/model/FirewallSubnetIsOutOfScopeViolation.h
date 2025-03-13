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
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation() = default;
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API FirewallSubnetIsOutOfScopeViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the firewall subnet that violates the policy scope.</p>
     */
    inline const Aws::String& GetFirewallSubnetId() const { return m_firewallSubnetId; }
    inline bool FirewallSubnetIdHasBeenSet() const { return m_firewallSubnetIdHasBeenSet; }
    template<typename FirewallSubnetIdT = Aws::String>
    void SetFirewallSubnetId(FirewallSubnetIdT&& value) { m_firewallSubnetIdHasBeenSet = true; m_firewallSubnetId = std::forward<FirewallSubnetIdT>(value); }
    template<typename FirewallSubnetIdT = Aws::String>
    FirewallSubnetIsOutOfScopeViolation& WithFirewallSubnetId(FirewallSubnetIdT&& value) { SetFirewallSubnetId(std::forward<FirewallSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC ID of the firewall subnet that violates the policy scope.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    FirewallSubnetIsOutOfScopeViolation& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZone() const { return m_subnetAvailabilityZone; }
    inline bool SubnetAvailabilityZoneHasBeenSet() const { return m_subnetAvailabilityZoneHasBeenSet; }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    void SetSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { m_subnetAvailabilityZoneHasBeenSet = true; m_subnetAvailabilityZone = std::forward<SubnetAvailabilityZoneT>(value); }
    template<typename SubnetAvailabilityZoneT = Aws::String>
    FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZone(SubnetAvailabilityZoneT&& value) { SetSubnetAvailabilityZone(std::forward<SubnetAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetSubnetAvailabilityZoneId() const { return m_subnetAvailabilityZoneId; }
    inline bool SubnetAvailabilityZoneIdHasBeenSet() const { return m_subnetAvailabilityZoneIdHasBeenSet; }
    template<typename SubnetAvailabilityZoneIdT = Aws::String>
    void SetSubnetAvailabilityZoneId(SubnetAvailabilityZoneIdT&& value) { m_subnetAvailabilityZoneIdHasBeenSet = true; m_subnetAvailabilityZoneId = std::forward<SubnetAvailabilityZoneIdT>(value); }
    template<typename SubnetAvailabilityZoneIdT = Aws::String>
    FirewallSubnetIsOutOfScopeViolation& WithSubnetAvailabilityZoneId(SubnetAvailabilityZoneIdT&& value) { SetSubnetAvailabilityZoneId(std::forward<SubnetAvailabilityZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint ID of the firewall subnet that violates the policy
     * scope.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    FirewallSubnetIsOutOfScopeViolation& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}
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
