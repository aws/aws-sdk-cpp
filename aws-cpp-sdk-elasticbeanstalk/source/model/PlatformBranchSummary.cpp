/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/PlatformBranchSummary.h>
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

PlatformBranchSummary::PlatformBranchSummary() : 
    m_platformNameHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_lifecycleStateHasBeenSet(false),
    m_branchOrder(0),
    m_branchOrderHasBeenSet(false),
    m_supportedTierListHasBeenSet(false)
{
}

PlatformBranchSummary::PlatformBranchSummary(const XmlNode& xmlNode) : 
    m_platformNameHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_lifecycleStateHasBeenSet(false),
    m_branchOrder(0),
    m_branchOrderHasBeenSet(false),
    m_supportedTierListHasBeenSet(false)
{
  *this = xmlNode;
}

PlatformBranchSummary& PlatformBranchSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode platformNameNode = resultNode.FirstChild("PlatformName");
    if(!platformNameNode.IsNull())
    {
      m_platformName = Aws::Utils::Xml::DecodeEscapedXmlText(platformNameNode.GetText());
      m_platformNameHasBeenSet = true;
    }
    XmlNode branchNameNode = resultNode.FirstChild("BranchName");
    if(!branchNameNode.IsNull())
    {
      m_branchName = Aws::Utils::Xml::DecodeEscapedXmlText(branchNameNode.GetText());
      m_branchNameHasBeenSet = true;
    }
    XmlNode lifecycleStateNode = resultNode.FirstChild("LifecycleState");
    if(!lifecycleStateNode.IsNull())
    {
      m_lifecycleState = Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleStateNode.GetText());
      m_lifecycleStateHasBeenSet = true;
    }
    XmlNode branchOrderNode = resultNode.FirstChild("BranchOrder");
    if(!branchOrderNode.IsNull())
    {
      m_branchOrder = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(branchOrderNode.GetText()).c_str()).c_str());
      m_branchOrderHasBeenSet = true;
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
  }

  return *this;
}

void PlatformBranchSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_platformNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformName=" << StringUtils::URLEncode(m_platformName.c_str()) << "&";
  }

  if(m_branchNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".BranchName=" << StringUtils::URLEncode(m_branchName.c_str()) << "&";
  }

  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  }

  if(m_branchOrderHasBeenSet)
  {
      oStream << location << index << locationValue << ".BranchOrder=" << m_branchOrder << "&";
  }

  if(m_supportedTierListHasBeenSet)
  {
      unsigned supportedTierListIdx = 1;
      for(auto& item : m_supportedTierList)
      {
        oStream << location << index << locationValue << ".SupportedTierList.member." << supportedTierListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void PlatformBranchSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_platformNameHasBeenSet)
  {
      oStream << location << ".PlatformName=" << StringUtils::URLEncode(m_platformName.c_str()) << "&";
  }
  if(m_branchNameHasBeenSet)
  {
      oStream << location << ".BranchName=" << StringUtils::URLEncode(m_branchName.c_str()) << "&";
  }
  if(m_lifecycleStateHasBeenSet)
  {
      oStream << location << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  }
  if(m_branchOrderHasBeenSet)
  {
      oStream << location << ".BranchOrder=" << m_branchOrder << "&";
  }
  if(m_supportedTierListHasBeenSet)
  {
      unsigned supportedTierListIdx = 1;
      for(auto& item : m_supportedTierList)
      {
        oStream << location << ".SupportedTierList.member." << supportedTierListIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
