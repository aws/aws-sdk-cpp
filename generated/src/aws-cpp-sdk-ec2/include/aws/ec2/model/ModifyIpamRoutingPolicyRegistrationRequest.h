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

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyIpamRoutingPolicyRegistrationRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyIpamRoutingPolicyRegistrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyIpamRoutingPolicyRegistration"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the operation, without
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
  inline ModifyIpamRoutingPolicyRegistrationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM internet registry association.</p>
   */
  inline const Aws::String& GetIpamInternetRegistryAssociationId() const { return m_ipamInternetRegistryAssociationId; }
  inline bool IpamInternetRegistryAssociationIdHasBeenSet() const { return m_ipamInternetRegistryAssociationIdHasBeenSet; }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  void SetIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    m_ipamInternetRegistryAssociationId = std::forward<IpamInternetRegistryAssociationIdT>(value);
  }
  template <typename IpamInternetRegistryAssociationIdT = Aws::String>
  ModifyIpamRoutingPolicyRegistrationRequest& WithIpamInternetRegistryAssociationId(IpamInternetRegistryAssociationIdT&& value) {
    SetIpamInternetRegistryAssociationId(std::forward<IpamInternetRegistryAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP address prefix in CIDR notation identifying the routing policy
   * registration to modify.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  ModifyIpamRoutingPolicyRegistrationRequest& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of Autonomous System Numbers (ASNs) authorized to originate
   * the prefix.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAsns() const { return m_asns; }
  inline bool AsnsHasBeenSet() const { return m_asnsHasBeenSet; }
  template <typename AsnsT = Aws::Vector<Aws::String>>
  void SetAsns(AsnsT&& value) {
    m_asnsHasBeenSet = true;
    m_asns = std::forward<AsnsT>(value);
  }
  template <typename AsnsT = Aws::Vector<Aws::String>>
  ModifyIpamRoutingPolicyRegistrationRequest& WithAsns(AsnsT&& value) {
    SetAsns(std::forward<AsnsT>(value));
    return *this;
  }
  template <typename AsnsT = Aws::String>
  ModifyIpamRoutingPolicyRegistrationRequest& AddAsns(AsnsT&& value) {
    m_asnsHasBeenSet = true;
    m_asns.emplace_back(std::forward<AsnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to permit more specific route announcements than the CIDR
   * prefix. Default: <code>false</code>.</p>
   */
  inline bool GetPermitMoreSpecificAnnouncements() const { return m_permitMoreSpecificAnnouncements; }
  inline bool PermitMoreSpecificAnnouncementsHasBeenSet() const { return m_permitMoreSpecificAnnouncementsHasBeenSet; }
  inline void SetPermitMoreSpecificAnnouncements(bool value) {
    m_permitMoreSpecificAnnouncementsHasBeenSet = true;
    m_permitMoreSpecificAnnouncements = value;
  }
  inline ModifyIpamRoutingPolicyRegistrationRequest& WithPermitMoreSpecificAnnouncements(bool value) {
    SetPermitMoreSpecificAnnouncements(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new maximum prefix length that the ASNs are authorized to announce. Must
   * be greater than or equal to the prefix length of the CIDR.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline ModifyIpamRoutingPolicyRegistrationRequest& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the routing policy registration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ModifyIpamRoutingPolicyRegistrationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Forces the modification even if it conflicts with an announced route.
   * Default: <code>false</code>.</p>
   */
  inline bool GetForce() const { return m_force; }
  inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
  inline void SetForce(bool value) {
    m_forceHasBeenSet = true;
    m_force = value;
  }
  inline ModifyIpamRoutingPolicyRegistrationRequest& WithForce(bool value) {
    SetForce(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the operation
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  ModifyIpamRoutingPolicyRegistrationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_ipamInternetRegistryAssociationId;

  Aws::String m_cidr;

  Aws::Vector<Aws::String> m_asns;

  bool m_permitMoreSpecificAnnouncements{false};

  int m_maxLength{0};

  Aws::String m_description;

  bool m_force{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_dryRunHasBeenSet = false;
  bool m_ipamInternetRegistryAssociationIdHasBeenSet = false;
  bool m_cidrHasBeenSet = false;
  bool m_asnsHasBeenSet = false;
  bool m_permitMoreSpecificAnnouncementsHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_forceHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
