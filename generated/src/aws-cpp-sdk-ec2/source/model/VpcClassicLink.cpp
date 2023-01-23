/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VpcClassicLink.h>
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

VpcClassicLink::VpcClassicLink() : 
    m_classicLinkEnabled(false),
    m_classicLinkEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

VpcClassicLink::VpcClassicLink(const XmlNode& xmlNode) : 
    m_classicLinkEnabled(false),
    m_classicLinkEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

VpcClassicLink& VpcClassicLink::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode classicLinkEnabledNode = resultNode.FirstChild("classicLinkEnabled");
    if(!classicLinkEnabledNode.IsNull())
    {
      m_classicLinkEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(classicLinkEnabledNode.GetText()).c_str()).c_str());
      m_classicLinkEnabledHasBeenSet = true;
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
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void VpcClassicLink::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_classicLinkEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClassicLinkEnabled=" << std::boolalpha << m_classicLinkEnabled << "&";
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

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void VpcClassicLink::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_classicLinkEnabledHasBeenSet)
  {
      oStream << location << ".ClassicLinkEnabled=" << std::boolalpha << m_classicLinkEnabled << "&";
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
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
