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
    AWS_CLOUDFORMATION_API Stack();
    AWS_CLOUDFORMATION_API Stack(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Stack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline Stack& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline Stack& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline Stack& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline Stack& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline Stack& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline Stack& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }
    inline Stack& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}
    inline Stack& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}
    inline Stack& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Stack& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Stack& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Stack& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline Stack& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}
    inline Stack& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline Stack& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline Stack& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Stack& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Stack& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }
    inline Stack& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}
    inline Stack& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Stack& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Stack& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const{ return m_rollbackConfiguration; }
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }
    inline void SetRollbackConfiguration(const RollbackConfiguration& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = value; }
    inline void SetRollbackConfiguration(RollbackConfiguration&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::move(value); }
    inline Stack& WithRollbackConfiguration(const RollbackConfiguration& value) { SetRollbackConfiguration(value); return *this;}
    inline Stack& WithRollbackConfiguration(RollbackConfiguration&& value) { SetRollbackConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::move(value); }
    inline Stack& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}
    inline Stack& WithStackStatus(StackStatus&& value) { SetStackStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::move(value); }
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }
    inline Stack& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}
    inline Stack& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(std::move(value)); return *this;}
    inline Stack& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }
    inline Stack& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }
    inline bool NotificationARNsHasBeenSet() const { return m_notificationARNsHasBeenSet; }
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::move(value); }
    inline Stack& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}
    inline Stack& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(std::move(value)); return *this;}
    inline Stack& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }
    inline Stack& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(std::move(value)); return *this; }
    inline Stack& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Stack& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }
    inline Stack& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}
    inline Stack& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}
    inline Stack& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }
    inline Stack& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of output structures.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline Stack& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}
    inline Stack& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}
    inline Stack& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline Stack& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that's associated with the
     * stack. During a stack operation, CloudFormation uses this role's credentials to
     * make calls on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline Stack& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline Stack& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline Stack& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Stack& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Stack& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Stack& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Stack& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }
    inline Stack& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Embed
     * stacks within other stacks using nested stacks</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }
    inline Stack& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}
    inline Stack& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}
    inline Stack& WithParentId(const char* value) { SetParentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Embed
     * stacks within other stacks using nested stacks</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }
    inline Stack& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}
    inline Stack& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}
    inline Stack& WithRootId(const char* value) { SetRootId(value); return *this;}
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
    inline const StackDriftInformation& GetDriftInformation() const{ return m_driftInformation; }
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }
    inline void SetDriftInformation(const StackDriftInformation& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }
    inline void SetDriftInformation(StackDriftInformation&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }
    inline Stack& WithDriftInformation(const StackDriftInformation& value) { SetDriftInformation(value); return *this;}
    inline Stack& WithDriftInformation(StackDriftInformation&& value) { SetDriftInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, newly created resources are deleted when the
     * operation rolls back. This includes newly created resources marked with a
     * deletion policy of <code>Retain</code>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetRetainExceptOnCreate() const{ return m_retainExceptOnCreate; }
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
    inline const DeletionMode& GetDeletionMode() const{ return m_deletionMode; }
    inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
    inline void SetDeletionMode(const DeletionMode& value) { m_deletionModeHasBeenSet = true; m_deletionMode = value; }
    inline void SetDeletionMode(DeletionMode&& value) { m_deletionModeHasBeenSet = true; m_deletionMode = std::move(value); }
    inline Stack& WithDeletionMode(const DeletionMode& value) { SetDeletionMode(value); return *this;}
    inline Stack& WithDeletionMode(DeletionMode&& value) { SetDeletionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed status of the resource or stack. If
     * <code>CONFIGURATION_COMPLETE</code> is present, the resource or resource
     * configuration phase has completed and the stabilization of the resources is in
     * progress. The stack sets <code>CONFIGURATION_COMPLETE</code> when all of the
     * resources in the stack have reached that event. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stack-resource-configuration-complete.html">Understand
     * CloudFormation stack creation events</a> in the <i>CloudFormation User
     * Guide</i>.</p>
     */
    inline const DetailedStatus& GetDetailedStatus() const{ return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(const DetailedStatus& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline void SetDetailedStatus(DetailedStatus&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }
    inline Stack& WithDetailedStatus(const DetailedStatus& value) { SetDetailedStatus(value); return *this;}
    inline Stack& WithDetailedStatus(DetailedStatus&& value) { SetDetailedStatus(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deletionTime;
    bool m_deletionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    RollbackConfiguration m_rollbackConfiguration;
    bool m_rollbackConfigurationHasBeenSet = false;

    StackStatus m_stackStatus;
    bool m_stackStatusHasBeenSet = false;

    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet = false;

    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet = false;

    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet = false;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableTerminationProtection;
    bool m_enableTerminationProtectionHasBeenSet = false;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet = false;

    Aws::String m_rootId;
    bool m_rootIdHasBeenSet = false;

    StackDriftInformation m_driftInformation;
    bool m_driftInformationHasBeenSet = false;

    bool m_retainExceptOnCreate;
    bool m_retainExceptOnCreateHasBeenSet = false;

    DeletionMode m_deletionMode;
    bool m_deletionModeHasBeenSet = false;

    DetailedStatus m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
