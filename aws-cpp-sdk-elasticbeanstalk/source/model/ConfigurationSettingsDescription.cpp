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
#include <aws/elasticbeanstalk/model/ConfigurationSettingsDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ConfigurationSettingsDescription::ConfigurationSettingsDescription() : 
    m_solutionStackNameHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_dateCreated(0.0),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdated(0.0),
    m_dateUpdatedHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

ConfigurationSettingsDescription::ConfigurationSettingsDescription(const XmlNode& xmlNode) : 
    m_solutionStackNameHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_dateCreated(0.0),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdated(0.0),
    m_dateUpdatedHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

ConfigurationSettingsDescription& ConfigurationSettingsDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(solutionStackNameNode.IsNull())
    {
      solutionStackNameNode = resultNode;
    }

    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = StringUtils::Trim(solutionStackNameNode.GetText().c_str());
      m_solutionStackNameHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(applicationNameNode.IsNull())
    {
      applicationNameNode = resultNode;
    }

    if(!applicationNameNode.IsNull())
    {
      m_applicationName = StringUtils::Trim(applicationNameNode.GetText().c_str());
      m_applicationNameHasBeenSet = true;
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(templateNameNode.IsNull())
    {
      templateNameNode = resultNode;
    }

    if(!templateNameNode.IsNull())
    {
      m_templateName = StringUtils::Trim(templateNameNode.GetText().c_str());
      m_templateNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(descriptionNode.IsNull())
    {
      descriptionNode = resultNode;
    }

    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(environmentNameNode.IsNull())
    {
      environmentNameNode = resultNode;
    }

    if(!environmentNameNode.IsNull())
    {
      m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
      m_environmentNameHasBeenSet = true;
    }
    XmlNode deploymentStatusNode = resultNode.FirstChild("DeploymentStatus");
    if(deploymentStatusNode.IsNull())
    {
      deploymentStatusNode = resultNode;
    }

    if(!deploymentStatusNode.IsNull())
    {
      m_deploymentStatus = ConfigurationDeploymentStatusMapper::GetConfigurationDeploymentStatusForName(StringUtils::Trim(deploymentStatusNode.GetText().c_str()).c_str());
      m_deploymentStatusHasBeenSet = true;
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(dateCreatedNode.IsNull())
    {
      dateCreatedNode = resultNode;
    }

    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = StringUtils::ConvertToDouble(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str());
      m_dateCreatedHasBeenSet = true;
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(dateUpdatedNode.IsNull())
    {
      dateUpdatedNode = resultNode;
    }

    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = StringUtils::ConvertToDouble(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str());
      m_dateUpdatedHasBeenSet = true;
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

      m_optionSettingsHasBeenSet = true;
    }
  }

  return *this;
}

void ConfigurationSettingsDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_deploymentStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeploymentStatus=" << ConfigurationDeploymentStatusMapper::GetNameForConfigurationDeploymentStatus(m_deploymentStatus) << "&";
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << m_dateCreated << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << m_dateUpdated << "&";
  }
  if(m_optionSettingsHasBeenSet)
  {
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << index << locationValue << ".OptionSettings";
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }
}

void ConfigurationSettingsDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_deploymentStatusHasBeenSet)
  {
      oStream << location << ".DeploymentStatus=" << ConfigurationDeploymentStatusMapper::GetNameForConfigurationDeploymentStatus(m_deploymentStatus) << "&";
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << m_dateCreated << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << m_dateUpdated << "&";
  }
  if(m_optionSettingsHasBeenSet)
  {
      for(auto& item : m_optionSettings)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".OptionSettings";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}
