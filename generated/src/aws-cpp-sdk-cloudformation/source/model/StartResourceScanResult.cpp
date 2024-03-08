/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StartResourceScanResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

StartResourceScanResult::StartResourceScanResult()
{
}

StartResourceScanResult::StartResourceScanResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StartResourceScanResult& StartResourceScanResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StartResourceScanResult"))
  {
    resultNode = rootNode.FirstChild("StartResourceScanResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode resourceScanIdNode = resultNode.FirstChild("ResourceScanId");
    if(!resourceScanIdNode.IsNull())
    {
      m_resourceScanId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceScanIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::StartResourceScanResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
