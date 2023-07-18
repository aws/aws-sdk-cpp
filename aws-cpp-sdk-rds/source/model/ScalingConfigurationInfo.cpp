﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ScalingConfigurationInfo.h>
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

ScalingConfigurationInfo::ScalingConfigurationInfo() : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_autoPause(false),
    m_autoPauseHasBeenSet(false),
    m_secondsUntilAutoPause(0),
    m_secondsUntilAutoPauseHasBeenSet(false),
    m_timeoutActionHasBeenSet(false),
    m_secondsBeforeTimeout(0),
    m_secondsBeforeTimeoutHasBeenSet(false)
{
}

ScalingConfigurationInfo::ScalingConfigurationInfo(const XmlNode& xmlNode) : 
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_autoPause(false),
    m_autoPauseHasBeenSet(false),
    m_secondsUntilAutoPause(0),
    m_secondsUntilAutoPauseHasBeenSet(false),
    m_timeoutActionHasBeenSet(false),
    m_secondsBeforeTimeout(0),
    m_secondsBeforeTimeoutHasBeenSet(false)
{
  *this = xmlNode;
}

ScalingConfigurationInfo& ScalingConfigurationInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode minCapacityNode = resultNode.FirstChild("MinCapacity");
    if(!minCapacityNode.IsNull())
    {
      m_minCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minCapacityNode.GetText()).c_str()).c_str());
      m_minCapacityHasBeenSet = true;
    }
    XmlNode maxCapacityNode = resultNode.FirstChild("MaxCapacity");
    if(!maxCapacityNode.IsNull())
    {
      m_maxCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxCapacityNode.GetText()).c_str()).c_str());
      m_maxCapacityHasBeenSet = true;
    }
    XmlNode autoPauseNode = resultNode.FirstChild("AutoPause");
    if(!autoPauseNode.IsNull())
    {
      m_autoPause = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoPauseNode.GetText()).c_str()).c_str());
      m_autoPauseHasBeenSet = true;
    }
    XmlNode secondsUntilAutoPauseNode = resultNode.FirstChild("SecondsUntilAutoPause");
    if(!secondsUntilAutoPauseNode.IsNull())
    {
      m_secondsUntilAutoPause = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondsUntilAutoPauseNode.GetText()).c_str()).c_str());
      m_secondsUntilAutoPauseHasBeenSet = true;
    }
    XmlNode timeoutActionNode = resultNode.FirstChild("TimeoutAction");
    if(!timeoutActionNode.IsNull())
    {
      m_timeoutAction = Aws::Utils::Xml::DecodeEscapedXmlText(timeoutActionNode.GetText());
      m_timeoutActionHasBeenSet = true;
    }
    XmlNode secondsBeforeTimeoutNode = resultNode.FirstChild("SecondsBeforeTimeout");
    if(!secondsBeforeTimeoutNode.IsNull())
    {
      m_secondsBeforeTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondsBeforeTimeoutNode.GetText()).c_str()).c_str());
      m_secondsBeforeTimeoutHasBeenSet = true;
    }
  }

  return *this;
}

void ScalingConfigurationInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
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

  if(m_secondsBeforeTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecondsBeforeTimeout=" << m_secondsBeforeTimeout << "&";
  }

}

void ScalingConfigurationInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
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
  if(m_secondsBeforeTimeoutHasBeenSet)
  {
      oStream << location << ".SecondsBeforeTimeout=" << m_secondsBeforeTimeout << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
