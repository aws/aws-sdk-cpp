/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/cloudformation/model/ChangeSetStatus.h>
#include <aws/cloudformation/model/RollbackConfiguration.h>
#include <aws/cloudformation/model/OnStackFailure.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Tag.h>
#include <aws/cloudformation/model/Change.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  /**
   * <p>The output for the <a>DescribeChangeSet</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeChangeSetOutput">AWS
   * API Reference</a></p>
   */
  class DescribeChangeSetResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeChangeSetResult() = default;
    AWS_CLOUDFORMATION_API DescribeChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    DescribeChangeSetResult& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    DescribeChangeSetResult& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stack that's associated with the change
     * set.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeChangeSetResult& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stack that's associated with the change set.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DescribeChangeSetResult& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the change set.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeChangeSetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Parameter</code> structures that describes the input
     * parameters and their values used to create the change set. For more information,
     * see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_Parameter.html">Parameter</a>
     * data type.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    DescribeChangeSetResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    DescribeChangeSetResult& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start time when the change set was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeChangeSetResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline void SetExecutionStatus(ExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline DescribeChangeSetResult& WithExecutionStatus(ExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the change set, such as <code>CREATE_PENDING</code>,
     * <code>CREATE_COMPLETE</code>, or <code>FAILED</code>.</p>
     */
    inline ChangeSetStatus GetStatus() const { return m_status; }
    inline void SetStatus(ChangeSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeChangeSetResult& WithStatus(ChangeSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the change set's status. For example, if your attempt to
     * create a change set failed, CloudFormation shows the error message.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeChangeSetResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the Amazon SNS topics that will be associated with the stack if
     * you execute the change set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const { return m_notificationARNs; }
    template<typename NotificationARNsT = Aws::Vector<Aws::String>>
    void SetNotificationARNs(NotificationARNsT&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::forward<NotificationARNsT>(value); }
    template<typename NotificationARNsT = Aws::Vector<Aws::String>>
    DescribeChangeSetResult& WithNotificationARNs(NotificationARNsT&& value) { SetNotificationARNs(std::forward<NotificationARNsT>(value)); return *this;}
    template<typename NotificationARNsT = Aws::String>
    DescribeChangeSetResult& AddNotificationARNs(NotificationARNsT&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.emplace_back(std::forward<NotificationARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const { return m_rollbackConfiguration; }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    void SetRollbackConfiguration(RollbackConfigurationT&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::forward<RollbackConfigurationT>(value); }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    DescribeChangeSetResult& WithRollbackConfiguration(RollbackConfigurationT&& value) { SetRollbackConfiguration(std::forward<RollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you execute the change set, the list of capabilities that were explicitly
     * acknowledged when the change set was created.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    DescribeChangeSetResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline DescribeChangeSetResult& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you execute the change set, the tags that will be associated with the
     * stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeChangeSetResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeChangeSetResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>Change</code> structures that describes the resources
     * CloudFormation changes if you execute the change set.</p>
     */
    inline const Aws::Vector<Change>& GetChanges() const { return m_changes; }
    template<typename ChangesT = Aws::Vector<Change>>
    void SetChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes = std::forward<ChangesT>(value); }
    template<typename ChangesT = Aws::Vector<Change>>
    DescribeChangeSetResult& WithChanges(ChangesT&& value) { SetChanges(std::forward<ChangesT>(value)); return *this;}
    template<typename ChangesT = Change>
    DescribeChangeSetResult& AddChanges(ChangesT&& value) { m_changesHasBeenSet = true; m_changes.emplace_back(std::forward<ChangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the output exceeds 1 MB, a string that identifies the next page of
     * changes. If there is no additional page, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeChangeSetResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verifies if <code>IncludeNestedStacks</code> is set to <code>True</code>.</p>
     */
    inline bool GetIncludeNestedStacks() const { return m_includeNestedStacks; }
    inline void SetIncludeNestedStacks(bool value) { m_includeNestedStacksHasBeenSet = true; m_includeNestedStacks = value; }
    inline DescribeChangeSetResult& WithIncludeNestedStacks(bool value) { SetIncludeNestedStacks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the change set ID of the parent change set in the current nested
     * change set hierarchy.</p>
     */
    inline const Aws::String& GetParentChangeSetId() const { return m_parentChangeSetId; }
    template<typename ParentChangeSetIdT = Aws::String>
    void SetParentChangeSetId(ParentChangeSetIdT&& value) { m_parentChangeSetIdHasBeenSet = true; m_parentChangeSetId = std::forward<ParentChangeSetIdT>(value); }
    template<typename ParentChangeSetIdT = Aws::String>
    DescribeChangeSetResult& WithParentChangeSetId(ParentChangeSetIdT&& value) { SetParentChangeSetId(std::forward<ParentChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the change set ID of the root change set in the current nested
     * change set hierarchy.</p>
     */
    inline const Aws::String& GetRootChangeSetId() const { return m_rootChangeSetId; }
    template<typename RootChangeSetIdT = Aws::String>
    void SetRootChangeSetId(RootChangeSetIdT&& value) { m_rootChangeSetIdHasBeenSet = true; m_rootChangeSetId = std::forward<RootChangeSetIdT>(value); }
    template<typename RootChangeSetIdT = Aws::String>
    DescribeChangeSetResult& WithRootChangeSetId(RootChangeSetIdT&& value) { SetRootChangeSetId(std::forward<RootChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines what action will be taken if stack creation fails. When this
     * parameter is specified, the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation must not be specified. This must be one of these values:</p> <ul>
     * <li> <p> <code>DELETE</code> - Deletes the change set if the stack creation
     * fails. This is only valid when the <code>ChangeSetType</code> parameter is set
     * to <code>CREATE</code>. If the deletion of the stack fails, the status of the
     * stack is <code>DELETE_FAILED</code>.</p> </li> <li> <p> <code>DO_NOTHING</code>
     * - if the stack creation fails, do nothing. This is equivalent to specifying
     * <code>true</code> for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> <li> <p> <code>ROLLBACK</code> - if the stack creation
     * fails, roll back the stack. This is equivalent to specifying <code>false</code>
     * for the <code>DisableRollback</code> parameter to the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_ExecuteChangeSet.html">ExecuteChangeSet</a>
     * API operation.</p> </li> </ul>
     */
    inline OnStackFailure GetOnStackFailure() const { return m_onStackFailure; }
    inline void SetOnStackFailure(OnStackFailure value) { m_onStackFailureHasBeenSet = true; m_onStackFailure = value; }
    inline DescribeChangeSetResult& WithOnStackFailure(OnStackFailure value) { SetOnStackFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the change set imports resources that already exist.</p> 
     * <p>This parameter can only import resources that have <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/TemplateReference/aws-properties-name.html">custom
     * names</a> in templates. To import resources that do not accept custom names,
     * such as EC2 instances, use the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import.html">resource
     * import</a> feature instead.</p> 
     */
    inline bool GetImportExistingResources() const { return m_importExistingResources; }
    inline void SetImportExistingResources(bool value) { m_importExistingResourcesHasBeenSet = true; m_importExistingResources = value; }
    inline DescribeChangeSetResult& WithImportExistingResources(bool value) { SetImportExistingResources(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeChangeSetResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ExecutionStatus m_executionStatus{ExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    ChangeSetStatus m_status{ChangeSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Change> m_changes;
    bool m_changesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_includeNestedStacks{false};
    bool m_includeNestedStacksHasBeenSet = false;

    Aws::String m_parentChangeSetId;
    bool m_parentChangeSetIdHasBeenSet = false;

    Aws::String m_rootChangeSetId;
    bool m_rootChangeSetIdHasBeenSet = false;

    OnStackFailure m_onStackFailure{OnStackFailure::NOT_SET};
    bool m_onStackFailureHasBeenSet = false;

    bool m_importExistingResources{false};
    bool m_importExistingResourcesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
