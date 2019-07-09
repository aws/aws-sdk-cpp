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

#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ScalingConfiguration::ScalingConfiguration() : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_autoPause(false),
    m_autoPauseHasBeenSet(false),
    m_secondsUntilAutoPause(0),
    m_secondsUntilAutoPauseHasBeenSet(false),
    m_timeoutActionHasBeenSet(false)
{
}

ScalingConfiguration::ScalingConfiguration(const XmlNode& xmlNode) : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_autoPause(false),
    m_autoPauseHasBeenSet(false),
    m_secondsUntilAutoPause(0),
    m_secondsUntilAutoPauseHasBeenSet(false),
    m_timeoutActionHasBeenSet(false)
{
  *this = xmlNode;
}

ScalingConfiguration& ScalingConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minCapacityNode = resultNode.FirstChild("MinCapacity");
    if(!minCapacityNode.IsNull())
    {
      m_minCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(minCapacityNode.GetText().c_str()).c_str());
      m_minCapacityHasBeenSet = true;
    }
    XmlNode maxCapacityNode = resultNode.FirstChild("MaxCapacity");
    if(!maxCapacityNode.IsNull())
    {
      m_maxCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(maxCapacityNode.GetText().c_str()).c_str());
      m_maxCapacityHasBeenSet = true;
    }
    XmlNode autoPauseNode = resultNode.FirstChild("AutoPause");
    if(!autoPauseNode.IsNull())
    {
      m_autoPause = StringUtils::ConvertToBool(StringUtils::Trim(autoPauseNode.GetText().c_str()).c_str());
      m_autoPauseHasBeenSet = true;
    }
    XmlNode secondsUntilAutoPauseNode = resultNode.FirstChild("SecondsUntilAutoPause");
    if(!secondsUntilAutoPauseNode.IsNull())
    {
      m_secondsUntilAutoPause = StringUtils::ConvertToInt32(StringUtils::Trim(secondsUntilAutoPauseNode.GetText().c_str()).c_str());
      m_secondsUntilAutoPauseHasBeenSet = true;
    }
    XmlNode timeoutActionNode = resultNode.FirstChild("TimeoutAction");
    if(!timeoutActionNode.IsNull())
    {
      m_timeoutAction = timeoutActionNode.GetText();
      m_timeoutActionHasBeenSet = true;
    }
  }

  return *this;
}

void ScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_minCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinCapacity=" << m_minCapacity << "&";
  }

  if(m_maxCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxCapacity=" << m_maxCapacity << "&";
  }

  if(m_autoPauseHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoPause=" << std::boolalpha << m_autoPause << "&";
  }

  if(m_secondsUntilAutoPauseHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecondsUntilAutoPause=" << m_secondsUntilAutoPause << "&";
  }

  if(m_timeoutActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimeoutAction=" << StringUtils::URLEncode(m_timeoutAction.c_str()) << "&";
  }

}

void ScalingConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_minCapacityHasBeenSet)
  {
      oStream << location << ".MinCapacity=" << m_minCapacity << "&";
  }
  if(m_maxCapacityHasBeenSet)
  {
      oStream << location << ".MaxCapacity=" << m_maxCapacity << "&";
  }
  if(m_autoPauseHasBeenSet)
  {
      oStream << location << ".AutoPause=" << std::boolalpha << m_autoPause << "&";
  }
  if(m_secondsUntilAutoPauseHasBeenSet)
  {
      oStream << location << ".SecondsUntilAutoPause=" << m_secondsUntilAutoPause << "&";
  }
  if(m_timeoutActionHasBeenSet)
  {
      oStream << location << ".TimeoutAction=" << StringUtils::URLEncode(m_timeoutAction.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
