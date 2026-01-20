/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/model/RetentionAction.h>
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
 * <p> Defines the specific triggers that cause instances to be retained in a
 * Retained state rather than terminated. Each trigger corresponds to a different
 * failure scenario during the instance lifecycle. This allows fine-grained control
 * over when to preserve instances for manual intervention. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/RetentionTriggers">AWS
 * API Reference</a></p>
 */
class RetentionTriggers {
 public:
  AWS_AUTOSCALING_API RetentionTriggers() = default;
  AWS_AUTOSCALING_API RetentionTriggers(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_AUTOSCALING_API RetentionTriggers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> Specifies the action when a termination lifecycle hook is abandoned due to
   * failure, timeout, or explicit abandonment (calling CompleteLifecycleAction).
   * </p> <p> Set to <code>retain</code> to move instances to a retained state. Set
   * to <code>terminate</code> for default termination behavior. </p> <p> Retained
   * instances don't count toward desired capacity and remain until you call
   * <code>TerminateInstanceInAutoScalingGroup</code>. </p>
   */
  inline RetentionAction GetTerminateHookAbandon() const { return m_terminateHookAbandon; }
  inline bool TerminateHookAbandonHasBeenSet() const { return m_terminateHookAbandonHasBeenSet; }
  inline void SetTerminateHookAbandon(RetentionAction value) {
    m_terminateHookAbandonHasBeenSet = true;
    m_terminateHookAbandon = value;
  }
  inline RetentionTriggers& WithTerminateHookAbandon(RetentionAction value) {
    SetTerminateHookAbandon(value);
    return *this;
  }
  ///@}
 private:
  RetentionAction m_terminateHookAbandon{RetentionAction::NOT_SET};
  bool m_terminateHookAbandonHasBeenSet = false;
};

}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
