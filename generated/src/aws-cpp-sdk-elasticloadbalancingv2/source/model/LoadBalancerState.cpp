/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/LoadBalancerState.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

LoadBalancerState::LoadBalancerState() : 
    m_code(LoadBalancerStateEnum::NOT_SET),
    m_codeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

LoadBalancerState::LoadBalancerState(const XmlNode& xmlNode) : 
    m_code(LoadBalancerStateEnum::NOT_SET),
    m_codeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerState& LoadBalancerState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("Code");
    if(!codeNode.IsNull())
    {
      m_code = LoadBalancerStateEnumMapper::GetLoadBalancerStateEnumForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText()).c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancerState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(m_code) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }

}

void LoadBalancerState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(m_code) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
