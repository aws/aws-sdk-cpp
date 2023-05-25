/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceEventWindowStateChange.h>
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

InstanceEventWindowStateChange::InstanceEventWindowStateChange() : 
    m_instanceEventWindowIdHasBeenSet(false),
    m_state(InstanceEventWindowState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

InstanceEventWindowStateChange::InstanceEventWindowStateChange(const XmlNode& xmlNode) : 
    m_instanceEventWindowIdHasBeenSet(false),
    m_state(InstanceEventWindowState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceEventWindowStateChange& InstanceEventWindowStateChange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceEventWindowIdNode = resultNode.FirstChild("instanceEventWindowId");
    if(!instanceEventWindowIdNode.IsNull())
    {
      m_instanceEventWindowId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceEventWindowIdNode.GetText());
      m_instanceEventWindowIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = InstanceEventWindowStateMapper::GetInstanceEventWindowStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceEventWindowStateChange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceEventWindowIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << InstanceEventWindowStateMapper::GetNameForInstanceEventWindowState(m_state) << "&";
  }

}

void InstanceEventWindowStateChange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceEventWindowIdHasBeenSet)
  {
      oStream << location << ".InstanceEventWindowId=" << StringUtils::URLEncode(m_instanceEventWindowId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << InstanceEventWindowStateMapper::GetNameForInstanceEventWindowState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
