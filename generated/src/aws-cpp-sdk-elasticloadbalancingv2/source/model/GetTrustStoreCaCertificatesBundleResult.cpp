/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/GetTrustStoreCaCertificatesBundleResult.h>
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

GetTrustStoreCaCertificatesBundleResult::GetTrustStoreCaCertificatesBundleResult()
{
}

GetTrustStoreCaCertificatesBundleResult::GetTrustStoreCaCertificatesBundleResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTrustStoreCaCertificatesBundleResult& GetTrustStoreCaCertificatesBundleResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTrustStoreCaCertificatesBundleResult"))
  {
    resultNode = rootNode.FirstChild("GetTrustStoreCaCertificatesBundleResult");
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
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::GetTrustStoreCaCertificatesBundleResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
