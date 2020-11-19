/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LaunchTemplateOverrides.h>
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

LaunchTemplateOverrides::LaunchTemplateOverrides() : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false),
    m_launchTemplateSpecificationHasBeenSet(false)
{
}

LaunchTemplateOverrides::LaunchTemplateOverrides(const XmlNode& xmlNode) : 
    m_instanceTypeHasBeenSet(false),
    m_weightedCapacityHasBeenSet(false),
    m_launchTemplateSpecificationHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplateOverrides& LaunchTemplateOverrides::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("WeightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = Aws::Utils::Xml::DecodeEscapedXmlText(weightedCapacityNode.GetText());
      m_weightedCapacityHasBeenSet = true;
    }
    XmlNode launchTemplateSpecificationNode = resultNode.FirstChild("LaunchTemplateSpecification");
    if(!launchTemplateSpecificationNode.IsNull())
    {
      m_launchTemplateSpecification = launchTemplateSpecificationNode;
      m_launchTemplateSpecificationHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }

  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::StringStream launchTemplateSpecificationLocationAndMemberSs;
      launchTemplateSpecificationLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMemberSs.str().c_str());
  }

}

void LaunchTemplateOverrides::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_weightedCapacityHasBeenSet)
  {
      oStream << location << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity.c_str()) << "&";
  }
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::String launchTemplateSpecificationLocationAndMember(location);
      launchTemplateSpecificationLocationAndMember += ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
