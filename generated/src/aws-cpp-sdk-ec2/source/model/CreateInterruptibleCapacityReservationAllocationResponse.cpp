/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CreateInterruptibleCapacityReservationAllocationResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateInterruptibleCapacityReservationAllocationResponse::CreateInterruptibleCapacityReservationAllocationResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

CreateInterruptibleCapacityReservationAllocationResponse& CreateInterruptibleCapacityReservationAllocationResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateInterruptibleCapacityReservationAllocationResponse")) {
    resultNode = rootNode.FirstChild("CreateInterruptibleCapacityReservationAllocationResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode sourceCapacityReservationIdNode = resultNode.FirstChild("sourceCapacityReservationId");
    if (!sourceCapacityReservationIdNode.IsNull()) {
      m_sourceCapacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceCapacityReservationIdNode.GetText());
      m_sourceCapacityReservationIdHasBeenSet = true;
    }
    XmlNode targetInstanceCountNode = resultNode.FirstChild("targetInstanceCount");
    if (!targetInstanceCountNode.IsNull()) {
      m_targetInstanceCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetInstanceCountNode.GetText()).c_str()).c_str());
      m_targetInstanceCountHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = InterruptibleCapacityReservationAllocationStatusMapper::GetInterruptibleCapacityReservationAllocationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode interruptionTypeNode = resultNode.FirstChild("interruptionType");
    if (!interruptionTypeNode.IsNull()) {
      m_interruptionType = InterruptionTypeMapper::GetInterruptionTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interruptionTypeNode.GetText()).c_str()));
      m_interruptionTypeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateInterruptibleCapacityReservationAllocationResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
