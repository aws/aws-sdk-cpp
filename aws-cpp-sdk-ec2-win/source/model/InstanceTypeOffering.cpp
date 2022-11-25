/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceTypeOffering.h>
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

InstanceTypeOffering::InstanceTypeOffering() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

InstanceTypeOffering::InstanceTypeOffering(const XmlNode& xmlNode) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceTypeOffering& InstanceTypeOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode locationTypeNode = resultNode.FirstChild("locationType");
    if(!locationTypeNode.IsNull())
    {
      m_locationType = LocationTypeMapper::GetLocationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(locationTypeNode.GetText()).c_str()).c_str());
      m_locationTypeHasBeenSet = true;
    }
    XmlNode locationNode = resultNode.FirstChild("location");
    if(!locationNode.IsNull())
    {
      m_location = Aws::Utils::Xml::DecodeEscapedXmlText(locationNode.GetText());
      m_locationHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTypeOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_locationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocationType=" << LocationTypeMapper::GetNameForLocationType(m_locationType) << "&";
  }

  if(m_locationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Location=" << StringUtils::URLEncode(m_location.c_str()) << "&";
  }

}

void InstanceTypeOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_locationTypeHasBeenSet)
  {
      oStream << location << ".LocationType=" << LocationTypeMapper::GetNameForLocationType(m_locationType) << "&";
  }
  if(m_locationHasBeenSet)
  {
      oStream << location << ".Location=" << StringUtils::URLEncode(m_location.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
