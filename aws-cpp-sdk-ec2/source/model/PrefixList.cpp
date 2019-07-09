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
      m_prefixListId = prefixListIdNode.GetText();
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode prefixListNameNode = resultNode.FirstChild("prefixListName");
    if(!prefixListNameNode.IsNull())
    {
      m_prefixListName = prefixListNameNode.GetText();
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
