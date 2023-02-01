/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityAllocation.h>
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

CapacityAllocation::CapacityAllocation() : 
    m_allocationType(AllocationType::NOT_SET),
    m_allocationTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

CapacityAllocation::CapacityAllocation(const XmlNode& xmlNode) : 
    m_allocationType(AllocationType::NOT_SET),
    m_allocationTypeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityAllocation& CapacityAllocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationTypeNode = resultNode.FirstChild("allocationType");
    if(!allocationTypeNode.IsNull())
    {
      m_allocationType = AllocationTypeMapper::GetAllocationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationTypeNode.GetText()).c_str()).c_str());
      m_allocationTypeHasBeenSet = true;
    }
    XmlNode countNode = resultNode.FirstChild("count");
    if(!countNode.IsNull())
    {
      m_count = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(countNode.GetText()).c_str()).c_str());
      m_countHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityAllocation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationType=" << AllocationTypeMapper::GetNameForAllocationType(m_allocationType) << "&";
  }

  if(m_countHasBeenSet)
  {
      oStream << location << index << locationValue << ".Count=" << m_count << "&";
  }

}

void CapacityAllocation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationTypeHasBeenSet)
  {
      oStream << location << ".AllocationType=" << AllocationTypeMapper::GetNameForAllocationType(m_allocationType) << "&";
  }
  if(m_countHasBeenSet)
  {
      oStream << location << ".Count=" << m_count << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
