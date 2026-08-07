/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistrationState.h>

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
 * <p>Contains information about a routing policy registration that represents a
 * Route Origin Authorization (ROA) managed through IPAM.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamRoutingPolicyRegistration">AWS
 * API Reference</a></p>
 */
class IpamRoutingPolicyRegistration {
 public:
  AWS_EC2_API IpamRoutingPolicyRegistration() = default;
  AWS_EC2_API IpamRoutingPolicyRegistration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamRoutingPolicyRegistration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The IP address prefix in CIDR notation authorized by the ROA.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  IpamRoutingPolicyRegistration& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Autonomous System Numbers (ASNs) authorized to originate the prefix.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAsns() const { return m_asns; }
  inline bool AsnsHasBeenSet() const { return m_asnsHasBeenSet; }
  template <typename AsnsT = Aws::Vector<Aws::String>>
  void SetAsns(AsnsT&& value) {
    m_asnsHasBeenSet = true;
    m_asns = std::forward<AsnsT>(value);
  }
  template <typename AsnsT = Aws::Vector<Aws::String>>
  IpamRoutingPolicyRegistration& WithAsns(AsnsT&& value) {
    SetAsns(std::forward<AsnsT>(value));
    return *this;
  }
  template <typename AsnsT = Aws::String>
  IpamRoutingPolicyRegistration& AddAsns(AsnsT&& value) {
    m_asnsHasBeenSet = true;
    m_asns.emplace_back(std::forward<AsnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to permit more specific route announcements than the CIDR
   * prefix. When enabled, ASNs can announce sub-prefixes of the authorized CIDR up
   * to the specified maximum length. Default: <code>false</code>.</p>
   */
  inline bool GetPermitMoreSpecificAnnouncements() const { return m_permitMoreSpecificAnnouncements; }
  inline bool PermitMoreSpecificAnnouncementsHasBeenSet() const { return m_permitMoreSpecificAnnouncementsHasBeenSet; }
  inline void SetPermitMoreSpecificAnnouncements(bool value) {
    m_permitMoreSpecificAnnouncementsHasBeenSet = true;
    m_permitMoreSpecificAnnouncements = value;
  }
  inline IpamRoutingPolicyRegistration& WithPermitMoreSpecificAnnouncements(bool value) {
    SetPermitMoreSpecificAnnouncements(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum prefix length that the ASNs are authorized to announce.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline IpamRoutingPolicyRegistration& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the routing policy registration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  IpamRoutingPolicyRegistration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the most recent delta that modified this registration.</p>
   */
  inline const Aws::String& GetLatestDeltaId() const { return m_latestDeltaId; }
  inline bool LatestDeltaIdHasBeenSet() const { return m_latestDeltaIdHasBeenSet; }
  template <typename LatestDeltaIdT = Aws::String>
  void SetLatestDeltaId(LatestDeltaIdT&& value) {
    m_latestDeltaIdHasBeenSet = true;
    m_latestDeltaId = std::forward<LatestDeltaIdT>(value);
  }
  template <typename LatestDeltaIdT = Aws::String>
  IpamRoutingPolicyRegistration& WithLatestDeltaId(LatestDeltaIdT&& value) {
    SetLatestDeltaId(std::forward<LatestDeltaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the routing policy registration. Valid values:
   * <code>pending-activate</code> | <code>activate-failed</code> |
   * <code>create-in-progress</code> | <code>create-complete</code> |
   * <code>update-in-progress</code> | <code>update-complete</code> |
   * <code>delete-in-progress</code> | <code>delete-complete</code>.</p>
   */
  inline IpamRoutingPolicyRegistrationState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamRoutingPolicyRegistrationState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamRoutingPolicyRegistration& WithState(IpamRoutingPolicyRegistrationState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cidr;

  Aws::Vector<Aws::String> m_asns;

  bool m_permitMoreSpecificAnnouncements{false};

  int m_maxLength{0};

  Aws::String m_description;

  Aws::String m_latestDeltaId;

  IpamRoutingPolicyRegistrationState m_state{IpamRoutingPolicyRegistrationState::NOT_SET};
  bool m_cidrHasBeenSet = false;
  bool m_asnsHasBeenSet = false;
  bool m_permitMoreSpecificAnnouncementsHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_latestDeltaIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
