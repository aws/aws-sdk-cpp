/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteIpamPoolResponse.h>
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

DeleteIpamPoolResponse::DeleteIpamPoolResponse()
{
}

DeleteIpamPoolResponse::DeleteIpamPoolResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteIpamPoolResponse& DeleteIpamPoolResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteIpamPoolResponse"))
  {
    resultNode = rootNode.FirstChild("DeleteIpamPoolResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode ipamPoolNode = resultNode.FirstChild("ipamPool");
    if(!ipamPoolNode.IsNull())
    {
      m_ipamPool = ipamPoolNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DeleteIpamPoolResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
