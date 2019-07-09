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

#include <aws/elasticbeanstalk/model/ApplicationDescription.h>
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

ApplicationDescription::ApplicationDescription() : 
    m_applicationArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_configurationTemplatesHasBeenSet(false),
    m_resourceLifecycleConfigHasBeenSet(false)
{
}

ApplicationDescription::ApplicationDescription(const XmlNode& xmlNode) : 
    m_applicationArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_configurationTemplatesHasBeenSet(false),
    m_resourceLifecycleConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ApplicationDescription& ApplicationDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode applicationArnNode = resultNode.FirstChild("ApplicationArn");
    if(!applicationArnNode.IsNull())
    {
      m_applicationArn = applicationArnNode.GetText();
      m_applicationArnHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = applicationNameNode.GetText();
      m_applicationNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
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
    XmlNode versionsNode = resultNode.FirstChild("Versions");
    if(!versionsNode.IsNull())
    {
      XmlNode versionsMember = versionsNode.FirstChild("member");
      while(!versionsMember.IsNull())
      {
        m_versions.push_back(versionsMember.GetText());
        versionsMember = versionsMember.NextNode("member");
      }

      m_versionsHasBeenSet = true;
    }
    XmlNode configurationTemplatesNode = resultNode.FirstChild("ConfigurationTemplates");
    if(!configurationTemplatesNode.IsNull())
    {
      XmlNode configurationTemplatesMember = configurationTemplatesNode.FirstChild("member");
      while(!configurationTemplatesMember.IsNull())
      {
        m_configurationTemplates.push_back(configurationTemplatesMember.GetText());
        configurationTemplatesMember = configurationTemplatesMember.NextNode("member");
      }

      m_configurationTemplatesHasBeenSet = true;
    }
    XmlNode resourceLifecycleConfigNode = resultNode.FirstChild("ResourceLifecycleConfig");
    if(!resourceLifecycleConfigNode.IsNull())
    {
      m_resourceLifecycleConfig = resourceLifecycleConfigNode;
      m_resourceLifecycleConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_applicationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationArn=" << StringUtils::URLEncode(m_applicationArn.c_str()) << "&";
  }

  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_versionsHasBeenSet)
  {
      unsigned versionsIdx = 1;
      for(auto& item : m_versions)
      {
        oStream << location << index << locationValue << ".Versions.member." << versionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_configurationTemplatesHasBeenSet)
  {
      unsigned configurationTemplatesIdx = 1;
      for(auto& item : m_configurationTemplates)
      {
        oStream << location << index << locationValue << ".ConfigurationTemplates.member." << configurationTemplatesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_resourceLifecycleConfigHasBeenSet)
  {
      Aws::StringStream resourceLifecycleConfigLocationAndMemberSs;
      resourceLifecycleConfigLocationAndMemberSs << location << index << locationValue << ".ResourceLifecycleConfig";
      m_resourceLifecycleConfig.OutputToStream(oStream, resourceLifecycleConfigLocationAndMemberSs.str().c_str());
  }

}

void ApplicationDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_applicationArnHasBeenSet)
  {
      oStream << location << ".ApplicationArn=" << StringUtils::URLEncode(m_applicationArn.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_versionsHasBeenSet)
  {
      unsigned versionsIdx = 1;
      for(auto& item : m_versions)
      {
        oStream << location << ".Versions.member." << versionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_configurationTemplatesHasBeenSet)
  {
      unsigned configurationTemplatesIdx = 1;
      for(auto& item : m_configurationTemplates)
      {
        oStream << location << ".ConfigurationTemplates.member." << configurationTemplatesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_resourceLifecycleConfigHasBeenSet)
  {
      Aws::String resourceLifecycleConfigLocationAndMember(location);
      resourceLifecycleConfigLocationAndMember += ".ResourceLifecycleConfig";
      m_resourceLifecycleConfig.OutputToStream(oStream, resourceLifecycleConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
