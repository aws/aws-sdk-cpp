/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

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
 * <p>Describes a destination for a health check path.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HealthCheckPathDestinationResponseObject">AWS
 * API Reference</a></p>
 */
class HealthCheckPathDestinationResponseObject {
 public:
  AWS_EC2_API HealthCheckPathDestinationResponseObject() = default;
  AWS_EC2_API HealthCheckPathDestinationResponseObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API HealthCheckPathDestinationResponseObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the subnet for the destination.</p>
   */
  inline const Aws::String& GetSubnetId() const { return m_subnetId; }
  inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
  template <typename SubnetIdT = Aws::String>
  void SetSubnetId(SubnetIdT&& value) {
    m_subnetIdHasBeenSet = true;
    m_subnetId = std::forward<SubnetIdT>(value);
  }
  template <typename SubnetIdT = Aws::String>
  HealthCheckPathDestinationResponseObject& WithSubnetId(SubnetIdT&& value) {
    SetSubnetId(std::forward<SubnetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the security group for the destination.</p>
   */
  inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
  inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
  template <typename SecurityGroupIdT = Aws::String>
  void SetSecurityGroupId(SecurityGroupIdT&& value) {
    m_securityGroupIdHasBeenSet = true;
    m_securityGroupId = std::forward<SecurityGroupIdT>(value);
  }
  template <typename SecurityGroupIdT = Aws::String>
  HealthCheckPathDestinationResponseObject& WithSecurityGroupId(SecurityGroupIdT&& value) {
    SetSecurityGroupId(std::forward<SecurityGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_subnetId;

  Aws::String m_securityGroupId;
  bool m_subnetIdHasBeenSet = false;
  bool m_securityGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
