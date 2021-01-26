/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeConfigurationSettingsResult.h>
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

DescribeConfigurationSettingsResult::DescribeConfigurationSettingsResult()
{
}

DescribeConfigurationSettingsResult::DescribeConfigurationSettingsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeConfigurationSettingsResult& DescribeConfigurationSettingsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeConfigurationSettingsResult"))
  {
    resultNode = rootNode.FirstChild("DescribeConfigurationSettingsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode configurationSettingsNode = resultNode.FirstChild("ConfigurationSettings");
    if(!configurationSettingsNode.IsNull())
    {
      XmlNode configurationSettingsMember = configurationSettingsNode.FirstChild("member");
      while(!configurationSettingsMember.IsNull())
      {
        m_configurationSettings.push_back(configurationSettingsMember);
        configurationSettingsMember = configurationSettingsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::DescribeConfigurationSettingsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
