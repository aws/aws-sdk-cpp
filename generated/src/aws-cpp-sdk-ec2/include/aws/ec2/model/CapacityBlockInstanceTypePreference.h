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
 * <p>Instance type preference for a Capacity Block search. Specifies one or more
 * instance types to evaluate when searching for available Capacity
 * Blocks.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityBlockInstanceTypePreference">AWS
 * API Reference</a></p>
 */
class CapacityBlockInstanceTypePreference {
 public:
  AWS_EC2_API CapacityBlockInstanceTypePreference() = default;
  AWS_EC2_API CapacityBlockInstanceTypePreference(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityBlockInstanceTypePreference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The instance type to consider in the Capacity Block search.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  CapacityBlockInstanceTypePreference& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;
  bool m_instanceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
