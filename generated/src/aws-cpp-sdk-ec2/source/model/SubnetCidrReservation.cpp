/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SubnetCidrReservation.h>
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

SubnetCidrReservation::SubnetCidrReservation() : 
    m_subnetCidrReservationIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_reservationType(SubnetCidrReservationType::NOT_SET),
    m_reservationTypeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SubnetCidrReservation::SubnetCidrReservation(const XmlNode& xmlNode) : 
    m_subnetCidrReservationIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_reservationType(SubnetCidrReservationType::NOT_SET),
    m_reservationTypeHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

SubnetCidrReservation& SubnetCidrReservation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subnetCidrReservationIdNode = resultNode.FirstChild("subnetCidrReservationId");
    if(!subnetCidrReservationIdNode.IsNull())
    {
      m_subnetCidrReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetCidrReservationIdNode.GetText());
      m_subnetCidrReservationIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode reservationTypeNode = resultNode.FirstChild("reservationType");
    if(!reservationTypeNode.IsNull())
    {
      m_reservationType = SubnetCidrReservationTypeMapper::GetSubnetCidrReservationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservationTypeNode.GetText()).c_str()).c_str());
      m_reservationTypeHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void SubnetCidrReservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_subnetCidrReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetCidrReservationId=" << StringUtils::URLEncode(m_subnetCidrReservationId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_reservationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservationType=" << SubnetCidrReservationTypeMapper::GetNameForSubnetCidrReservationType(m_reservationType) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void SubnetCidrReservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_subnetCidrReservationIdHasBeenSet)
  {
      oStream << location << ".SubnetCidrReservationId=" << StringUtils::URLEncode(m_subnetCidrReservationId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_reservationTypeHasBeenSet)
  {
      oStream << location << ".ReservationType=" << SubnetCidrReservationTypeMapper::GetNameForSubnetCidrReservationType(m_reservationType) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
