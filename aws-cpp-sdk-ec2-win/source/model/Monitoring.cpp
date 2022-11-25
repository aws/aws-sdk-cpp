/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Monitoring.h>
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

Monitoring::Monitoring() : 
    m_state(MonitoringState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Monitoring::Monitoring(const XmlNode& xmlNode) : 
    m_state(MonitoringState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

Monitoring& Monitoring::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = MonitoringStateMapper::GetMonitoringStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void Monitoring::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << MonitoringStateMapper::GetNameForMonitoringState(m_state) << "&";
  }

}

void Monitoring::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << MonitoringStateMapper::GetNameForMonitoringState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
