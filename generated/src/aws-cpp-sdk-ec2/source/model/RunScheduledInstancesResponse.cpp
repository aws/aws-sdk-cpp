﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RunScheduledInstancesResponse.h>
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

RunScheduledInstancesResponse::RunScheduledInstancesResponse()
{
}

RunScheduledInstancesResponse::RunScheduledInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RunScheduledInstancesResponse& RunScheduledInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RunScheduledInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("RunScheduledInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdSetNode = resultNode.FirstChild("instanceIdSet");
    if(!instanceIdSetNode.IsNull())
    {
      XmlNode instanceIdSetMember = instanceIdSetNode.FirstChild("item");
      while(!instanceIdSetMember.IsNull())
      {
        m_instanceIdSet.push_back(instanceIdSetMember.GetText());
        instanceIdSetMember = instanceIdSetMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::RunScheduledInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
