/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/StackStatus.h>
#include <aws/cloudformation/model/Parameter.h>
#include <aws/cloudformation/model/Capability.h>
#include <aws/cloudformation/model/Output.h>
#include <aws/cloudformation/model/Tag.h>

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
   * <p>The Stack data type.</p>
   */
  class AWS_CLOUDFORMATION_API Stack
  {
  public:
    Stack();
    Stack(const Aws::Utils::Xml::XmlNode& xmlNode);
    Stack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique identifier of the stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

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
    inline Stack& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

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
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

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
    inline Stack& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

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
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

    /**
     * <p>The unique ID of the change set.</p>
     */
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }

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
    inline Stack& WithChangeSetId(Aws::String&& value) { SetChangeSetId(value); return *this;}

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
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A user-defined description associated with the stack.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

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
    inline Stack& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

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
    inline void SetParameters(const Aws::Vector<Parameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline void SetParameters(Aws::Vector<Parameter>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& WithParameters(const Aws::Vector<Parameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& WithParameters(Aws::Vector<Parameter>&& value) { SetParameters(value); return *this;}

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& AddParameters(const Parameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Parameter</code> structures.</p>
     */
    inline Stack& AddParameters(Parameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline Stack& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the stack was created.</p>
     */
    inline Stack& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline Stack& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline Stack& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>Current status of the stack.</p>
     */
    inline Stack& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}

    /**
     * <p>Current status of the stack.</p>
     */
    inline Stack& WithStackStatus(StackStatus&& value) { SetStackStatus(value); return *this;}

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

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
    inline Stack& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success/failure message associated with the stack status.</p>
     */
    inline Stack& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback</p> </li> <li> <p>
     * <code>false</code>: enable rollback</p> </li> </ul>
     */
    inline bool GetDisableRollback() const{ return m_disableRollback; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback</p> </li> <li> <p>
     * <code>false</code>: enable rollback</p> </li> </ul>
     */
    inline void SetDisableRollback(bool value) { m_disableRollbackHasBeenSet = true; m_disableRollback = value; }

    /**
     * <p>Boolean to enable or disable rollback on stack creation failures:</p> <ul>
     * <li> <p> <code>true</code>: disable rollback</p> </li> <li> <p>
     * <code>false</code>: enable rollback</p> </li> </ul>
     */
    inline Stack& WithDisableRollback(bool value) { SetDisableRollback(value); return *this;}

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotificationARNs() const{ return m_notificationARNs; }

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline void SetNotificationARNs(const Aws::Vector<Aws::String>& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline void SetNotificationARNs(Aws::Vector<Aws::String>&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs = value; }

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline Stack& WithNotificationARNs(const Aws::Vector<Aws::String>& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline Stack& WithNotificationARNs(Aws::Vector<Aws::String>&& value) { SetNotificationARNs(value); return *this;}

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline Stack& AddNotificationARNs(const Aws::String& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline Stack& AddNotificationARNs(Aws::String&& value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>SNS topic ARNs to which stack related events are published.</p>
     */
    inline Stack& AddNotificationARNs(const char* value) { m_notificationARNsHasBeenSet = true; m_notificationARNs.push_back(value); return *this; }

    /**
     * <p>The amount of time within which stack creation should complete.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

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
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>The capabilities allowed in the stack.</p>
     */
    inline Stack& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    /**
     * <p>A list of output structures.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>A list of output structures.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>A list of output structures.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(value); return *this;}

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>A list of output structures.</p>
     */
    inline Stack& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Identity and Access Management (IAM)
     * role that is associated with the stack. During a stack operation, AWS
     * CloudFormation uses this role's credentials to make calls on your behalf.</p>
     */
    inline Stack& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code>s that specify information about the stack.</p>
     */
    inline Stack& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
    StackStatus m_stackStatus;
    bool m_stackStatusHasBeenSet;
    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet;
    bool m_disableRollback;
    bool m_disableRollbackHasBeenSet;
    Aws::Vector<Aws::String> m_notificationARNs;
    bool m_notificationARNsHasBeenSet;
    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;
    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet;
    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
