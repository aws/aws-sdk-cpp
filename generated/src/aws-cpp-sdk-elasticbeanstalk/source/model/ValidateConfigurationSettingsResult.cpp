/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ValidateConfigurationSettingsResult.h>
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

ValidateConfigurationSettingsResult::ValidateConfigurationSettingsResult()
{
}

ValidateConfigurationSettingsResult::ValidateConfigurationSettingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ValidateConfigurationSettingsResult& ValidateConfigurationSettingsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ValidateConfigurationSettingsResult"))
  {
    resultNode = rootNode.FirstChild("ValidateConfigurationSettingsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode messagesNode = resultNode.FirstChild("Messages");
    if(!messagesNode.IsNull())
    {
      XmlNode messagesMember = messagesNode.FirstChild("member");
      while(!messagesMember.IsNull())
      {
        m_messages.push_back(messagesMember);
        messagesMember = messagesMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::ValidateConfigurationSettingsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
