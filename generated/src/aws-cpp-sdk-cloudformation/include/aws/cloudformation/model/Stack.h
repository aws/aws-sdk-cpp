/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/RollbackConfiguration.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <aws/cloudformation/model/StackDriftInformation.h>
#include <aws/cloudformation/model/DeletionMode.h>
#include <aws/cloudformation/model/DetailedStatus.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Output.h>
#include <aws/cloudformation/model/Tag.h>
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
   * <p>The Stack data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Stack">AWS
   * API Reference</a></p>
   */
  class Stack
  {
  public:
    AWS_CLOUDFORMATION_API Stack() = default;
    AWS_CLOUDFORMATION_API Stack(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Stack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    Stack& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    Stack& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    Stack& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Stack& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    Stack& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    Stack& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Stack& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const { return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    template<typename DeletionTimeT = Aws::Utils::DateTime>
    void SetDeletionTime(DeletionTimeT&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::forward<DeletionTimeT>(value); }
    template<typename DeletionTimeT = Aws::Utils::DateTime>
    Stack& WithDeletionTime(DeletionTimeT&& value) { SetDeletionTime(std::forward<DeletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Stack& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const { return m_rollbackConfiguration; }
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    void SetRollbackConfiguration(RollbackConfigurationT&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::forward<RollbackConfigurationT>(value); }
    template<typename RollbackConfigurationT = RollbackConfiguration>
    Stack& WithRollbackConfiguration(RollbackConfigurationT&& value) { SetRollbackConfiguration(std::forward<RollbackConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the stack.</p>
     */
    inline StackStatus GetStackStatus() const { return m_stackStatus; }
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }
    inline void SetStackStatus(StackStatus value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }
    inline Stack& WithStackStatus(StackStatus value) { SetStackStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const { return m_stackStatusReason; }
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }
    template<typename StackStatusReasonT = Aws::String>
    void SetStackStatusReason(StackStatusReasonT&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::forward<StackStatusReasonT>(value); }
    template<typename StackStatusReasonT = Aws::String>
    Stack& WithStackStatusReason(StackStatusReasonT&& value) { SetStackStatusReason(std::forward<StackStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline bool GetDisableRollback() const { return m_disableRollback; }
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }
    inline Stack& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const { return m_notificationARNs; }
    inline bool NotificationARNsHasBeenSet() const { return m_notificationARNsHasBeenSet; }
    template<typename NotificationARNsT = Aws::Vector<Aws::String>>
    void SetNotificationARNs(NotificationARNsT&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::forward<NotificationARNsT>(value); }
    template<typename NotificationARNsT = Aws::Vector<Aws::String>>
    Stack& WithNotificationARNs(NotificationARNsT&& value) { SetNotificationARNs(std::forward<NotificationARNsT>(value)); return *this;}
    template<typename NotificationARNsT = Aws::String>
    Stack& AddNotificationARNs(NotificationARNsT&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.emplace_back(std::forward<NotificationARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Stack& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Capability>>
    Stack& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    inline Stack& AddCapabilities(Capability value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of output structures.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<Output>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<Output>>
    Stack& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = Output>
    Stack& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's associated with the
     * stack. During a stack operation, CloudFormation uses this role's credentials to
     * make calls on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    Stack& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Stack& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Stack& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether termination protection is enabled for the stack.</p> <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protect
     * a CloudFormation stack from being deleted</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline bool GetEnableTerminationProtection() const { return m_enableTerminationProtection; }
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }
    inline Stack& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks, the stack ID of the direct parent of this stack. For the
     * first level of nested stacks, the root stack is also the parent stack.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Nested
     * stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const { return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    template<typename ParentIdT = Aws::String>
    void SetParentId(ParentIdT&& value) { m_parentIdHasBeenSet = true; m_parentId = std::forward<ParentIdT>(value); }
    template<typename ParentIdT = Aws::String>
    Stack& WithParentId(ParentIdT&& value) { SetParentId(std::forward<ParentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks, the stack ID of the top-level stack to which the nested
     * stack ultimately belongs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Nested
     * stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const { return m_rootId; }
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }
    template<typename RootIdT = Aws::String>
    void SetRootId(RootIdT&& value) { m_rootIdHasBeenSet = true; m_rootId = std::forward<RootIdT>(value); }
    template<typename RootIdT = Aws::String>
    Stack& WithRootId(RootIdT&& value) { SetRootId(std::forward<RootIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detect
     * unmanaged configuration changes to stacks and resources with drift
     * detection</a>.</p>
     */
    inline const StackDriftInformation& GetDriftInformation() const { return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    template<typename DriftInformationT = StackDriftInformation>
    void SetDriftInformation(DriftInformationT&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::forward<DriftInformationT>(value); }
    template<typename DriftInformationT = StackDriftInformation>
    Stack& WithDriftInformation(DriftInformationT&& value) { SetDriftInformation(std::forward<DriftInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, newly created resources are deleted when the
     * operation rolls back. This includes newly created resources marked with a
     * deletion policy of <code>Retain</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetRetainExceptOnCreate() const { return m_retainExceptOnCreate; }
    inline bool RetainExceptOnCreateHasBeenSet() const { return m_retainExceptOnCreateHasBeenSet; }
    inline void SetRetainExceptOnCreate(bool value) { m_retainExceptOnCreateHasBeenSet = true; m_retainExceptOnCreate = value; }
    inline Stack& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the deletion mode for the stack. Possible values are:</p> <ul> <li>
     * <p> <code>STANDARD</code> - Use the standard behavior. Specifying this value is
     * the same as not specifying this parameter.</p> </li> <li> <p>
     * <code>FORCE_DELETE_STACK</code> - Delete the stack if it's stuck in a
     * <code>DELETE_FAILED</code> state due to resource deletion failure.</p> </li>
     * </ul>
     */
    inline DeletionMode GetDeletionMode() const { return m_deletionMode; }
    inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
    inline void SetDeletionMode(DeletionMode value) { m_deletionModeHasBeenSet = true; m_deletionMode = value; }
    inline Stack& WithDeletionMode(DeletionMode value) { SetDeletionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed status of the resource or stack. If
     * <code>CONFIGURATION_COMPLETE</code> is present, the resource or resource
     * configuration phase has completed and the stabilization of the resources is in
     * progress. The StackSets <code>CONFIGURATION_COMPLETE</code> when all of the
     * resources in the stack have reached that event. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stack-resource-configuration-complete.html">Understand
     * CloudFormation stack creation events</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline DetailedStatus GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(DetailedStatus value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline Stack& WithDetailedStatus(DetailedStatus value) { SetDetailedStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTime{};
    bool m_deletionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    StackStatus m_stackStatus{StackStatus::NOT_SET};
    bool m_stackStatusHasBeenSet = false;

    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet = false;

    bool m_disableRollback{false};
    bool m_disableRollbackHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet = false;

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableTerminationProtection{false};
    bool m_enableTerminationProtectionHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet = false;

    StackDriftInformation m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    bool m_retainExceptOnCreate{false};
    bool m_retainExceptOnCreateHasBeenSet = false;

    DeletionMode m_deletionMode{DeletionMode::NOT_SET};
    bool m_deletionModeHasBeenSet = false;

    DetailedStatus m_detailedStatus{DetailedStatus::NOT_SET};
    bool m_detailedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
