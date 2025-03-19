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
    AWS_CLOUDFORMATION_API ChangeSetSummary() = default;
    AWS_CLOUDFORMATION_API ChangeSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ChangeSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the stack with which the change set is associated.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    ChangeSetSummary& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack with which the change set is associated.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    ChangeSetSummary& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    ChangeSetSummary& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    ChangeSetSummary& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the change set execution status is <code>AVAILABLE</code>, you can execute
     * the change set. If you can't execute the change set, the status indicates why.
     * For example, a change set might be in an <code>UNAVAILABLE</code> state because
     * CloudFormation is still creating it or in an <code>OBSOLETE</code> state because
     * the stack was already updated.</p>
     */
    inline ExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline bool ExecutionStatusHasBeenSet() const { return m_executionStatusHasBeenSet; }
    inline void SetExecutionStatus(ExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline ChangeSetSummary& WithExecutionStatus(ExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the change set, such as <code>CREATE_PENDING</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChangeSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChangeSetSummary& WithStatus(ChangeSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the change set's status. For example, if your change set is
     * in the <code>FAILED</code> state, CloudFormation shows the error message.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ChangeSetSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ChangeSetSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive information about the change set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ChangeSetSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the current setting of <code>IncludeNestedStacks</code> for the
     * change set.</p>
     */
    inline bool GetIncludeNestedStacks() const { return m_includeNestedStacks; }
    inline bool IncludeNestedStacksHasBeenSet() const { return m_includeNestedStacksHasBeenSet; }
    inline void SetIncludeNestedStacks(bool value) { m_includeNestedStacksHasBeenSet = true; m_includeNestedStacks = value; }
    inline ChangeSetSummary& WithIncludeNestedStacks(bool value) { SetIncludeNestedStacks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent change set ID.</p>
     */
    inline const Aws::String& GetParentChangeSetId() const { return m_parentChangeSetId; }
    inline bool ParentChangeSetIdHasBeenSet() const { return m_parentChangeSetIdHasBeenSet; }
    template<typename ParentChangeSetIdT = Aws::String>
    void SetParentChangeSetId(ParentChangeSetIdT&& value) { m_parentChangeSetIdHasBeenSet = true; m_parentChangeSetId = std::forward<ParentChangeSetIdT>(value); }
    template<typename ParentChangeSetIdT = Aws::String>
    ChangeSetSummary& WithParentChangeSetId(ParentChangeSetIdT&& value) { SetParentChangeSetId(std::forward<ParentChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root change set ID.</p>
     */
    inline const Aws::String& GetRootChangeSetId() const { return m_rootChangeSetId; }
    inline bool RootChangeSetIdHasBeenSet() const { return m_rootChangeSetIdHasBeenSet; }
    template<typename RootChangeSetIdT = Aws::String>
    void SetRootChangeSetId(RootChangeSetIdT&& value) { m_rootChangeSetIdHasBeenSet = true; m_rootChangeSetId = std::forward<RootChangeSetIdT>(value); }
    template<typename RootChangeSetIdT = Aws::String>
    ChangeSetSummary& WithRootChangeSetId(RootChangeSetIdT&& value) { SetRootChangeSetId(std::forward<RootChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the change set imports resources that already exist.</p>
     */
    inline bool GetImportExistingResources() const { return m_importExistingResources; }
    inline bool ImportExistingResourcesHasBeenSet() const { return m_importExistingResourcesHasBeenSet; }
    inline void SetImportExistingResources(bool value) { m_importExistingResourcesHasBeenSet = true; m_importExistingResources = value; }
    inline ChangeSetSummary& WithImportExistingResources(bool value) { SetImportExistingResources(value); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    ChangeSetStatus m_status{ChangeSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_includeNestedStacks{false};
    bool m_includeNestedStacksHasBeenSet = false;

    Aws::String m_parentChangeSetId;
    bool m_parentChangeSetIdHasBeenSet = false;

    Aws::String m_rootChangeSetId;
    bool m_rootChangeSetIdHasBeenSet = false;

    bool m_importExistingResources{false};
    bool m_importExistingResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
