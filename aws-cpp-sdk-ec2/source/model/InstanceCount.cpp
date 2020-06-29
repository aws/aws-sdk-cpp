/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceCount.h>
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

InstanceCount::InstanceCount() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_state(ListingState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

InstanceCount::InstanceCount(const XmlNode& xmlNode) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_state(ListingState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceCount& InstanceCount::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ListingStateMapper::GetListingStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceCount::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ListingStateMapper::GetNameForListingState(m_state) << "&";
  }

}

void InstanceCount::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ListingStateMapper::GetNameForListingState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
