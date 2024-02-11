/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsResult.h>
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

DescribeTrustStoreAssociationsResult::DescribeTrustStoreAssociationsResult()
{
}

DescribeTrustStoreAssociationsResult::DescribeTrustStoreAssociationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTrustStoreAssociationsResult& DescribeTrustStoreAssociationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTrustStoreAssociationsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTrustStoreAssociationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trustStoreAssociationsNode = resultNode.FirstChild("TrustStoreAssociations");
    if(!trustStoreAssociationsNode.IsNull())
    {
      XmlNode trustStoreAssociationsMember = trustStoreAssociationsNode.FirstChild("member");
      while(!trustStoreAssociationsMember.IsNull())
      {
        m_trustStoreAssociations.push_back(trustStoreAssociationsMember);
        trustStoreAssociationsMember = trustStoreAssociationsMember.NextNode("member");
      }

    }
    XmlNode nextMarkerNode = resultNode.FirstChild("NextMarker");
    if(!nextMarkerNode.IsNull())
    {
      m_nextMarker = Aws::Utils::Xml::DecodeEscapedXmlText(nextMarkerNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::DescribeTrustStoreAssociationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
