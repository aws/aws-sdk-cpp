/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateAddressResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

AllocateAddressResponse::AllocateAddressResponse() : 
    m_domain(DomainType::NOT_SET)
{
}

AllocateAddressResponse::AllocateAddressResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_domain(DomainType::NOT_SET)
{
  *this = result;
}

AllocateAddressResponse& AllocateAddressResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AllocateAddressResponse"))
  {
    resultNode = rootNode.FirstChild("AllocateAddressResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpNode.GetText());
    }
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
    }
    XmlNode publicIpv4PoolNode = resultNode.FirstChild("publicIpv4Pool");
    if(!publicIpv4PoolNode.IsNull())
    {
      m_publicIpv4Pool = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpv4PoolNode.GetText());
    }
    XmlNode networkBorderGroupNode = resultNode.FirstChild("networkBorderGroup");
    if(!networkBorderGroupNode.IsNull())
    {
      m_networkBorderGroup = Aws::Utils::Xml::DecodeEscapedXmlText(networkBorderGroupNode.GetText());
    }
    XmlNode domainNode = resultNode.FirstChild("domain");
    if(!domainNode.IsNull())
    {
      m_domain = DomainTypeMapper::GetDomainTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText()).c_str()).c_str());
    }
    XmlNode customerOwnedIpNode = resultNode.FirstChild("customerOwnedIp");
    if(!customerOwnedIpNode.IsNull())
    {
      m_customerOwnedIp = Aws::Utils::Xml::DecodeEscapedXmlText(customerOwnedIpNode.GetText());
    }
    XmlNode customerOwnedIpv4PoolNode = resultNode.FirstChild("customerOwnedIpv4Pool");
    if(!customerOwnedIpv4PoolNode.IsNull())
    {
      m_customerOwnedIpv4Pool = Aws::Utils::Xml::DecodeEscapedXmlText(customerOwnedIpv4PoolNode.GetText());
    }
    XmlNode carrierIpNode = resultNode.FirstChild("carrierIp");
    if(!carrierIpNode.IsNull())
    {
      m_carrierIp = Aws::Utils::Xml::DecodeEscapedXmlText(carrierIpNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AllocateAddressResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
