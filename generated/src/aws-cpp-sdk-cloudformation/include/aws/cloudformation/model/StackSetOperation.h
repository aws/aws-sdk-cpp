/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/cloudformation/model/StackSetOperationStatus.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/DeploymentTargets.h>
#include <aws/cloudformation/model/StackSetDriftDetectionDetails.h>
#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The structure that contains information about a StackSet
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperation">AWS
   * API Reference</a></p>
   */
  class StackSetOperation
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperation() = default;
    AWS_CLOUDFORMATION_API StackSetOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID of a StackSet operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    StackSetOperation& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the StackSet.</p>
     */
    inline const Aws::String& GetStackSetId() const { return m_stackSetId; }
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }
    template<typename StackSetIdT = Aws::String>
    void SetStackSetId(StackSetIdT&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::forward<StackSetIdT>(value); }
    template<typename StackSetIdT = Aws::String>
    StackSetOperation& WithStackSetId(StackSetIdT&& value) { SetStackSetId(std::forward<StackSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of StackSet operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified StackSet. Update
     * operations affect both the StackSet itself, in addition to <i>all</i> associated
     * stack instances.</p>
     */
    inline StackSetOperationAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(StackSetOperationAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline StackSetOperation& WithAction(StackSetOperationAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation.</p> <ul> <li> <p> <code>FAILED</code>: The
     * operation exceeded the specified failure tolerance. The failure tolerance value
     * that you've set for an operation is applied for each Region during stack create
     * and update operations. If the number of failed stacks within a Region exceeds
     * the failure tolerance, the status of the operation in the Region is set to
     * <code>FAILED</code>. This in turn sets the status of the operation as a whole to
     * <code>FAILED</code>, and CloudFormation cancels the operation in any remaining
     * Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed permissions]
     * For automatic deployments that require a sequence of operations, the operation
     * is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">StackSets
     * status codes</a> in the <i>CloudFormation User Guide</i>.</p> </li> <li> <p>
     * <code>RUNNING</code>: The operation is currently being performed.</p> </li> <li>
     * <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li> <li>
     * <p> <code>STOPPING</code>: The operation is in the process of stopping, at user
     * request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline StackSetOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackSetOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackSetOperation& WithStatus(StackSetOperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferences for how CloudFormation performs this StackSet operation.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const { return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    void SetOperationPreferences(OperationPreferencesT&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::forward<OperationPreferencesT>(value); }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    StackSetOperation& WithOperationPreferences(OperationPreferencesT&& value) { SetOperationPreferences(std::forward<OperationPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For StackSet operations of action type <code>DELETE</code>, specifies whether
     * to remove the stack instances from the specified StackSet, but doesn't delete
     * the stacks. You can't re-associate a retained stack, or add an existing, saved
     * stack to a new StackSet.</p>
     */
    inline bool GetRetainStacks() const { return m_retainStacks; }
    inline bool RetainStacksHasBeenSet() const { return m_retainStacksHasBeenSet; }
    inline void SetRetainStacks(bool value) { m_retainStacksHasBeenSet = true; m_retainStacks = value; }
    inline StackSetOperation& WithRetainStacks(bool value) { SetRetainStacks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role used to perform this StackSet
     * operation.</p> <p>Use customized administrator roles to control which users or
     * groups can manage specific StackSets within the same administrator account. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetAdministrationRoleARN() const { return m_administrationRoleARN; }
    inline bool AdministrationRoleARNHasBeenSet() const { return m_administrationRoleARNHasBeenSet; }
    template<typename AdministrationRoleARNT = Aws::String>
    void SetAdministrationRoleARN(AdministrationRoleARNT&& value) { m_administrationRoleARNHasBeenSet = true; m_administrationRoleARN = std::forward<AdministrationRoleARNT>(value); }
    template<typename AdministrationRoleARNT = Aws::String>
    StackSetOperation& WithAdministrationRoleARN(AdministrationRoleARNT&& value) { SetAdministrationRoleARN(std::forward<AdministrationRoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM execution role used to create or update the StackSet.</p>
     * <p>Use customized execution roles to control which stack resources users and
     * groups can include in their StackSets.</p>
     */
    inline const Aws::String& GetExecutionRoleName() const { return m_executionRoleName; }
    inline bool ExecutionRoleNameHasBeenSet() const { return m_executionRoleNameHasBeenSet; }
    template<typename ExecutionRoleNameT = Aws::String>
    void SetExecutionRoleName(ExecutionRoleNameT&& value) { m_executionRoleNameHasBeenSet = true; m_executionRoleName = std::forward<ExecutionRoleNameT>(value); }
    template<typename ExecutionRoleNameT = Aws::String>
    StackSetOperation& WithExecutionRoleName(ExecutionRoleNameT&& value) { SetExecutionRoleName(std::forward<ExecutionRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    StackSetOperation& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the StackSet operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the StackSet
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    StackSetOperation& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Organizations accounts affected by the stack operation. Valid only if the
     * StackSet uses service-managed permissions.</p>
     */
    inline const DeploymentTargets& GetDeploymentTargets() const { return m_deploymentTargets; }
    inline bool DeploymentTargetsHasBeenSet() const { return m_deploymentTargetsHasBeenSet; }
    template<typename DeploymentTargetsT = DeploymentTargets>
    void SetDeploymentTargets(DeploymentTargetsT&& value) { m_deploymentTargetsHasBeenSet = true; m_deploymentTargets = std::forward<DeploymentTargetsT>(value); }
    template<typename DeploymentTargetsT = DeploymentTargets>
    StackSetOperation& WithDeploymentTargets(DeploymentTargetsT&& value) { SetDeploymentTargets(std::forward<DeploymentTargetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the drift status of the StackSet. This includes
     * information about drift operations currently being performed on the
     * StackSet.</p> <p>This information will only be present for StackSet operations
     * whose <code>Action</code> type is <code>DETECT_DRIFT</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Performing
     * drift detection on CloudFormation StackSets</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const StackSetDriftDetectionDetails& GetStackSetDriftDetectionDetails() const { return m_stackSetDriftDetectionDetails; }
    inline bool StackSetDriftDetectionDetailsHasBeenSet() const { return m_stackSetDriftDetectionDetailsHasBeenSet; }
    template<typename StackSetDriftDetectionDetailsT = StackSetDriftDetectionDetails>
    void SetStackSetDriftDetectionDetails(StackSetDriftDetectionDetailsT&& value) { m_stackSetDriftDetectionDetailsHasBeenSet = true; m_stackSetDriftDetectionDetails = std::forward<StackSetDriftDetectionDetailsT>(value); }
    template<typename StackSetDriftDetectionDetailsT = StackSetDriftDetectionDetails>
    StackSetOperation& WithStackSetDriftDetectionDetails(StackSetDriftDetectionDetailsT&& value) { SetStackSetDriftDetectionDetails(std::forward<StackSetDriftDetectionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation in details.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StackSetOperation& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline const StackSetOperationStatusDetails& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = StackSetOperationStatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StackSetOperationStatusDetails>
    StackSetOperation& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    StackSetOperationAction m_action{StackSetOperationAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    StackSetOperationStatus m_status{StackSetOperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;

    bool m_retainStacks{false};
    bool m_retainStacksHasBeenSet = false;

    Aws::String m_administrationRoleARN;
    bool m_administrationRoleARNHasBeenSet = false;

    Aws::String m_executionRoleName;
    bool m_executionRoleNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;

    DeploymentTargets m_deploymentTargets;
    bool m_deploymentTargetsHasBeenSet = false;

    StackSetDriftDetectionDetails m_stackSetDriftDetectionDetails;
    bool m_stackSetDriftDetectionDetailsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    StackSetOperationStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
