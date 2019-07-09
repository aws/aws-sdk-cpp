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

#include <aws/autoscaling/model/Tag.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

Tag::Tag() : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_propagateAtLaunch(false),
    m_propagateAtLaunchHasBeenSet(false)
{
}

Tag::Tag(const XmlNode& xmlNode) : 
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_propagateAtLaunch(false),
    m_propagateAtLaunchHasBeenSet(false)
{
  *this = xmlNode;
}

Tag& Tag::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdNode = resultNode.FirstChild("ResourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = resourceIdNode.GetText();
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = resourceTypeNode.GetText();
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = keyNode.GetText();
      m_keyHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = valueNode.GetText();
      m_valueHasBeenSet = true;
    }
    XmlNode propagateAtLaunchNode = resultNode.FirstChild("PropagateAtLaunch");
    if(!propagateAtLaunchNode.IsNull())
    {
      m_propagateAtLaunch = StringUtils::ConvertToBool(StringUtils::Trim(propagateAtLaunchNode.GetText().c_str()).c_str());
      m_propagateAtLaunchHasBeenSet = true;
    }
  }

  return *this;
}

void Tag::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_keyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_propagateAtLaunchHasBeenSet)
  {
      oStream << location << index << locationValue << ".PropagateAtLaunch=" << std::boolalpha << m_propagateAtLaunch << "&";
  }

}

void Tag::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_keyHasBeenSet)
  {
      oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if(m_propagateAtLaunchHasBeenSet)
  {
      oStream << location << ".PropagateAtLaunch=" << std::boolalpha << m_propagateAtLaunch << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
