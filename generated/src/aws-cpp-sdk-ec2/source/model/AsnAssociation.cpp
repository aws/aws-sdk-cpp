/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AsnAssociation.h>
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

AsnAssociation::AsnAssociation() : 
    m_asnHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(AsnAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AsnAssociation::AsnAssociation(const XmlNode& xmlNode) : 
    m_asnHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(AsnAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

AsnAssociation& AsnAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode asnNode = resultNode.FirstChild("asn");
    if(!asnNode.IsNull())
    {
      m_asn = Aws::Utils::Xml::DecodeEscapedXmlText(asnNode.GetText());
      m_asnHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
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
      m_state = AsnAssociationStateMapper::GetAsnAssociationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void AsnAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_asnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AsnAssociationStateMapper::GetNameForAsnAssociationState(m_state) << "&";
  }

}

void AsnAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_asnHasBeenSet)
  {
      oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AsnAssociationStateMapper::GetNameForAsnAssociationState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
