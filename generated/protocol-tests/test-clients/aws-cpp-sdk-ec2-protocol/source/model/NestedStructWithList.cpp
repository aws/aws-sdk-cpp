﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/model/NestedStructWithList.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2Protocol
{
namespace Model
{

NestedStructWithList::NestedStructWithList() : 
    m_listArgHasBeenSet(false)
{
}

NestedStructWithList::NestedStructWithList(const XmlNode& xmlNode)
  : NestedStructWithList()
{
  *this = xmlNode;
}

NestedStructWithList& NestedStructWithList::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode listArgNode = resultNode.FirstChild("ListArg");
    if(!listArgNode.IsNull())
    {
      XmlNode listArgMember = listArgNode.FirstChild("member");
      while(!listArgMember.IsNull())
      {
        m_listArg.push_back(listArgMember.GetText());
        listArgMember = listArgMember.NextNode("member");
      }

      m_listArgHasBeenSet = true;
    }
  }

  return *this;
}

void NestedStructWithList::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_listArgHasBeenSet)
  {
      unsigned listArgIdx = 1;
      for(auto& item : m_listArg)
      {
        oStream << location << index << locationValue << ".ListArg." << listArgIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void NestedStructWithList::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_listArgHasBeenSet)
  {
      unsigned listArgIdx = 1;
      for(auto& item : m_listArg)
      {
        oStream << location << ".ListArg." << listArgIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
