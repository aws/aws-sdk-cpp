/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableRouteServerPropagationResponse.h>
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

EnableRouteServerPropagationResponse::EnableRouteServerPropagationResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

EnableRouteServerPropagationResponse& EnableRouteServerPropagationResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "EnableRouteServerPropagationResponse"))
  {
    resultNode = rootNode.FirstChild("EnableRouteServerPropagationResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode routeServerPropagationNode = resultNode.FirstChild("routeServerPropagation");
    if(!routeServerPropagationNode.IsNull())
    {
      m_routeServerPropagation = routeServerPropagationNode;
      m_routeServerPropagationHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::EnableRouteServerPropagationResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
