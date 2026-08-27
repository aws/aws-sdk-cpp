/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The instance type specification for an AMI, which contains lists of supported
 * and unsupported instance types that define which instance types are compatible
 * with the AMI.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTypeSpecificationRequest">AWS
 * API Reference</a></p>
 */
class InstanceTypeSpecificationRequest {
 public:
  AWS_EC2_API InstanceTypeSpecificationRequest() = default;
  AWS_EC2_API InstanceTypeSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API InstanceTypeSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance types that the AMI supports. You can specify instance type names
   * or use wildcard patterns (for example, <code>t3.*</code>).</p> <p>Constraints:
   * Maximum 100 entries. Each entry must be 1-24 characters and match the pattern
   * <code>^[A-Za-z0-9_.*-]+$</code>. Consecutive wildcard characters
   * (<code>**</code>) are not allowed. Entries must be unique within each list and
   * across both lists; duplicate entries cause the request to fail.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSupportedInstanceTypes() const { return m_supportedInstanceTypes; }
  inline bool SupportedInstanceTypesHasBeenSet() const { return m_supportedInstanceTypesHasBeenSet; }
  template <typename SupportedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    m_supportedInstanceTypesHasBeenSet = true;
    m_supportedInstanceTypes = std::forward<SupportedInstanceTypesT>(value);
  }
  template <typename SupportedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceTypeSpecificationRequest& WithSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    SetSupportedInstanceTypes(std::forward<SupportedInstanceTypesT>(value));
    return *this;
  }
  template <typename SupportedInstanceTypesT = Aws::String>
  InstanceTypeSpecificationRequest& AddSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    m_supportedInstanceTypesHasBeenSet = true;
    m_supportedInstanceTypes.emplace_back(std::forward<SupportedInstanceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types that the AMI does not support. You can specify instance
   * type names or use wildcard patterns (for example, <code>t3.*</code>).</p>
   * <p>Constraints: Maximum 100 entries. Each entry must be 1-24 characters and
   * match the pattern <code>^[A-Za-z0-9_.*-]+$</code>. Consecutive wildcard
   * characters (<code>**</code>) are not allowed. Entries must be unique within each
   * list and across both lists; duplicate entries cause the request to fail.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUnsupportedInstanceTypes() const { return m_unsupportedInstanceTypes; }
  inline bool UnsupportedInstanceTypesHasBeenSet() const { return m_unsupportedInstanceTypesHasBeenSet; }
  template <typename UnsupportedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    m_unsupportedInstanceTypesHasBeenSet = true;
    m_unsupportedInstanceTypes = std::forward<UnsupportedInstanceTypesT>(value);
  }
  template <typename UnsupportedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceTypeSpecificationRequest& WithUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    SetUnsupportedInstanceTypes(std::forward<UnsupportedInstanceTypesT>(value));
    return *this;
  }
  template <typename UnsupportedInstanceTypesT = Aws::String>
  InstanceTypeSpecificationRequest& AddUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    m_unsupportedInstanceTypesHasBeenSet = true;
    m_unsupportedInstanceTypes.emplace_back(std::forward<UnsupportedInstanceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_supportedInstanceTypes;

  Aws::Vector<Aws::String> m_unsupportedInstanceTypes;
  bool m_supportedInstanceTypesHasBeenSet = false;
  bool m_unsupportedInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
