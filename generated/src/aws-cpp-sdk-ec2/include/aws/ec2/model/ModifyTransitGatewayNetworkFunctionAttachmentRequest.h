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
class ModifyTransitGatewayNetworkFunctionAttachmentRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyTransitGatewayNetworkFunctionAttachmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyTransitGatewayNetworkFunctionAttachment"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the network function attachment.</p>
   */
  inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
  inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    m_transitGatewayAttachmentIdHasBeenSet = true;
    m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value);
  }
  template <typename TransitGatewayAttachmentIdT = Aws::String>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) {
    SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the Availability Zones to add to the attachment. You can't add
   * and remove the same Availability Zone in a single request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAddAvailabilityZones() const { return m_addAvailabilityZones; }
  inline bool AddAvailabilityZonesHasBeenSet() const { return m_addAvailabilityZonesHasBeenSet; }
  template <typename AddAvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetAddAvailabilityZones(AddAvailabilityZonesT&& value) {
    m_addAvailabilityZonesHasBeenSet = true;
    m_addAvailabilityZones = std::forward<AddAvailabilityZonesT>(value);
  }
  template <typename AddAvailabilityZonesT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithAddAvailabilityZones(AddAvailabilityZonesT&& value) {
    SetAddAvailabilityZones(std::forward<AddAvailabilityZonesT>(value));
    return *this;
  }
  template <typename AddAvailabilityZonesT = Aws::String>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& AddAddAvailabilityZones(AddAvailabilityZonesT&& value) {
    m_addAvailabilityZonesHasBeenSet = true;
    m_addAvailabilityZones.emplace_back(std::forward<AddAvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the Availability Zones to add to the attachment. You can't add and
   * remove the same Availability Zone in a single request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAddAvailabilityZoneIds() const { return m_addAvailabilityZoneIds; }
  inline bool AddAvailabilityZoneIdsHasBeenSet() const { return m_addAvailabilityZoneIdsHasBeenSet; }
  template <typename AddAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetAddAvailabilityZoneIds(AddAvailabilityZoneIdsT&& value) {
    m_addAvailabilityZoneIdsHasBeenSet = true;
    m_addAvailabilityZoneIds = std::forward<AddAvailabilityZoneIdsT>(value);
  }
  template <typename AddAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithAddAvailabilityZoneIds(AddAvailabilityZoneIdsT&& value) {
    SetAddAvailabilityZoneIds(std::forward<AddAvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename AddAvailabilityZoneIdsT = Aws::String>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& AddAddAvailabilityZoneIds(AddAvailabilityZoneIdsT&& value) {
    m_addAvailabilityZoneIdsHasBeenSet = true;
    m_addAvailabilityZoneIds.emplace_back(std::forward<AddAvailabilityZoneIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the Availability Zones to remove from the attachment. Each
   * Availability Zone must be currently in the attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoveAvailabilityZones() const { return m_removeAvailabilityZones; }
  inline bool RemoveAvailabilityZonesHasBeenSet() const { return m_removeAvailabilityZonesHasBeenSet; }
  template <typename RemoveAvailabilityZonesT = Aws::Vector<Aws::String>>
  void SetRemoveAvailabilityZones(RemoveAvailabilityZonesT&& value) {
    m_removeAvailabilityZonesHasBeenSet = true;
    m_removeAvailabilityZones = std::forward<RemoveAvailabilityZonesT>(value);
  }
  template <typename RemoveAvailabilityZonesT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithRemoveAvailabilityZones(RemoveAvailabilityZonesT&& value) {
    SetRemoveAvailabilityZones(std::forward<RemoveAvailabilityZonesT>(value));
    return *this;
  }
  template <typename RemoveAvailabilityZonesT = Aws::String>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& AddRemoveAvailabilityZones(RemoveAvailabilityZonesT&& value) {
    m_removeAvailabilityZonesHasBeenSet = true;
    m_removeAvailabilityZones.emplace_back(std::forward<RemoveAvailabilityZonesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the Availability Zones to remove from the attachment. Each
   * Availability Zone must be currently in the attachment.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRemoveAvailabilityZoneIds() const { return m_removeAvailabilityZoneIds; }
  inline bool RemoveAvailabilityZoneIdsHasBeenSet() const { return m_removeAvailabilityZoneIdsHasBeenSet; }
  template <typename RemoveAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  void SetRemoveAvailabilityZoneIds(RemoveAvailabilityZoneIdsT&& value) {
    m_removeAvailabilityZoneIdsHasBeenSet = true;
    m_removeAvailabilityZoneIds = std::forward<RemoveAvailabilityZoneIdsT>(value);
  }
  template <typename RemoveAvailabilityZoneIdsT = Aws::Vector<Aws::String>>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithRemoveAvailabilityZoneIds(RemoveAvailabilityZoneIdsT&& value) {
    SetRemoveAvailabilityZoneIds(std::forward<RemoveAvailabilityZoneIdsT>(value));
    return *this;
  }
  template <typename RemoveAvailabilityZoneIdsT = Aws::String>
  ModifyTransitGatewayNetworkFunctionAttachmentRequest& AddRemoveAvailabilityZoneIds(RemoveAvailabilityZoneIdsT&& value) {
    m_removeAvailabilityZoneIdsHasBeenSet = true;
    m_removeAvailabilityZoneIds.emplace_back(std::forward<RemoveAvailabilityZoneIdsT>(value));
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
  inline ModifyTransitGatewayNetworkFunctionAttachmentRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_transitGatewayAttachmentId;

  Aws::Vector<Aws::String> m_addAvailabilityZones;

  Aws::Vector<Aws::String> m_addAvailabilityZoneIds;

  Aws::Vector<Aws::String> m_removeAvailabilityZones;

  Aws::Vector<Aws::String> m_removeAvailabilityZoneIds;

  bool m_dryRun{false};
  bool m_transitGatewayAttachmentIdHasBeenSet = false;
  bool m_addAvailabilityZonesHasBeenSet = false;
  bool m_addAvailabilityZoneIdsHasBeenSet = false;
  bool m_removeAvailabilityZonesHasBeenSet = false;
  bool m_removeAvailabilityZoneIdsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
