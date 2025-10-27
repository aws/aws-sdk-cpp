/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/GetCapacityManagerAttributesResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetCapacityManagerAttributesResponse::GetCapacityManagerAttributesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

GetCapacityManagerAttributesResponse& GetCapacityManagerAttributesResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetCapacityManagerAttributesResponse")) {
    resultNode = rootNode.FirstChild("GetCapacityManagerAttributesResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode capacityManagerStatusNode = resultNode.FirstChild("capacityManagerStatus");
    if (!capacityManagerStatusNode.IsNull()) {
      m_capacityManagerStatus = CapacityManagerStatusMapper::GetCapacityManagerStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityManagerStatusNode.GetText()).c_str()));
      m_capacityManagerStatusHasBeenSet = true;
    }
    XmlNode organizationsAccessNode = resultNode.FirstChild("organizationsAccess");
    if (!organizationsAccessNode.IsNull()) {
      m_organizationsAccess = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(organizationsAccessNode.GetText()).c_str()).c_str());
      m_organizationsAccessHasBeenSet = true;
    }
    XmlNode dataExportCountNode = resultNode.FirstChild("dataExportCount");
    if (!dataExportCountNode.IsNull()) {
      m_dataExportCount = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataExportCountNode.GetText()).c_str()).c_str());
      m_dataExportCountHasBeenSet = true;
    }
    XmlNode ingestionStatusNode = resultNode.FirstChild("ingestionStatus");
    if (!ingestionStatusNode.IsNull()) {
      m_ingestionStatus = IngestionStatusMapper::GetIngestionStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ingestionStatusNode.GetText()).c_str()));
      m_ingestionStatusHasBeenSet = true;
    }
    XmlNode ingestionStatusMessageNode = resultNode.FirstChild("ingestionStatusMessage");
    if (!ingestionStatusMessageNode.IsNull()) {
      m_ingestionStatusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(ingestionStatusMessageNode.GetText());
      m_ingestionStatusMessageHasBeenSet = true;
    }
    XmlNode earliestDatapointTimestampNode = resultNode.FirstChild("earliestDatapointTimestamp");
    if (!earliestDatapointTimestampNode.IsNull()) {
      m_earliestDatapointTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(earliestDatapointTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_earliestDatapointTimestampHasBeenSet = true;
    }
    XmlNode latestDatapointTimestampNode = resultNode.FirstChild("latestDatapointTimestamp");
    if (!latestDatapointTimestampNode.IsNull()) {
      m_latestDatapointTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestDatapointTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_latestDatapointTimestampHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetCapacityManagerAttributesResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
