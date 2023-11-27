/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/GetTrustStoreRevocationContentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetTrustStoreRevocationContentResult::GetTrustStoreRevocationContentResult()
{
}

GetTrustStoreRevocationContentResult::GetTrustStoreRevocationContentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTrustStoreRevocationContentResult& GetTrustStoreRevocationContentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTrustStoreRevocationContentResult"))
  {
    resultNode = rootNode.FirstChild("GetTrustStoreRevocationContentResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      m_location = Aws::Utils::Xml::DecodeEscapedXmlText(locationNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::GetTrustStoreRevocationContentResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
