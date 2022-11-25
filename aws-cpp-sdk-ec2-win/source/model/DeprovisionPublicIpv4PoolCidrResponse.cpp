/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrResponse.h>
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

DeprovisionPublicIpv4PoolCidrResponse::DeprovisionPublicIpv4PoolCidrResponse()
{
}

DeprovisionPublicIpv4PoolCidrResponse::DeprovisionPublicIpv4PoolCidrResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeprovisionPublicIpv4PoolCidrResponse& DeprovisionPublicIpv4PoolCidrResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeprovisionPublicIpv4PoolCidrResponse"))
  {
    resultNode = rootNode.FirstChild("DeprovisionPublicIpv4PoolCidrResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode poolIdNode = resultNode.FirstChild("poolId");
    if(!poolIdNode.IsNull())
    {
      m_poolId = Aws::Utils::Xml::DecodeEscapedXmlText(poolIdNode.GetText());
    }
    XmlNode deprovisionedAddressesNode = resultNode.FirstChild("deprovisionedAddressSet");
    if(!deprovisionedAddressesNode.IsNull())
    {
      XmlNode deprovisionedAddressesMember = deprovisionedAddressesNode.FirstChild("item");
      while(!deprovisionedAddressesMember.IsNull())
      {
        m_deprovisionedAddresses.push_back(deprovisionedAddressesMember.GetText());
        deprovisionedAddressesMember = deprovisionedAddressesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeprovisionPublicIpv4PoolCidrResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
