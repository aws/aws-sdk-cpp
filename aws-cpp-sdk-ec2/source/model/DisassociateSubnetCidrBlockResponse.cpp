/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateSubnetCidrBlockResponse.h>
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

DisassociateSubnetCidrBlockResponse::DisassociateSubnetCidrBlockResponse()
{
}

DisassociateSubnetCidrBlockResponse::DisassociateSubnetCidrBlockResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DisassociateSubnetCidrBlockResponse& DisassociateSubnetCidrBlockResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DisassociateSubnetCidrBlockResponse"))
  {
    resultNode = rootNode.FirstChild("DisassociateSubnetCidrBlockResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrBlockAssociationNode = resultNode.FirstChild("ipv6CidrBlockAssociation");
    if(!ipv6CidrBlockAssociationNode.IsNull())
    {
      m_ipv6CidrBlockAssociation = ipv6CidrBlockAssociationNode;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DisassociateSubnetCidrBlockResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
