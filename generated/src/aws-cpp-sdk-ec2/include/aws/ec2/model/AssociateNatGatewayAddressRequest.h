/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class AssociateNatGatewayAddressRequest : public EC2Request {
 public:
  AWS_EC2_API AssociateNatGatewayAddressRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateNatGatewayAddress"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the NAT gateway.</p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  AssociateNatGatewayAddressRequest& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation IDs of EIPs that you want to associate with your NAT
   * gateway.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllocationIds() const { return m_allocationIds; }
  inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  void SetAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds = std::forward<AllocationIdsT>(value);
  }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  AssociateNatGatewayAddressRequest& WithAllocationIds(AllocationIdsT&& value) {
    SetAllocationIds(std::forward<AllocationIdsT>(value));
    return *this;
  }
  template <typename AllocationIdsT = Aws::String>
  AssociateNatGatewayAddressRequest& AddAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds.emplace_back(std::forward<AllocationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 addresses that you want to assign to the NAT gateway.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
  inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
  template <typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
  void SetPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value);
  }
  template <typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
  AssociateNatGatewayAddressRequest& WithPrivateIpAddresses(PrivateIpAddressesT&& value) {
    SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value));
    return *this;
  }
  template <typename PrivateIpAddressesT = Aws::String>
  AssociateNatGatewayAddressRequest& AddPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value));
    return *this;
  }
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
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline AssociateNatGatewayAddressRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For regional NAT gateways only: The Availability Zone where you want to
   * associate an Elastic IP address (EIP). The regional NAT gateway uses a separate
   * EIP in each AZ to handle outbound NAT traffic from that AZ.</p> <p>A regional
   * NAT gateway is a single NAT Gateway that works across multiple availability
   * zones (AZs) in your VPC, providing redundancy, scalability and availability
   * across all the AZs in a Region.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  AssociateNatGatewayAddressRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For regional NAT gateways only: The ID of the Availability Zone where you
   * want to associate an Elastic IP address (EIP). The regional NAT gateway uses a
   * separate EIP in each AZ to handle outbound NAT traffic from that AZ. Use this
   * instead of AvailabilityZone for consistent identification of AZs across Amazon
   * Web Services Regions. </p> <p>A regional NAT gateway is a single NAT Gateway
   * that works across multiple availability zones (AZs) in your VPC, providing
   * redundancy, scalability and availability across all the AZs in a Region.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  AssociateNatGatewayAddressRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_natGatewayId;

  Aws::Vector<Aws::String> m_allocationIds;

  Aws::Vector<Aws::String> m_privateIpAddresses;

  bool m_dryRun{false};

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;
  bool m_natGatewayIdHasBeenSet = false;
  bool m_allocationIdsHasBeenSet = false;
  bool m_privateIpAddressesHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
