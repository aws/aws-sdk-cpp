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

#include <aws/elasticbeanstalk/model/ConfigurationSettingsDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ConfigurationSettingsDescription::ConfigurationSettingsDescription() : 
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_deploymentStatus(ConfigurationDeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

ConfigurationSettingsDescription::ConfigurationSettingsDescription(const XmlNode& xmlNode) : 
    m_solutionStackNameHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_deploymentStatus(ConfigurationDeploymentStatus::NOT_SET),
    m_deploymentStatusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
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
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = solutionStackNameNode.GetText();
      m_solutionStackNameHasBeenSet = true;
    }
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
      m_platformArnHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
      m_applicationNameHasBeenSet = true;
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
      m_templateNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = environmentNameNode.GetText();
      m_environmentNameHasBeenSet = true;
    }
    XmlNode deploymentStatusNode = resultNode.FirstChild("DeploymentStatus");
    if(!deploymentStatusNode.IsNull())
    {
      m_deploymentStatus = ConfigurationDeploymentStatusMapper::GetConfigurationDeploymentStatusForName(StringUtils::Trim(deploymentStatusNode.GetText().c_str()).c_str());
      m_deploymentStatusHasBeenSet = true;
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_dateCreatedHasBeenSet = true;
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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

  if(m_platformArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
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
      oStream << location << index << locationValue << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << index << locationValue << ".OptionSettings.member." << optionSettingsIdx++;
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
  if(m_platformArnHasBeenSet)
  {
      oStream << location << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
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
      oStream << location << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location <<  ".OptionSettings.member." << optionSettingsIdx++;
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
