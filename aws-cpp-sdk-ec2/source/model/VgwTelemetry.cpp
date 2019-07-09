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

#include <aws/ec2/model/VgwTelemetry.h>
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

VgwTelemetry::VgwTelemetry() : 
    m_acceptedRouteCount(0),
    m_acceptedRouteCountHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_status(TelemetryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

VgwTelemetry::VgwTelemetry(const XmlNode& xmlNode) : 
    m_acceptedRouteCount(0),
    m_acceptedRouteCountHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_outsideIpAddressHasBeenSet(false),
    m_status(TelemetryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = xmlNode;
}

VgwTelemetry& VgwTelemetry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode acceptedRouteCountNode = resultNode.FirstChild("acceptedRouteCount");
    if(!acceptedRouteCountNode.IsNull())
    {
      m_acceptedRouteCount = StringUtils::ConvertToInt32(StringUtils::Trim(acceptedRouteCountNode.GetText().c_str()).c_str());
      m_acceptedRouteCountHasBeenSet = true;
    }
    XmlNode lastStatusChangeNode = resultNode.FirstChild("lastStatusChange");
    if(!lastStatusChangeNode.IsNull())
    {
      m_lastStatusChange = DateTime(StringUtils::Trim(lastStatusChangeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_lastStatusChangeHasBeenSet = true;
    }
    XmlNode outsideIpAddressNode = resultNode.FirstChild("outsideIpAddress");
    if(!outsideIpAddressNode.IsNull())
    {
      m_outsideIpAddress = outsideIpAddressNode.GetText();
      m_outsideIpAddressHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = TelemetryStatusMapper::GetTelemetryStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = statusMessageNode.GetText();
      m_statusMessageHasBeenSet = true;
    }
  }

  return *this;
}

void VgwTelemetry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_acceptedRouteCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AcceptedRouteCount=" << m_acceptedRouteCount << "&";
  }

  if(m_lastStatusChangeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastStatusChange=" << StringUtils::URLEncode(m_lastStatusChange.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_outsideIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutsideIpAddress=" << StringUtils::URLEncode(m_outsideIpAddress.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << TelemetryStatusMapper::GetNameForTelemetryStatus(m_status) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

}

void VgwTelemetry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_acceptedRouteCountHasBeenSet)
  {
      oStream << location << ".AcceptedRouteCount=" << m_acceptedRouteCount << "&";
  }
  if(m_lastStatusChangeHasBeenSet)
  {
      oStream << location << ".LastStatusChange=" << StringUtils::URLEncode(m_lastStatusChange.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_outsideIpAddressHasBeenSet)
  {
      oStream << location << ".OutsideIpAddress=" << StringUtils::URLEncode(m_outsideIpAddress.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << TelemetryStatusMapper::GetNameForTelemetryStatus(m_status) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
