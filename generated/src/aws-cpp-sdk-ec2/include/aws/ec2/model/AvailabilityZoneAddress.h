/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>For regional NAT gateways only: The configuration specifying which Elastic IP
 * address (EIP) to use for handling outbound NAT traffic from a specific
 * Availability Zone. </p> <p>A regional NAT gateway is a single NAT Gateway that
 * works across multiple availability zones (AZs) in your VPC, providing
 * redundancy, scalability and availability across all the AZs in a Region.</p>
 * <p>For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/nat-gateways-regional.html">Regional
 * NAT gateways for automatic multi-AZ expansion</a> in the <i>Amazon VPC User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZoneAddress">AWS
 * API Reference</a></p>
 */
class AvailabilityZoneAddress {
 public:
  AWS_EC2_API AvailabilityZoneAddress() = default;
  AWS_EC2_API AvailabilityZoneAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API AvailabilityZoneAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>For regional NAT gateways only: The Availability Zone where this specific NAT
   * gateway configuration will be active. Each AZ in a regional NAT gateway has its
   * own configuration to handle outbound NAT traffic from that AZ. </p> <p>A
   * regional NAT gateway is a single NAT Gateway that works across multiple
   * availability zones (AZs) in your VPC, providing redundancy, scalability and
   * availability across all the AZs in a Region.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  AvailabilityZoneAddress& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For regional NAT gateways only: The ID of the Availability Zone where this
   * specific NAT gateway configuration will be active. Each AZ in a regional NAT
   * gateway has its own configuration to handle outbound NAT traffic from that AZ.
   * Use this instead of AvailabilityZone for consistent identification of AZs across
   * Amazon Web Services Regions. </p> <p>A regional NAT gateway is a single NAT
   * Gateway that works across multiple availability zones (AZs) in your VPC,
   * providing redundancy, scalability and availability across all the AZs in a
   * Region.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  AvailabilityZoneAddress& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation IDs of the Elastic IP addresses (EIPs) to be used for handling
   * outbound NAT traffic in this specific Availability Zone.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllocationIds() const { return m_allocationIds; }
  inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  void SetAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds = std::forward<AllocationIdsT>(value);
  }
  template <typename AllocationIdsT = Aws::Vector<Aws::String>>
  AvailabilityZoneAddress& WithAllocationIds(AllocationIdsT&& value) {
    SetAllocationIds(std::forward<AllocationIdsT>(value));
    return *this;
  }
  template <typename AllocationIdsT = Aws::String>
  AvailabilityZoneAddress& AddAllocationIds(AllocationIdsT&& value) {
    m_allocationIdsHasBeenSet = true;
    m_allocationIds.emplace_back(std::forward<AllocationIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZone;
  bool m_availabilityZoneHasBeenSet = false;

  Aws::String m_availabilityZoneId;
  bool m_availabilityZoneIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_allocationIds;
  bool m_allocationIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
