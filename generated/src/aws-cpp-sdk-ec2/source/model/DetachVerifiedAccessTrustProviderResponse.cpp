/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DetachVerifiedAccessTrustProviderResponse.h>
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

DetachVerifiedAccessTrustProviderResponse::DetachVerifiedAccessTrustProviderResponse()
{
}

DetachVerifiedAccessTrustProviderResponse::DetachVerifiedAccessTrustProviderResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DetachVerifiedAccessTrustProviderResponse& DetachVerifiedAccessTrustProviderResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DetachVerifiedAccessTrustProviderResponse"))
  {
    resultNode = rootNode.FirstChild("DetachVerifiedAccessTrustProviderResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode verifiedAccessTrustProviderNode = resultNode.FirstChild("verifiedAccessTrustProvider");
    if(!verifiedAccessTrustProviderNode.IsNull())
    {
      m_verifiedAccessTrustProvider = verifiedAccessTrustProviderNode;
    }
    XmlNode verifiedAccessInstanceNode = resultNode.FirstChild("verifiedAccessInstance");
    if(!verifiedAccessInstanceNode.IsNull())
    {
      m_verifiedAccessInstance = verifiedAccessInstanceNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DetachVerifiedAccessTrustProviderResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
