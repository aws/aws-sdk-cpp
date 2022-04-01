/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PendingCloudwatchLogsExports.h>
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

PendingCloudwatchLogsExports::PendingCloudwatchLogsExports() : 
    m_logTypesToEnableHasBeenSet(false),
    m_logTypesToDisableHasBeenSet(false)
{
}

PendingCloudwatchLogsExports::PendingCloudwatchLogsExports(const XmlNode& xmlNode) : 
    m_logTypesToEnableHasBeenSet(false),
    m_logTypesToDisableHasBeenSet(false)
{
  *this = xmlNode;
}

PendingCloudwatchLogsExports& PendingCloudwatchLogsExports::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode logTypesToEnableNode = resultNode.FirstChild("LogTypesToEnable");
    if(!logTypesToEnableNode.IsNull())
    {
      XmlNode logTypesToEnableMember = logTypesToEnableNode.FirstChild("member");
      while(!logTypesToEnableMember.IsNull())
      {
        m_logTypesToEnable.push_back(logTypesToEnableMember.GetText());
        logTypesToEnableMember = logTypesToEnableMember.NextNode("member");
      }

      m_logTypesToEnableHasBeenSet = true;
    }
    XmlNode logTypesToDisableNode = resultNode.FirstChild("LogTypesToDisable");
    if(!logTypesToDisableNode.IsNull())
    {
      XmlNode logTypesToDisableMember = logTypesToDisableNode.FirstChild("member");
      while(!logTypesToDisableMember.IsNull())
      {
        m_logTypesToDisable.push_back(logTypesToDisableMember.GetText());
        logTypesToDisableMember = logTypesToDisableMember.NextNode("member");
      }

      m_logTypesToDisableHasBeenSet = true;
    }
  }

  return *this;
}

void PendingCloudwatchLogsExports::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_logTypesToEnableHasBeenSet)
  {
      unsigned logTypesToEnableIdx = 1;
      for(auto& item : m_logTypesToEnable)
      {
        oStream << location << index << locationValue << ".LogTypesToEnable.member." << logTypesToEnableIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_logTypesToDisableHasBeenSet)
  {
      unsigned logTypesToDisableIdx = 1;
      for(auto& item : m_logTypesToDisable)
      {
        oStream << location << index << locationValue << ".LogTypesToDisable.member." << logTypesToDisableIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void PendingCloudwatchLogsExports::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_logTypesToEnableHasBeenSet)
  {
      unsigned logTypesToEnableIdx = 1;
      for(auto& item : m_logTypesToEnable)
      {
        oStream << location << ".LogTypesToEnable.member." << logTypesToEnableIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_logTypesToDisableHasBeenSet)
  {
      unsigned logTypesToDisableIdx = 1;
      for(auto& item : m_logTypesToDisable)
      {
        oStream << location << ".LogTypesToDisable.member." << logTypesToDisableIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
