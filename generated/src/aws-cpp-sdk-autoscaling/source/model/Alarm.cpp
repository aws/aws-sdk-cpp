﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/Alarm.h>
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

Alarm::Alarm(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Alarm& Alarm::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(!alarmNameNode.IsNull())
    {
      m_alarmName = Aws::Utils::Xml::DecodeEscapedXmlText(alarmNameNode.GetText());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmARNNode = resultNode.FirstChild("AlarmARN");
    if(!alarmARNNode.IsNull())
    {
      m_alarmARN = Aws::Utils::Xml::DecodeEscapedXmlText(alarmARNNode.GetText());
      m_alarmARNHasBeenSet = true;
    }
  }

  return *this;
}

void Alarm::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmARN=" << StringUtils::URLEncode(m_alarmARN.c_str()) << "&";
  }

}

void Alarm::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_alarmARNHasBeenSet)
  {
      oStream << location << ".AlarmARN=" << StringUtils::URLEncode(m_alarmARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
