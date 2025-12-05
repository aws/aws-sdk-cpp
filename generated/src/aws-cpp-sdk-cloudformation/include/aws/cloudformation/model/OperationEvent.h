/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/BeaconStackOperationStatus.h>
#include <aws/cloudformation/model/DetailedStatus.h>
#include <aws/cloudformation/model/EventType.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <aws/cloudformation/model/OperationType.h>
#include <aws/cloudformation/model/ResourceStatus.h>
#include <aws/cloudformation/model/ValidationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>Contains detailed information about an event that occurred during a
 * CloudFormation operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/OperationEvent">AWS
 * API Reference</a></p>
 */
class OperationEvent {
 public:
  AWS_CLOUDFORMATION_API OperationEvent() = default;
  AWS_CLOUDFORMATION_API OperationEvent(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API OperationEvent& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>A unique identifier for this event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  OperationEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID name of the instance of the stack.</p>
   */
  inline const Aws::String& GetStackId() const { return m_stackId; }
  inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
  template <typename StackIdT = Aws::String>
  void SetStackId(StackIdT&& value) {
    m_stackIdHasBeenSet = true;
    m_stackId = std::forward<StackIdT>(value);
  }
  template <typename StackIdT = Aws::String>
  OperationEvent& WithStackId(StackIdT&& value) {
    SetStackId(std::forward<StackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the operation this event belongs to.</p>
   */
  inline const Aws::String& GetOperationId() const { return m_operationId; }
  inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
  template <typename OperationIdT = Aws::String>
  void SetOperationId(OperationIdT&& value) {
    m_operationIdHasBeenSet = true;
    m_operationId = std::forward<OperationIdT>(value);
  }
  template <typename OperationIdT = Aws::String>
  OperationEvent& WithOperationId(OperationIdT&& value) {
    SetOperationId(std::forward<OperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of operation.</p>
   */
  inline OperationType GetOperationType() const { return m_operationType; }
  inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
  inline void SetOperationType(OperationType value) {
    m_operationTypeHasBeenSet = true;
    m_operationType = value;
  }
  inline OperationEvent& WithOperationType(OperationType value) {
    SetOperationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the operation.</p>
   */
  inline BeaconStackOperationStatus GetOperationStatus() const { return m_operationStatus; }
  inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
  inline void SetOperationStatus(BeaconStackOperationStatus value) {
    m_operationStatusHasBeenSet = true;
    m_operationStatus = value;
  }
  inline OperationEvent& WithOperationStatus(BeaconStackOperationStatus value) {
    SetOperationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of event.</p>
   */
  inline EventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(EventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline OperationEvent& WithEventType(EventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical name of the resource as specified in the template.</p>
   */
  inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
  inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
  template <typename LogicalResourceIdT = Aws::String>
  void SetLogicalResourceId(LogicalResourceIdT&& value) {
    m_logicalResourceIdHasBeenSet = true;
    m_logicalResourceId = std::forward<LogicalResourceIdT>(value);
  }
  template <typename LogicalResourceIdT = Aws::String>
  OperationEvent& WithLogicalResourceId(LogicalResourceIdT&& value) {
    SetLogicalResourceId(std::forward<LogicalResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or unique identifier that corresponds to a physical instance ID of a
   * resource.</p>
   */
  inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
  inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
  template <typename PhysicalResourceIdT = Aws::String>
  void SetPhysicalResourceId(PhysicalResourceIdT&& value) {
    m_physicalResourceIdHasBeenSet = true;
    m_physicalResourceId = std::forward<PhysicalResourceIdT>(value);
  }
  template <typename PhysicalResourceIdT = Aws::String>
  OperationEvent& WithPhysicalResourceId(PhysicalResourceIdT&& value) {
    SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  OperationEvent& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the status was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  OperationEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  OperationEvent& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  OperationEvent& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the resource.</p>
   */
  inline ResourceStatus GetResourceStatus() const { return m_resourceStatus; }
  inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
  inline void SetResourceStatus(ResourceStatus value) {
    m_resourceStatusHasBeenSet = true;
    m_resourceStatus = value;
  }
  inline OperationEvent& WithResourceStatus(ResourceStatus value) {
    SetResourceStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Success or failure message associated with the resource.</p>
   */
  inline const Aws::String& GetResourceStatusReason() const { return m_resourceStatusReason; }
  inline bool ResourceStatusReasonHasBeenSet() const { return m_resourceStatusReasonHasBeenSet; }
  template <typename ResourceStatusReasonT = Aws::String>
  void SetResourceStatusReason(ResourceStatusReasonT&& value) {
    m_resourceStatusReasonHasBeenSet = true;
    m_resourceStatusReason = std::forward<ResourceStatusReasonT>(value);
  }
  template <typename ResourceStatusReasonT = Aws::String>
  OperationEvent& WithResourceStatusReason(ResourceStatusReasonT&& value) {
    SetResourceStatusReason(std::forward<ResourceStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties used to create the resource.</p>
   */
  inline const Aws::String& GetResourceProperties() const { return m_resourceProperties; }
  inline bool ResourcePropertiesHasBeenSet() const { return m_resourcePropertiesHasBeenSet; }
  template <typename ResourcePropertiesT = Aws::String>
  void SetResourceProperties(ResourcePropertiesT&& value) {
    m_resourcePropertiesHasBeenSet = true;
    m_resourceProperties = std::forward<ResourcePropertiesT>(value);
  }
  template <typename ResourcePropertiesT = Aws::String>
  OperationEvent& WithResourceProperties(ResourcePropertiesT&& value) {
    SetResourceProperties(std::forward<ResourcePropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the request that initiated this operation.</p>
   */
  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  OperationEvent& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type name of the Hook that was invoked.</p>
   */
  inline const Aws::String& GetHookType() const { return m_hookType; }
  inline bool HookTypeHasBeenSet() const { return m_hookTypeHasBeenSet; }
  template <typename HookTypeT = Aws::String>
  void SetHookType(HookTypeT&& value) {
    m_hookTypeHasBeenSet = true;
    m_hookType = std::forward<HookTypeT>(value);
  }
  template <typename HookTypeT = Aws::String>
  OperationEvent& WithHookType(HookTypeT&& value) {
    SetHookType(std::forward<HookTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Hook invocation. </p>
   */
  inline HookStatus GetHookStatus() const { return m_hookStatus; }
  inline bool HookStatusHasBeenSet() const { return m_hookStatusHasBeenSet; }
  inline void SetHookStatus(HookStatus value) {
    m_hookStatusHasBeenSet = true;
    m_hookStatus = value;
  }
  inline OperationEvent& WithHookStatus(HookStatus value) {
    SetHookStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the Hook status.</p>
   */
  inline const Aws::String& GetHookStatusReason() const { return m_hookStatusReason; }
  inline bool HookStatusReasonHasBeenSet() const { return m_hookStatusReasonHasBeenSet; }
  template <typename HookStatusReasonT = Aws::String>
  void SetHookStatusReason(HookStatusReasonT&& value) {
    m_hookStatusReasonHasBeenSet = true;
    m_hookStatusReason = std::forward<HookStatusReasonT>(value);
  }
  template <typename HookStatusReasonT = Aws::String>
  OperationEvent& WithHookStatusReason(HookStatusReasonT&& value) {
    SetHookStatusReason(std::forward<HookStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The point in the operation lifecycle when the Hook was invoked.</p>
   */
  inline HookInvocationPoint GetHookInvocationPoint() const { return m_hookInvocationPoint; }
  inline bool HookInvocationPointHasBeenSet() const { return m_hookInvocationPointHasBeenSet; }
  inline void SetHookInvocationPoint(HookInvocationPoint value) {
    m_hookInvocationPointHasBeenSet = true;
    m_hookInvocationPoint = value;
  }
  inline OperationEvent& WithHookInvocationPoint(HookInvocationPoint value) {
    SetHookInvocationPoint(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how Hook failures are handled.</p>
   */
  inline HookFailureMode GetHookFailureMode() const { return m_hookFailureMode; }
  inline bool HookFailureModeHasBeenSet() const { return m_hookFailureModeHasBeenSet; }
  inline void SetHookFailureMode(HookFailureMode value) {
    m_hookFailureModeHasBeenSet = true;
    m_hookFailureMode = value;
  }
  inline OperationEvent& WithHookFailureMode(HookFailureMode value) {
    SetHookFailureMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional status information about the operation.</p>
   */
  inline DetailedStatus GetDetailedStatus() const { return m_detailedStatus; }
  inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
  inline void SetDetailedStatus(DetailedStatus value) {
    m_detailedStatusHasBeenSet = true;
    m_detailedStatus = value;
  }
  inline OperationEvent& WithDetailedStatus(DetailedStatus value) {
    SetDetailedStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how validation failures are handled.</p>
   */
  inline HookFailureMode GetValidationFailureMode() const { return m_validationFailureMode; }
  inline bool ValidationFailureModeHasBeenSet() const { return m_validationFailureModeHasBeenSet; }
  inline void SetValidationFailureMode(HookFailureMode value) {
    m_validationFailureModeHasBeenSet = true;
    m_validationFailureMode = value;
  }
  inline OperationEvent& WithValidationFailureMode(HookFailureMode value) {
    SetValidationFailureMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the validation that was performed.</p>
   */
  inline const Aws::String& GetValidationName() const { return m_validationName; }
  inline bool ValidationNameHasBeenSet() const { return m_validationNameHasBeenSet; }
  template <typename ValidationNameT = Aws::String>
  void SetValidationName(ValidationNameT&& value) {
    m_validationNameHasBeenSet = true;
    m_validationName = std::forward<ValidationNameT>(value);
  }
  template <typename ValidationNameT = Aws::String>
  OperationEvent& WithValidationName(ValidationNameT&& value) {
    SetValidationName(std::forward<ValidationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the validation.</p>
   */
  inline ValidationStatus GetValidationStatus() const { return m_validationStatus; }
  inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
  inline void SetValidationStatus(ValidationStatus value) {
    m_validationStatusHasBeenSet = true;
    m_validationStatus = value;
  }
  inline OperationEvent& WithValidationStatus(ValidationStatus value) {
    SetValidationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the validation status.</p>
   */
  inline const Aws::String& GetValidationStatusReason() const { return m_validationStatusReason; }
  inline bool ValidationStatusReasonHasBeenSet() const { return m_validationStatusReasonHasBeenSet; }
  template <typename ValidationStatusReasonT = Aws::String>
  void SetValidationStatusReason(ValidationStatusReasonT&& value) {
    m_validationStatusReasonHasBeenSet = true;
    m_validationStatusReason = std::forward<ValidationStatusReasonT>(value);
  }
  template <typename ValidationStatusReasonT = Aws::String>
  OperationEvent& WithValidationStatusReason(ValidationStatusReasonT&& value) {
    SetValidationStatusReason(std::forward<ValidationStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path within the resource where the validation was applied.</p>
   */
  inline const Aws::String& GetValidationPath() const { return m_validationPath; }
  inline bool ValidationPathHasBeenSet() const { return m_validationPathHasBeenSet; }
  template <typename ValidationPathT = Aws::String>
  void SetValidationPath(ValidationPathT&& value) {
    m_validationPathHasBeenSet = true;
    m_validationPath = std::forward<ValidationPathT>(value);
  }
  template <typename ValidationPathT = Aws::String>
  OperationEvent& WithValidationPath(ValidationPathT&& value) {
    SetValidationPath(std::forward<ValidationPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::String m_stackId;

  Aws::String m_operationId;

  OperationType m_operationType{OperationType::NOT_SET};

  BeaconStackOperationStatus m_operationStatus{BeaconStackOperationStatus::NOT_SET};

  EventType m_eventType{EventType::NOT_SET};

  Aws::String m_logicalResourceId;

  Aws::String m_physicalResourceId;

  Aws::String m_resourceType;

  Aws::Utils::DateTime m_timestamp{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  ResourceStatus m_resourceStatus{ResourceStatus::NOT_SET};

  Aws::String m_resourceStatusReason;

  Aws::String m_resourceProperties;

  Aws::String m_clientRequestToken;

  Aws::String m_hookType;

  HookStatus m_hookStatus{HookStatus::NOT_SET};

  Aws::String m_hookStatusReason;

  HookInvocationPoint m_hookInvocationPoint{HookInvocationPoint::NOT_SET};

  HookFailureMode m_hookFailureMode{HookFailureMode::NOT_SET};

  DetailedStatus m_detailedStatus{DetailedStatus::NOT_SET};

  HookFailureMode m_validationFailureMode{HookFailureMode::NOT_SET};

  Aws::String m_validationName;

  ValidationStatus m_validationStatus{ValidationStatus::NOT_SET};

  Aws::String m_validationStatusReason;

  Aws::String m_validationPath;
  bool m_eventIdHasBeenSet = false;
  bool m_stackIdHasBeenSet = false;
  bool m_operationIdHasBeenSet = false;
  bool m_operationTypeHasBeenSet = false;
  bool m_operationStatusHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_logicalResourceIdHasBeenSet = false;
  bool m_physicalResourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_resourceStatusHasBeenSet = false;
  bool m_resourceStatusReasonHasBeenSet = false;
  bool m_resourcePropertiesHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = false;
  bool m_hookTypeHasBeenSet = false;
  bool m_hookStatusHasBeenSet = false;
  bool m_hookStatusReasonHasBeenSet = false;
  bool m_hookInvocationPointHasBeenSet = false;
  bool m_hookFailureModeHasBeenSet = false;
  bool m_detailedStatusHasBeenSet = false;
  bool m_validationFailureModeHasBeenSet = false;
  bool m_validationNameHasBeenSet = false;
  bool m_validationStatusHasBeenSet = false;
  bool m_validationStatusReasonHasBeenSet = false;
  bool m_validationPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
