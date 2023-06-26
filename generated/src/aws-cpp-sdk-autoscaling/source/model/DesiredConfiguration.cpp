/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DesiredConfiguration.h>
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

DesiredConfiguration::DesiredConfiguration() : 
    m_launchTemplateHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false)
{
}

DesiredConfiguration::DesiredConfiguration(const XmlNode& xmlNode) : 
    m_launchTemplateHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

DesiredConfiguration& DesiredConfiguration::operator =(const XmlNode& xmlNode)
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
    XmlNode mixedInstancesPolicyNode = resultNode.FirstChild("MixedInstancesPolicy");
    if(!mixedInstancesPolicyNode.IsNull())
    {
      m_mixedInstancesPolicy = mixedInstancesPolicyNode;
      m_mixedInstancesPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void DesiredConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateHasBeenSet)
  {
      Aws::StringStream launchTemplateLocationAndMemberSs;
      launchTemplateLocationAndMemberSs << location << index << locationValue << ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMemberSs.str().c_str());
  }

  if(m_mixedInstancesPolicyHasBeenSet)
  {
      Aws::StringStream mixedInstancesPolicyLocationAndMemberSs;
      mixedInstancesPolicyLocationAndMemberSs << location << index << locationValue << ".MixedInstancesPolicy";
      m_mixedInstancesPolicy.OutputToStream(oStream, mixedInstancesPolicyLocationAndMemberSs.str().c_str());
  }

}

void DesiredConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateHasBeenSet)
  {
      Aws::String launchTemplateLocationAndMember(location);
      launchTemplateLocationAndMember += ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMember.c_str());
  }
  if(m_mixedInstancesPolicyHasBeenSet)
  {
      Aws::String mixedInstancesPolicyLocationAndMember(location);
      mixedInstancesPolicyLocationAndMember += ".MixedInstancesPolicy";
      m_mixedInstancesPolicy.OutputToStream(oStream, mixedInstancesPolicyLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
