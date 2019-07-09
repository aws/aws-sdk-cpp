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

#include <aws/ec2/model/VolumeStatusAction.h>
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

VolumeStatusAction::VolumeStatusAction() : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

VolumeStatusAction::VolumeStatusAction(const XmlNode& xmlNode) : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
  *this = xmlNode;
}

VolumeStatusAction& VolumeStatusAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = codeNode.GetText();
      m_codeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("eventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = eventIdNode.GetText();
      m_eventIdHasBeenSet = true;
    }
    XmlNode eventTypeNode = resultNode.FirstChild("eventType");
    if(!eventTypeNode.IsNull())
    {
      m_eventType = eventTypeNode.GetText();
      m_eventTypeHasBeenSet = true;
    }
  }

  return *this;
}

void VolumeStatusAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_eventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

  if(m_eventTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventType=" << StringUtils::URLEncode(m_eventType.c_str()) << "&";
  }

}

void VolumeStatusAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << StringUtils::URLEncode(m_code.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_eventIdHasBeenSet)
  {
      oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
  if(m_eventTypeHasBeenSet)
  {
      oStream << location << ".EventType=" << StringUtils::URLEncode(m_eventType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
