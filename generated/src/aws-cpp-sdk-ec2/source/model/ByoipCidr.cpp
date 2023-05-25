/**
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

ByoipCidr::ByoipCidr() : 
    m_cidrHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(ByoipCidrState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

ByoipCidr::ByoipCidr(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_state(ByoipCidrState::NOT_SET),
    m_stateHasBeenSet(false)
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
    XmlNode statusMessageNode = resultNode.FirstChild("statusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = ByoipCidrStateMapper::GetByoipCidrStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
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

  if(m_statusMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ByoipCidrStateMapper::GetNameForByoipCidrState(m_state) << "&";
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
  if(m_statusMessageHasBeenSet)
  {
      oStream << location << ".StatusMessage=" << StringUtils::URLEncode(m_statusMessage.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ByoipCidrStateMapper::GetNameForByoipCidrState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
