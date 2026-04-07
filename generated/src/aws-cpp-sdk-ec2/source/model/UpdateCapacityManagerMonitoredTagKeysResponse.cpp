/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/UpdateCapacityManagerMonitoredTagKeysResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

UpdateCapacityManagerMonitoredTagKeysResponse::UpdateCapacityManagerMonitoredTagKeysResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

UpdateCapacityManagerMonitoredTagKeysResponse& UpdateCapacityManagerMonitoredTagKeysResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "UpdateCapacityManagerMonitoredTagKeysResponse")) {
    resultNode = rootNode.FirstChild("UpdateCapacityManagerMonitoredTagKeysResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode capacityManagerTagKeysNode = resultNode.FirstChild("capacityManagerTagKeySet");
    if (!capacityManagerTagKeysNode.IsNull()) {
      XmlNode capacityManagerTagKeysMember = capacityManagerTagKeysNode.FirstChild("item");
      m_capacityManagerTagKeysHasBeenSet = !capacityManagerTagKeysMember.IsNull();
      while (!capacityManagerTagKeysMember.IsNull()) {
        m_capacityManagerTagKeys.push_back(capacityManagerTagKeysMember);
        capacityManagerTagKeysMember = capacityManagerTagKeysMember.NextNode("item");
      }

      m_capacityManagerTagKeysHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::UpdateCapacityManagerMonitoredTagKeysResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
