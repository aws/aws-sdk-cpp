/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVpcPeeringConnectionOptionsResponse.h>
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

ModifyVpcPeeringConnectionOptionsResponse::ModifyVpcPeeringConnectionOptionsResponse()
{
}

ModifyVpcPeeringConnectionOptionsResponse::ModifyVpcPeeringConnectionOptionsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyVpcPeeringConnectionOptionsResponse& ModifyVpcPeeringConnectionOptionsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyVpcPeeringConnectionOptionsResponse"))
  {
    resultNode = rootNode.FirstChild("ModifyVpcPeeringConnectionOptionsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode accepterPeeringConnectionOptionsNode = resultNode.FirstChild("accepterPeeringConnectionOptions");
    if(!accepterPeeringConnectionOptionsNode.IsNull())
    {
      m_accepterPeeringConnectionOptions = accepterPeeringConnectionOptionsNode;
    }
    XmlNode requesterPeeringConnectionOptionsNode = resultNode.FirstChild("requesterPeeringConnectionOptions");
    if(!requesterPeeringConnectionOptionsNode.IsNull())
    {
      m_requesterPeeringConnectionOptions = requesterPeeringConnectionOptionsNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::ModifyVpcPeeringConnectionOptionsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
