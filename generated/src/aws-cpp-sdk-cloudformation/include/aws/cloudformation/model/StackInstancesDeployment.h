/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StageStatus.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>Provides visibility into the stack instances deployment stage of a StackSet
 * operation, including per-stack-instance progress counts and a completion
 * percentage. For service-managed operations that provision roles, this stage
 * begins after role provisioning finishes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstancesDeployment">AWS
 * API Reference</a></p>
 */
class StackInstancesDeployment {
 public:
  AWS_CLOUDFORMATION_API StackInstancesDeployment() = default;
  AWS_CLOUDFORMATION_API StackInstancesDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API StackInstancesDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The status of the stack instances deployment stage can be one of the
   * following values:</p> <ul> <li> <p> <code>NOT_APPLICABLE</code>: The operation
   * does not deploy stack instances, such as a drift detection operation.</p> </li>
   * <li> <p> <code>NOT_STARTED</code>: Stack instances deployment has not started.
   * The operation is still provisioning roles, has not begun, or failed before this
   * stage was reached.</p> </li> <li> <p> <code>IN_PROGRESS</code>: At least one
   * stack instance has started deploying.</p> </li> <li> <p> <code>SUCCEEDED</code>:
   * Deployment finished and succeeded for all stack instances that were not
   * skipped.</p> </li> <li> <p> <code>PARTIAL_SUCCESS</code>: Deployment finished
   * with a mix of succeeded, failed, and canceled stack instances.</p> </li> <li>
   * <p> <code>FAILED</code>: Deployment finished and every stack instance that was
   * not skipped failed or was canceled.</p> </li> </ul>
   */
  inline StageStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StageStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StackInstancesDeployment& WithStatus(StageStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that deployed successfully.</p>
   */
  inline int GetSucceededStackInstancesCount() const { return m_succeededStackInstancesCount; }
  inline bool SucceededStackInstancesCountHasBeenSet() const { return m_succeededStackInstancesCountHasBeenSet; }
  inline void SetSucceededStackInstancesCount(int value) {
    m_succeededStackInstancesCountHasBeenSet = true;
    m_succeededStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithSucceededStackInstancesCount(int value) {
    SetSucceededStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that failed to deploy.</p>
   */
  inline int GetFailedStackInstancesCount() const { return m_failedStackInstancesCount; }
  inline bool FailedStackInstancesCountHasBeenSet() const { return m_failedStackInstancesCountHasBeenSet; }
  inline void SetFailedStackInstancesCount(int value) {
    m_failedStackInstancesCountHasBeenSet = true;
    m_failedStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithFailedStackInstancesCount(int value) {
    SetFailedStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that have reached a final state. This count
   * includes stack instances that succeeded, failed, were skipped, or were
   * canceled.</p>
   */
  inline int GetCompletedStackInstancesCount() const { return m_completedStackInstancesCount; }
  inline bool CompletedStackInstancesCountHasBeenSet() const { return m_completedStackInstancesCountHasBeenSet; }
  inline void SetCompletedStackInstancesCount(int value) {
    m_completedStackInstancesCountHasBeenSet = true;
    m_completedStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithCompletedStackInstancesCount(int value) {
    SetCompletedStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that have not reached a final state. This is
   * the total number of stack instances minus the completed count.</p>
   */
  inline int GetPendingStackInstancesCount() const { return m_pendingStackInstancesCount; }
  inline bool PendingStackInstancesCountHasBeenSet() const { return m_pendingStackInstancesCountHasBeenSet; }
  inline void SetPendingStackInstancesCount(int value) {
    m_pendingStackInstancesCountHasBeenSet = true;
    m_pendingStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithPendingStackInstancesCount(int value) {
    SetPendingStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that were canceled because the operation
   * exceeded its failure tolerance or was stopped.</p>
   */
  inline int GetCancelledStackInstancesCount() const { return m_cancelledStackInstancesCount; }
  inline bool CancelledStackInstancesCountHasBeenSet() const { return m_cancelledStackInstancesCountHasBeenSet; }
  inline void SetCancelledStackInstancesCount(int value) {
    m_cancelledStackInstancesCountHasBeenSet = true;
    m_cancelledStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithCancelledStackInstancesCount(int value) {
    SetCancelledStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stack instances that were skipped because role provisioning
   * failed for their target account.</p>
   */
  inline int GetSkippedStackInstancesCount() const { return m_skippedStackInstancesCount; }
  inline bool SkippedStackInstancesCountHasBeenSet() const { return m_skippedStackInstancesCountHasBeenSet; }
  inline void SetSkippedStackInstancesCount(int value) {
    m_skippedStackInstancesCountHasBeenSet = true;
    m_skippedStackInstancesCount = value;
  }
  inline StackInstancesDeployment& WithSkippedStackInstancesCount(int value) {
    SetSkippedStackInstancesCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of stack instances that have reached a final state.</p>
   */
  inline double GetPercentageCompleted() const { return m_percentageCompleted; }
  inline bool PercentageCompletedHasBeenSet() const { return m_percentageCompletedHasBeenSet; }
  inline void SetPercentageCompleted(double value) {
    m_percentageCompletedHasBeenSet = true;
    m_percentageCompleted = value;
  }
  inline StackInstancesDeployment& WithPercentageCompleted(double value) {
    SetPercentageCompleted(value);
    return *this;
  }
  ///@}
 private:
  StageStatus m_status{StageStatus::NOT_SET};

  int m_succeededStackInstancesCount{0};

  int m_failedStackInstancesCount{0};

  int m_completedStackInstancesCount{0};

  int m_pendingStackInstancesCount{0};

  int m_cancelledStackInstancesCount{0};

  int m_skippedStackInstancesCount{0};

  double m_percentageCompleted{0.0};
  bool m_statusHasBeenSet = false;
  bool m_succeededStackInstancesCountHasBeenSet = false;
  bool m_failedStackInstancesCountHasBeenSet = false;
  bool m_completedStackInstancesCountHasBeenSet = false;
  bool m_pendingStackInstancesCountHasBeenSet = false;
  bool m_cancelledStackInstancesCountHasBeenSet = false;
  bool m_skippedStackInstancesCountHasBeenSet = false;
  bool m_percentageCompletedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
