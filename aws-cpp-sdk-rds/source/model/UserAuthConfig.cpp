/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/UserAuthConfig.h>
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

UserAuthConfig::UserAuthConfig() : 
    m_descriptionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authScheme(AuthScheme::NOT_SET),
    m_authSchemeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_iAMAuth(IAMAuthMode::NOT_SET),
    m_iAMAuthHasBeenSet(false),
    m_clientPasswordAuthType(ClientPasswordAuthType::NOT_SET),
    m_clientPasswordAuthTypeHasBeenSet(false)
{
}

UserAuthConfig::UserAuthConfig(const XmlNode& xmlNode) : 
    m_descriptionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_authScheme(AuthScheme::NOT_SET),
    m_authSchemeHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_iAMAuth(IAMAuthMode::NOT_SET),
    m_iAMAuthHasBeenSet(false),
    m_clientPasswordAuthType(ClientPasswordAuthType::NOT_SET),
    m_clientPasswordAuthTypeHasBeenSet(false)
{
  *this = xmlNode;
}

UserAuthConfig& UserAuthConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = Aws::Utils::Xml::DecodeEscapedXmlText(userNameNode.GetText());
      m_userNameHasBeenSet = true;
    }
    XmlNode authSchemeNode = resultNode.FirstChild("AuthScheme");
    if(!authSchemeNode.IsNull())
    {
      m_authScheme = AuthSchemeMapper::GetAuthSchemeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(authSchemeNode.GetText()).c_str()).c_str());
      m_authSchemeHasBeenSet = true;
    }
    XmlNode secretArnNode = resultNode.FirstChild("SecretArn");
    if(!secretArnNode.IsNull())
    {
      m_secretArn = Aws::Utils::Xml::DecodeEscapedXmlText(secretArnNode.GetText());
      m_secretArnHasBeenSet = true;
    }
    XmlNode iAMAuthNode = resultNode.FirstChild("IAMAuth");
    if(!iAMAuthNode.IsNull())
    {
      m_iAMAuth = IAMAuthModeMapper::GetIAMAuthModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMAuthNode.GetText()).c_str()).c_str());
      m_iAMAuthHasBeenSet = true;
    }
    XmlNode clientPasswordAuthTypeNode = resultNode.FirstChild("ClientPasswordAuthType");
    if(!clientPasswordAuthTypeNode.IsNull())
    {
      m_clientPasswordAuthType = ClientPasswordAuthTypeMapper::GetClientPasswordAuthTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(clientPasswordAuthTypeNode.GetText()).c_str()).c_str());
      m_clientPasswordAuthTypeHasBeenSet = true;
    }
  }

  return *this;
}

void UserAuthConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }

  if(m_authSchemeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AuthScheme=" << AuthSchemeMapper::GetNameForAuthScheme(m_authScheme) << "&";
  }

  if(m_secretArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }

  if(m_iAMAuthHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMAuth=" << IAMAuthModeMapper::GetNameForIAMAuthMode(m_iAMAuth) << "&";
  }

  if(m_clientPasswordAuthTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientPasswordAuthType=" << ClientPasswordAuthTypeMapper::GetNameForClientPasswordAuthType(m_clientPasswordAuthType) << "&";
  }

}

void UserAuthConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_authSchemeHasBeenSet)
  {
      oStream << location << ".AuthScheme=" << AuthSchemeMapper::GetNameForAuthScheme(m_authScheme) << "&";
  }
  if(m_secretArnHasBeenSet)
  {
      oStream << location << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }
  if(m_iAMAuthHasBeenSet)
  {
      oStream << location << ".IAMAuth=" << IAMAuthModeMapper::GetNameForIAMAuthMode(m_iAMAuth) << "&";
  }
  if(m_clientPasswordAuthTypeHasBeenSet)
  {
      oStream << location << ".ClientPasswordAuthType=" << ClientPasswordAuthTypeMapper::GetNameForClientPasswordAuthType(m_clientPasswordAuthType) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
