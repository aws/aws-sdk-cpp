/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AlarmSpecification.h>
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

AlarmSpecification::AlarmSpecification() : 
    m_alarmsHasBeenSet(false)
{
}

AlarmSpecification::AlarmSpecification(const XmlNode& xmlNode) : 
    m_alarmsHasBeenSet(false)
{
  *this = xmlNode;
}

AlarmSpecification& AlarmSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmsNode = resultNode.FirstChild("Alarms");
    if(!alarmsNode.IsNull())
    {
      XmlNode alarmsMember = alarmsNode.FirstChild("member");
      while(!alarmsMember.IsNull())
      {
        m_alarms.push_back(alarmsMember.GetText());
        alarmsMember = alarmsMember.NextNode("member");
      }

      m_alarmsHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmsHasBeenSet)
  {
      unsigned alarmsIdx = 1;
      for(auto& item : m_alarms)
      {
        oStream << location << index << locationValue << ".Alarms.member." << alarmsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void AlarmSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmsHasBeenSet)
  {
      unsigned alarmsIdx = 1;
      for(auto& item : m_alarms)
      {
        oStream << location << ".Alarms.member." << alarmsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
