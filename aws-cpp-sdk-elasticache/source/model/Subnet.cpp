/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/Subnet.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

Subnet::Subnet() : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetOutpostHasBeenSet(false)
{
}

Subnet::Subnet(const XmlNode& xmlNode) : 
    m_subnetIdentifierHasBeenSet(false),
    m_subnetAvailabilityZoneHasBeenSet(false),
    m_subnetOutpostHasBeenSet(false)
{
  *this = xmlNode;
}

Subnet& Subnet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetIdentifierNode = resultNode.FirstChild("SubnetIdentifier");
    if(!subnetIdentifierNode.IsNull())
    {
      m_subnetIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdentifierNode.GetText());
      m_subnetIdentifierHasBeenSet = true;
    }
    XmlNode subnetAvailabilityZoneNode = resultNode.FirstChild("SubnetAvailabilityZone");
    if(!subnetAvailabilityZoneNode.IsNull())
    {
      m_subnetAvailabilityZone = subnetAvailabilityZoneNode;
      m_subnetAvailabilityZoneHasBeenSet = true;
    }
    XmlNode subnetOutpostNode = resultNode.FirstChild("SubnetOutpost");
    if(!subnetOutpostNode.IsNull())
    {
      m_subnetOutpost = subnetOutpostNode;
      m_subnetOutpostHasBeenSet = true;
    }
  }

  return *this;
}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetIdentifier=" << StringUtils::URLEncode(m_subnetIdentifier.c_str()) << "&";
  }

  if(m_subnetAvailabilityZoneHasBeenSet)
  {
      Aws::StringStream subnetAvailabilityZoneLocationAndMemberSs;
      subnetAvailabilityZoneLocationAndMemberSs << location << index << locationValue << ".SubnetAvailabilityZone";
      m_subnetAvailabilityZone.OutputToStream(oStream, subnetAvailabilityZoneLocationAndMemberSs.str().c_str());
  }

  if(m_subnetOutpostHasBeenSet)
  {
      Aws::StringStream subnetOutpostLocationAndMemberSs;
      subnetOutpostLocationAndMemberSs << location << index << locationValue << ".SubnetOutpost";
      m_subnetOutpost.OutputToStream(oStream, subnetOutpostLocationAndMemberSs.str().c_str());
  }

}

void Subnet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetIdentifierHasBeenSet)
  {
      oStream << location << ".SubnetIdentifier=" << StringUtils::URLEncode(m_subnetIdentifier.c_str()) << "&";
  }
  if(m_subnetAvailabilityZoneHasBeenSet)
  {
      Aws::String subnetAvailabilityZoneLocationAndMember(location);
      subnetAvailabilityZoneLocationAndMember += ".SubnetAvailabilityZone";
      m_subnetAvailabilityZone.OutputToStream(oStream, subnetAvailabilityZoneLocationAndMember.c_str());
  }
  if(m_subnetOutpostHasBeenSet)
  {
      Aws::String subnetOutpostLocationAndMember(location);
      subnetOutpostLocationAndMember += ".SubnetOutpost";
      m_subnetOutpost.OutputToStream(oStream, subnetOutpostLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
