﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Filter.h>
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

Filter::Filter() : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

Filter::Filter(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

Filter& Filter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Value");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("item");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("item");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void Filter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void Filter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
