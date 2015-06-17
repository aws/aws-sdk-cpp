/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateConfigurationTemplateResult::CreateConfigurationTemplateResult() : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0)
{
}

CreateConfigurationTemplateResult::CreateConfigurationTemplateResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0)
{
  *this = result;
}

CreateConfigurationTemplateResult& CreateConfigurationTemplateResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("CreateConfigurationTemplateResult");

  if(!resultNode.IsNull())
  {
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    m_solutionStackName = StringUtils::Trim(solutionStackNameNode.GetText().c_str());
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    m_applicationName = StringUtils::Trim(applicationNameNode.GetText().c_str());
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    m_templateName = StringUtils::Trim(templateNameNode.GetText().c_str());
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
    XmlNode deploymentStatusNode = resultNode.FirstChild("DeploymentStatus");
    m_deploymentStatus = ConfigurationDeploymentStatusMapper::GetConfigurationDeploymentStatusForName(StringUtils::Trim(deploymentStatusNode.GetText().c_str()).c_str());
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    m_dateCreated = StringUtils::ConvertToDouble(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str());
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    m_dateUpdated = StringUtils::ConvertToDouble(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str());
    XmlNode optionSettingsNodeParent = resultNode.FirstChild("OptionSettings");
    XmlNode optionSettingsNode = optionSettingsNodeParent.FirstChild("member");
    while(!optionSettingsNode.IsNull())
    {
      m_optionSettings.push_back(optionSettingsNode);
      optionSettingsNode = optionSettingsNode.NextNode("member");
    }

  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
