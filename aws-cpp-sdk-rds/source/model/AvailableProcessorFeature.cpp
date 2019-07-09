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

#include <aws/rds/model/AvailableProcessorFeature.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

AvailableProcessorFeature::AvailableProcessorFeature() : 
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_allowedValuesHasBeenSet(false)
{
}

AvailableProcessorFeature::AvailableProcessorFeature(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_allowedValuesHasBeenSet(false)
{
  *this = xmlNode;
}

AvailableProcessorFeature& AvailableProcessorFeature::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = defaultValueNode.GetText();
      m_defaultValueHasBeenSet = true;
    }
    XmlNode allowedValuesNode = resultNode.FirstChild("AllowedValues");
    if(!allowedValuesNode.IsNull())
    {
      m_allowedValues = allowedValuesNode.GetText();
      m_allowedValuesHasBeenSet = true;
    }
  }

  return *this;
}

void AvailableProcessorFeature::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }

}

void AvailableProcessorFeature::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_allowedValuesHasBeenSet)
  {
      oStream << location << ".AllowedValues=" << StringUtils::URLEncode(m_allowedValues.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
