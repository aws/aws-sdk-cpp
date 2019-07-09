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

#include <aws/elasticbeanstalk/model/PlatformSummary.h>
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

PlatformSummary::PlatformSummary() : 
    m_platformArnHasBeenSet(false),
    m_platformOwnerHasBeenSet(false),
    m_platformStatus(PlatformStatus::NOT_SET),
    m_platformStatusHasBeenSet(false),
    m_platformCategoryHasBeenSet(false),
    m_operatingSystemNameHasBeenSet(false),
    m_operatingSystemVersionHasBeenSet(false),
    m_supportedTierListHasBeenSet(false),
    m_supportedAddonListHasBeenSet(false)
{
}

PlatformSummary::PlatformSummary(const XmlNode& xmlNode) : 
    m_platformArnHasBeenSet(false),
    m_platformOwnerHasBeenSet(false),
    m_platformStatus(PlatformStatus::NOT_SET),
    m_platformStatusHasBeenSet(false),
    m_platformCategoryHasBeenSet(false),
    m_operatingSystemNameHasBeenSet(false),
    m_operatingSystemVersionHasBeenSet(false),
    m_supportedTierListHasBeenSet(false),
    m_supportedAddonListHasBeenSet(false)
{
  *this = xmlNode;
}

PlatformSummary& PlatformSummary::operator =(const XmlNode& xmlNode)
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
    XmlNode platformStatusNode = resultNode.FirstChild("PlatformStatus");
    if(!platformStatusNode.IsNull())
    {
      m_platformStatus = PlatformStatusMapper::GetPlatformStatusForName(StringUtils::Trim(platformStatusNode.GetText().c_str()).c_str());
      m_platformStatusHasBeenSet = true;
    }
    XmlNode platformCategoryNode = resultNode.FirstChild("PlatformCategory");
    if(!platformCategoryNode.IsNull())
    {
      m_platformCategory = platformCategoryNode.GetText();
      m_platformCategoryHasBeenSet = true;
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

void PlatformSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_platformArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }

  if(m_platformOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformOwner=" << StringUtils::URLEncode(m_platformOwner.c_str()) << "&";
  }

  if(m_platformStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformStatus=" << PlatformStatusMapper::GetNameForPlatformStatus(m_platformStatus) << "&";
  }

  if(m_platformCategoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformCategory=" << StringUtils::URLEncode(m_platformCategory.c_str()) << "&";
  }

  if(m_operatingSystemNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperatingSystemName=" << StringUtils::URLEncode(m_operatingSystemName.c_str()) << "&";
  }

  if(m_operatingSystemVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OperatingSystemVersion=" << StringUtils::URLEncode(m_operatingSystemVersion.c_str()) << "&";
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

void PlatformSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_platformArnHasBeenSet)
  {
      oStream << location << ".PlatformArn=" << StringUtils::URLEncode(m_platformArn.c_str()) << "&";
  }
  if(m_platformOwnerHasBeenSet)
  {
      oStream << location << ".PlatformOwner=" << StringUtils::URLEncode(m_platformOwner.c_str()) << "&";
  }
  if(m_platformStatusHasBeenSet)
  {
      oStream << location << ".PlatformStatus=" << PlatformStatusMapper::GetNameForPlatformStatus(m_platformStatus) << "&";
  }
  if(m_platformCategoryHasBeenSet)
  {
      oStream << location << ".PlatformCategory=" << StringUtils::URLEncode(m_platformCategory.c_str()) << "&";
  }
  if(m_operatingSystemNameHasBeenSet)
  {
      oStream << location << ".OperatingSystemName=" << StringUtils::URLEncode(m_operatingSystemName.c_str()) << "&";
  }
  if(m_operatingSystemVersionHasBeenSet)
  {
      oStream << location << ".OperatingSystemVersion=" << StringUtils::URLEncode(m_operatingSystemVersion.c_str()) << "&";
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
