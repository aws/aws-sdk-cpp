﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/core/utils/DateTime.h>

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
   * status, and the stack with which it's associated.</p>
   */
  class AWS_CLOUDFORMATION_API ChangeSetSummary
  {
  public:
    ChangeSetSummary();
    ChangeSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    ChangeSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

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
    inline ChangeSetSummary& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

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
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

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
    inline ChangeSetSummary& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

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
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

    /**
     * <p>The ID of the change set.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

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
    inline ChangeSetSummary& WithChangeSetId(Aws::String&& value) { SetChangeSetId(value); return *this;}

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
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

    /**
     * <p>The name of the change set.</p>
     */
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }

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
    inline ChangeSetSummary& WithChangeSetName(Aws::String&& value) { SetChangeSetName(value); return *this;}

    /**
     * <p>The name of the change set.</p>
     */
    inline ChangeSetSummary& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline const ExecutionStatus& GetExecutionStatus() const{ return m_executionStatus; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline void SetExecutionStatus(const ExecutionStatus& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline void SetExecutionStatus(ExecutionStatus&& value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline ChangeSetSummary& WithExecutionStatus(const ExecutionStatus& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can’t execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * AWS CloudFormation is still creating it or in an <code>OBSOLETE</code> state
     * because the stack was already updated.</p>
     */
    inline ChangeSetSummary& WithExecutionStatus(ExecutionStatus&& value) { SetExecutionStatus(value); return *this;}

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline const ChangeSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(const ChangeSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline void SetStatus(ChangeSetStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetSummary& WithStatus(const ChangeSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The state of the change set, such as <code>CREATE_IN_PROGRESS</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetSummary& WithStatus(ChangeSetStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, AWS CloudFormation shows the error
     * message.</p>
     */
    inline ChangeSetSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline ChangeSetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline ChangeSetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline ChangeSetSummary& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline ChangeSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet;
    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet;
    ExecutionStatus m_executionStatus;
    bool m_executionStatusHasBeenSet;
    ChangeSetStatus m_status;
    bool m_statusHasBeenSet;
    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
