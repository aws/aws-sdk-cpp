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

#include <aws/elasticache/model/GlobalNodeGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

GlobalNodeGroup::GlobalNodeGroup() : 
    m_globalNodeGroupIdHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
}

GlobalNodeGroup::GlobalNodeGroup(const XmlNode& xmlNode) : 
    m_globalNodeGroupIdHasBeenSet(false),
    m_slotsHasBeenSet(false)
{
  *this = xmlNode;
}

GlobalNodeGroup& GlobalNodeGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode globalNodeGroupIdNode = resultNode.FirstChild("GlobalNodeGroupId");
    if(!globalNodeGroupIdNode.IsNull())
    {
      m_globalNodeGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(globalNodeGroupIdNode.GetText());
      m_globalNodeGroupIdHasBeenSet = true;
    }
    XmlNode slotsNode = resultNode.FirstChild("Slots");
    if(!slotsNode.IsNull())
    {
      m_slots = Aws::Utils::Xml::DecodeEscapedXmlText(slotsNode.GetText());
      m_slotsHasBeenSet = true;
    }
  }

  return *this;
}

void GlobalNodeGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_globalNodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalNodeGroupId=" << StringUtils::URLEncode(m_globalNodeGroupId.c_str()) << "&";
  }

  if(m_slotsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }

}

void GlobalNodeGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_globalNodeGroupIdHasBeenSet)
  {
      oStream << location << ".GlobalNodeGroupId=" << StringUtils::URLEncode(m_globalNodeGroupId.c_str()) << "&";
  }
  if(m_slotsHasBeenSet)
  {
      oStream << location << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
