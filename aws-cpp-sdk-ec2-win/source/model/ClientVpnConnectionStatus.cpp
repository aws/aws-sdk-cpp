/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClientVpnConnectionStatus.h>
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

ClientVpnConnectionStatus::ClientVpnConnectionStatus() : 
    m_code(ClientVpnConnectionStatusCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ClientVpnConnectionStatus::ClientVpnConnectionStatus(const XmlNode& xmlNode) : 
    m_code(ClientVpnConnectionStatusCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = xmlNode;
}

ClientVpnConnectionStatus& ClientVpnConnectionStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode codeNode = resultNode.FirstChild("code");
    if(!codeNode.IsNull())
    {
      m_code = ClientVpnConnectionStatusCodeMapper::GetClientVpnConnectionStatusCodeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(codeNode.GetText()).c_str()).c_str());
      m_codeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
  }

  return *this;
}

void ClientVpnConnectionStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Code=" << ClientVpnConnectionStatusCodeMapper::GetNameForClientVpnConnectionStatusCode(m_code) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

}

void ClientVpnConnectionStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_codeHasBeenSet)
  {
      oStream << location << ".Code=" << ClientVpnConnectionStatusCodeMapper::GetNameForClientVpnConnectionStatusCode(m_code) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
