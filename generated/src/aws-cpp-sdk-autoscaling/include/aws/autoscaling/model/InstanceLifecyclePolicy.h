/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/RetentionTriggers.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
 * <p> Defines the lifecycle policy for instances in an Auto Scaling group. This
 * policy controls instance behavior when lifecycles transition and operations
 * fail. Use lifecycle policies to ensure graceful shutdown for stateful workloads
 * or applications requiring extended draining periods. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstanceLifecyclePolicy">AWS
 * API Reference</a></p>
 */
class InstanceLifecyclePolicy {
 public:
  AWS_AUTOSCALING_API InstanceLifecyclePolicy() = default;
  AWS_AUTOSCALING_API InstanceLifecyclePolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API InstanceLifecyclePolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> Specifies the conditions that trigger instance retention behavior. These
   * triggers determine when instances should move to a Retained state instead of
   * being terminated. This allows you to maintain control over instance management
   * when lifecycle operations fail. </p>
   */
  inline const RetentionTriggers& GetRetentionTriggers() const { return m_retentionTriggers; }
  inline bool RetentionTriggersHasBeenSet() const { return m_retentionTriggersHasBeenSet; }
  template <typename RetentionTriggersT = RetentionTriggers>
  void SetRetentionTriggers(RetentionTriggersT&& value) {
    m_retentionTriggersHasBeenSet = true;
    m_retentionTriggers = std::forward<RetentionTriggersT>(value);
  }
  template <typename RetentionTriggersT = RetentionTriggers>
  InstanceLifecyclePolicy& WithRetentionTriggers(RetentionTriggersT&& value) {
    SetRetentionTriggers(std::forward<RetentionTriggersT>(value));
    return *this;
  }
  ///@}
 private:
  RetentionTriggers m_retentionTriggers;
  bool m_retentionTriggersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
