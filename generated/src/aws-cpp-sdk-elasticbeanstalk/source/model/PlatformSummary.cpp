/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_supportedAddonListHasBeenSet(false),
    m_platformLifecycleStateHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_platformBranchNameHasBeenSet(false),
    m_platformBranchLifecycleStateHasBeenSet(false)
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
    m_supportedAddonListHasBeenSet(false),
    m_platformLifecycleStateHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_platformBranchNameHasBeenSet(false),
    m_platformBranchLifecycleStateHasBeenSet(false)
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
      m_platformArn = Aws::Utils::Xml::DecodeEscapedXmlText(platformArnNode.GetText());
      m_platformArnHasBeenSet = true;
    }
    XmlNode platformOwnerNode = resultNode.FirstChild("PlatformOwner");
    if(!platformOwnerNode.IsNull())
    {
      m_platformOwner = Aws::Utils::Xml::DecodeEscapedXmlText(platformOwnerNode.GetText());
      m_platformOwnerHasBeenSet = true;
    }
    XmlNode platformStatusNode = resultNode.FirstChild("PlatformStatus");
    if(!platformStatusNode.IsNull())
    {
      m_platformStatus = PlatformStatusMapper::GetPlatformStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(platformStatusNode.GetText()).c_str()).c_str());
      m_platformStatusHasBeenSet = true;
    }
    XmlNode platformCategoryNode = resultNode.FirstChild("PlatformCategory");
    if(!platformCategoryNode.IsNull())
    {
      m_platformCategory = Aws::Utils::Xml::DecodeEscapedXmlText(platformCategoryNode.GetText());
      m_platformCategoryHasBeenSet = true;
    }
    XmlNode operatingSystemNameNode = resultNode.FirstChild("OperatingSystemName");
    if(!operatingSystemNameNode.IsNull())
    {
      m_operatingSystemName = Aws::Utils::Xml::DecodeEscapedXmlText(operatingSystemNameNode.GetText());
      m_operatingSystemNameHasBeenSet = true;
    }
    XmlNode operatingSystemVersionNode = resultNode.FirstChild("OperatingSystemVersion");
    if(!operatingSystemVersionNode.IsNull())
    {
      m_operatingSystemVersion = Aws::Utils::Xml::DecodeEscapedXmlText(operatingSystemVersionNode.GetText());
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
    XmlNode platformLifecycleStateNode = resultNode.FirstChild("PlatformLifecycleState");
    if(!platformLifecycleStateNode.IsNull())
    {
      m_platformLifecycleState = Aws::Utils::Xml::DecodeEscapedXmlText(platformLifecycleStateNode.GetText());
      m_platformLifecycleStateHasBeenSet = true;
    }
    XmlNode platformVersionNode = resultNode.FirstChild("PlatformVersion");
    if(!platformVersionNode.IsNull())
    {
      m_platformVersion = Aws::Utils::Xml::DecodeEscapedXmlText(platformVersionNode.GetText());
      m_platformVersionHasBeenSet = true;
    }
    XmlNode platformBranchNameNode = resultNode.FirstChild("PlatformBranchName");
    if(!platformBranchNameNode.IsNull())
    {
      m_platformBranchName = Aws::Utils::Xml::DecodeEscapedXmlText(platformBranchNameNode.GetText());
      m_platformBranchNameHasBeenSet = true;
    }
    XmlNode platformBranchLifecycleStateNode = resultNode.FirstChild("PlatformBranchLifecycleState");
    if(!platformBranchLifecycleStateNode.IsNull())
    {
      m_platformBranchLifecycleState = Aws::Utils::Xml::DecodeEscapedXmlText(platformBranchLifecycleStateNode.GetText());
      m_platformBranchLifecycleStateHasBeenSet = true;
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

  if(m_platformLifecycleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformLifecycleState=" << StringUtils::URLEncode(m_platformLifecycleState.c_str()) << "&";
  }

  if(m_platformVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformVersion=" << StringUtils::URLEncode(m_platformVersion.c_str()) << "&";
  }

  if(m_platformBranchNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformBranchName=" << StringUtils::URLEncode(m_platformBranchName.c_str()) << "&";
  }

  if(m_platformBranchLifecycleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformBranchLifecycleState=" << StringUtils::URLEncode(m_platformBranchLifecycleState.c_str()) << "&";
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
  if(m_platformLifecycleStateHasBeenSet)
  {
      oStream << location << ".PlatformLifecycleState=" << StringUtils::URLEncode(m_platformLifecycleState.c_str()) << "&";
  }
  if(m_platformVersionHasBeenSet)
  {
      oStream << location << ".PlatformVersion=" << StringUtils::URLEncode(m_platformVersion.c_str()) << "&";
  }
  if(m_platformBranchNameHasBeenSet)
  {
      oStream << location << ".PlatformBranchName=" << StringUtils::URLEncode(m_platformBranchName.c_str()) << "&";
  }
  if(m_platformBranchLifecycleStateHasBeenSet)
  {
      oStream << location << ".PlatformBranchLifecycleState=" << StringUtils::URLEncode(m_platformBranchLifecycleState.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
