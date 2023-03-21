/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RuleOption.h>
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

RuleOption::RuleOption() : 
    m_keywordHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

RuleOption::RuleOption(const XmlNode& xmlNode) : 
    m_keywordHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
  *this = xmlNode;
}

RuleOption& RuleOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keywordNode = resultNode.FirstChild("keyword");
    if(!keywordNode.IsNull())
    {
      m_keyword = Aws::Utils::Xml::DecodeEscapedXmlText(keywordNode.GetText());
      m_keywordHasBeenSet = true;
    }
    XmlNode settingsNode = resultNode.FirstChild("settingSet");
    if(!settingsNode.IsNull())
    {
      XmlNode settingsMember = settingsNode.FirstChild("item");
      while(!settingsMember.IsNull())
      {
        m_settings.push_back(settingsMember.GetText());
        settingsMember = settingsMember.NextNode("item");
      }

      m_settingsHasBeenSet = true;
    }
  }

  return *this;
}

void RuleOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keywordHasBeenSet)
  {
      oStream << location << index << locationValue << ".Keyword=" << StringUtils::URLEncode(m_keyword.c_str()) << "&";
  }

  if(m_settingsHasBeenSet)
  {
      unsigned settingsIdx = 1;
      for(auto& item : m_settings)
      {
        oStream << location << index << locationValue << ".SettingSet." << settingsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void RuleOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keywordHasBeenSet)
  {
      oStream << location << ".Keyword=" << StringUtils::URLEncode(m_keyword.c_str()) << "&";
  }
  if(m_settingsHasBeenSet)
  {
      unsigned settingsIdx = 1;
      for(auto& item : m_settings)
      {
        oStream << location << ".SettingSet." << settingsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
