/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/importexport/model/GetShippingLabelResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ImportExport::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetShippingLabelResult::GetShippingLabelResult()
{
}

GetShippingLabelResult::GetShippingLabelResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetShippingLabelResult& GetShippingLabelResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetShippingLabelResult"))
  {
    resultNode = rootNode.FirstChild("GetShippingLabelResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode shippingLabelURLNode = resultNode.FirstChild("ShippingLabelURL");
    if(!shippingLabelURLNode.IsNull())
    {
      m_shippingLabelURL = Aws::Utils::Xml::DecodeEscapedXmlText(shippingLabelURLNode.GetText());
    }
    XmlNode warningNode = resultNode.FirstChild("Warning");
    if(!warningNode.IsNull())
    {
      m_warning = Aws::Utils::Xml::DecodeEscapedXmlText(warningNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ImportExport::Model::GetShippingLabelResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
