/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/PortRange.h>
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

PortRange::PortRange() : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
}

PortRange::PortRange(const XmlNode& xmlNode) : 
    m_from(0),
    m_fromHasBeenSet(false),
    m_to(0),
    m_toHasBeenSet(false)
{
  *this = xmlNode;
}

PortRange& PortRange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode fromNode = resultNode.FirstChild("from");
    if(!fromNode.IsNull())
    {
      m_from = StringUtils::ConvertToInt32(StringUtils::Trim(fromNode.GetText().c_str()).c_str());
      m_fromHasBeenSet = true;
    }
    XmlNode toNode = resultNode.FirstChild("to");
    if(!toNode.IsNull())
    {
      m_to = StringUtils::ConvertToInt32(StringUtils::Trim(toNode.GetText().c_str()).c_str());
      m_toHasBeenSet = true;
    }
  }

  return *this;
}

void PortRange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_fromHasBeenSet)
  {
      oStream << location << index << locationValue << ".From=" << m_from << "&";
  }

  if(m_toHasBeenSet)
  {
      oStream << location << index << locationValue << ".To=" << m_to << "&";
  }

}

void PortRange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_fromHasBeenSet)
  {
      oStream << location << ".From=" << m_from << "&";
  }
  if(m_toHasBeenSet)
  {
      oStream << location << ".To=" << m_to << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
