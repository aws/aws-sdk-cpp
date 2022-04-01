/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/Authentication.h>
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

Authentication::Authentication() : 
    m_type(AuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordCount(0),
    m_passwordCountHasBeenSet(false)
{
}

Authentication::Authentication(const XmlNode& xmlNode) : 
    m_type(AuthenticationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_passwordCount(0),
    m_passwordCountHasBeenSet(false)
{
  *this = xmlNode;
}

Authentication& Authentication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = AuthenticationTypeMapper::GetAuthenticationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode passwordCountNode = resultNode.FirstChild("PasswordCount");
    if(!passwordCountNode.IsNull())
    {
      m_passwordCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(passwordCountNode.GetText()).c_str()).c_str());
      m_passwordCountHasBeenSet = true;
    }
  }

  return *this;
}

void Authentication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << AuthenticationTypeMapper::GetNameForAuthenticationType(m_type) << "&";
  }

  if(m_passwordCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".PasswordCount=" << m_passwordCount << "&";
  }

}

void Authentication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << AuthenticationTypeMapper::GetNameForAuthenticationType(m_type) << "&";
  }
  if(m_passwordCountHasBeenSet)
  {
      oStream << location << ".PasswordCount=" << m_passwordCount << "&";
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
