/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/UpdateCapacityManagerOrganizationsAccessResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

UpdateCapacityManagerOrganizationsAccessResponse::UpdateCapacityManagerOrganizationsAccessResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

UpdateCapacityManagerOrganizationsAccessResponse& UpdateCapacityManagerOrganizationsAccessResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateCapacityManagerOrganizationsAccessResponse")) {
    resultNode = rootNode.FirstChild("UpdateCapacityManagerOrganizationsAccessResponse");
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
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::UpdateCapacityManagerOrganizationsAccessResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
