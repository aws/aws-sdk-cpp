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
 * <p>The Amazon Web Services Organizations target for an IPAM
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPolicyOrganizationTarget">AWS
 * API Reference</a></p>
 */
class IpamPolicyOrganizationTarget {
 public:
  AWS_EC2_API IpamPolicyOrganizationTarget() = default;
  AWS_EC2_API IpamPolicyOrganizationTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPolicyOrganizationTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of a Amazon Web Services Organizations target for an IPAM policy.</p>
   */
  inline const Aws::String& GetOrganizationTargetId() const { return m_organizationTargetId; }
  inline bool OrganizationTargetIdHasBeenSet() const { return m_organizationTargetIdHasBeenSet; }
  template <typename OrganizationTargetIdT = Aws::String>
  void SetOrganizationTargetId(OrganizationTargetIdT&& value) {
    m_organizationTargetIdHasBeenSet = true;
    m_organizationTargetId = std::forward<OrganizationTargetIdT>(value);
  }
  template <typename OrganizationTargetIdT = Aws::String>
  IpamPolicyOrganizationTarget& WithOrganizationTargetId(OrganizationTargetIdT&& value) {
    SetOrganizationTargetId(std::forward<OrganizationTargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationTargetId;
  bool m_organizationTargetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
