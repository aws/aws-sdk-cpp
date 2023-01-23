/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/OptionRestrictionRegex.h>
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

OptionRestrictionRegex::OptionRestrictionRegex() : 
    m_patternHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

OptionRestrictionRegex::OptionRestrictionRegex(const XmlNode& xmlNode) : 
    m_patternHasBeenSet(false),
    m_labelHasBeenSet(false)
{
  *this = xmlNode;
}

OptionRestrictionRegex& OptionRestrictionRegex::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode patternNode = resultNode.FirstChild("Pattern");
    if(!patternNode.IsNull())
    {
      m_pattern = Aws::Utils::Xml::DecodeEscapedXmlText(patternNode.GetText());
      m_patternHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = Aws::Utils::Xml::DecodeEscapedXmlText(labelNode.GetText());
      m_labelHasBeenSet = true;
    }
  }

  return *this;
}

void OptionRestrictionRegex::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_patternHasBeenSet)
  {
      oStream << location << index << locationValue << ".Pattern=" << StringUtils::URLEncode(m_pattern.c_str()) << "&";
  }

  if(m_labelHasBeenSet)
  {
      oStream << location << index << locationValue << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

}

void OptionRestrictionRegex::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_patternHasBeenSet)
  {
      oStream << location << ".Pattern=" << StringUtils::URLEncode(m_pattern.c_str()) << "&";
  }
  if(m_labelHasBeenSet)
  {
      oStream << location << ".Label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
