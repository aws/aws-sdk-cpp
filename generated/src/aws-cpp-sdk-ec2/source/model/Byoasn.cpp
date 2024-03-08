/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Byoasn.h>
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

Byoasn::Byoasn() : 
    m_asnHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(AsnState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Byoasn::Byoasn(const XmlNode& xmlNode) : 
    m_asnHasBeenSet(false),
    m_ipamIdHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(AsnState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

Byoasn& Byoasn::operator =(const XmlNode& xmlNode)
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
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if(!ipamIdNode.IsNull())
    {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
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
      m_state = AsnStateMapper::GetAsnStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void Byoasn::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_asnHasBeenSet)
  {
      oStream << location << index << locationValue << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }

  if(m_ipamIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << AsnStateMapper::GetNameForAsnState(m_state) << "&";
  }

}

void Byoasn::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_asnHasBeenSet)
  {
      oStream << location << ".Asn=" << StringUtils::URLEncode(m_asn.c_str()) << "&";
  }
  if(m_ipamIdHasBeenSet)
  {
      oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << AsnStateMapper::GetNameForAsnState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
