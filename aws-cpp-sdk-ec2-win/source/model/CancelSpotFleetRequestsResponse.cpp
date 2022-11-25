/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotFleetRequestsResponse.h>
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

CancelSpotFleetRequestsResponse::CancelSpotFleetRequestsResponse()
{
}

CancelSpotFleetRequestsResponse::CancelSpotFleetRequestsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelSpotFleetRequestsResponse& CancelSpotFleetRequestsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelSpotFleetRequestsResponse"))
  {
    resultNode = rootNode.FirstChild("CancelSpotFleetRequestsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode successfulFleetRequestsNode = resultNode.FirstChild("successfulFleetRequestSet");
    if(!successfulFleetRequestsNode.IsNull())
    {
      XmlNode successfulFleetRequestsMember = successfulFleetRequestsNode.FirstChild("item");
      while(!successfulFleetRequestsMember.IsNull())
      {
        m_successfulFleetRequests.push_back(successfulFleetRequestsMember);
        successfulFleetRequestsMember = successfulFleetRequestsMember.NextNode("item");
      }

    }
    XmlNode unsuccessfulFleetRequestsNode = resultNode.FirstChild("unsuccessfulFleetRequestSet");
    if(!unsuccessfulFleetRequestsNode.IsNull())
    {
      XmlNode unsuccessfulFleetRequestsMember = unsuccessfulFleetRequestsNode.FirstChild("item");
      while(!unsuccessfulFleetRequestsMember.IsNull())
      {
        m_unsuccessfulFleetRequests.push_back(unsuccessfulFleetRequestsMember);
        unsuccessfulFleetRequestsMember = unsuccessfulFleetRequestsMember.NextNode("item");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CancelSpotFleetRequestsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
