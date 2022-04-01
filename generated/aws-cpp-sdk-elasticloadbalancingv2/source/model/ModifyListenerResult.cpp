/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ModifyListenerResult.h>
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

ModifyListenerResult::ModifyListenerResult()
{
}

ModifyListenerResult::ModifyListenerResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyListenerResult& ModifyListenerResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyListenerResult"))
  {
    resultNode = rootNode.FirstChild("ModifyListenerResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode listenersNode = resultNode.FirstChild("Listeners");
    if(!listenersNode.IsNull())
    {
      XmlNode listenersMember = listenersNode.FirstChild("member");
      while(!listenersMember.IsNull())
      {
        m_listeners.push_back(listenersMember);
        listenersMember = listenersMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::ModifyListenerResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
