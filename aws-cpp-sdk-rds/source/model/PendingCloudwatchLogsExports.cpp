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
