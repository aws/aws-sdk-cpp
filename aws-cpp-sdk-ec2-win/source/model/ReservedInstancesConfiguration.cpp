/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstancesConfiguration.h>
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

ReservedInstancesConfiguration::ReservedInstancesConfiguration() : 
    m_availabilityZoneHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false)
{
}

ReservedInstancesConfiguration::ReservedInstancesConfiguration(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedInstancesConfiguration& ReservedInstancesConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText());
      m_platformHasBeenSet = true;
    }
    XmlNode scopeNode = resultNode.FirstChild("scope");
    if(!scopeNode.IsNull())
    {
      m_scope = ScopeMapper::GetScopeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scopeNode.GetText()).c_str()).c_str());
      m_scopeHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedInstancesConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }

  if(m_scopeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scope=" << ScopeMapper::GetNameForScope(m_scope) << "&";
  }

}

void ReservedInstancesConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  }
  if(m_scopeHasBeenSet)
  {
      oStream << location << ".Scope=" << ScopeMapper::GetNameForScope(m_scope) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
