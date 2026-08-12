/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/GetRoleTemplateVersionResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetRoleTemplateVersionResult::GetRoleTemplateVersionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetRoleTemplateVersionResult& GetRoleTemplateVersionResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetRoleTemplateVersionResult")) {
    resultNode = rootNode.FirstChild("GetRoleTemplateVersionResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode roleTemplateVersionNode = resultNode.FirstChild("RoleTemplateVersion");
    if (!roleTemplateVersionNode.IsNull()) {
      m_roleTemplateVersion = roleTemplateVersionNode;
      m_roleTemplateVersionHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetRoleTemplateVersionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
