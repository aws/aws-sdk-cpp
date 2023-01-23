/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/StopInstancesResponse.h>
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

StopInstancesResponse::StopInstancesResponse()
{
}

StopInstancesResponse::StopInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

StopInstancesResponse& StopInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "StopInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("StopInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode stoppingInstancesNode = resultNode.FirstChild("instancesSet");
    if(!stoppingInstancesNode.IsNull())
    {
      XmlNode stoppingInstancesMember = stoppingInstancesNode.FirstChild("item");
      while(!stoppingInstancesMember.IsNull())
      {
        m_stoppingInstances.push_back(stoppingInstancesMember);
        stoppingInstancesMember = stoppingInstancesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::StopInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
