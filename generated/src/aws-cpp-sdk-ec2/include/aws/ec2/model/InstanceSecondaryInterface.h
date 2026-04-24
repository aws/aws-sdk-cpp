/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceSecondaryInterfaceAttachment.h>
#include <aws/ec2/model/InstanceSecondaryInterfacePrivateIpAddress.h>
#include <aws/ec2/model/SecondaryInterfaceStatus.h>
#include <aws/ec2/model/SecondaryInterfaceType.h>

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
 * <p>Describes a secondary interface attached to an instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceSecondaryInterface">AWS
 * API Reference</a></p>
 */
class InstanceSecondaryInterface {
 public:
  AWS_EC2_API InstanceSecondaryInterface() = default;
  AWS_EC2_API InstanceSecondaryInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API InstanceSecondaryInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The attachment information for the secondary interface.</p>
   */
  inline const InstanceSecondaryInterfaceAttachment& GetAttachment() const { return m_attachment; }
  inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
  template <typename AttachmentT = InstanceSecondaryInterfaceAttachment>
  void SetAttachment(AttachmentT&& value) {
    m_attachmentHasBeenSet = true;
    m_attachment = std::forward<AttachmentT>(value);
  }
  template <typename AttachmentT = InstanceSecondaryInterfaceAttachment>
  InstanceSecondaryInterface& WithAttachment(AttachmentT&& value) {
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
  InstanceSecondaryInterface& WithMacAddress(MacAddressT&& value) {
    SetMacAddress(std::forward<MacAddressT>(value));
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
  InstanceSecondaryInterface& WithSecondaryInterfaceId(SecondaryInterfaceIdT&& value) {
    SetSecondaryInterfaceId(std::forward<SecondaryInterfaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the owner of the secondary
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
  InstanceSecondaryInterface& WithOwnerId(OwnerIdT&& value) {
    SetOwnerId(std::forward<OwnerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 addresses associated with the secondary interface.</p>
   */
  inline const Aws::Vector<InstanceSecondaryInterfacePrivateIpAddress>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
  inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
  template <typename PrivateIpAddressesT = Aws::Vector<InstanceSecondaryInterfacePrivateIpAddress>>
  void SetPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value);
  }
  template <typename PrivateIpAddressesT = Aws::Vector<InstanceSecondaryInterfacePrivateIpAddress>>
  InstanceSecondaryInterface& WithPrivateIpAddresses(PrivateIpAddressesT&& value) {
    SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value));
    return *this;
  }
  template <typename PrivateIpAddressesT = InstanceSecondaryInterfacePrivateIpAddress>
  InstanceSecondaryInterface& AddPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value));
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
  inline InstanceSecondaryInterface& WithSourceDestCheck(bool value) {
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
  inline InstanceSecondaryInterface& WithStatus(SecondaryInterfaceStatus value) {
    SetStatus(value);
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
  InstanceSecondaryInterface& WithSecondarySubnetId(SecondarySubnetIdT&& value) {
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
  InstanceSecondaryInterface& WithSecondaryNetworkId(SecondaryNetworkIdT&& value) {
    SetSecondaryNetworkId(std::forward<SecondaryNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of secondary interface.</p>
   */
  inline SecondaryInterfaceType GetInterfaceType() const { return m_interfaceType; }
  inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
  inline void SetInterfaceType(SecondaryInterfaceType value) {
    m_interfaceTypeHasBeenSet = true;
    m_interfaceType = value;
  }
  inline InstanceSecondaryInterface& WithInterfaceType(SecondaryInterfaceType value) {
    SetInterfaceType(value);
    return *this;
  }
  ///@}
 private:
  InstanceSecondaryInterfaceAttachment m_attachment;

  Aws::String m_macAddress;

  Aws::String m_secondaryInterfaceId;

  Aws::String m_ownerId;

  Aws::Vector<InstanceSecondaryInterfacePrivateIpAddress> m_privateIpAddresses;

  bool m_sourceDestCheck{false};

  SecondaryInterfaceStatus m_status{SecondaryInterfaceStatus::NOT_SET};

  Aws::String m_secondarySubnetId;

  Aws::String m_secondaryNetworkId;

  SecondaryInterfaceType m_interfaceType{SecondaryInterfaceType::NOT_SET};
  bool m_attachmentHasBeenSet = false;
  bool m_macAddressHasBeenSet = false;
  bool m_secondaryInterfaceIdHasBeenSet = false;
  bool m_ownerIdHasBeenSet = false;
  bool m_privateIpAddressesHasBeenSet = false;
  bool m_sourceDestCheckHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_secondarySubnetIdHasBeenSet = false;
  bool m_secondaryNetworkIdHasBeenSet = false;
  bool m_interfaceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
