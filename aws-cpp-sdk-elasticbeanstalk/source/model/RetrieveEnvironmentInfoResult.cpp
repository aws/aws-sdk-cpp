/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/RetrieveEnvironmentInfoResult.h>
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

RetrieveEnvironmentInfoResult::RetrieveEnvironmentInfoResult()
{
}

RetrieveEnvironmentInfoResult::RetrieveEnvironmentInfoResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

RetrieveEnvironmentInfoResult& RetrieveEnvironmentInfoResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "RetrieveEnvironmentInfoResult"))
  {
    resultNode = rootNode.FirstChild("RetrieveEnvironmentInfoResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode environmentInfoNode = resultNode.FirstChild("EnvironmentInfo");
    if(!environmentInfoNode.IsNull())
    {
      XmlNode environmentInfoMember = environmentInfoNode.FirstChild("member");
      while(!environmentInfoMember.IsNull())
      {
        m_environmentInfo.push_back(environmentInfoMember);
        environmentInfoMember = environmentInfoMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::RetrieveEnvironmentInfoResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
