/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LoadBalancerTargetGroupState.h>
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

LoadBalancerTargetGroupState::LoadBalancerTargetGroupState() : 
    m_loadBalancerTargetGroupARNHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

LoadBalancerTargetGroupState::LoadBalancerTargetGroupState(const XmlNode& xmlNode) : 
    m_loadBalancerTargetGroupARNHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerTargetGroupState& LoadBalancerTargetGroupState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerTargetGroupARNNode = resultNode.FirstChild("LoadBalancerTargetGroupARN");
    if(!loadBalancerTargetGroupARNNode.IsNull())
    {
      m_loadBalancerTargetGroupARN = Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerTargetGroupARNNode.GetText());
      m_loadBalancerTargetGroupARNHasBeenSet = true;
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

void LoadBalancerTargetGroupState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerTargetGroupARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerTargetGroupARN=" << StringUtils::URLEncode(m_loadBalancerTargetGroupARN.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

}

void LoadBalancerTargetGroupState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerTargetGroupARNHasBeenSet)
  {
      oStream << location << ".LoadBalancerTargetGroupARN=" << StringUtils::URLEncode(m_loadBalancerTargetGroupARN.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
