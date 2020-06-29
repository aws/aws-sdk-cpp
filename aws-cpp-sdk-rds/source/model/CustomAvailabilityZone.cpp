/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CustomAvailabilityZone.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

CustomAvailabilityZone::CustomAvailabilityZone() : 
    m_customAvailabilityZoneIdHasBeenSet(false),
    m_customAvailabilityZoneNameHasBeenSet(false),
    m_customAvailabilityZoneStatusHasBeenSet(false),
    m_vpnDetailsHasBeenSet(false)
{
}

CustomAvailabilityZone::CustomAvailabilityZone(const XmlNode& xmlNode) : 
    m_customAvailabilityZoneIdHasBeenSet(false),
    m_customAvailabilityZoneNameHasBeenSet(false),
    m_customAvailabilityZoneStatusHasBeenSet(false),
    m_vpnDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

CustomAvailabilityZone& CustomAvailabilityZone::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode customAvailabilityZoneIdNode = resultNode.FirstChild("CustomAvailabilityZoneId");
    if(!customAvailabilityZoneIdNode.IsNull())
    {
      m_customAvailabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(customAvailabilityZoneIdNode.GetText());
      m_customAvailabilityZoneIdHasBeenSet = true;
    }
    XmlNode customAvailabilityZoneNameNode = resultNode.FirstChild("CustomAvailabilityZoneName");
    if(!customAvailabilityZoneNameNode.IsNull())
    {
      m_customAvailabilityZoneName = Aws::Utils::Xml::DecodeEscapedXmlText(customAvailabilityZoneNameNode.GetText());
      m_customAvailabilityZoneNameHasBeenSet = true;
    }
    XmlNode customAvailabilityZoneStatusNode = resultNode.FirstChild("CustomAvailabilityZoneStatus");
    if(!customAvailabilityZoneStatusNode.IsNull())
    {
      m_customAvailabilityZoneStatus = Aws::Utils::Xml::DecodeEscapedXmlText(customAvailabilityZoneStatusNode.GetText());
      m_customAvailabilityZoneStatusHasBeenSet = true;
    }
    XmlNode vpnDetailsNode = resultNode.FirstChild("VpnDetails");
    if(!vpnDetailsNode.IsNull())
    {
      m_vpnDetails = vpnDetailsNode;
      m_vpnDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void CustomAvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_customAvailabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }

  if(m_customAvailabilityZoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomAvailabilityZoneName=" << StringUtils::URLEncode(m_customAvailabilityZoneName.c_str()) << "&";
  }

  if(m_customAvailabilityZoneStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".CustomAvailabilityZoneStatus=" << StringUtils::URLEncode(m_customAvailabilityZoneStatus.c_str()) << "&";
  }

  if(m_vpnDetailsHasBeenSet)
  {
      Aws::StringStream vpnDetailsLocationAndMemberSs;
      vpnDetailsLocationAndMemberSs << location << index << locationValue << ".VpnDetails";
      m_vpnDetails.OutputToStream(oStream, vpnDetailsLocationAndMemberSs.str().c_str());
  }

}

void CustomAvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_customAvailabilityZoneIdHasBeenSet)
  {
      oStream << location << ".CustomAvailabilityZoneId=" << StringUtils::URLEncode(m_customAvailabilityZoneId.c_str()) << "&";
  }
  if(m_customAvailabilityZoneNameHasBeenSet)
  {
      oStream << location << ".CustomAvailabilityZoneName=" << StringUtils::URLEncode(m_customAvailabilityZoneName.c_str()) << "&";
  }
  if(m_customAvailabilityZoneStatusHasBeenSet)
  {
      oStream << location << ".CustomAvailabilityZoneStatus=" << StringUtils::URLEncode(m_customAvailabilityZoneStatus.c_str()) << "&";
  }
  if(m_vpnDetailsHasBeenSet)
  {
      Aws::String vpnDetailsLocationAndMember(location);
      vpnDetailsLocationAndMember += ".VpnDetails";
      m_vpnDetails.OutputToStream(oStream, vpnDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
