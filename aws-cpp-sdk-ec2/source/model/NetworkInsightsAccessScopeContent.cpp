/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInsightsAccessScopeContent.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

NetworkInsightsAccessScopeContent::NetworkInsightsAccessScopeContent() : 
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_matchPathsHasBeenSet(false),
    m_excludePathsHasBeenSet(false)
{
}

NetworkInsightsAccessScopeContent::NetworkInsightsAccessScopeContent(const XmlNode& xmlNode) : 
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_matchPathsHasBeenSet(false),
    m_excludePathsHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInsightsAccessScopeContent& NetworkInsightsAccessScopeContent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInsightsAccessScopeIdNode = resultNode.FirstChild("networkInsightsAccessScopeId");
    if(!networkInsightsAccessScopeIdNode.IsNull())
    {
      m_networkInsightsAccessScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeIdNode.GetText());
      m_networkInsightsAccessScopeIdHasBeenSet = true;
    }
    XmlNode matchPathsNode = resultNode.FirstChild("matchPathSet");
    if(!matchPathsNode.IsNull())
    {
      XmlNode matchPathsMember = matchPathsNode.FirstChild("item");
      while(!matchPathsMember.IsNull())
      {
        m_matchPaths.push_back(matchPathsMember);
        matchPathsMember = matchPathsMember.NextNode("item");
      }

      m_matchPathsHasBeenSet = true;
    }
    XmlNode excludePathsNode = resultNode.FirstChild("excludePathSet");
    if(!excludePathsNode.IsNull())
    {
      XmlNode excludePathsMember = excludePathsNode.FirstChild("item");
      while(!excludePathsMember.IsNull())
      {
        m_excludePaths.push_back(excludePathsMember);
        excludePathsMember = excludePathsMember.NextNode("item");
      }

      m_excludePathsHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInsightsAccessScopeContent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  if(m_matchPathsHasBeenSet)
  {
      unsigned matchPathsIdx = 1;
      for(auto& item : m_matchPaths)
      {
        Aws::StringStream matchPathsSs;
        matchPathsSs << location << index << locationValue << ".MatchPathSet." << matchPathsIdx++;
        item.OutputToStream(oStream, matchPathsSs.str().c_str());
      }
  }

  if(m_excludePathsHasBeenSet)
  {
      unsigned excludePathsIdx = 1;
      for(auto& item : m_excludePaths)
      {
        Aws::StringStream excludePathsSs;
        excludePathsSs << location << index << locationValue << ".ExcludePathSet." << excludePathsIdx++;
        item.OutputToStream(oStream, excludePathsSs.str().c_str());
      }
  }

}

void NetworkInsightsAccessScopeContent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }
  if(m_matchPathsHasBeenSet)
  {
      unsigned matchPathsIdx = 1;
      for(auto& item : m_matchPaths)
      {
        Aws::StringStream matchPathsSs;
        matchPathsSs << location <<  ".MatchPathSet." << matchPathsIdx++;
        item.OutputToStream(oStream, matchPathsSs.str().c_str());
      }
  }
  if(m_excludePathsHasBeenSet)
  {
      unsigned excludePathsIdx = 1;
      for(auto& item : m_excludePaths)
      {
        Aws::StringStream excludePathsSs;
        excludePathsSs << location <<  ".ExcludePathSet." << excludePathsIdx++;
        item.OutputToStream(oStream, excludePathsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
