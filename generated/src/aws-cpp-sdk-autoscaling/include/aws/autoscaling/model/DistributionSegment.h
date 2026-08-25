/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/TargetCapacityType.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace AutoScaling {
namespace Model {

/**
 * <p>Use this structure to specify the capacity types that Amazon EC2 Auto Scaling
 * prioritizes when it launches instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/DistributionSegment">AWS
 * API Reference</a></p>
 */
class DistributionSegment {
 public:
  AWS_AUTOSCALING_API DistributionSegment() = default;
  AWS_AUTOSCALING_API DistributionSegment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API DistributionSegment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The capacity types to prioritize, in order. Amazon EC2 Auto Scaling attempts
   * to launch instances in the priority order of the capacity types, and within each
   * capacity type, in the order of instance types listed in your launch template
   * <code>Overrides</code>.</p> <p>The following lists the valid values:</p> <dl>
   * <dt>on-demand-capacity-reservation</dt> <dd> <p>On-Demand Capacity
   * Reservations.</p> </dd> <dt>capacity-block</dt> <dd> <p>Capacity Blocks.</p>
   * </dd> <dt>interruptible-capacity-reservation</dt> <dd> <p>Interruptible Capacity
   * Reservations.</p> </dd> <dt>on-demand</dt> <dd> <p>On-Demand capacity. Include
   * this value to allow the group to fall back to On-Demand capacity when the
   * preceding capacity types are unavailable.</p> </dd> </dl>
   */
  inline const Aws::Vector<TargetCapacityType>& GetTargetCapacityTypes() const { return m_targetCapacityTypes; }
  inline bool TargetCapacityTypesHasBeenSet() const { return m_targetCapacityTypesHasBeenSet; }
  template <typename TargetCapacityTypesT = Aws::Vector<TargetCapacityType>>
  void SetTargetCapacityTypes(TargetCapacityTypesT&& value) {
    m_targetCapacityTypesHasBeenSet = true;
    m_targetCapacityTypes = std::forward<TargetCapacityTypesT>(value);
  }
  template <typename TargetCapacityTypesT = Aws::Vector<TargetCapacityType>>
  DistributionSegment& WithTargetCapacityTypes(TargetCapacityTypesT&& value) {
    SetTargetCapacityTypes(std::forward<TargetCapacityTypesT>(value));
    return *this;
  }
  inline DistributionSegment& AddTargetCapacityTypes(TargetCapacityType value) {
    m_targetCapacityTypesHasBeenSet = true;
    m_targetCapacityTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TargetCapacityType> m_targetCapacityTypes;
  bool m_targetCapacityTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
