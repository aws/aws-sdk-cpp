/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetIpamDiscoveredPublicAddressesResponse.h>
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

GetIpamDiscoveredPublicAddressesResponse::GetIpamDiscoveredPublicAddressesResponse()
{
}

GetIpamDiscoveredPublicAddressesResponse::GetIpamDiscoveredPublicAddressesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetIpamDiscoveredPublicAddressesResponse& GetIpamDiscoveredPublicAddressesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetIpamDiscoveredPublicAddressesResponse"))
  {
    resultNode = rootNode.FirstChild("GetIpamDiscoveredPublicAddressesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamDiscoveredPublicAddressesNode = resultNode.FirstChild("ipamDiscoveredPublicAddressSet");
    if(!ipamDiscoveredPublicAddressesNode.IsNull())
    {
      XmlNode ipamDiscoveredPublicAddressesMember = ipamDiscoveredPublicAddressesNode.FirstChild("item");
      while(!ipamDiscoveredPublicAddressesMember.IsNull())
      {
        m_ipamDiscoveredPublicAddresses.push_back(ipamDiscoveredPublicAddressesMember);
        ipamDiscoveredPublicAddressesMember = ipamDiscoveredPublicAddressesMember.NextNode("item");
      }

    }
    XmlNode oldestSampleTimeNode = resultNode.FirstChild("oldestSampleTime");
    if(!oldestSampleTimeNode.IsNull())
    {
      m_oldestSampleTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(oldestSampleTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::GetIpamDiscoveredPublicAddressesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
