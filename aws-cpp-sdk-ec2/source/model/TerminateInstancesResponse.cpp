/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TerminateInstancesResponse.h>
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

TerminateInstancesResponse::TerminateInstancesResponse()
{
}

TerminateInstancesResponse::TerminateInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

TerminateInstancesResponse& TerminateInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "TerminateInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("TerminateInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode terminatingInstancesNode = resultNode.FirstChild("instancesSet");
    if(!terminatingInstancesNode.IsNull())
    {
      XmlNode terminatingInstancesMember = terminatingInstancesNode.FirstChild("item");
      while(!terminatingInstancesMember.IsNull())
      {
        m_terminatingInstances.push_back(terminatingInstancesMember);
        terminatingInstancesMember = terminatingInstancesMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::TerminateInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
