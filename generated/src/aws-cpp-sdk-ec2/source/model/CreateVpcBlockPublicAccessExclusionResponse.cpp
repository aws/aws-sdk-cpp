﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcBlockPublicAccessExclusionResponse.h>
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

CreateVpcBlockPublicAccessExclusionResponse::CreateVpcBlockPublicAccessExclusionResponse()
{
}

CreateVpcBlockPublicAccessExclusionResponse::CreateVpcBlockPublicAccessExclusionResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateVpcBlockPublicAccessExclusionResponse& CreateVpcBlockPublicAccessExclusionResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateVpcBlockPublicAccessExclusionResponse"))
  {
    resultNode = rootNode.FirstChild("CreateVpcBlockPublicAccessExclusionResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode vpcBlockPublicAccessExclusionNode = resultNode.FirstChild("vpcBlockPublicAccessExclusion");
    if(!vpcBlockPublicAccessExclusionNode.IsNull())
    {
      m_vpcBlockPublicAccessExclusion = vpcBlockPublicAccessExclusionNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CreateVpcBlockPublicAccessExclusionResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
