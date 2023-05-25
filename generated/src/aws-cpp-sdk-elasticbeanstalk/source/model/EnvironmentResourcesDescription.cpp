/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/EnvironmentResourcesDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

EnvironmentResourcesDescription::EnvironmentResourcesDescription() : 
    m_loadBalancerHasBeenSet(false)
{
}

EnvironmentResourcesDescription::EnvironmentResourcesDescription(const XmlNode& xmlNode) : 
    m_loadBalancerHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentResourcesDescription& EnvironmentResourcesDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerNode = resultNode.FirstChild("LoadBalancer");
    if(!loadBalancerNode.IsNull())
    {
      m_loadBalancer = loadBalancerNode;
      m_loadBalancerHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentResourcesDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerHasBeenSet)
  {
      Aws::StringStream loadBalancerLocationAndMemberSs;
      loadBalancerLocationAndMemberSs << location << index << locationValue << ".LoadBalancer";
      m_loadBalancer.OutputToStream(oStream, loadBalancerLocationAndMemberSs.str().c_str());
  }

}

void EnvironmentResourcesDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerHasBeenSet)
  {
      Aws::String loadBalancerLocationAndMember(location);
      loadBalancerLocationAndMember += ".LoadBalancer";
      m_loadBalancer.OutputToStream(oStream, loadBalancerLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
