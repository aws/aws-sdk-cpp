/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/InstanceStatusEvent.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

InstanceStatusEvent::InstanceStatusEvent() : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notBefore(0.0),
    m_notBeforeHasBeenSet(false),
    m_notAfter(0.0),
    m_notAfterHasBeenSet(false)
{
}

InstanceStatusEvent::InstanceStatusEvent(const XmlNode& xmlNode) : 
    m_codeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_notBefore(0.0),
    m_notBeforeHasBeenSet(false),
    m_notAfter(0.0),
    m_notAfterHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceStatusEvent& InstanceStatusEvent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = EventCodeMapper::GetEventCodeForName(StringUtils::Trim(codeNode.GetText().c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode notBeforeNode = resultNode.FirstChild("notBefore");
    if(!notBeforeNode.IsNull())
    {
      m_notBefore = StringUtils::ConvertToDouble(StringUtils::Trim(notBeforeNode.GetText().c_str()).c_str());
      m_notBeforeHasBeenSet = true;
    }
    XmlNode notAfterNode = resultNode.FirstChild("notAfter");
    if(!notAfterNode.IsNull())
    {
      m_notAfter = StringUtils::ConvertToDouble(StringUtils::Trim(notAfterNode.GetText().c_str()).c_str());
      m_notAfterHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << EventCodeMapper::GetNameForEventCode(m_code) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
        oStream << location << index << locationValue << ".NotBefore=" << StringUtils::URLEncode(m_notBefore) << "&";
  }
  if(m_notAfterHasBeenSet)
  {
        oStream << location << index << locationValue << ".NotAfter=" << StringUtils::URLEncode(m_notAfter) << "&";
  }
}

void InstanceStatusEvent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << EventCodeMapper::GetNameForEventCode(m_code) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_notBeforeHasBeenSet)
  {
        oStream << location << ".NotBefore=" << StringUtils::URLEncode(m_notBefore) << "&";
  }
  if(m_notAfterHasBeenSet)
  {
        oStream << location << ".NotAfter=" << StringUtils::URLEncode(m_notAfter) << "&";
  }
}
