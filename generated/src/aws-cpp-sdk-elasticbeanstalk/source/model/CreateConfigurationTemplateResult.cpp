/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateConfigurationTemplateResult.h>
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

CreateConfigurationTemplateResult::CreateConfigurationTemplateResult() : 
    m_deploymentStatus(ConfigurationDeploymentStatus::NOT_SET)
{
}

CreateConfigurationTemplateResult::CreateConfigurationTemplateResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_deploymentStatus(ConfigurationDeploymentStatus::NOT_SET)
{
  *this = result;
}

CreateConfigurationTemplateResult& CreateConfigurationTemplateResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateConfigurationTemplateResult"))
  {
    resultNode = rootNode.FirstChild("CreateConfigurationTemplateResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = Aws::Utils::Xml::DecodeEscapedXmlText(solutionStackNameNode.GetText());
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = Aws::Utils::Xml::DecodeEscapedXmlText(platformArnNode.GetText());
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = Aws::Utils::Xml::DecodeEscapedXmlText(applicationNameNode.GetText());
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = Aws::Utils::Xml::DecodeEscapedXmlText(environmentNameNode.GetText());
    }
    XmlNode deploymentStatusNode = resultNode.FirstChild("DeploymentStatus");
    if(!deploymentStatusNode.IsNull())
    {
      m_deploymentStatus = ConfigurationDeploymentStatusMapper::GetConfigurationDeploymentStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deploymentStatusNode.GetText()).c_str()).c_str());
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode optionSettingsNode = resultNode.FirstChild("OptionSettings");
    if(!optionSettingsNode.IsNull())
    {
      XmlNode optionSettingsMember = optionSettingsNode.FirstChild("member");
      while(!optionSettingsMember.IsNull())
      {
        m_optionSettings.push_back(optionSettingsMember);
        optionSettingsMember = optionSettingsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::ElasticBeanstalk::Model::CreateConfigurationTemplateResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
