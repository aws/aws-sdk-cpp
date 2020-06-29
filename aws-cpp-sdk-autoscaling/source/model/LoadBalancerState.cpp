/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LoadBalancerState.h>
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

LoadBalancerState::LoadBalancerState() : 
    m_loadBalancerNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

LoadBalancerState::LoadBalancerState(const XmlNode& xmlNode) : 
    m_loadBalancerNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerState& LoadBalancerState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerNameNode = resultNode.FirstChild("LoadBalancerName");
    if(!loadBalancerNameNode.IsNull())
    {
      m_loadBalancerName = Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerNameNode.GetText());
      m_loadBalancerNameHasBeenSet = true;
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

void LoadBalancerState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

}

void LoadBalancerState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
