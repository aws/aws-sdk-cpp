/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AddressFamily.h>
#include <aws/ec2/model/IpamPrefixListResolverState.h>
#include <aws/ec2/model/IpamPrefixListResolverVersionCreationStatus.h>
#include <aws/ec2/model/Tag.h>

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
 * <p>Describes an IPAM prefix list resolver.</p> <p>An IPAM prefix list resolver
 * is a component that manages the synchronization between IPAM's CIDR selection
 * rules and customer-managed prefix lists. It automates connectivity
 * configurations by selecting CIDRs from IPAM's database based on your business
 * logic and synchronizing them with prefix lists used in resources such as VPC
 * route tables and security groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolver">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolver {
 public:
  AWS_EC2_API IpamPrefixListResolver() = default;
  AWS_EC2_API IpamPrefixListResolver(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolver& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the IPAM prefix list
   * resolver.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  IpamPrefixListResolver& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the IPAM prefix list resolver.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverId() const { return m_ipamPrefixListResolverId; }
  inline bool IpamPrefixListResolverIdHasBeenSet() const { return m_ipamPrefixListResolverIdHasBeenSet; }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  void SetIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    m_ipamPrefixListResolverIdHasBeenSet = true;
    m_ipamPrefixListResolverId = std::forward<IpamPrefixListResolverIdT>(value);
  }
  template <typename IpamPrefixListResolverIdT = Aws::String>
  IpamPrefixListResolver& WithIpamPrefixListResolverId(IpamPrefixListResolverIdT&& value) {
    SetIpamPrefixListResolverId(std::forward<IpamPrefixListResolverIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IPAM prefix list resolver.</p>
   */
  inline const Aws::String& GetIpamPrefixListResolverArn() const { return m_ipamPrefixListResolverArn; }
  inline bool IpamPrefixListResolverArnHasBeenSet() const { return m_ipamPrefixListResolverArnHasBeenSet; }
  template <typename IpamPrefixListResolverArnT = Aws::String>
  void SetIpamPrefixListResolverArn(IpamPrefixListResolverArnT&& value) {
    m_ipamPrefixListResolverArnHasBeenSet = true;
    m_ipamPrefixListResolverArn = std::forward<IpamPrefixListResolverArnT>(value);
  }
  template <typename IpamPrefixListResolverArnT = Aws::String>
  IpamPrefixListResolver& WithIpamPrefixListResolverArn(IpamPrefixListResolverArnT&& value) {
    SetIpamPrefixListResolverArn(std::forward<IpamPrefixListResolverArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IPAM associated with this resolver.</p>
   */
  inline const Aws::String& GetIpamArn() const { return m_ipamArn; }
  inline bool IpamArnHasBeenSet() const { return m_ipamArnHasBeenSet; }
  template <typename IpamArnT = Aws::String>
  void SetIpamArn(IpamArnT&& value) {
    m_ipamArnHasBeenSet = true;
    m_ipamArn = std::forward<IpamArnT>(value);
  }
  template <typename IpamArnT = Aws::String>
  IpamPrefixListResolver& WithIpamArn(IpamArnT&& value) {
    SetIpamArn(std::forward<IpamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the associated IPAM is located.</p>
   */
  inline const Aws::String& GetIpamRegion() const { return m_ipamRegion; }
  inline bool IpamRegionHasBeenSet() const { return m_ipamRegionHasBeenSet; }
  template <typename IpamRegionT = Aws::String>
  void SetIpamRegion(IpamRegionT&& value) {
    m_ipamRegionHasBeenSet = true;
    m_ipamRegion = std::forward<IpamRegionT>(value);
  }
  template <typename IpamRegionT = Aws::String>
  IpamPrefixListResolver& WithIpamRegion(IpamRegionT&& value) {
    SetIpamRegion(std::forward<IpamRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the IPAM prefix list resolver.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  IpamPrefixListResolver& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address family (IPv4 or IPv6) for the IPAM prefix list resolver.</p>
   */
  inline AddressFamily GetAddressFamily() const { return m_addressFamily; }
  inline bool AddressFamilyHasBeenSet() const { return m_addressFamilyHasBeenSet; }
  inline void SetAddressFamily(AddressFamily value) {
    m_addressFamilyHasBeenSet = true;
    m_addressFamily = value;
  }
  inline IpamPrefixListResolver& WithAddressFamily(AddressFamily value) {
    SetAddressFamily(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the IPAM prefix list resolver. Valid values include
   * <code>create-in-progress</code>, <code>create-complete</code>,
   * <code>create-failed</code>, <code>modify-in-progress</code>,
   * <code>modify-complete</code>, <code>modify-failed</code>,
   * <code>delete-in-progress</code>, <code>delete-complete</code>, and
   * <code>delete-failed</code>.</p>
   */
  inline IpamPrefixListResolverState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(IpamPrefixListResolverState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline IpamPrefixListResolver& WithState(IpamPrefixListResolverState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the IPAM prefix list resolver.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  IpamPrefixListResolver& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  IpamPrefixListResolver& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status for the last time a version was created.</p> <p>Each version is a
   * snapshot of what CIDRs matched your rules at that moment in time. The version
   * number increments every time the CIDR list changes due to infrastructure
   * changes.</p>
   */
  inline IpamPrefixListResolverVersionCreationStatus GetLastVersionCreationStatus() const { return m_lastVersionCreationStatus; }
  inline bool LastVersionCreationStatusHasBeenSet() const { return m_lastVersionCreationStatusHasBeenSet; }
  inline void SetLastVersionCreationStatus(IpamPrefixListResolverVersionCreationStatus value) {
    m_lastVersionCreationStatusHasBeenSet = true;
    m_lastVersionCreationStatus = value;
  }
  inline IpamPrefixListResolver& WithLastVersionCreationStatus(IpamPrefixListResolverVersionCreationStatus value) {
    SetLastVersionCreationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status message for the last time a version was created.</p> <p>Each
   * version is a snapshot of what CIDRs matched your rules at that moment in time.
   * The version number increments every time the CIDR list changes due to
   * infrastructure changes.</p>
   */
  inline const Aws::String& GetLastVersionCreationStatusMessage() const { return m_lastVersionCreationStatusMessage; }
  inline bool LastVersionCreationStatusMessageHasBeenSet() const { return m_lastVersionCreationStatusMessageHasBeenSet; }
  template <typename LastVersionCreationStatusMessageT = Aws::String>
  void SetLastVersionCreationStatusMessage(LastVersionCreationStatusMessageT&& value) {
    m_lastVersionCreationStatusMessageHasBeenSet = true;
    m_lastVersionCreationStatusMessage = std::forward<LastVersionCreationStatusMessageT>(value);
  }
  template <typename LastVersionCreationStatusMessageT = Aws::String>
  IpamPrefixListResolver& WithLastVersionCreationStatusMessage(LastVersionCreationStatusMessageT&& value) {
    SetLastVersionCreationStatusMessage(std::forward<LastVersionCreationStatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ownerId;

  Aws::String m_ipamPrefixListResolverId;

  Aws::String m_ipamPrefixListResolverArn;

  Aws::String m_ipamArn;

  Aws::String m_ipamRegion;

  Aws::String m_description;

  AddressFamily m_addressFamily{AddressFamily::NOT_SET};

  IpamPrefixListResolverState m_state{IpamPrefixListResolverState::NOT_SET};

  Aws::Vector<Tag> m_tags;

  IpamPrefixListResolverVersionCreationStatus m_lastVersionCreationStatus{IpamPrefixListResolverVersionCreationStatus::NOT_SET};

  Aws::String m_lastVersionCreationStatusMessage;
  bool m_ownerIdHasBeenSet = false;
  bool m_ipamPrefixListResolverIdHasBeenSet = false;
  bool m_ipamPrefixListResolverArnHasBeenSet = false;
  bool m_ipamArnHasBeenSet = false;
  bool m_ipamRegionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_addressFamilyHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_lastVersionCreationStatusHasBeenSet = false;
  bool m_lastVersionCreationStatusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
