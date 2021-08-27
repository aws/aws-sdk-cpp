/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceCapacity.h>
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

InstanceCapacity::InstanceCapacity() : 
    m_availableCapacity(0),
    m_availableCapacityHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_totalCapacity(0),
    m_totalCapacityHasBeenSet(false)
{
}

InstanceCapacity::InstanceCapacity(const XmlNode& xmlNode) : 
    m_availableCapacity(0),
    m_availableCapacityHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_totalCapacity(0),
    m_totalCapacityHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceCapacity& InstanceCapacity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availableCapacityNode = resultNode.FirstChild("availableCapacity");
    if(!availableCapacityNode.IsNull())
    {
      m_availableCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableCapacityNode.GetText()).c_str()).c_str());
      m_availableCapacityHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode totalCapacityNode = resultNode.FirstChild("totalCapacity");
    if(!totalCapacityNode.IsNull())
    {
      m_totalCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalCapacityNode.GetText()).c_str()).c_str());
      m_totalCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceCapacity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availableCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableCapacity=" << m_availableCapacity << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalCapacity=" << m_totalCapacity << "&";
  }

}

void InstanceCapacity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availableCapacityHasBeenSet)
  {
      oStream << location << ".AvailableCapacity=" << m_availableCapacity << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_totalCapacityHasBeenSet)
  {
      oStream << location << ".TotalCapacity=" << m_totalCapacity << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
