/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreatePlatformVersionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreatePlatformVersionResult::CreatePlatformVersionResult()
{
}

CreatePlatformVersionResult::CreatePlatformVersionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreatePlatformVersionResult& CreatePlatformVersionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreatePlatformVersionResult"))
  {
    resultNode = rootNode.FirstChild("CreatePlatformVersionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode platformSummaryNode = resultNode.FirstChild("PlatformSummary");
    if(!platformSummaryNode.IsNull())
    {
      m_platformSummary = platformSummaryNode;
    }
    XmlNode builderNode = resultNode.FirstChild("Builder");
    if(!builderNode.IsNull())
    {
      m_builder = builderNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::CreatePlatformVersionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
