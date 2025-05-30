﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ByoipCidr.h>
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

ByoipCidr::ByoipCidr(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ByoipCidr& ByoipCidr::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode asnAssociationsNode = resultNode.FirstChild("asnAssociationSet");
    if(!asnAssociationsNode.IsNull())
    {
      XmlNode asnAssociationsMember = asnAssociationsNode.FirstChild("item");
      m_asnAssociationsHasBeenSet = !asnAssociationsMember.IsNull();
      while(!asnAssociationsMember.IsNull())
      {
        m_asnAssociations.push_back(asnAssociationsMember);
        asnAssociationsMember = asnAssociationsMember.NextNode("item");
      }

      m_asnAssociationsHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ByoipCidrStateMapper::GetByoipCidrStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode networkBorderGroupNode = resultNode.FirstChild("networkBorderGroup");
    if(!networkBorderGroupNode.IsNull())
    {
      m_networkBorderGroup = Aws::Utils::Xml::DecodeEscapedXmlText(networkBorderGroupNode.GetText());
      m_networkBorderGroupHasBeenSet = true;
    }
  }

  return *this;
}

void ByoipCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_asnAssociationsHasBeenSet)
  {
      unsigned asnAssociationsIdx = 1;
      for(auto& item : m_asnAssociations)
      {
        Aws::StringStream asnAssociationsSs;
        asnAssociationsSs << location << index << locationValue << ".AsnAssociationSet." << asnAssociationsIdx++;
        item.OutputToStream(oStream, asnAssociationsSs.str().c_str());
      }
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(ByoipCidrStateMapper::GetNameForByoipCidrState(m_state)) << "&";
  }

  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }

}

void ByoipCidr::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_asnAssociationsHasBeenSet)
  {
      unsigned asnAssociationsIdx = 1;
      for(auto& item : m_asnAssociations)
      {
        Aws::StringStream asnAssociationsSs;
        asnAssociationsSs << location << ".AsnAssociationSet." << asnAssociationsIdx++;
        item.OutputToStream(oStream, asnAssociationsSs.str().c_str());
      }
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(ByoipCidrStateMapper::GetNameForByoipCidrState(m_state)) << "&";
  }
  if(m_networkBorderGroupHasBeenSet)
  {
      oStream << location << ".NetworkBorderGroup=" << StringUtils::URLEncode(m_networkBorderGroup.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
