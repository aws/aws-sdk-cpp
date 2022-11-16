/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/AuthenticationMode.h>
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

AuthenticationMode::AuthenticationMode() : 
    m_type(InputAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordsHasBeenSet(false)
{
}

AuthenticationMode::AuthenticationMode(const XmlNode& xmlNode) : 
    m_type(InputAuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordsHasBeenSet(false)
{
  *this = xmlNode;
}

AuthenticationMode& AuthenticationMode::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = InputAuthenticationTypeMapper::GetInputAuthenticationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode passwordsNode = resultNode.FirstChild("Passwords");
    if(!passwordsNode.IsNull())
    {
      XmlNode passwordsMember = passwordsNode.FirstChild("member");
      while(!passwordsMember.IsNull())
      {
        m_passwords.push_back(passwordsMember.GetText());
        passwordsMember = passwordsMember.NextNode("member");
      }

      m_passwordsHasBeenSet = true;
    }
  }

  return *this;
}

void AuthenticationMode::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << InputAuthenticationTypeMapper::GetNameForInputAuthenticationType(m_type) << "&";
  }

  if(m_passwordsHasBeenSet)
  {
      unsigned passwordsIdx = 1;
      for(auto& item : m_passwords)
      {
        oStream << location << index << locationValue << ".Passwords.member." << passwordsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void AuthenticationMode::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << InputAuthenticationTypeMapper::GetNameForInputAuthenticationType(m_type) << "&";
  }
  if(m_passwordsHasBeenSet)
  {
      unsigned passwordsIdx = 1;
      for(auto& item : m_passwords)
      {
        oStream << location << ".Passwords.member." << passwordsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
