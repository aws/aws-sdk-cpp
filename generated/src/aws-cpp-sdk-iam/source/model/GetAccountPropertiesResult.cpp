/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/GetAccountPropertiesResult.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAccountPropertiesResult::GetAccountPropertiesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GetAccountPropertiesResult& GetAccountPropertiesResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAccountPropertiesResult")) {
    resultNode = rootNode.FirstChild("GetAccountPropertiesResult");
  }

  if (!resultNode.IsNull()) {
    XmlNode propertiesNode = resultNode.FirstChild("Properties");

    if (!propertiesNode.IsNull()) {
      XmlNode propertiesEntry = propertiesNode.FirstChild("entry");
      m_propertiesHasBeenSet = !propertiesEntry.IsNull();
      while (!propertiesEntry.IsNull()) {
        XmlNode keyNode = propertiesEntry.FirstChild("key");
        XmlNode valueNode = propertiesEntry.FirstChild("value");
        m_properties[keyNode.GetText()] = valueNode.GetText();
        propertiesEntry = propertiesEntry.NextNode("entry");
      }

      m_propertiesHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetAccountPropertiesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}
