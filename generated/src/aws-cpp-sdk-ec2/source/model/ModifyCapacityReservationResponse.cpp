/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModifyCapacityReservationResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyCapacityReservationResponse::ModifyCapacityReservationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

ModifyCapacityReservationResponse& ModifyCapacityReservationResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCapacityReservationResponse")) {
    resultNode = rootNode.FirstChild("ModifyCapacityReservationResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode returnNode = resultNode.FirstChild("return");
    if (!returnNode.IsNull()) {
      m_return = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnNode.GetText()).c_str()).c_str());
      m_returnHasBeenSet = true;
    }
    XmlNode adjustmentStatusNode = resultNode.FirstChild("adjustmentStatus");
    if (!adjustmentStatusNode.IsNull()) {
      m_adjustmentStatus = CapacityReservationAdjustmentStatusMapper::GetCapacityReservationAdjustmentStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(adjustmentStatusNode.GetText()).c_str()));
      m_adjustmentStatusHasBeenSet = true;
    }
    XmlNode adjustmentDetailsNode = resultNode.FirstChild("adjustmentDetails");
    if (!adjustmentDetailsNode.IsNull()) {
      m_adjustmentDetails = adjustmentDetailsNode;
      m_adjustmentDetailsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyCapacityReservationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
