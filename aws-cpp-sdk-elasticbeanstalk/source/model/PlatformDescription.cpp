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

#include <aws/elasticbeanstalk/model/PlatformDescription.h>
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

PlatformDescription::PlatformDescription() : 
    m_platformArnHasBeenSet(false),
    m_platformOwnerHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformStatus(PlatformStatus::NOT_SET),
    m_platformStatusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_platformCategoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maintainerHasBeenSet(false),
    m_operatingSystemNameHasBeenSet(false),
    m_operatingSystemVersionHasBeenSet(false),
    m_programmingLanguagesHasBeenSet(false),
    m_frameworksHasBeenSet(false),
    m_customAmiListHasBeenSet(false),
    m_supportedTierListHasBeenSet(false),
    m_supportedAddonListHasBeenSet(false)
{
}

PlatformDescription::PlatformDescription(const XmlNode& xmlNode) : 
    m_platformArnHasBeenSet(false),
    m_platformOwnerHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_platformStatus(PlatformStatus::NOT_SET),
    m_platformStatusHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_platformCategoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_maintainerHasBeenSet(false),
    m_operatingSystemNameHasBeenSet(false),
    m_operatingSystemVersionHasBeenSet(false),
    m_programmingLanguagesHasBeenSet(false),
    m_frameworksHasBeenSet(false),
    m_customAmiListHasBeenSet(false),
    m_supportedTierListHasBeenSet(false),
    m_supportedAddonListHasBeenSet(false)
{
  *this = xmlNode;
}

PlatformDescription& PlatformDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode platformArnNode = resultNode.FirstChild("PlatformArn");
    if(!platformArnNode.IsNull())
    {
      m_platformArn = platformArnNode.GetText();
      m_platformArnHasBeenSet = true;
    }
    XmlNode platformOwnerNode = resultNode.FirstChild("PlatformOwner");
    if(!platformOwnerNode.IsNull())
    {
      m_platformOwner = platformOwnerNode.GetText();
      m_platformOwnerHasBeenSet = true;
    }
    XmlNode platformNameNode = resultNode.FirstChild("PlatformName");
    if(!platformNameNode.IsNull())
    {
      m_platformName = platformNameNode.GetText();
      m_platformNameHasBeenSet = true;
    }
    XmlNode platformVersionNode = resultNode.FirstChild("PlatformVersion");
    if(!platformVersionNode.IsNull())
    {
      m_platformVersion = platformVersionNode.GetText();
      m_platformVersionHasBeenSet = true;
    }
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = solutionStackNameNode.GetText();
      m_solutionStackNameHasBeenSet = true;
    }
    XmlNode platformStatusNode = resultNode.FirstChild("PlatformStatus");
    if(!platformStatusNode.IsNull())
    {
      m_platformStatus = PlatformStatusMapper::GetPlatformStatusForName(StringUtils::Trim(platformStatusNode.GetText().c_str()).c_str());
      m_platformStatusHasBeenSet = true;
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
    XmlNode platformCategoryNode = resultNode.FirstChild("PlatformCategory");
    if(!platformCategoryNode.IsNull())
    {
      m_platformCategory = platformCategoryNode.GetText();
      m_platformCategoryHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode maintainerNode = resultNode.FirstChild("Maintainer");
    if(!maintainerNode.IsNull())
    {
      m_maintainer = maintainerNode.GetText();
      m_maintainerHasBeenSet = true;
    }
    XmlNode operatingSystemNameNode = resultNode.FirstChild("OperatingSystemName");
    if(!operatingSystemNameNode.IsNull())
    {
      m_operatingSystemName = operatingSystemNameNode.GetText();
      m_operatingSystemNameHasBeenSet = true;
    }
    XmlNode operatingSystemVersionNode = resultNode.FirstChild("OperatingSystemVersion");
    if(!operatingSystemVersionNode.IsNull())
    {
      m_operatingSystemVersion = operatingSystemVersionNode.GetText();
      m_operatingSystemVersionHasBeenSet = true;
    }
    XmlNode programmingLanguagesNode = resultNode.FirstChild("ProgrammingLanguages");
    if(!programmingLanguagesNode.IsNull())
    {
      XmlNode programmingLanguagesMember = programmingLanguagesNode.FirstChild("member");
      while(!programmingLanguagesMember.IsNull())
      {
        m_programmingLanguages.push_back(programmingLanguagesMember);
        programmingLanguagesMember = programmingLanguagesMember.NextNode("member");
      }

      m_programmingLanguagesHasBeenSet = true;
    }
    XmlNode frameworksNode = resultNode.FirstChild("Frameworks");
    if(!frameworksNode.IsNull())
    {
      XmlNode frameworksMember = frameworksNode.FirstChild("member");
      while(!frameworksMember.IsNull())
      {
        m_frameworks.push_back(frameworksMember);
        frameworksMember = frameworksMember.NextNode("member");
      }

      m_frameworksHasBeenSet = true;
    }
    XmlNode customAmiListNode = resultNode.FirstChild("CustomAmiList");
    if(!customAmiListNode.IsNull())
    {
      XmlNode customAmiListMember = customAmiListNode.FirstChild("member");
      while(!customAmiListMember.IsNull())
      {
        m_customAmiList.push_back(customAmiListMember);
        customAmiListMember = customAmiListMember.NextNode("member");
      }

      m_customAmiListHasBeenSet = true;
    }
    XmlNode supportedTierListNode = resultNode.FirstChild("SupportedTierList");
    if(!supportedTierListNode.IsNull())
    {
      XmlNode supportedTierListMember = supportedTierListNode.FirstChild("member");
      while(!supportedTierListMember.IsNull())
      {
        m_supportedTierList.push_back(supportedTierListMember.GetText());
        supportedTierListMember = supportedTierListMember.NextNode("member");
      }

      m_supportedTierListHasBeenSet = true;
    }
    XmlNode supportedAddonListNode = resultNode.FirstChild("SupportedAddonList");
    if(!supportedAddonListNode.IsNull())
    {
      XmlNode supportedAddonListMember = supportedAddonListNode.FirstChild("member");
      while(!supportedAddonListMember.IsNull())
      {
        m_supportedAddonList.push_back(supportedAddonListMember.GetText());
        supportedAddonListMember = supportedAddonListMember.NextNode("member");
      }

      m_supportedAddonListHasBeenSet = true;
    }
  }

  return *this;
}

void PlatformDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_platformArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_platformOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformOwner=" << StringUtils::URLEncode(m_platformOwner.c_str()) << "&";
  }

  if(m_platformNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformName=" << StringUtils::URLEncode(m_platformName.c_str()) << "&";
  }

  if(m_platformVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformVersion=" << StringUtils::URLEncode(m_platformVersion.c_str()) << "&";
  }

  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }

  if(m_platformStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformStatus=" << PlatformStatusMapper::GetNameForPlatformStatus(m_platformStatus) << "&";
  }

  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_platformCategoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformCategory=" << StringUtils::URLEncode(m_platformCategory.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_maintainerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Maintainer=" << StringUtils::URLEncode(m_maintainer.c_str()) << "&";
  }

  if(m_operatingSystemNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperatingSystemName=" << StringUtils::URLEncode(m_operatingSystemName.c_str()) << "&";
  }

  if(m_operatingSystemVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperatingSystemVersion=" << StringUtils::URLEncode(m_operatingSystemVersion.c_str()) << "&";
  }

  if(m_programmingLanguagesHasBeenSet)
  {
      unsigned programmingLanguagesIdx = 1;
      for(auto& item : m_programmingLanguages)
      {
        Aws::StringStream programmingLanguagesSs;
        programmingLanguagesSs << location << index << locationValue << ".ProgrammingLanguages.member." << programmingLanguagesIdx++;
        item.OutputToStream(oStream, programmingLanguagesSs.str().c_str());
      }
  }

  if(m_frameworksHasBeenSet)
  {
      unsigned frameworksIdx = 1;
      for(auto& item : m_frameworks)
      {
        Aws::StringStream frameworksSs;
        frameworksSs << location << index << locationValue << ".Frameworks.member." << frameworksIdx++;
        item.OutputToStream(oStream, frameworksSs.str().c_str());
      }
  }

  if(m_customAmiListHasBeenSet)
  {
      unsigned customAmiListIdx = 1;
      for(auto& item : m_customAmiList)
      {
        Aws::StringStream customAmiListSs;
        customAmiListSs << location << index << locationValue << ".CustomAmiList.member." << customAmiListIdx++;
        item.OutputToStream(oStream, customAmiListSs.str().c_str());
      }
  }

  if(m_supportedTierListHasBeenSet)
  {
      unsigned supportedTierListIdx = 1;
      for(auto& item : m_supportedTierList)
      {
        oStream << location << index << locationValue << ".SupportedTierList.member." << supportedTierListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportedAddonListHasBeenSet)
  {
      unsigned supportedAddonListIdx = 1;
      for(auto& item : m_supportedAddonList)
      {
        oStream << location << index << locationValue << ".SupportedAddonList.member." << supportedAddonListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void PlatformDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_platformArnHasBeenSet)
  {
      oStream << location << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }
  if(m_platformOwnerHasBeenSet)
  {
      oStream << location << ".PlatformOwner=" << StringUtils::URLEncode(m_platformOwner.c_str()) << "&";
  }
  if(m_platformNameHasBeenSet)
  {
      oStream << location << ".PlatformName=" << StringUtils::URLEncode(m_platformName.c_str()) << "&";
  }
  if(m_platformVersionHasBeenSet)
  {
      oStream << location << ".PlatformVersion=" << StringUtils::URLEncode(m_platformVersion.c_str()) << "&";
  }
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }
  if(m_platformStatusHasBeenSet)
  {
      oStream << location << ".PlatformStatus=" << PlatformStatusMapper::GetNameForPlatformStatus(m_platformStatus) << "&";
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_platformCategoryHasBeenSet)
  {
      oStream << location << ".PlatformCategory=" << StringUtils::URLEncode(m_platformCategory.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_maintainerHasBeenSet)
  {
      oStream << location << ".Maintainer=" << StringUtils::URLEncode(m_maintainer.c_str()) << "&";
  }
  if(m_operatingSystemNameHasBeenSet)
  {
      oStream << location << ".OperatingSystemName=" << StringUtils::URLEncode(m_operatingSystemName.c_str()) << "&";
  }
  if(m_operatingSystemVersionHasBeenSet)
  {
      oStream << location << ".OperatingSystemVersion=" << StringUtils::URLEncode(m_operatingSystemVersion.c_str()) << "&";
  }
  if(m_programmingLanguagesHasBeenSet)
  {
      unsigned programmingLanguagesIdx = 1;
      for(auto& item : m_programmingLanguages)
      {
        Aws::StringStream programmingLanguagesSs;
        programmingLanguagesSs << location <<  ".ProgrammingLanguages.member." << programmingLanguagesIdx++;
        item.OutputToStream(oStream, programmingLanguagesSs.str().c_str());
      }
  }
  if(m_frameworksHasBeenSet)
  {
      unsigned frameworksIdx = 1;
      for(auto& item : m_frameworks)
      {
        Aws::StringStream frameworksSs;
        frameworksSs << location <<  ".Frameworks.member." << frameworksIdx++;
        item.OutputToStream(oStream, frameworksSs.str().c_str());
      }
  }
  if(m_customAmiListHasBeenSet)
  {
      unsigned customAmiListIdx = 1;
      for(auto& item : m_customAmiList)
      {
        Aws::StringStream customAmiListSs;
        customAmiListSs << location <<  ".CustomAmiList.member." << customAmiListIdx++;
        item.OutputToStream(oStream, customAmiListSs.str().c_str());
      }
  }
  if(m_supportedTierListHasBeenSet)
  {
      unsigned supportedTierListIdx = 1;
      for(auto& item : m_supportedTierList)
      {
        oStream << location << ".SupportedTierList.member." << supportedTierListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportedAddonListHasBeenSet)
  {
      unsigned supportedAddonListIdx = 1;
      for(auto& item : m_supportedAddonList)
      {
        oStream << location << ".SupportedAddonList.member." << supportedAddonListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
