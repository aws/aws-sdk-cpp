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

#include <aws/autoscaling/model/MixedInstancesPolicy.h>
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

MixedInstancesPolicy::MixedInstancesPolicy() : 
    m_launchTemplateHasBeenSet(false),
    m_instancesDistributionHasBeenSet(false)
{
}

MixedInstancesPolicy::MixedInstancesPolicy(const XmlNode& xmlNode) : 
    m_launchTemplateHasBeenSet(false),
    m_instancesDistributionHasBeenSet(false)
{
  *this = xmlNode;
}

MixedInstancesPolicy& MixedInstancesPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateNode = resultNode.FirstChild("LaunchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode instancesDistributionNode = resultNode.FirstChild("InstancesDistribution");
    if(!instancesDistributionNode.IsNull())
    {
      m_instancesDistribution = instancesDistributionNode;
      m_instancesDistributionHasBeenSet = true;
    }
  }

  return *this;
}

void MixedInstancesPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateHasBeenSet)
  {
      Aws::StringStream launchTemplateLocationAndMemberSs;
      launchTemplateLocationAndMemberSs << location << index << locationValue << ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMemberSs.str().c_str());
  }

  if(m_instancesDistributionHasBeenSet)
  {
      Aws::StringStream instancesDistributionLocationAndMemberSs;
      instancesDistributionLocationAndMemberSs << location << index << locationValue << ".InstancesDistribution";
      m_instancesDistribution.OutputToStream(oStream, instancesDistributionLocationAndMemberSs.str().c_str());
  }

}

void MixedInstancesPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateHasBeenSet)
  {
      Aws::String launchTemplateLocationAndMember(location);
      launchTemplateLocationAndMember += ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMember.c_str());
  }
  if(m_instancesDistributionHasBeenSet)
  {
      Aws::String instancesDistributionLocationAndMember(location);
      instancesDistributionLocationAndMember += ".InstancesDistribution";
      m_instancesDistribution.OutputToStream(oStream, instancesDistributionLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
