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
 * <p>Information about an IPAM policy allocation rule.</p> <p>Allocation rules are
 * optional configurations within an IPAM policy that map Amazon Web Services
 * resource types to specific IPAM pools. If no rules are defined, the resource
 * types default to using Amazon-provided IP addresses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpamPolicyAllocationRule">AWS
 * API Reference</a></p>
 */
class IpamPolicyAllocationRule {
 public:
  AWS_EC2_API IpamPolicyAllocationRule() = default;
  AWS_EC2_API IpamPolicyAllocationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API IpamPolicyAllocationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the source IPAM pool for the allocation rule.</p> <p>An IPAM pool
   * is a collection of IP addresses in IPAM that can be allocated to Amazon Web
   * Services resources.</p>
   */
  inline const Aws::String& GetSourceIpamPoolId() const { return m_sourceIpamPoolId; }
  inline bool SourceIpamPoolIdHasBeenSet() const { return m_sourceIpamPoolIdHasBeenSet; }
  template <typename SourceIpamPoolIdT = Aws::String>
  void SetSourceIpamPoolId(SourceIpamPoolIdT&& value) {
    m_sourceIpamPoolIdHasBeenSet = true;
    m_sourceIpamPoolId = std::forward<SourceIpamPoolIdT>(value);
  }
  template <typename SourceIpamPoolIdT = Aws::String>
  IpamPolicyAllocationRule& WithSourceIpamPoolId(SourceIpamPoolIdT&& value) {
    SetSourceIpamPoolId(std::forward<SourceIpamPoolIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceIpamPoolId;
  bool m_sourceIpamPoolIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
