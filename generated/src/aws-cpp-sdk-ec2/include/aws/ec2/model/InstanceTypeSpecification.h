/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceTypeItem.h>

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
 * <p>Describes the instance type compatibility rules for an AMI, including lists
 * of supported and unsupported instance type patterns.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTypeSpecification">AWS
 * API Reference</a></p>
 */
class InstanceTypeSpecification {
 public:
  AWS_EC2_API InstanceTypeSpecification() = default;
  AWS_EC2_API InstanceTypeSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API InstanceTypeSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance types that the AMI supports.</p>
   */
  inline const Aws::Vector<InstanceTypeItem>& GetSupportedInstanceTypes() const { return m_supportedInstanceTypes; }
  inline bool SupportedInstanceTypesHasBeenSet() const { return m_supportedInstanceTypesHasBeenSet; }
  template <typename SupportedInstanceTypesT = Aws::Vector<InstanceTypeItem>>
  void SetSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    m_supportedInstanceTypesHasBeenSet = true;
    m_supportedInstanceTypes = std::forward<SupportedInstanceTypesT>(value);
  }
  template <typename SupportedInstanceTypesT = Aws::Vector<InstanceTypeItem>>
  InstanceTypeSpecification& WithSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    SetSupportedInstanceTypes(std::forward<SupportedInstanceTypesT>(value));
    return *this;
  }
  template <typename SupportedInstanceTypesT = InstanceTypeItem>
  InstanceTypeSpecification& AddSupportedInstanceTypes(SupportedInstanceTypesT&& value) {
    m_supportedInstanceTypesHasBeenSet = true;
    m_supportedInstanceTypes.emplace_back(std::forward<SupportedInstanceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance types that the AMI does not support.</p>
   */
  inline const Aws::Vector<InstanceTypeItem>& GetUnsupportedInstanceTypes() const { return m_unsupportedInstanceTypes; }
  inline bool UnsupportedInstanceTypesHasBeenSet() const { return m_unsupportedInstanceTypesHasBeenSet; }
  template <typename UnsupportedInstanceTypesT = Aws::Vector<InstanceTypeItem>>
  void SetUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    m_unsupportedInstanceTypesHasBeenSet = true;
    m_unsupportedInstanceTypes = std::forward<UnsupportedInstanceTypesT>(value);
  }
  template <typename UnsupportedInstanceTypesT = Aws::Vector<InstanceTypeItem>>
  InstanceTypeSpecification& WithUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    SetUnsupportedInstanceTypes(std::forward<UnsupportedInstanceTypesT>(value));
    return *this;
  }
  template <typename UnsupportedInstanceTypesT = InstanceTypeItem>
  InstanceTypeSpecification& AddUnsupportedInstanceTypes(UnsupportedInstanceTypesT&& value) {
    m_unsupportedInstanceTypesHasBeenSet = true;
    m_unsupportedInstanceTypes.emplace_back(std::forward<UnsupportedInstanceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InstanceTypeItem> m_supportedInstanceTypes;

  Aws::Vector<InstanceTypeItem> m_unsupportedInstanceTypes;
  bool m_supportedInstanceTypesHasBeenSet = false;
  bool m_unsupportedInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
