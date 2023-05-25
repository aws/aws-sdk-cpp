/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RunInstancesResponse.h>
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

RunInstancesResponse::RunInstancesResponse()
{
}

RunInstancesResponse::RunInstancesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RunInstancesResponse& RunInstancesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RunInstancesResponse"))
  {
    resultNode = rootNode.FirstChild("RunInstancesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode groupsNode = resultNode.FirstChild("groupSet");
    if(!groupsNode.IsNull())
    {
      XmlNode groupsMember = groupsNode.FirstChild("item");
      while(!groupsMember.IsNull())
      {
        m_groups.push_back(groupsMember);
        groupsMember = groupsMember.NextNode("item");
      }

    }
    XmlNode instancesNode = resultNode.FirstChild("instancesSet");
    if(!instancesNode.IsNull())
    {
      XmlNode instancesMember = instancesNode.FirstChild("item");
      while(!instancesMember.IsNull())
      {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("item");
      }

    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
    }
    XmlNode requesterIdNode = resultNode.FirstChild("requesterId");
    if(!requesterIdNode.IsNull())
    {
      m_requesterId = Aws::Utils::Xml::DecodeEscapedXmlText(requesterIdNode.GetText());
    }
    XmlNode reservationIdNode = resultNode.FirstChild("reservationId");
    if(!reservationIdNode.IsNull())
    {
      m_reservationId = Aws::Utils::Xml::DecodeEscapedXmlText(reservationIdNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::RunInstancesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
