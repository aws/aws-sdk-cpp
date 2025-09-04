/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResourceStatus.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/cloudformation/model/DetailedStatus.h>
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
   * <p>The StackEvent data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackEvent">AWS
   * API Reference</a></p>
   */
  class StackEvent
  {
  public:
    AWS_CLOUDFORMATION_API StackEvent() = default;
    AWS_CLOUDFORMATION_API StackEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID name of the instance of the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackEvent& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    StackEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name associated with a stack.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    StackEvent& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical name of the resource specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    StackEvent& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier associated with the physical instance of the
     * resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    StackEvent& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of resource. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
     * Web Services resource and property types reference</a> in the <i>CloudFormation
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    StackEvent& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the status was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    StackEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the resource.</p>
     */
    inline ResourceStatus GetResourceStatus() const { return m_resourceStatus; }
    inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
    inline void SetResourceStatus(ResourceStatus value) { m_resourceStatusHasBeenSet = true; m_resourceStatus = value; }
    inline StackEvent& WithResourceStatus(ResourceStatus value) { SetResourceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Success/failure message associated with the resource.</p>
     */
    inline const Aws::String& GetResourceStatusReason() const { return m_resourceStatusReason; }
    inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
    template<typename ResourceStatusReasonT = Aws::String>
    void SetResourceStatusReason(ResourceStatusReasonT&& value) { m_resourceStatusReasonHasBeenSet = true; m_resourceStatusReason = std::forward<ResourceStatusReasonT>(value); }
    template<typename ResourceStatusReasonT = Aws::String>
    StackEvent& WithResourceStatusReason(ResourceStatusReasonT&& value) { SetResourceStatusReason(std::forward<ResourceStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>BLOB of the properties used to create the resource.</p>
     */
    inline const Aws::String& GetResourceProperties() const { return m_resourceProperties; }
    inline bool ResourcePropertiesHasBeenSet() const { return m_resourcePropertiesHasBeenSet; }
    template<typename ResourcePropertiesT = Aws::String>
    void SetResourceProperties(ResourcePropertiesT&& value) { m_resourcePropertiesHasBeenSet = true; m_resourceProperties = std::forward<ResourcePropertiesT>(value); }
    template<typename ResourcePropertiesT = Aws::String>
    StackEvent& WithResourceProperties(ResourcePropertiesT&& value) { SetResourceProperties(std::forward<ResourcePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token passed to the operation that generated this event.</p> <p>All
     * events triggered by a given stack operation are assigned the same client request
     * token, which you can use to track operations. For example, if you execute a
     * <code>CreateStack</code> operation with the token <code>token1</code>, then all
     * the <code>StackEvents</code> generated by that operation will have
     * <code>ClientRequestToken</code> set as <code>token1</code>.</p> <p>In the
     * console, stack operations display the client request token on the Events tab.
     * Stack operations that are initiated from the console use the token format
     * <i>Console-StackOperation-ID</i>, which helps you easily identify the stack
     * operation . For example, if you create a stack using the console, each stack
     * event would be assigned the same token in the following format:
     * <code>Console-CreateStack-7f59c3cf-00d2-40c7-b2ff-e75db0987002</code>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StackEvent& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Hook.</p>
     */
    inline const Aws::String& GetHookType() const { return m_hookType; }
    inline bool HookTypeHasBeenSet() const { return m_hookTypeHasBeenSet; }
    template<typename HookTypeT = Aws::String>
    void SetHookType(HookTypeT&& value) { m_hookTypeHasBeenSet = true; m_hookType = std::forward<HookTypeT>(value); }
    template<typename HookTypeT = Aws::String>
    StackEvent& WithHookType(HookTypeT&& value) { SetHookType(std::forward<HookTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the status of the change set Hook.</p>
     */
    inline HookStatus GetHookStatus() const { return m_hookStatus; }
    inline bool HookStatusHasBeenSet() const { return m_hookStatusHasBeenSet; }
    inline void SetHookStatus(HookStatus value) { m_hookStatusHasBeenSet = true; m_hookStatus = value; }
    inline StackEvent& WithHookStatus(HookStatus value) { SetHookStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the reason for the Hook status.</p>
     */
    inline const Aws::String& GetHookStatusReason() const { return m_hookStatusReason; }
    inline bool HookStatusReasonHasBeenSet() const { return m_hookStatusReasonHasBeenSet; }
    template<typename HookStatusReasonT = Aws::String>
    void SetHookStatusReason(HookStatusReasonT&& value) { m_hookStatusReasonHasBeenSet = true; m_hookStatusReason = std::forward<HookStatusReasonT>(value); }
    template<typename HookStatusReasonT = Aws::String>
    StackEvent& WithHookStatusReason(HookStatusReasonT&& value) { SetHookStatusReason(std::forward<HookStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific point in the provisioning process where the Hook is invoked.</p>
     */
    inline HookInvocationPoint GetHookInvocationPoint() const { return m_hookInvocationPoint; }
    inline bool HookInvocationPointHasBeenSet() const { return m_hookInvocationPointHasBeenSet; }
    inline void SetHookInvocationPoint(HookInvocationPoint value) { m_hookInvocationPointHasBeenSet = true; m_hookInvocationPoint = value; }
    inline StackEvent& WithHookInvocationPoint(HookInvocationPoint value) { SetHookInvocationPoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Hook invocation.</p>
     */
    inline const Aws::String& GetHookInvocationId() const { return m_hookInvocationId; }
    inline bool HookInvocationIdHasBeenSet() const { return m_hookInvocationIdHasBeenSet; }
    template<typename HookInvocationIdT = Aws::String>
    void SetHookInvocationId(HookInvocationIdT&& value) { m_hookInvocationIdHasBeenSet = true; m_hookInvocationId = std::forward<HookInvocationIdT>(value); }
    template<typename HookInvocationIdT = Aws::String>
    StackEvent& WithHookInvocationId(HookInvocationIdT&& value) { SetHookInvocationId(std::forward<HookInvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the Hook failure mode for non-compliant resources in the followings
     * ways.</p> <ul> <li> <p> <code>FAIL</code> Stops provisioning resources.</p>
     * </li> <li> <p> <code>WARN</code> Allows provisioning to continue with a warning
     * message.</p> </li> </ul>
     */
    inline HookFailureMode GetHookFailureMode() const { return m_hookFailureMode; }
    inline bool HookFailureModeHasBeenSet() const { return m_hookFailureModeHasBeenSet; }
    inline void SetHookFailureMode(HookFailureMode value) { m_hookFailureModeHasBeenSet = true; m_hookFailureMode = value; }
    inline StackEvent& WithHookFailureMode(HookFailureMode value) { SetHookFailureMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field that contains information about the detailed status of the
     * stack event.</p> <ul> <li> <p> <code>CONFIGURATION_COMPLETE</code> - all of the
     * resources in the stack have reached that event. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stack-resource-configuration-complete.html">Understand
     * CloudFormation stack creation events</a> in the <i>CloudFormation User
     * Guide</i>.</p> </li> </ul> <ul> <li> <p> <code>VALIDATION_FAILED</code> -
     * template validation failed because of invalid properties in the template. The
     * <code>ResourceStatusReason</code> field shows what properties are defined
     * incorrectly.</p> </li> </ul>
     */
    inline DetailedStatus GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(DetailedStatus value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline StackEvent& WithDetailedStatus(DetailedStatus value) { SetDetailedStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    ResourceStatus m_resourceStatus{ResourceStatus::NOT_SET};
    bool m_resourceStatusHasBeenSet = false;

    Aws::String m_resourceStatusReason;
    bool m_resourceStatusReasonHasBeenSet = false;

    Aws::String m_resourceProperties;
    bool m_resourcePropertiesHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_hookType;
    bool m_hookTypeHasBeenSet = false;

    HookStatus m_hookStatus{HookStatus::NOT_SET};
    bool m_hookStatusHasBeenSet = false;

    Aws::String m_hookStatusReason;
    bool m_hookStatusReasonHasBeenSet = false;

    HookInvocationPoint m_hookInvocationPoint{HookInvocationPoint::NOT_SET};
    bool m_hookInvocationPointHasBeenSet = false;

    Aws::String m_hookInvocationId;
    bool m_hookInvocationIdHasBeenSet = false;

    HookFailureMode m_hookFailureMode{HookFailureMode::NOT_SET};
    bool m_hookFailureModeHasBeenSet = false;

    DetailedStatus m_detailedStatus{DetailedStatus::NOT_SET};
    bool m_detailedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
