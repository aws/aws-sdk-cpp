/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecondaryInterfaceAttachment.h>
#include <aws/ec2/model/SecondaryInterfaceIpv4Address.h>
#include <aws/ec2/model/SecondaryInterfaceStatus.h>
#include <aws/ec2/model/SecondaryInterfaceType.h>
#include <aws/ec2/model/SecondaryNetworkType.h>
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
 * <p>Describes a secondary interface.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecondaryInterface">AWS
 * API Reference</a></p>
 */
class SecondaryInterface {
 public:
  AWS_EC2_API SecondaryInterface() = default;
  AWS_EC2_API SecondaryInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SecondaryInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Availability Zone of the secondary interface.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  SecondaryInterface& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone of the secondary interface.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  SecondaryInterface& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attachment information for the secondary interface.</p>
   */
  inline const SecondaryInterfaceAttachment& GetAttachment() const { return m_attachment; }
  inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
  template <typename AttachmentT = SecondaryInterfaceAttachment>
  void SetAttachment(AttachmentT&& value) {
    m_attachmentHasBeenSet = true;
    m_attachment = std::forward<AttachmentT>(value);
  }
  template <typename AttachmentT = SecondaryInterfaceAttachment>
  SecondaryInterface& WithAttachment(AttachmentT&& value) {
    SetAttachment(std::forward<AttachmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MAC address of the secondary interface.</p>
   */
  inline const Aws::String& GetMacAddress() const { return m_macAddress; }
  inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }
  template <typename MacAddressT = Aws::String>
  void SetMacAddress(MacAddressT&& value) {
    m_macAddressHasBeenSet = true;
    m_macAddress = std::forward<MacAddressT>(value);
  }
  template <typename MacAddressT = Aws::String>
  SecondaryInterface& WithMacAddress(MacAddressT&& value) {
    SetMacAddress(std::forward<MacAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the secondary
   * interface.</p>
   */
  inline const Aws::String& GetOwnerId() const { return m_ownerId; }
  inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
  template <typename OwnerIdT = Aws::String>
  void SetOwnerId(OwnerIdT&& value) {
    m_ownerIdHasBeenSet = true;
    m_ownerId = std::forward<OwnerIdT>(value);
  }
  template <typename OwnerIdT = Aws::String>
  SecondaryInterface& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 addresses associated with the secondary interface.</p>
   */
  inline const Aws::Vector<SecondaryInterfaceIpv4Address>& GetPrivateIpv4Addresses() const { return m_privateIpv4Addresses; }
  inline bool PrivateIpv4AddressesHasBeenSet() const { return m_privateIpv4AddressesHasBeenSet; }
  template <typename PrivateIpv4AddressesT = Aws::Vector<SecondaryInterfaceIpv4Address>>
  void SetPrivateIpv4Addresses(PrivateIpv4AddressesT&& value) {
    m_privateIpv4AddressesHasBeenSet = true;
    m_privateIpv4Addresses = std::forward<PrivateIpv4AddressesT>(value);
  }
  template <typename PrivateIpv4AddressesT = Aws::Vector<SecondaryInterfaceIpv4Address>>
  SecondaryInterface& WithPrivateIpv4Addresses(PrivateIpv4AddressesT&& value) {
    SetPrivateIpv4Addresses(std::forward<PrivateIpv4AddressesT>(value));
    return *this;
  }
  template <typename PrivateIpv4AddressesT = SecondaryInterfaceIpv4Address>
  SecondaryInterface& AddPrivateIpv4Addresses(PrivateIpv4AddressesT&& value) {
    m_privateIpv4AddressesHasBeenSet = true;
    m_privateIpv4Addresses.emplace_back(std::forward<PrivateIpv4AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the secondary interface.</p>
   */
  inline const Aws::String& GetSecondaryInterfaceId() const { return m_secondaryInterfaceId; }
  inline bool SecondaryInterfaceIdHasBeenSet() const { return m_secondaryInterfaceIdHasBeenSet; }
  template <typename SecondaryInterfaceIdT = Aws::String>
  void SetSecondaryInterfaceId(SecondaryInterfaceIdT&& value) {
    m_secondaryInterfaceIdHasBeenSet = true;
    m_secondaryInterfaceId = std::forward<SecondaryInterfaceIdT>(value);
  }
  template <typename SecondaryInterfaceIdT = Aws::String>
  SecondaryInterface& WithSecondaryInterfaceId(SecondaryInterfaceIdT&& value) {
    SetSecondaryInterfaceId(std::forward<SecondaryInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the secondary interface.</p>
   */
  inline const Aws::String& GetSecondaryInterfaceArn() const { return m_secondaryInterfaceArn; }
  inline bool SecondaryInterfaceArnHasBeenSet() const { return m_secondaryInterfaceArnHasBeenSet; }
  template <typename SecondaryInterfaceArnT = Aws::String>
  void SetSecondaryInterfaceArn(SecondaryInterfaceArnT&& value) {
    m_secondaryInterfaceArnHasBeenSet = true;
    m_secondaryInterfaceArn = std::forward<SecondaryInterfaceArnT>(value);
  }
  template <typename SecondaryInterfaceArnT = Aws::String>
  SecondaryInterface& WithSecondaryInterfaceArn(SecondaryInterfaceArnT&& value) {
    SetSecondaryInterfaceArn(std::forward<SecondaryInterfaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of secondary interface.</p>
   */
  inline SecondaryInterfaceType GetSecondaryInterfaceType() const { return m_secondaryInterfaceType; }
  inline bool SecondaryInterfaceTypeHasBeenSet() const { return m_secondaryInterfaceTypeHasBeenSet; }
  inline void SetSecondaryInterfaceType(SecondaryInterfaceType value) {
    m_secondaryInterfaceTypeHasBeenSet = true;
    m_secondaryInterfaceType = value;
  }
  inline SecondaryInterface& WithSecondaryInterfaceType(SecondaryInterfaceType value) {
    SetSecondaryInterfaceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the secondary subnet.</p>
   */
  inline const Aws::String& GetSecondarySubnetId() const { return m_secondarySubnetId; }
  inline bool SecondarySubnetIdHasBeenSet() const { return m_secondarySubnetIdHasBeenSet; }
  template <typename SecondarySubnetIdT = Aws::String>
  void SetSecondarySubnetId(SecondarySubnetIdT&& value) {
    m_secondarySubnetIdHasBeenSet = true;
    m_secondarySubnetId = std::forward<SecondarySubnetIdT>(value);
  }
  template <typename SecondarySubnetIdT = Aws::String>
  SecondaryInterface& WithSecondarySubnetId(SecondarySubnetIdT&& value) {
    SetSecondarySubnetId(std::forward<SecondarySubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the secondary network.</p>
   */
  inline const Aws::String& GetSecondaryNetworkId() const { return m_secondaryNetworkId; }
  inline bool SecondaryNetworkIdHasBeenSet() const { return m_secondaryNetworkIdHasBeenSet; }
  template <typename SecondaryNetworkIdT = Aws::String>
  void SetSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    m_secondaryNetworkIdHasBeenSet = true;
    m_secondaryNetworkId = std::forward<SecondaryNetworkIdT>(value);
  }
  template <typename SecondaryNetworkIdT = Aws::String>
  SecondaryInterface& WithSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    SetSecondaryNetworkId(std::forward<SecondaryNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the secondary network.</p>
   */
  inline SecondaryNetworkType GetSecondaryNetworkType() const { return m_secondaryNetworkType; }
  inline bool SecondaryNetworkTypeHasBeenSet() const { return m_secondaryNetworkTypeHasBeenSet; }
  inline void SetSecondaryNetworkType(SecondaryNetworkType value) {
    m_secondaryNetworkTypeHasBeenSet = true;
    m_secondaryNetworkType = value;
  }
  inline SecondaryInterface& WithSecondaryNetworkType(SecondaryNetworkType value) {
    SetSecondaryNetworkType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether source/destination checking is enabled.</p>
   */
  inline bool GetSourceDestCheck() const { return m_sourceDestCheck; }
  inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
  inline void SetSourceDestCheck(bool value) {
    m_sourceDestCheckHasBeenSet = true;
    m_sourceDestCheck = value;
  }
  inline SecondaryInterface& WithSourceDestCheck(bool value) {
    SetSourceDestCheck(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the secondary interface.</p>
   */
  inline SecondaryInterfaceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SecondaryInterfaceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SecondaryInterface& WithStatus(SecondaryInterfaceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the secondary interface.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  SecondaryInterface& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SecondaryInterface& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  SecondaryInterfaceAttachment m_attachment;

  Aws::String m_macAddress;

  Aws::String m_ownerId;

  Aws::Vector<SecondaryInterfaceIpv4Address> m_privateIpv4Addresses;

  Aws::String m_secondaryInterfaceId;

  Aws::String m_secondaryInterfaceArn;

  SecondaryInterfaceType m_secondaryInterfaceType{SecondaryInterfaceType::NOT_SET};

  Aws::String m_secondarySubnetId;

  Aws::String m_secondaryNetworkId;

  SecondaryNetworkType m_secondaryNetworkType{SecondaryNetworkType::NOT_SET};

  bool m_sourceDestCheck{false};

  SecondaryInterfaceStatus m_status{SecondaryInterfaceStatus::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_attachmentHasBeenSet = false;
  bool m_macAddressHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_privateIpv4AddressesHasBeenSet = false;
  bool m_secondaryInterfaceIdHasBeenSet = false;
  bool m_secondaryInterfaceArnHasBeenSet = false;
  bool m_secondaryInterfaceTypeHasBeenSet = false;
  bool m_secondarySubnetIdHasBeenSet = false;
  bool m_secondaryNetworkIdHasBeenSet = false;
  bool m_secondaryNetworkTypeHasBeenSet = false;
  bool m_sourceDestCheckHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
