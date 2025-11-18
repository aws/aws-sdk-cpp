/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/OperationEvent.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace CloudFormation {
namespace Model {

OperationEvent::OperationEvent(const XmlNode& xmlNode) { *this = xmlNode; }

OperationEvent& OperationEvent::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode eventIdNode = resultNode.FirstChild("EventId");
    if (!eventIdNode.IsNull()) {
      m_eventId = Aws::Utils::Xml::DecodeEscapedXmlText(eventIdNode.GetText());
      m_eventIdHasBeenSet = true;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if (!stackIdNode.IsNull()) {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode operationIdNode = resultNode.FirstChild("OperationId");
    if (!operationIdNode.IsNull()) {
      m_operationId = Aws::Utils::Xml::DecodeEscapedXmlText(operationIdNode.GetText());
      m_operationIdHasBeenSet = true;
    }
    XmlNode operationTypeNode = resultNode.FirstChild("OperationType");
    if (!operationTypeNode.IsNull()) {
      m_operationType = OperationTypeMapper::GetOperationTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationTypeNode.GetText()).c_str()));
      m_operationTypeHasBeenSet = true;
    }
    XmlNode operationStatusNode = resultNode.FirstChild("OperationStatus");
    if (!operationStatusNode.IsNull()) {
      m_operationStatus = BeaconStackOperationStatusMapper::GetBeaconStackOperationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationStatusNode.GetText()).c_str()));
      m_operationStatusHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("EventType");
    if (!eventTypeNode.IsNull()) {
      m_eventType =
          EventTypeMapper::GetEventTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(eventTypeNode.GetText()).c_str()));
      m_eventTypeHasBeenSet = true;
    }
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if (!logicalResourceIdNode.IsNull()) {
      m_logicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(logicalResourceIdNode.GetText());
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if (!physicalResourceIdNode.IsNull()) {
      m_physicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(physicalResourceIdNode.GetText());
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if (!resourceTypeNode.IsNull()) {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if (!timestampNode.IsNull()) {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if (!startTimeNode.IsNull()) {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if (!endTimeNode.IsNull()) {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(),
                           Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
    XmlNode resourceStatusNode = resultNode.FirstChild("ResourceStatus");
    if (!resourceStatusNode.IsNull()) {
      m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusNode.GetText()).c_str()));
      m_resourceStatusHasBeenSet = true;
    }
    XmlNode resourceStatusReasonNode = resultNode.FirstChild("ResourceStatusReason");
    if (!resourceStatusReasonNode.IsNull()) {
      m_resourceStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusReasonNode.GetText());
      m_resourceStatusReasonHasBeenSet = true;
    }
    XmlNode resourcePropertiesNode = resultNode.FirstChild("ResourceProperties");
    if (!resourcePropertiesNode.IsNull()) {
      m_resourceProperties = Aws::Utils::Xml::DecodeEscapedXmlText(resourcePropertiesNode.GetText());
      m_resourcePropertiesHasBeenSet = true;
    }
    XmlNode clientRequestTokenNode = resultNode.FirstChild("ClientRequestToken");
    if (!clientRequestTokenNode.IsNull()) {
      m_clientRequestToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientRequestTokenNode.GetText());
      m_clientRequestTokenHasBeenSet = true;
    }
    XmlNode hookTypeNode = resultNode.FirstChild("HookType");
    if (!hookTypeNode.IsNull()) {
      m_hookType = Aws::Utils::Xml::DecodeEscapedXmlText(hookTypeNode.GetText());
      m_hookTypeHasBeenSet = true;
    }
    XmlNode hookStatusNode = resultNode.FirstChild("HookStatus");
    if (!hookStatusNode.IsNull()) {
      m_hookStatus = HookStatusMapper::GetHookStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusNode.GetText()).c_str()));
      m_hookStatusHasBeenSet = true;
    }
    XmlNode hookStatusReasonNode = resultNode.FirstChild("HookStatusReason");
    if (!hookStatusReasonNode.IsNull()) {
      m_hookStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusReasonNode.GetText());
      m_hookStatusReasonHasBeenSet = true;
    }
    XmlNode hookInvocationPointNode = resultNode.FirstChild("HookInvocationPoint");
    if (!hookInvocationPointNode.IsNull()) {
      m_hookInvocationPoint = HookInvocationPointMapper::GetHookInvocationPointForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookInvocationPointNode.GetText()).c_str()));
      m_hookInvocationPointHasBeenSet = true;
    }
    XmlNode hookFailureModeNode = resultNode.FirstChild("HookFailureMode");
    if (!hookFailureModeNode.IsNull()) {
      m_hookFailureMode = HookFailureModeMapper::GetHookFailureModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookFailureModeNode.GetText()).c_str()));
      m_hookFailureModeHasBeenSet = true;
    }
    XmlNode detailedStatusNode = resultNode.FirstChild("DetailedStatus");
    if (!detailedStatusNode.IsNull()) {
      m_detailedStatus = DetailedStatusMapper::GetDetailedStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(detailedStatusNode.GetText()).c_str()));
      m_detailedStatusHasBeenSet = true;
    }
    XmlNode validationFailureModeNode = resultNode.FirstChild("ValidationFailureMode");
    if (!validationFailureModeNode.IsNull()) {
      m_validationFailureMode = HookFailureModeMapper::GetHookFailureModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validationFailureModeNode.GetText()).c_str()));
      m_validationFailureModeHasBeenSet = true;
    }
    XmlNode validationNameNode = resultNode.FirstChild("ValidationName");
    if (!validationNameNode.IsNull()) {
      m_validationName = Aws::Utils::Xml::DecodeEscapedXmlText(validationNameNode.GetText());
      m_validationNameHasBeenSet = true;
    }
    XmlNode validationStatusNode = resultNode.FirstChild("ValidationStatus");
    if (!validationStatusNode.IsNull()) {
      m_validationStatus = ValidationStatusMapper::GetValidationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(validationStatusNode.GetText()).c_str()));
      m_validationStatusHasBeenSet = true;
    }
    XmlNode validationStatusReasonNode = resultNode.FirstChild("ValidationStatusReason");
    if (!validationStatusReasonNode.IsNull()) {
      m_validationStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(validationStatusReasonNode.GetText());
      m_validationStatusReasonHasBeenSet = true;
    }
    XmlNode validationPathNode = resultNode.FirstChild("ValidationPath");
    if (!validationPathNode.IsNull()) {
      m_validationPath = Aws::Utils::Xml::DecodeEscapedXmlText(validationPathNode.GetText());
      m_validationPathHasBeenSet = true;
    }
  }

  return *this;
}

