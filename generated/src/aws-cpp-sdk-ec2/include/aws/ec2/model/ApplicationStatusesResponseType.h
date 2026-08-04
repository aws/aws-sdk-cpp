/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceApplicationStatus.h>

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
 * <p>Describes the application statuses for instances.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ApplicationStatusesResponseType">AWS
 * API Reference</a></p>
 */
class ApplicationStatusesResponseType {
 public:
  AWS_EC2_API ApplicationStatusesResponseType() = default;
  AWS_EC2_API ApplicationStatusesResponseType(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ApplicationStatusesResponseType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The application status information for the instances.</p>
   */
  inline const Aws::Vector<InstanceApplicationStatus>& GetInstances() const { return m_instances; }
  inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
  template <typename InstancesT = Aws::Vector<InstanceApplicationStatus>>
  void SetInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances = std::forward<InstancesT>(value);
  }
  template <typename InstancesT = Aws::Vector<InstanceApplicationStatus>>
  ApplicationStatusesResponseType& WithInstances(InstancesT&& value) {
    SetInstances(std::forward<InstancesT>(value));
    return *this;
  }
  template <typename InstancesT = InstanceApplicationStatus>
  ApplicationStatusesResponseType& AddInstances(InstancesT&& value) {
    m_instancesHasBeenSet = true;
    m_instances.emplace_back(std::forward<InstancesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<InstanceApplicationStatus> m_instances;
  bool m_instancesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
