/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateHostsResponse.h>
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

AllocateHostsResponse::AllocateHostsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

AllocateHostsResponse& AllocateHostsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "AllocateHostsResponse"))
  {
    resultNode = rootNode.FirstChild("AllocateHostsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode hostIdsNode = resultNode.FirstChild("hostIdSet");
    if(!hostIdsNode.IsNull())
    {
      XmlNode hostIdsMember = hostIdsNode.FirstChild("item");
      m_hostIdsHasBeenSet = !hostIdsMember.IsNull();
      while(!hostIdsMember.IsNull())
      {
        m_hostIds.push_back(hostIdsMember.GetText());
        hostIdsMember = hostIdsMember.NextNode("item");
      }

      m_hostIdsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AllocateHostsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
