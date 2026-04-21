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
 * <p>Describes the Transit Gateway configuration for a Client VPN
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayConfigurationDescribeEndpointStructure">AWS
 * API Reference</a></p>
 */
class TransitGatewayConfigurationDescribeEndpointStructure {
 public:
  AWS_EC2_API TransitGatewayConfigurationDescribeEndpointStructure() = default;
  AWS_EC2_API TransitGatewayConfigurationDescribeEndpointStructure(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API TransitGatewayConfigurationDescribeEndpointStructure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Transit Gateway.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  TransitGatewayConfigurationDescribeEndpointStructure& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Transit Gateway attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  TransitGatewayConfigurationDescribeEndpointStructure& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone names for the Transit Gateway association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  TransitGatewayConfigurationDescribeEndpointStructure& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  TransitGatewayConfigurationDescribeEndpointStructure& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone IDs for the Transit Gateway association.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
  inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value);
  }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  TransitGatewayConfigurationDescribeEndpointStructure& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneIdsT = Aws::String>
  TransitGatewayConfigurationDescribeEndpointStructure& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayId;

  Aws::String m_transitGatewayAttachmentId;

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<Aws::String> m_availabilityZoneIds;
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_availabilityZoneIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
