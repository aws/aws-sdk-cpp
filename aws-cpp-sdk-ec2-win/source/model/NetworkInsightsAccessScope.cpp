/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NetworkInsightsAccessScope.h>
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

NetworkInsightsAccessScope::NetworkInsightsAccessScope() : 
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_networkInsightsAccessScopeArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

NetworkInsightsAccessScope::NetworkInsightsAccessScope(const XmlNode& xmlNode) : 
    m_networkInsightsAccessScopeIdHasBeenSet(false),
    m_networkInsightsAccessScopeArnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInsightsAccessScope& NetworkInsightsAccessScope::operator =(const XmlNode& xmlNode)
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
    XmlNode networkInsightsAccessScopeArnNode = resultNode.FirstChild("networkInsightsAccessScopeArn");
    if(!networkInsightsAccessScopeArnNode.IsNull())
    {
      m_networkInsightsAccessScopeArn = Aws::Utils::Xml::DecodeEscapedXmlText(networkInsightsAccessScopeArnNode.GetText());
      m_networkInsightsAccessScopeArnHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("createdDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode updatedDateNode = resultNode.FirstChild("updatedDate");
    if(!updatedDateNode.IsNull())
    {
      m_updatedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updatedDateHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInsightsAccessScope::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }

  if(m_networkInsightsAccessScopeArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInsightsAccessScopeArn=" << StringUtils::URLEncode(m_networkInsightsAccessScopeArn.c_str()) << "&";
  }

  if(m_createdDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updatedDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void NetworkInsightsAccessScope::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInsightsAccessScopeIdHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeId=" << StringUtils::URLEncode(m_networkInsightsAccessScopeId.c_str()) << "&";
  }
  if(m_networkInsightsAccessScopeArnHasBeenSet)
  {
      oStream << location << ".NetworkInsightsAccessScopeArn=" << StringUtils::URLEncode(m_networkInsightsAccessScopeArn.c_str()) << "&";
  }
  if(m_createdDateHasBeenSet)
  {
      oStream << location << ".CreatedDate=" << StringUtils::URLEncode(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updatedDateHasBeenSet)
  {
      oStream << location << ".UpdatedDate=" << StringUtils::URLEncode(m_updatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
