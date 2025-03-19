/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotInstanceRequestsResponse.h>
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

CancelSpotInstanceRequestsResponse::CancelSpotInstanceRequestsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelSpotInstanceRequestsResponse& CancelSpotInstanceRequestsResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelSpotInstanceRequestsResponse"))
  {
    resultNode = rootNode.FirstChild("CancelSpotInstanceRequestsResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode cancelledSpotInstanceRequestsNode = resultNode.FirstChild("spotInstanceRequestSet");
    if(!cancelledSpotInstanceRequestsNode.IsNull())
    {
      XmlNode cancelledSpotInstanceRequestsMember = cancelledSpotInstanceRequestsNode.FirstChild("item");
      m_cancelledSpotInstanceRequestsHasBeenSet = !cancelledSpotInstanceRequestsMember.IsNull();
      while(!cancelledSpotInstanceRequestsMember.IsNull())
      {
        m_cancelledSpotInstanceRequests.push_back(cancelledSpotInstanceRequestsMember);
        cancelledSpotInstanceRequestsMember = cancelledSpotInstanceRequestsMember.NextNode("item");
      }

      m_cancelledSpotInstanceRequestsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::CancelSpotInstanceRequestsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
