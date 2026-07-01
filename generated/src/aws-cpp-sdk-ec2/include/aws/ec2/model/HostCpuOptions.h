/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AmdSevSnp.h>

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
 * <p>Contains the CPU options for a Dedicated Host, including AMD Secure Encrypted
 * Virtualization-Secure Nested Paging (AMD SEV-SNP) settings.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HostCpuOptions">AWS
 * API Reference</a></p>
 */
class HostCpuOptions {
 public:
  AWS_EC2_API HostCpuOptions() = default;
  AWS_EC2_API HostCpuOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API HostCpuOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies whether AMD Secure Encrypted Virtualization-Secure Nested Paging
   * (AMD SEV-SNP) is enabled or disabled for the Dedicated Host. If you don't
   * specify a value, AMD SEV-SNP is <code>disabled</code>.</p>
   */
  inline AmdSevSnp GetAmdSevSnp() const { return m_amdSevSnp; }
  inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }
  inline void SetAmdSevSnp(AmdSevSnp value) {
    m_amdSevSnpHasBeenSet = true;
    m_amdSevSnp = value;
  }
  inline HostCpuOptions& WithAmdSevSnp(AmdSevSnp value) {
    SetAmdSevSnp(value);
    return *this;
  }
  ///@}
 private:
  AmdSevSnp m_amdSevSnp{AmdSevSnp::NOT_SET};
  bool m_amdSevSnpHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
