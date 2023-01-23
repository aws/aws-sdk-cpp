/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/SetIpAddressTypeResult.h>
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

SetIpAddressTypeResult::SetIpAddressTypeResult() : 
    m_ipAddressType(IpAddressType::NOT_SET)
{
}

SetIpAddressTypeResult::SetIpAddressTypeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_ipAddressType(IpAddressType::NOT_SET)
{
  *this = result;
}

SetIpAddressTypeResult& SetIpAddressTypeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SetIpAddressTypeResult"))
  {
    resultNode = rootNode.FirstChild("SetIpAddressTypeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipAddressTypeNode = resultNode.FirstChild("IpAddressType");
    if(!ipAddressTypeNode.IsNull())
    {
      m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipAddressTypeNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticLoadBalancingv2::Model::SetIpAddressTypeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
