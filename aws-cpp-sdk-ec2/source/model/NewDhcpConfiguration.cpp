﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NewDhcpConfiguration.h>
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

NewDhcpConfiguration::NewDhcpConfiguration() : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

NewDhcpConfiguration::NewDhcpConfiguration(const XmlNode& xmlNode) : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = xmlNode;
}

NewDhcpConfiguration& NewDhcpConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("key");
    if(!keyNode.IsNull())
    {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
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

void NewDhcpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
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

void NewDhcpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
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
