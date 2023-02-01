/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionPublicIpv4PoolCidrResponse.h>
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

ProvisionPublicIpv4PoolCidrResponse::ProvisionPublicIpv4PoolCidrResponse()
{
}

ProvisionPublicIpv4PoolCidrResponse::ProvisionPublicIpv4PoolCidrResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ProvisionPublicIpv4PoolCidrResponse& ProvisionPublicIpv4PoolCidrResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ProvisionPublicIpv4PoolCidrResponse"))
  {
    resultNode = rootNode.FirstChild("ProvisionPublicIpv4PoolCidrResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode poolIdNode = resultNode.FirstChild("poolId");
    if(!poolIdNode.IsNull())
    {
      m_poolId = Aws::Utils::Xml::DecodeEscapedXmlText(poolIdNode.GetText());
    }
    XmlNode poolAddressRangeNode = resultNode.FirstChild("poolAddressRange");
    if(!poolAddressRangeNode.IsNull())
    {
      m_poolAddressRange = poolAddressRangeNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ProvisionPublicIpv4PoolCidrResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
