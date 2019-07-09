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

Alarm::Alarm() : 
    m_alarmNameHasBeenSet(false),
    m_alarmARNHasBeenSet(false)
{
}

Alarm::Alarm(const XmlNode& xmlNode) : 
    m_alarmNameHasBeenSet(false),
    m_alarmARNHasBeenSet(false)
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
      m_alarmName = alarmNameNode.GetText();
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmARNNode = resultNode.FirstChild("AlarmARN");
    if(!alarmARNNode.IsNull())
    {
      m_alarmARN = alarmARNNode.GetText();
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
