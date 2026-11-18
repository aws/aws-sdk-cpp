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
 * <p>Provides visibility into the role provisioning stage of a StackSet operation,
 * including per-account progress counts and a completion percentage. For
 * operations that do not provision IAM roles in target accounts, the
 * <code>Status</code> is <code>NOT_APPLICABLE</code> and the progress counts are
 * omitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RoleProvisioning">AWS
 * API Reference</a></p>
 */
class RoleProvisioning {
 public:
  AWS_CLOUDFORMATION_API RoleProvisioning() = default;
  AWS_CLOUDFORMATION_API RoleProvisioning(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API RoleProvisioning& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The status of the role provisioning stage can be one of the following
   * values:</p> <ul> <li> <p> <code>NOT_APPLICABLE</code>: The operation does not
   * provision roles. This includes self-managed operations and service-managed
   * operations whose configuration does not require role provisioning.</p> </li>
   * <li> <p> <code>NOT_STARTED</code>: Role provisioning has not started. The
   * operation has not begun resolving target accounts, or it failed or stopped
   * before the total number of target accounts was resolved.</p> </li> <li> <p>
   * <code>IN_PROGRESS</code>: Role provisioning is actively processing target
   * accounts.</p> </li> <li> <p> <code>SUCCEEDED</code>: Role provisioning finished
   * and succeeded for all target accounts.</p> </li> <li> <p>
   * <code>PARTIAL_SUCCESS</code>: Role provisioning finished, but succeeded for only
   * a subset of target accounts; one or more accounts failed.</p> </li> <li> <p>
   * <code>FAILED</code>: Role provisioning finished and failed for all target
   * accounts.</p> </li> </ul>
   */
  inline StageStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StageStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RoleProvisioning& WithStatus(StageStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts for which role provisioning succeeded.</p>
   */
  inline int GetSucceededAccountsCount() const { return m_succeededAccountsCount; }
  inline bool SucceededAccountsCountHasBeenSet() const { return m_succeededAccountsCountHasBeenSet; }
  inline void SetSucceededAccountsCount(int value) {
    m_succeededAccountsCountHasBeenSet = true;
    m_succeededAccountsCount = value;
  }
  inline RoleProvisioning& WithSucceededAccountsCount(int value) {
    SetSucceededAccountsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts for which role provisioning failed.</p>
   */
  inline int GetFailedAccountsCount() const { return m_failedAccountsCount; }
  inline bool FailedAccountsCountHasBeenSet() const { return m_failedAccountsCountHasBeenSet; }
  inline void SetFailedAccountsCount(int value) {
    m_failedAccountsCountHasBeenSet = true;
    m_failedAccountsCount = value;
  }
  inline RoleProvisioning& WithFailedAccountsCount(int value) {
    SetFailedAccountsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts that have finished role provisioning, including both
   * succeeded and failed accounts.</p>
   */
  inline int GetCompletedAccountsCount() const { return m_completedAccountsCount; }
  inline bool CompletedAccountsCountHasBeenSet() const { return m_completedAccountsCountHasBeenSet; }
  inline void SetCompletedAccountsCount(int value) {
    m_completedAccountsCountHasBeenSet = true;
    m_completedAccountsCount = value;
  }
  inline RoleProvisioning& WithCompletedAccountsCount(int value) {
    SetCompletedAccountsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of accounts that are still awaiting role provisioning.</p>
   */
  inline int GetPendingAccountsCount() const { return m_pendingAccountsCount; }
  inline bool PendingAccountsCountHasBeenSet() const { return m_pendingAccountsCountHasBeenSet; }
  inline void SetPendingAccountsCount(int value) {
    m_pendingAccountsCountHasBeenSet = true;
    m_pendingAccountsCount = value;
  }
  inline RoleProvisioning& WithPendingAccountsCount(int value) {
    SetPendingAccountsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of accounts that have completed role provisioning.</p>
   */
  inline double GetPercentageCompleted() const { return m_percentageCompleted; }
  inline bool PercentageCompletedHasBeenSet() const { return m_percentageCompletedHasBeenSet; }
  inline void SetPercentageCompleted(double value) {
    m_percentageCompletedHasBeenSet = true;
    m_percentageCompleted = value;
  }
  inline RoleProvisioning& WithPercentageCompleted(double value) {
    SetPercentageCompleted(value);
    return *this;
  }
  ///@}
 private:
  StageStatus m_status{StageStatus::NOT_SET};

  int m_succeededAccountsCount{0};

  int m_failedAccountsCount{0};

  int m_completedAccountsCount{0};

  int m_pendingAccountsCount{0};

  double m_percentageCompleted{0.0};
  bool m_statusHasBeenSet = false;
  bool m_succeededAccountsCountHasBeenSet = false;
  bool m_failedAccountsCountHasBeenSet = false;
  bool m_completedAccountsCountHasBeenSet = false;
  bool m_pendingAccountsCountHasBeenSet = false;
  bool m_percentageCompletedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