void OperationEvent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_eventIdHasBeenSet) {
    oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

  if (m_stackIdHasBeenSet) {
    oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if (m_operationIdHasBeenSet) {
    oStream << location << index << locationValue << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if (m_operationTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".OperationType=" << StringUtils::URLEncode(OperationTypeMapper::GetNameForOperationType(m_operationType)) << "&";
  }

  if (m_operationStatusHasBeenSet) {
    oStream << location << index << locationValue << ".OperationStatus="
            << StringUtils::URLEncode(BeaconStackOperationStatusMapper::GetNameForBeaconStackOperationStatus(m_operationStatus)) << "&";
  }

  if (m_eventTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".EventType=" << StringUtils::URLEncode(EventTypeMapper::GetNameForEventType(m_eventType)) << "&";
  }

  if (m_logicalResourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if (m_physicalResourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if (m_resourceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if (m_timestampHasBeenSet) {
    oStream << location << index << locationValue
            << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_startTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_endTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_resourceStatusHasBeenSet) {
    oStream << location << index << locationValue
            << ".ResourceStatus=" << StringUtils::URLEncode(ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus)) << "&";
  }

  if (m_resourceStatusReasonHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str())
            << "&";
  }

  if (m_resourcePropertiesHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceProperties=" << StringUtils::URLEncode(m_resourceProperties.c_str()) << "&";
  }

  if (m_clientRequestTokenHasBeenSet) {
    oStream << location << index << locationValue << ".ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if (m_hookTypeHasBeenSet) {
    oStream << location << index << locationValue << ".HookType=" << StringUtils::URLEncode(m_hookType.c_str()) << "&";
  }

  if (m_hookStatusHasBeenSet) {
    oStream << location << index << locationValue
            << ".HookStatus=" << StringUtils::URLEncode(HookStatusMapper::GetNameForHookStatus(m_hookStatus)) << "&";
  }

  if (m_hookStatusReasonHasBeenSet) {
    oStream << location << index << locationValue << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }

  if (m_hookInvocationPointHasBeenSet) {
    oStream << location << index << locationValue << ".HookInvocationPoint="
            << StringUtils::URLEncode(HookInvocationPointMapper::GetNameForHookInvocationPoint(m_hookInvocationPoint)) << "&";
  }

  if (m_hookFailureModeHasBeenSet) {
    oStream << location << index << locationValue
            << ".HookFailureMode=" << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_hookFailureMode)) << "&";
  }

  if (m_detailedStatusHasBeenSet) {
    oStream << location << index << locationValue
            << ".DetailedStatus=" << StringUtils::URLEncode(DetailedStatusMapper::GetNameForDetailedStatus(m_detailedStatus)) << "&";
  }

  if (m_validationFailureModeHasBeenSet) {
    oStream << location << index << locationValue << ".ValidationFailureMode="
            << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_validationFailureMode)) << "&";
  }

  if (m_validationNameHasBeenSet) {
    oStream << location << index << locationValue << ".ValidationName=" << StringUtils::URLEncode(m_validationName.c_str()) << "&";
  }

  if (m_validationStatusHasBeenSet) {
    oStream << location << index << locationValue
            << ".ValidationStatus=" << StringUtils::URLEncode(ValidationStatusMapper::GetNameForValidationStatus(m_validationStatus))
            << "&";
  }

  if (m_validationStatusReasonHasBeenSet) {
    oStream << location << index << locationValue << ".ValidationStatusReason=" << StringUtils::URLEncode(m_validationStatusReason.c_str())
            << "&";
  }

  if (m_validationPathHasBeenSet) {
    oStream << location << index << locationValue << ".ValidationPath=" << StringUtils::URLEncode(m_validationPath.c_str()) << "&";
  }
}

