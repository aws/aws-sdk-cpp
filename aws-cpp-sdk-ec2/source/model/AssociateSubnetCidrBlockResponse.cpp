﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/AssociateSubnetCidrBlockResponse.h>
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

AssociateSubnetCidrBlockResponse::AssociateSubnetCidrBlockResponse()
{
}

AssociateSubnetCidrBlockResponse::AssociateSubnetCidrBlockResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AssociateSubnetCidrBlockResponse& AssociateSubnetCidrBlockResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AssociateSubnetCidrBlockResponse"))
  {
    resultNode = rootNode.FirstChild("AssociateSubnetCidrBlockResponse");
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
      m_subnetId = StringUtils::Trim(subnetIdNode.GetText().c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AssociateSubnetCidrBlockResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
