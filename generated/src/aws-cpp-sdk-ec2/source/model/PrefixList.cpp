/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PrefixList.h>
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

PrefixList::PrefixList() : 
    m_cidrsHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_prefixListNameHasBeenSet(false)
{
}

PrefixList::PrefixList(const XmlNode& xmlNode) : 
    m_cidrsHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_prefixListNameHasBeenSet(false)
{
  *this = xmlNode;
}

PrefixList& PrefixList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrsNode = resultNode.FirstChild("cidrSet");
    if(!cidrsNode.IsNull())
    {
      XmlNode cidrsMember = cidrsNode.FirstChild("item");
      while(!cidrsMember.IsNull())
      {
        m_cidrs.push_back(cidrsMember.GetText());
        cidrsMember = cidrsMember.NextNode("item");
      }

      m_cidrsHasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if(!prefixListIdNode.IsNull())
    {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode prefixListNameNode = resultNode.FirstChild("prefixListName");
    if(!prefixListNameNode.IsNull())
    {
      m_prefixListName = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListNameNode.GetText());
      m_prefixListNameHasBeenSet = true;
    }
  }

  return *this;
}

void PrefixList::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrsHasBeenSet)
  {
      unsigned cidrsIdx = 1;
      for(auto& item : m_cidrs)
      {
        oStream << location << index << locationValue << ".CidrSet." << cidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_prefixListNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }

}

void PrefixList::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrsHasBeenSet)
  {
      unsigned cidrsIdx = 1;
      for(auto& item : m_cidrs)
      {
        oStream << location << ".CidrSet." << cidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_prefixListIdHasBeenSet)
  {
      oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if(m_prefixListNameHasBeenSet)
  {
      oStream << location << ".PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
