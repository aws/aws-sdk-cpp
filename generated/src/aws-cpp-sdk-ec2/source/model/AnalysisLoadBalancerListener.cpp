/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AnalysisLoadBalancerListener.h>
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

AnalysisLoadBalancerListener::AnalysisLoadBalancerListener() : 
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false)
{
}

AnalysisLoadBalancerListener::AnalysisLoadBalancerListener(const XmlNode& xmlNode) : 
    m_loadBalancerPort(0),
    m_loadBalancerPortHasBeenSet(false),
    m_instancePort(0),
    m_instancePortHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisLoadBalancerListener& AnalysisLoadBalancerListener::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerPortNode = resultNode.FirstChild("loadBalancerPort");
    if(!loadBalancerPortNode.IsNull())
    {
      m_loadBalancerPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerPortNode.GetText()).c_str()).c_str());
      m_loadBalancerPortHasBeenSet = true;
    }
    XmlNode instancePortNode = resultNode.FirstChild("instancePort");
    if(!instancePortNode.IsNull())
    {
      m_instancePort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePortNode.GetText()).c_str()).c_str());
      m_instancePortHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisLoadBalancerListener::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerPort=" << m_loadBalancerPort << "&";
  }

  if(m_instancePortHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePort=" << m_instancePort << "&";
  }

}

void AnalysisLoadBalancerListener::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerPortHasBeenSet)
  {
      oStream << location << ".LoadBalancerPort=" << m_loadBalancerPort << "&";
  }
  if(m_instancePortHasBeenSet)
  {
      oStream << location << ".InstancePort=" << m_instancePort << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
