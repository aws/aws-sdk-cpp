/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateVpcCidrBlockResponse.h>
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

AssociateVpcCidrBlockResponse::AssociateVpcCidrBlockResponse()
{
}

AssociateVpcCidrBlockResponse::AssociateVpcCidrBlockResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssociateVpcCidrBlockResponse& AssociateVpcCidrBlockResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssociateVpcCidrBlockResponse"))
  {
    resultNode = rootNode.FirstChild("AssociateVpcCidrBlockResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrBlockAssociationNode = resultNode.FirstChild("ipv6CidrBlockAssociation");
    if(!ipv6CidrBlockAssociationNode.IsNull())
    {
      m_ipv6CidrBlockAssociation = ipv6CidrBlockAssociationNode;
    }
    XmlNode cidrBlockAssociationNode = resultNode.FirstChild("cidrBlockAssociation");
    if(!cidrBlockAssociationNode.IsNull())
    {
      m_cidrBlockAssociation = cidrBlockAssociationNode;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssociateVpcCidrBlockResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
