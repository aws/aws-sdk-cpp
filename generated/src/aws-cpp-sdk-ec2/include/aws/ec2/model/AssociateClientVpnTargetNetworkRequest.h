/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class AssociateClientVpnTargetNetworkRequest : public EC2Request {
 public:
  AWS_EC2_API AssociateClientVpnTargetNetworkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateClientVpnTargetNetwork"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The ID of the Client VPN endpoint.</p>
   */
  inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
  inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
  template <typename ClientVpnEndpointIdT = Aws::String>
  void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    m_clientVpnEndpointIdHasBeenSet = true;
    m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value);
  }
  template <typename ClientVpnEndpointIdT = Aws::String>
  AssociateClientVpnTargetNetworkRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) {
    SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the subnet to associate with the Client VPN endpoint. Required for
   * VPC-based endpoints. For Transit Gateway-based endpoints, use
   * <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> instead.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  AssociateClientVpnTargetNetworkRequest& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociateClientVpnTargetNetworkRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  inline AssociateClientVpnTargetNetworkRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone name for the Transit Gateway association. Required if
   * when associating an Availability Zone with a Client VPN endpoint that uses a
   * Transit Gateway. You cannot specify both <code>SubnetId</code> and
   * <code>AvailabilityZone</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  AssociateClientVpnTargetNetworkRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID for the Transit Gateway association. Required if
   * when associating an Availability Zone with a Client VPN endpoint that uses a
   * Transit Gateway. You cannot specify both <code>AvailabilityZone</code> and
   * <code>AvailabilityZoneId</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  AssociateClientVpnTargetNetworkRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientVpnEndpointId;

  Aws::String m_subnetId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  bool m_dryRun{false};

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;
  bool m_clientVpnEndpointIdHasBeenSet = false;
  bool m_subnetIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_dryRunHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
