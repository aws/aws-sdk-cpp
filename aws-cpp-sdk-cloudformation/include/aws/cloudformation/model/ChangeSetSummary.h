/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The <code>ChangeSetSummary</code> structure describes a change set, its
   * status, and the stack with which it's associated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ChangeSetSummary">AWS
   * API Reference</a></p>
   */
  class ChangeSetSummary
  {
  public:
    AWS_CLOUDFORMATION_API ChangeSetSummary();
    AWS_CLOUDFORMATION_API ChangeSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline ChangeSetSummary& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The ID of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>The ID of the change set.</p>
     */
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }

    /**
     * <p>The ID of the change set.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

    /**
     * <p>The ID of the change set.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }

    /**
     * <p>The ID of the change set.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }

    /**
     * <p>The ID of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The ID of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


    /**
     * <p>The name of the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }

    /**
     * <p>The name of the change set.</p>
     */
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }

    /**
     * <p>The name of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}


    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = std::move(value); }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline ChangeSetSummary& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline ChangeSetSummary& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline const ChangeSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(const ChangeSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(ChangeSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetSummary& WithStatus(const ChangeSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetSummary& WithStatus(ChangeSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline ChangeSetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline ChangeSetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline ChangeSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline ChangeSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline ChangeSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the current setting of <code>IncludeNestedStacks</code> for the
     * change set.</p>
     */
    inline bool GetIncludeNestedStacks() const{ return m_includeNestedStacks; }

    /**
     * <p>Specifies the current setting of <code>IncludeNestedStacks</code> for the
     * change set.</p>
     */
    inline bool IncludeNestedStacksHasBeenSet() const { return m_includeNestedStacksHasBeenSet; }

    /**
     * <p>Specifies the current setting of <code>IncludeNestedStacks</code> for the
     * change set.</p>
     */
    inline void SetIncludeNestedStacks(bool value) { m_includeNestedStacksHasBeenSet = true; m_includeNestedStacks = value; }

    /**
     * <p>Specifies the current setting of <code>IncludeNestedStacks</code> for the
     * change set.</p>
     */
    inline ChangeSetSummary& WithIncludeNestedStacks(bool value) { SetIncludeNestedStacks(value); return *this;}


    /**
     * <p>The parent change set ID.</p>
     */
    inline const Aws::String& GetParentChangeSetId() const{ return m_parentChangeSetId; }

    /**
     * <p>The parent change set ID.</p>
     */
    inline bool ParentChangeSetIdHasBeenSet() const { return m_parentChangeSetIdHasBeenSet; }

    /**
     * <p>The parent change set ID.</p>
     */
    inline void SetParentChangeSetId(const Aws::String& value) { m_parentChangeSetIdHasBeenSet = true; m_parentChangeSetId = value; }

    /**
     * <p>The parent change set ID.</p>
     */
    inline void SetParentChangeSetId(Aws::String&& value) { m_parentChangeSetIdHasBeenSet = true; m_parentChangeSetId = std::move(value); }

    /**
     * <p>The parent change set ID.</p>
     */
    inline void SetParentChangeSetId(const char* value) { m_parentChangeSetIdHasBeenSet = true; m_parentChangeSetId.assign(value); }

    /**
     * <p>The parent change set ID.</p>
     */
    inline ChangeSetSummary& WithParentChangeSetId(const Aws::String& value) { SetParentChangeSetId(value); return *this;}

    /**
     * <p>The parent change set ID.</p>
     */
    inline ChangeSetSummary& WithParentChangeSetId(Aws::String&& value) { SetParentChangeSetId(std::move(value)); return *this;}

    /**
     * <p>The parent change set ID.</p>
     */
    inline ChangeSetSummary& WithParentChangeSetId(const char* value) { SetParentChangeSetId(value); return *this;}


    /**
     * <p>The root change set ID.</p>
     */
    inline const Aws::String& GetRootChangeSetId() const{ return m_rootChangeSetId; }

    /**
     * <p>The root change set ID.</p>
     */
    inline bool RootChangeSetIdHasBeenSet() const { return m_rootChangeSetIdHasBeenSet; }

    /**
     * <p>The root change set ID.</p>
     */
    inline void SetRootChangeSetId(const Aws::String& value) { m_rootChangeSetIdHasBeenSet = true; m_rootChangeSetId = value; }

    /**
     * <p>The root change set ID.</p>
     */
    inline void SetRootChangeSetId(Aws::String&& value) { m_rootChangeSetIdHasBeenSet = true; m_rootChangeSetId = std::move(value); }

    /**
     * <p>The root change set ID.</p>
     */
    inline void SetRootChangeSetId(const char* value) { m_rootChangeSetIdHasBeenSet = true; m_rootChangeSetId.assign(value); }

    /**
     * <p>The root change set ID.</p>
     */
    inline ChangeSetSummary& WithRootChangeSetId(const Aws::String& value) { SetRootChangeSetId(value); return *this;}

    /**
     * <p>The root change set ID.</p>
     */
    inline ChangeSetSummary& WithRootChangeSetId(Aws::String&& value) { SetRootChangeSetId(std::move(value)); return *this;}

    /**
     * <p>The root change set ID.</p>
     */
    inline ChangeSetSummary& WithRootChangeSetId(const char* value) { SetRootChangeSetId(value); return *this;}

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet = false;

    ChangeSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_includeNestedStacks;
    bool m_includeNestedStacksHasBeenSet = false;

    Aws::String m_parentChangeSetId;
    bool m_parentChangeSetIdHasBeenSet = false;

    Aws::String m_rootChangeSetId;
    bool m_rootChangeSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
