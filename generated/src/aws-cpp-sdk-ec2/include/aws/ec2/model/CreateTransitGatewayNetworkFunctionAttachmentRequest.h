/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateTransitGatewayNetworkFunctionAttachmentRequest : public EC2Request {
 public:
  AWS_EC2_API CreateTransitGatewayNetworkFunctionAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayNetworkFunctionAttachment"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the transit gateway. The transit gateway must be in the
   * <code>available</code> state.</p>
   */
  inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
  inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
  template <typename TransitGatewayIdT = Aws::String>
  void SetTransitGatewayId(TransitGatewayIdT&& value) {
    m_transitGatewayIdHasBeenSet = true;
    m_transitGatewayId = std::forward<TransitGatewayIdT>(value);
  }
  template <typename TransitGatewayIdT = Aws::String>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& WithTransitGatewayId(TransitGatewayIdT&& value) {
    SetTransitGatewayId(std::forward<TransitGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Gateway Load Balancer endpoint service.</p>
   */
  inline const Aws::String& GetServiceName() const { return m_serviceName; }
  inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
  template <typename ServiceNameT = Aws::String>
  void SetServiceName(ServiceNameT&& value) {
    m_serviceNameHasBeenSet = true;
    m_serviceName = std::forward<ServiceNameT>(value);
  }
  template <typename ServiceNameT = Aws::String>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& WithServiceName(ServiceNameT&& value) {
    SetServiceName(std::forward<ServiceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the Availability Zones for the attachment. You must specify at
   * least one Availability Zone, using this parameter,
   * <code>AvailabilityZoneIds</code>, or both. Each Availability Zone must be
   * supported by both the transit gateway and the endpoint service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
  inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones = std::forward<AvailabilityZonesT>(value);
  }
  template <typename AvailabilityZonesT = Aws::Vector<Aws::String>>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& WithAvailabilityZones(AvailabilityZonesT&& value) {
    SetAvailabilityZones(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  template <typename AvailabilityZonesT = Aws::String>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& AddAvailabilityZones(AvailabilityZonesT&& value) {
    m_availabilityZonesHasBeenSet = true;
    m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the Availability Zones for the attachment. You must specify at
   * least one Availability Zone, using this parameter,
   * <code>AvailabilityZones</code>, or both. Each Availability Zone must be
   * supported by both the transit gateway and the endpoint service.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
  inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value);
  }
  template <typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename AvailabilityZoneIdsT = Aws::String>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) {
    m_availabilityZoneIdsHasBeenSet = true;
    m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the network function attachment.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateTransitGatewayNetworkFunctionAttachmentRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
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
  inline CreateTransitGatewayNetworkFunctionAttachmentRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayId;

  Aws::String m_serviceName;

  Aws::Vector<Aws::String> m_availabilityZones;

  Aws::Vector<Aws::String> m_availabilityZoneIds;

  Aws::Vector<TagSpecification> m_tagSpecifications;

  bool m_dryRun{false};
  bool m_transitGatewayIdHasBeenSet = false;
  bool m_serviceNameHasBeenSet = false;
  bool m_availabilityZonesHasBeenSet = false;
  bool m_availabilityZoneIdsHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