void OperationEvent::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_eventIdHasBeenSet) {
    oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
  if (m_stackIdHasBeenSet) {
    oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if (m_operationIdHasBeenSet) {
    oStream << location << ".OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }
  if (m_operationTypeHasBeenSet) {
    oStream << location << ".OperationType=" << StringUtils::URLEncode(OperationTypeMapper::GetNameForOperationType(m_operationType))
            << "&";
  }
  if (m_operationStatusHasBeenSet) {
    oStream << location << ".OperationStatus="
            << StringUtils::URLEncode(BeaconStackOperationStatusMapper::GetNameForBeaconStackOperationStatus(m_operationStatus)) << "&";
  }
  if (m_eventTypeHasBeenSet) {
    oStream << location << ".EventType=" << StringUtils::URLEncode(EventTypeMapper::GetNameForEventType(m_eventType)) << "&";
  }
  if (m_logicalResourceIdHasBeenSet) {
    oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if (m_physicalResourceIdHasBeenSet) {
    oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if (m_resourceTypeHasBeenSet) {
    oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if (m_timestampHasBeenSet) {
    oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_startTimeHasBeenSet) {
    oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_endTimeHasBeenSet) {
    oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_resourceStatusHasBeenSet) {
    oStream << location << ".ResourceStatus=" << StringUtils::URLEncode(ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus))
            << "&";
  }
  if (m_resourceStatusReasonHasBeenSet) {
    oStream << location << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }
  if (m_resourcePropertiesHasBeenSet) {
    oStream << location << ".ResourceProperties=" << StringUtils::URLEncode(m_resourceProperties.c_str()) << "&";
  }
  if (m_clientRequestTokenHasBeenSet) {
    oStream << location << ".ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }
  if (m_hookTypeHasBeenSet) {
    oStream << location << ".HookType=" << StringUtils::URLEncode(m_hookType.c_str()) << "&";
  }
  if (m_hookStatusHasBeenSet) {
    oStream << location << ".HookStatus=" << StringUtils::URLEncode(HookStatusMapper::GetNameForHookStatus(m_hookStatus)) << "&";
  }
  if (m_hookStatusReasonHasBeenSet) {
    oStream << location << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }
  if (m_hookInvocationPointHasBeenSet) {
    oStream << location << ".HookInvocationPoint="
            << StringUtils::URLEncode(HookInvocationPointMapper::GetNameForHookInvocationPoint(m_hookInvocationPoint)) << "&";
  }
  if (m_hookFailureModeHasBeenSet) {
    oStream << location
            << ".HookFailureMode=" << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_hookFailureMode)) << "&";
  }
  if (m_detailedStatusHasBeenSet) {
    oStream << location << ".DetailedStatus=" << StringUtils::URLEncode(DetailedStatusMapper::GetNameForDetailedStatus(m_detailedStatus))
            << "&";
  }
  if (m_validationFailureModeHasBeenSet) {
    oStream << location << ".ValidationFailureMode="
            << StringUtils::URLEncode(HookFailureModeMapper::GetNameForHookFailureMode(m_validationFailureMode)) << "&";
  }
  if (m_validationNameHasBeenSet) {
    oStream << location << ".ValidationName=" << StringUtils::URLEncode(m_validationName.c_str()) << "&";
  }
  if (m_validationStatusHasBeenSet) {
    oStream << location
            << ".ValidationStatus=" << StringUtils::URLEncode(ValidationStatusMapper::GetNameForValidationStatus(m_validationStatus))
            << "&";
  }
  if (m_validationStatusReasonHasBeenSet) {
    oStream << location << ".ValidationStatusReason=" << StringUtils::URLEncode(m_validationStatusReason.c_str()) << "&";
  }
  if (m_validationPathHasBeenSet) {
    oStream << location << ".ValidationPath=" << StringUtils::URLEncode(m_validationPath.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
