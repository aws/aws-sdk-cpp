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
      m_pattern = patternNode.GetText();
      m_patternHasBeenSet = true;
    }
    XmlNode labelNode = resultNode.FirstChild("Label");
    if(!labelNode.IsNull())
    {
      m_label = labelNode.GetText();
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
