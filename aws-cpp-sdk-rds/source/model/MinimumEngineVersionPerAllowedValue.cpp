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

#include <aws/rds/model/MinimumEngineVersionPerAllowedValue.h>
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

MinimumEngineVersionPerAllowedValue::MinimumEngineVersionPerAllowedValue() : 
    m_allowedValueHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
}

MinimumEngineVersionPerAllowedValue::MinimumEngineVersionPerAllowedValue(const XmlNode& xmlNode) : 
    m_allowedValueHasBeenSet(false),
    m_minimumEngineVersionHasBeenSet(false)
{
  *this = xmlNode;
}

MinimumEngineVersionPerAllowedValue& MinimumEngineVersionPerAllowedValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowedValueNode = resultNode.FirstChild("AllowedValue");
    if(!allowedValueNode.IsNull())
    {
      m_allowedValue = allowedValueNode.GetText();
      m_allowedValueHasBeenSet = true;
    }
    XmlNode minimumEngineVersionNode = resultNode.FirstChild("MinimumEngineVersion");
    if(!minimumEngineVersionNode.IsNull())
    {
      m_minimumEngineVersion = minimumEngineVersionNode.GetText();
      m_minimumEngineVersionHasBeenSet = true;
    }
  }

  return *this;
}

void MinimumEngineVersionPerAllowedValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowedValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedValue=" << StringUtils::URLEncode(m_allowedValue.c_str()) << "&";
  }

  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }

}

void MinimumEngineVersionPerAllowedValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowedValueHasBeenSet)
  {
      oStream << location << ".AllowedValue=" << StringUtils::URLEncode(m_allowedValue.c_str()) << "&";
  }
  if(m_minimumEngineVersionHasBeenSet)
  {
      oStream << location << ".MinimumEngineVersion=" << StringUtils::URLEncode(m_minimumEngineVersion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
