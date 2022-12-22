/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/TrafficSourceState.h>
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

TrafficSourceState::TrafficSourceState() : 
    m_trafficSourceHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

TrafficSourceState::TrafficSourceState(const XmlNode& xmlNode) : 
    m_trafficSourceHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

TrafficSourceState& TrafficSourceState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode trafficSourceNode = resultNode.FirstChild("TrafficSource");
    if(!trafficSourceNode.IsNull())
    {
      m_trafficSource = Aws::Utils::Xml::DecodeEscapedXmlText(trafficSourceNode.GetText());
      m_trafficSourceHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void TrafficSourceState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_trafficSourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficSource=" << StringUtils::URLEncode(m_trafficSource.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

}

void TrafficSourceState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_trafficSourceHasBeenSet)
  {
      oStream << location << ".TrafficSource=" << StringUtils::URLEncode(m_trafficSource.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
