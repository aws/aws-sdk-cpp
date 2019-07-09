/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_solutionStackName = solutionStackNameNode.GetText();
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
    }
    XmlNode deploymentStatusNode = resultNode.FirstChild("DeploymentStatus");
    if(!deploymentStatusNode.IsNull())
    {
      m_deploymentStatus = ConfigurationDeploymentStatusMapper::GetConfigurationDeploymentStatusForName(StringUtils::Trim(deploymentStatusNode.GetText().c_str()).c_str());
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
