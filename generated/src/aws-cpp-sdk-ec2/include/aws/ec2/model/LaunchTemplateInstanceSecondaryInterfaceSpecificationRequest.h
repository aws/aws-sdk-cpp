/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecondaryInterfacePrivateIpAddressSpecificationRequest.h>
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
 * <p>Describes a secondary interface specification for a launch template
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest">AWS
 * API Reference</a></p>
 */
class LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest {
 public:
  AWS_EC2_API LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest() = default;
  AWS_EC2_API LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether the secondary interface is deleted when the instance is
   * terminated.</p> <p>The only supported value for this field is
   * <code>true</code>.</p>
   */
  inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
  inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
  inline void SetDeleteOnTermination(bool value) {
    m_deleteOnTerminationHasBeenSet = true;
    m_deleteOnTermination = value;
  }
  inline LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithDeleteOnTermination(bool value) {
    SetDeleteOnTermination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The device index for the secondary interface attachment.</p>
   */
  inline int GetDeviceIndex() const { return m_deviceIndex; }
  inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
  inline void SetDeviceIndex(int value) {
    m_deviceIndexHasBeenSet = true;
    m_deviceIndex = value;
  }
  inline LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithDeviceIndex(int value) {
    SetDeviceIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private IPv4 addresses to assign to the secondary interface.</p>
   */
  inline const Aws::Vector<SecondaryInterfacePrivateIpAddressSpecificationRequest>& GetPrivateIpAddresses() const {
    return m_privateIpAddresses;
  }
  inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
  template <typename PrivateIpAddressesT = Aws::Vector<SecondaryInterfacePrivateIpAddressSpecificationRequest>>
  void SetPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value);
  }
  template <typename PrivateIpAddressesT = Aws::Vector<SecondaryInterfacePrivateIpAddressSpecificationRequest>>
  LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithPrivateIpAddresses(PrivateIpAddressesT&& value) {
    SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value));
    return *this;
  }
  template <typename PrivateIpAddressesT = SecondaryInterfacePrivateIpAddressSpecificationRequest>
  LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& AddPrivateIpAddresses(PrivateIpAddressesT&& value) {
    m_privateIpAddressesHasBeenSet = true;
    m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of private IPv4 addresses to assign to the secondary
   * interface.</p>
   */
  inline int GetPrivateIpAddressCount() const { return m_privateIpAddressCount; }
  inline bool PrivateIpAddressCountHasBeenSet() const { return m_privateIpAddressCountHasBeenSet; }
  inline void SetPrivateIpAddressCount(int value) {
    m_privateIpAddressCountHasBeenSet = true;
    m_privateIpAddressCount = value;
  }
  inline LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithPrivateIpAddressCount(int value) {
    SetPrivateIpAddressCount(value);
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
  LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithSecondarySubnetId(SecondarySubnetIdT&& value) {
    SetSecondarySubnetId(std::forward<SecondarySubnetIdT>(value));
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
  inline LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithInterfaceType(SecondaryInterfaceType value) {
    SetInterfaceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index of the network card.</p>
   */
  inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
  inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
  inline void SetNetworkCardIndex(int value) {
    m_networkCardIndexHasBeenSet = true;
    m_networkCardIndex = value;
  }
  inline LaunchTemplateInstanceSecondaryInterfaceSpecificationRequest& WithNetworkCardIndex(int value) {
    SetNetworkCardIndex(value);
    return *this;
  }
  ///@}
 private:
  bool m_deleteOnTermination{false};

  int m_deviceIndex{0};

  Aws::Vector<SecondaryInterfacePrivateIpAddressSpecificationRequest> m_privateIpAddresses;

  int m_privateIpAddressCount{0};

  Aws::String m_secondarySubnetId;

  SecondaryInterfaceType m_interfaceType{SecondaryInterfaceType::NOT_SET};

  int m_networkCardIndex{0};
  bool m_deleteOnTerminationHasBeenSet = false;
  bool m_deviceIndexHasBeenSet = false;
  bool m_privateIpAddressesHasBeenSet = false;
  bool m_privateIpAddressCountHasBeenSet = false;
  bool m_secondarySubnetIdHasBeenSet = false;
  bool m_interfaceTypeHasBeenSet = false;
  bool m_networkCardIndexHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
