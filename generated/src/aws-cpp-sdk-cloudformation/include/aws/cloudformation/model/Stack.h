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


    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline Stack& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline Stack& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline Stack& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline Stack& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline Stack& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline Stack& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The unique ID of the change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline Stack& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline Stack& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline Stack& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}


    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline Stack& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline Stack& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline Stack& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>The time at which the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline Stack& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline Stack& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline bool DeletionTimeHasBeenSet() const { return m_deletionTimeHasBeenSet; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = std::move(value); }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline Stack& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline Stack& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(std::move(value)); return *this;}


    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline Stack& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline Stack& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline const RollbackConfiguration& GetRollbackConfiguration() const{ return m_rollbackConfiguration; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline bool RollbackConfigurationHasBeenSet() const { return m_rollbackConfigurationHasBeenSet; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline void SetRollbackConfiguration(const RollbackConfiguration& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = value; }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline void SetRollbackConfiguration(RollbackConfiguration&& value) { m_rollbackConfigurationHasBeenSet = true; m_rollbackConfiguration = std::move(value); }

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline Stack& WithRollbackConfiguration(const RollbackConfiguration& value) { SetRollbackConfiguration(value); return *this;}

    /**
     * <p>The rollback triggers for CloudFormation to monitor during stack creation and
     * updating operations, and for the specified monitoring period afterwards.</p>
     */
    inline Stack& WithRollbackConfiguration(RollbackConfiguration&& value) { SetRollbackConfiguration(std::move(value)); return *this;}


    /**
     * <p>Current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline bool StackStatusHasBeenSet() const { return m_stackStatusHasBeenSet; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = std::move(value); }

    /**
     * <p>Current status of the stack.</p>
     */
    inline Stack& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}

    /**
     * <p>Current status of the stack.</p>
     */
    inline Stack& WithStackStatus(StackStatus&& value) { SetStackStatus(std::move(value)); return *this;}


    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline bool StackStatusReasonHasBeenSet() const { return m_stackStatusReasonHasBeenSet; }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = std::move(value); }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline Stack& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline Stack& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(std::move(value)); return *this;}

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline Stack& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}


    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback.</p> </li> <li> <p>
     * <code>false</code>: enable rollback.</p> </li> </ul>
     */
    inline Stack& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}


    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline bool NotificationARNsHasBeenSet() const { return m_notificationARNsHasBeenSet; }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = std::move(value); }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline Stack& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline Stack& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(std::move(value)); return *this;}

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline Stack& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline Stack& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon SNS topic Amazon Resource Names (ARNs) to which stack related events
     * are published.</p>
     */
    inline Stack& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }


    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline Stack& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}


    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of output structures.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>A list of output structures.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>A list of output structures.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>A list of output structures.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Identity and Access Management (IAM)
     * role that's associated with the stack. During a stack operation, CloudFormation
     * uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether termination protection is enabled for the stack.</p> <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
     * a Stack From Being Deleted</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool GetEnableTerminationProtection() const{ return m_enableTerminationProtection; }

    /**
     * <p>Whether termination protection is enabled for the stack.</p> <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
     * a Stack From Being Deleted</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool EnableTerminationProtectionHasBeenSet() const { return m_enableTerminationProtectionHasBeenSet; }

    /**
     * <p>Whether termination protection is enabled for the stack.</p> <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
     * a Stack From Being Deleted</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetEnableTerminationProtection(bool value) { m_enableTerminationProtectionHasBeenSet = true; m_enableTerminationProtection = value; }

    /**
     * <p>Whether termination protection is enabled for the stack.</p> <p>For <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
     * stacks</a>, termination protection is set on the root stack and can't be changed
     * directly on the nested stack. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting
     * a Stack From Being Deleted</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithEnableTerminationProtection(bool value) { SetEnableTerminationProtection(value); return *this;}


    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the direct parent of this stack. For the first level of nested stacks, the
     * root stack is also the parent stack.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline const Aws::String& GetRootId() const{ return m_rootId; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline bool RootIdHasBeenSet() const { return m_rootIdHasBeenSet; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(const Aws::String& value) { m_rootIdHasBeenSet = true; m_rootId = value; }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(Aws::String&& value) { m_rootIdHasBeenSet = true; m_rootId = std::move(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline void SetRootId(const char* value) { m_rootIdHasBeenSet = true; m_rootId.assign(value); }

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithRootId(const Aws::String& value) { SetRootId(value); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithRootId(Aws::String&& value) { SetRootId(std::move(value)); return *this;}

    /**
     * <p>For nested stacks--stacks created as resources for another stack--the stack
     * ID of the top-level stack to which the nested stack ultimately belongs.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">Working
     * with Nested Stacks</a> in the <i>CloudFormation User Guide</i>.</p>
     */
    inline Stack& WithRootId(const char* value) { SetRootId(value); return *this;}


    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline const StackDriftInformation& GetDriftInformation() const{ return m_driftInformation; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline bool DriftInformationHasBeenSet() const { return m_driftInformationHasBeenSet; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(const StackDriftInformation& value) { m_driftInformationHasBeenSet = true; m_driftInformation = value; }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline void SetDriftInformation(StackDriftInformation&& value) { m_driftInformationHasBeenSet = true; m_driftInformation = std::move(value); }

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline Stack& WithDriftInformation(const StackDriftInformation& value) { SetDriftInformation(value); return *this;}

    /**
     * <p>Information about whether a stack's actual configuration differs, or has
     * <i>drifted</i>, from its expected configuration, as defined in the stack
     * template and any values specified as template parameters. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
     * Unregulated Configuration Changes to Stacks and Resources</a>.</p>
     */
    inline Stack& WithDriftInformation(StackDriftInformation&& value) { SetDriftInformation(std::move(value)); return *this;}


    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline bool GetRetainExceptOnCreate() const{ return m_retainExceptOnCreate; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline bool RetainExceptOnCreateHasBeenSet() const { return m_retainExceptOnCreateHasBeenSet; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline void SetRetainExceptOnCreate(bool value) { m_retainExceptOnCreateHasBeenSet = true; m_retainExceptOnCreate = value; }

    /**
     * <p>This deletion policy deletes newly created resources, but retains existing
     * resources, when a stack operation is rolled back. This ensures new, empty, and
     * unused resources are deleted, while critical resources and their data are
     * retained. <code>RetainExceptOnCreate</code> can be specified for any resource
     * that supports the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-attribute-deletionpolicy.html">
     * DeletionPolicy</a> attribute.</p>
     */
    inline Stack& WithRetainExceptOnCreate(bool value) { SetRetainExceptOnCreate(value); return *this;}

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
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
