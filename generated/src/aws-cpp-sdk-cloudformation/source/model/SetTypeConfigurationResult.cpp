/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/SetTypeConfigurationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

SetTypeConfigurationResult::SetTypeConfigurationResult()
{
}

SetTypeConfigurationResult::SetTypeConfigurationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

SetTypeConfigurationResult& SetTypeConfigurationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "SetTypeConfigurationResult"))
  {
    resultNode = rootNode.FirstChild("SetTypeConfigurationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode configurationArnNode = resultNode.FirstChild("ConfigurationArn");
    if(!configurationArnNode.IsNull())
    {
      m_configurationArn = Aws::Utils::Xml::DecodeEscapedXmlText(configurationArnNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::SetTypeConfigurationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
