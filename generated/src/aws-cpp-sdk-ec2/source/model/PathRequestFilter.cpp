/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PathRequestFilter.h>
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

PathRequestFilter::PathRequestFilter() : 
    m_sourceAddressHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationAddressHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false)
{
}

PathRequestFilter::PathRequestFilter(const XmlNode& xmlNode) : 
    m_sourceAddressHasBeenSet(false),
    m_sourcePortRangeHasBeenSet(false),
    m_destinationAddressHasBeenSet(false),
    m_destinationPortRangeHasBeenSet(false)
{
  *this = xmlNode;
}

PathRequestFilter& PathRequestFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceAddressNode = resultNode.FirstChild("SourceAddress");
    if(!sourceAddressNode.IsNull())
    {
      m_sourceAddress = Aws::Utils::Xml::DecodeEscapedXmlText(sourceAddressNode.GetText());
      m_sourceAddressHasBeenSet = true;
    }
    XmlNode sourcePortRangeNode = resultNode.FirstChild("SourcePortRange");
    if(!sourcePortRangeNode.IsNull())
    {
      m_sourcePortRange = sourcePortRangeNode;
      m_sourcePortRangeHasBeenSet = true;
    }
    XmlNode destinationAddressNode = resultNode.FirstChild("DestinationAddress");
    if(!destinationAddressNode.IsNull())
    {
      m_destinationAddress = Aws::Utils::Xml::DecodeEscapedXmlText(destinationAddressNode.GetText());
      m_destinationAddressHasBeenSet = true;
    }
    XmlNode destinationPortRangeNode = resultNode.FirstChild("DestinationPortRange");
    if(!destinationPortRangeNode.IsNull())
    {
      m_destinationPortRange = destinationPortRangeNode;
      m_destinationPortRangeHasBeenSet = true;
    }
  }

  return *this;
}

void PathRequestFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceAddress=" << StringUtils::URLEncode(m_sourceAddress.c_str()) << "&";
  }

  if(m_sourcePortRangeHasBeenSet)
  {
      Aws::StringStream sourcePortRangeLocationAndMemberSs;
      sourcePortRangeLocationAndMemberSs << location << index << locationValue << ".SourcePortRange";
      m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMemberSs.str().c_str());
  }

  if(m_destinationAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".DestinationAddress=" << StringUtils::URLEncode(m_destinationAddress.c_str()) << "&";
  }

  if(m_destinationPortRangeHasBeenSet)
  {
      Aws::StringStream destinationPortRangeLocationAndMemberSs;
      destinationPortRangeLocationAndMemberSs << location << index << locationValue << ".DestinationPortRange";
      m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMemberSs.str().c_str());
  }

}

void PathRequestFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceAddressHasBeenSet)
  {
      oStream << location << ".SourceAddress=" << StringUtils::URLEncode(m_sourceAddress.c_str()) << "&";
  }
  if(m_sourcePortRangeHasBeenSet)
  {
      Aws::String sourcePortRangeLocationAndMember(location);
      sourcePortRangeLocationAndMember += ".SourcePortRange";
      m_sourcePortRange.OutputToStream(oStream, sourcePortRangeLocationAndMember.c_str());
  }
  if(m_destinationAddressHasBeenSet)
  {
      oStream << location << ".DestinationAddress=" << StringUtils::URLEncode(m_destinationAddress.c_str()) << "&";
  }
  if(m_destinationPortRangeHasBeenSet)
  {
      Aws::String destinationPortRangeLocationAndMember(location);
      destinationPortRangeLocationAndMember += ".DestinationPortRange";
      m_destinationPortRange.OutputToStream(oStream, destinationPortRangeLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
