/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/EnableInstanceSqlHaStandbyDetectionsResponse.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

EnableInstanceSqlHaStandbyDetectionsResponse::EnableInstanceSqlHaStandbyDetectionsResponse(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

EnableInstanceSqlHaStandbyDetectionsResponse& EnableInstanceSqlHaStandbyDetectionsResponse::operator=(
    const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableInstanceSqlHaStandbyDetectionsResponse")) {
    resultNode = rootNode.FirstChild("EnableInstanceSqlHaStandbyDetectionsResponse");
  }

  if (!resultNode.IsNull()) {
    XmlNode instancesNode = resultNode.FirstChild("instanceSet");
    if (!instancesNode.IsNull()) {
      XmlNode instancesMember = instancesNode.FirstChild("item");
      m_instancesHasBeenSet = !instancesMember.IsNull();
      while (!instancesMember.IsNull()) {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("item");
      }

      m_instancesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableInstanceSqlHaStandbyDetectionsResponse",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
