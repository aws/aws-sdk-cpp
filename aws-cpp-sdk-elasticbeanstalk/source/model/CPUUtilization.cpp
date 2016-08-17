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
#include <aws/elasticbeanstalk/model/CPUUtilization.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

CPUUtilization::CPUUtilization() : 
    m_user(0.0),
    m_userHasBeenSet(false),
    m_nice(0.0),
    m_niceHasBeenSet(false),
    m_system(0.0),
    m_systemHasBeenSet(false),
    m_idle(0.0),
    m_idleHasBeenSet(false),
    m_iOWait(0.0),
    m_iOWaitHasBeenSet(false),
    m_iRQ(0.0),
    m_iRQHasBeenSet(false),
    m_softIRQ(0.0),
    m_softIRQHasBeenSet(false)
{
}

CPUUtilization::CPUUtilization(const XmlNode& xmlNode) : 
    m_user(0.0),
    m_userHasBeenSet(false),
    m_nice(0.0),
    m_niceHasBeenSet(false),
    m_system(0.0),
    m_systemHasBeenSet(false),
    m_idle(0.0),
    m_idleHasBeenSet(false),
    m_iOWait(0.0),
    m_iOWaitHasBeenSet(false),
    m_iRQ(0.0),
    m_iRQHasBeenSet(false),
    m_softIRQ(0.0),
    m_softIRQHasBeenSet(false)
{
  *this = xmlNode;
}

CPUUtilization& CPUUtilization::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNode = resultNode.FirstChild("User");
    if(!userNode.IsNull())
    {
      m_user = StringUtils::ConvertToDouble(StringUtils::Trim(userNode.GetText().c_str()).c_str());
      m_userHasBeenSet = true;
    }
    XmlNode niceNode = resultNode.FirstChild("Nice");
    if(!niceNode.IsNull())
    {
      m_nice = StringUtils::ConvertToDouble(StringUtils::Trim(niceNode.GetText().c_str()).c_str());
      m_niceHasBeenSet = true;
    }
    XmlNode systemNode = resultNode.FirstChild("System");
    if(!systemNode.IsNull())
    {
      m_system = StringUtils::ConvertToDouble(StringUtils::Trim(systemNode.GetText().c_str()).c_str());
      m_systemHasBeenSet = true;
    }
    XmlNode idleNode = resultNode.FirstChild("Idle");
    if(!idleNode.IsNull())
    {
      m_idle = StringUtils::ConvertToDouble(StringUtils::Trim(idleNode.GetText().c_str()).c_str());
      m_idleHasBeenSet = true;
    }
    XmlNode iOWaitNode = resultNode.FirstChild("IOWait");
    if(!iOWaitNode.IsNull())
    {
      m_iOWait = StringUtils::ConvertToDouble(StringUtils::Trim(iOWaitNode.GetText().c_str()).c_str());
      m_iOWaitHasBeenSet = true;
    }
    XmlNode iRQNode = resultNode.FirstChild("IRQ");
    if(!iRQNode.IsNull())
    {
      m_iRQ = StringUtils::ConvertToDouble(StringUtils::Trim(iRQNode.GetText().c_str()).c_str());
      m_iRQHasBeenSet = true;
    }
    XmlNode softIRQNode = resultNode.FirstChild("SoftIRQ");
    if(!softIRQNode.IsNull())
    {
      m_softIRQ = StringUtils::ConvertToDouble(StringUtils::Trim(softIRQNode.GetText().c_str()).c_str());
      m_softIRQHasBeenSet = true;
    }
  }

  return *this;
}

void CPUUtilization::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userHasBeenSet)
  {
        oStream << location << index << locationValue << ".User=" << StringUtils::URLEncode(m_user) << "&";
  }

  if(m_niceHasBeenSet)
  {
        oStream << location << index << locationValue << ".Nice=" << StringUtils::URLEncode(m_nice) << "&";
  }

  if(m_systemHasBeenSet)
  {
        oStream << location << index << locationValue << ".System=" << StringUtils::URLEncode(m_system) << "&";
  }

  if(m_idleHasBeenSet)
  {
        oStream << location << index << locationValue << ".Idle=" << StringUtils::URLEncode(m_idle) << "&";
  }

  if(m_iOWaitHasBeenSet)
  {
        oStream << location << index << locationValue << ".IOWait=" << StringUtils::URLEncode(m_iOWait) << "&";
  }

  if(m_iRQHasBeenSet)
  {
        oStream << location << index << locationValue << ".IRQ=" << StringUtils::URLEncode(m_iRQ) << "&";
  }

  if(m_softIRQHasBeenSet)
  {
        oStream << location << index << locationValue << ".SoftIRQ=" << StringUtils::URLEncode(m_softIRQ) << "&";
  }

}

void CPUUtilization::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userHasBeenSet)
  {
        oStream << location << ".User=" << StringUtils::URLEncode(m_user) << "&";
  }
  if(m_niceHasBeenSet)
  {
        oStream << location << ".Nice=" << StringUtils::URLEncode(m_nice) << "&";
  }
  if(m_systemHasBeenSet)
  {
        oStream << location << ".System=" << StringUtils::URLEncode(m_system) << "&";
  }
  if(m_idleHasBeenSet)
  {
        oStream << location << ".Idle=" << StringUtils::URLEncode(m_idle) << "&";
  }
  if(m_iOWaitHasBeenSet)
  {
        oStream << location << ".IOWait=" << StringUtils::URLEncode(m_iOWait) << "&";
  }
  if(m_iRQHasBeenSet)
  {
        oStream << location << ".IRQ=" << StringUtils::URLEncode(m_iRQ) << "&";
  }
  if(m_softIRQHasBeenSet)
  {
        oStream << location << ".SoftIRQ=" << StringUtils::URLEncode(m_softIRQ) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
