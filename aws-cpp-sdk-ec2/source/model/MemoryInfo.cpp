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

#include <aws/ec2/model/MemoryInfo.h>
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

MemoryInfo::MemoryInfo() : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
}

MemoryInfo::MemoryInfo(const XmlNode& xmlNode) : 
    m_sizeInMiB(0),
    m_sizeInMiBHasBeenSet(false)
{
  *this = xmlNode;
}

MemoryInfo& MemoryInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sizeInMiBNode = resultNode.FirstChild("sizeInMiB");
    if(!sizeInMiBNode.IsNull())
    {
      m_sizeInMiB = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeInMiBNode.GetText()).c_str()).c_str());
      m_sizeInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void MemoryInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sizeInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".SizeInMiB=" << m_sizeInMiB << "&";
  }

}

void MemoryInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sizeInMiBHasBeenSet)
  {
      oStream << location << ".SizeInMiB=" << m_sizeInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
