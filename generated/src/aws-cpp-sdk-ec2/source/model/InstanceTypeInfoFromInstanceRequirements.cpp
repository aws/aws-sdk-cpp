/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceTypeInfoFromInstanceRequirements.h>
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

InstanceTypeInfoFromInstanceRequirements::InstanceTypeInfoFromInstanceRequirements() : 
    m_instanceTypeHasBeenSet(false)
{
}

InstanceTypeInfoFromInstanceRequirements::InstanceTypeInfoFromInstanceRequirements(const XmlNode& xmlNode) : 
    m_instanceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceTypeInfoFromInstanceRequirements& InstanceTypeInfoFromInstanceRequirements::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTypeInfoFromInstanceRequirements::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

}

void InstanceTypeInfoFromInstanceRequirements::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
