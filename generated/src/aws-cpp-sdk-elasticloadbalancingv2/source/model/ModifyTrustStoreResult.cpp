/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyTrustStoreResult.h>
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

ModifyTrustStoreResult::ModifyTrustStoreResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyTrustStoreResult& ModifyTrustStoreResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyTrustStoreResult"))
  {
    resultNode = rootNode.FirstChild("ModifyTrustStoreResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode trustStoresNode = resultNode.FirstChild("TrustStores");
    if(!trustStoresNode.IsNull())
    {
      XmlNode trustStoresMember = trustStoresNode.FirstChild("member");
      m_trustStoresHasBeenSet = !trustStoresMember.IsNull();
      while(!trustStoresMember.IsNull())
      {
        m_trustStores.push_back(trustStoresMember);
        trustStoresMember = trustStoresMember.NextNode("member");
      }

      m_trustStoresHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::ModifyTrustStoreResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
