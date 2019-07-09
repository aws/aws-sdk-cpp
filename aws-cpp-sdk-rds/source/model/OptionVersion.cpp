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

#include <aws/rds/model/OptionVersion.h>
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

OptionVersion::OptionVersion() : 
    m_versionHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
}

OptionVersion::OptionVersion(const XmlNode& xmlNode) : 
    m_versionHasBeenSet(false),
    m_isDefault(false),
    m_isDefaultHasBeenSet(false)
{
  *this = xmlNode;
}

OptionVersion& OptionVersion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = versionNode.GetText();
      m_versionHasBeenSet = true;
    }
    XmlNode isDefaultNode = resultNode.FirstChild("IsDefault");
    if(!isDefaultNode.IsNull())
    {
      m_isDefault = StringUtils::ConvertToBool(StringUtils::Trim(isDefaultNode.GetText().c_str()).c_str());
      m_isDefaultHasBeenSet = true;
    }
  }

  return *this;
}

void OptionVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_versionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }

  if(m_isDefaultHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }

}

void OptionVersion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_versionHasBeenSet)
  {
      oStream << location << ".Version=" << StringUtils::URLEncode(m_version.c_str()) << "&";
  }
  if(m_isDefaultHasBeenSet)
  {
      oStream << location << ".IsDefault=" << std::boolalpha << m_isDefault << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
