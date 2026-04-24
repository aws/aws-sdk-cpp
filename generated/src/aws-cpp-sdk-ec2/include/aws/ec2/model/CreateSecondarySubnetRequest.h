/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
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
class CreateSecondarySubnetRequest : public EC2Request {
 public:
  AWS_EC2_API CreateSecondarySubnetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSecondarySubnet"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see <a
   * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensure
   * Idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSecondarySubnetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone for the secondary subnet. You cannot specify both
   * <code>AvailabilityZone</code> and <code>AvailabilityZoneId</code> in the same
   * request.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CreateSecondarySubnetRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone for the secondary subnet. This option is
   * preferred over <code>AvailabilityZone</code> as it provides a consistent
   * identifier across Amazon Web Services accounts. You cannot specify both
   * <code>AvailabilityZone</code> and <code>AvailabilityZoneId</code> in the same
   * request.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CreateSecondarySubnetRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
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
  inline CreateSecondarySubnetRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR block for the secondary subnet. The CIDR block size must be
   * between /12 and /28.</p>
   */
  inline const Aws::String& GetIpv4CidrBlock() const { return m_ipv4CidrBlock; }
  inline bool Ipv4CidrBlockHasBeenSet() const { return m_ipv4CidrBlockHasBeenSet; }
  template <typename Ipv4CidrBlockT = Aws::String>
  void SetIpv4CidrBlock(Ipv4CidrBlockT&& value) {
    m_ipv4CidrBlockHasBeenSet = true;
    m_ipv4CidrBlock = std::forward<Ipv4CidrBlockT>(value);
  }
  template <typename Ipv4CidrBlockT = Aws::String>
  CreateSecondarySubnetRequest& WithIpv4CidrBlock(Ipv4CidrBlockT&& value) {
    SetIpv4CidrBlock(std::forward<Ipv4CidrBlockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the secondary network in which to create the secondary subnet.</p>
   */
  inline const Aws::String& GetSecondaryNetworkId() const { return m_secondaryNetworkId; }
  inline bool SecondaryNetworkIdHasBeenSet() const { return m_secondaryNetworkIdHasBeenSet; }
  template <typename SecondaryNetworkIdT = Aws::String>
  void SetSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    m_secondaryNetworkIdHasBeenSet = true;
    m_secondaryNetworkId = std::forward<SecondaryNetworkIdT>(value);
  }
  template <typename SecondaryNetworkIdT = Aws::String>
  CreateSecondarySubnetRequest& WithSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    SetSecondaryNetworkId(std::forward<SecondaryNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the secondary subnet.</p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateSecondarySubnetRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateSecondarySubnetRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  bool m_dryRun{false};

  Aws::String m_ipv4CidrBlock;

  Aws::String m_secondaryNetworkId;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_clientTokenHasBeenSet = true;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
  bool m_ipv4CidrBlockHasBeenSet = false;
  bool m_secondaryNetworkIdHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
