/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LaunchTemplate.h>
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

LaunchTemplate::LaunchTemplate() : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

LaunchTemplate::LaunchTemplate(const XmlNode& xmlNode) : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplate& LaunchTemplate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateSpecificationNode = resultNode.FirstChild("LaunchTemplateSpecification");
    if(!launchTemplateSpecificationNode.IsNull())
    {
      m_launchTemplateSpecification = launchTemplateSpecificationNode;
      m_launchTemplateSpecificationHasBeenSet = true;
    }
    XmlNode overridesNode = resultNode.FirstChild("Overrides");
    if(!overridesNode.IsNull())
    {
      XmlNode overridesMember = overridesNode.FirstChild("member");
      while(!overridesMember.IsNull())
      {
        m_overrides.push_back(overridesMember);
        overridesMember = overridesMember.NextNode("member");
      }

      m_overridesHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::StringStream launchTemplateSpecificationLocationAndMemberSs;
      launchTemplateSpecificationLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_overridesHasBeenSet)
  {
      unsigned overridesIdx = 1;
      for(auto& item : m_overrides)
      {
        Aws::StringStream overridesSs;
        overridesSs << location << index << locationValue << ".Overrides.member." << overridesIdx++;
        item.OutputToStream(oStream, overridesSs.str().c_str());
      }
  }

}

void LaunchTemplate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::String launchTemplateSpecificationLocationAndMember(location);
      launchTemplateSpecificationLocationAndMember += ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMember.c_str());
  }
  if(m_overridesHasBeenSet)
  {
      unsigned overridesIdx = 1;
      for(auto& item : m_overrides)
      {
        Aws::StringStream overridesSs;
        overridesSs << location <<  ".Overrides.member." << overridesIdx++;
        item.OutputToStream(oStream, overridesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
