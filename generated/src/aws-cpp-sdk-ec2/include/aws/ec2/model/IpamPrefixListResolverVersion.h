/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a version of an IPAM prefix list resolver.</p> <p>Each version is a
 * snapshot of what CIDRs matched your rules at that moment in time. The version
 * number increments every time the CIDR list changes due to infrastructure
 * changes.</p> <p> <b>Version example:</b> </p> <p> <b>Initial State (Version
 * 1)</b> </p> <p>Production environment:</p> <ul> <li> <p>vpc-prod-web
 * (10.1.0.0/16) - tagged env=prod</p> </li> <li> <p>vpc-prod-db (10.2.0.0/16) -
 * tagged env=prod</p> </li> </ul> <p>Resolver rule: Include all VPCs tagged
 * env=prod</p> <p> <b>Version 1 CIDRs:</b> 10.1.0.0/16, 10.2.0.0/16</p> <p>
 * <b>Infrastructure Change (Version 2)</b> </p> <p>New VPC added:</p> <ul> <li>
 * <p>vpc-prod-api (10.3.0.0/16) - tagged env=prod</p> </li> </ul> <p>IPAM
 * automatically detects the change and creates a new version.</p> <p> <b>Version 2
 * CIDRs:</b> 10.1.0.0/16, 10.2.0.0/16, 10.3.0.0/16</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPrefixListResolverVersion">AWS
 * API Reference</a></p>
 */
class IpamPrefixListResolverVersion {
 public:
  AWS_EC2_API IpamPrefixListResolverVersion() = default;
  AWS_EC2_API IpamPrefixListResolverVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPrefixListResolverVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The version number of the IPAM prefix list resolver.</p> <p>Each version is a
   * snapshot of what CIDRs matched your rules at that moment in time. The version
   * number increments every time the CIDR list changes due to infrastructure
   * changes.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline IpamPrefixListResolverVersion& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}
 private:
  long long m_version{0};
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
