/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/AddTrustStoreRevocationsResult.h>
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

AddTrustStoreRevocationsResult::AddTrustStoreRevocationsResult()
{
}

AddTrustStoreRevocationsResult::AddTrustStoreRevocationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AddTrustStoreRevocationsResult& AddTrustStoreRevocationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AddTrustStoreRevocationsResult"))
  {
    resultNode = rootNode.FirstChild("AddTrustStoreRevocationsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trustStoreRevocationsNode = resultNode.FirstChild("TrustStoreRevocations");
    if(!trustStoreRevocationsNode.IsNull())
    {
      XmlNode trustStoreRevocationsMember = trustStoreRevocationsNode.FirstChild("member");
      while(!trustStoreRevocationsMember.IsNull())
      {
        m_trustStoreRevocations.push_back(trustStoreRevocationsMember);
        trustStoreRevocationsMember = trustStoreRevocationsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::AddTrustStoreRevocationsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
