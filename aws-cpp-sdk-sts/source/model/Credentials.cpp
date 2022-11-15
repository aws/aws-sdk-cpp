/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sts/model/Credentials.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace STS
{
namespace Model
{

Credentials::Credentials() : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
}

Credentials::Credentials(const XmlNode& xmlNode) : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
  *this = xmlNode;
}

Credentials& Credentials::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessKeyIdNode = resultNode.FirstChild("AccessKeyId");
    if(!accessKeyIdNode.IsNull())
    {
      m_accessKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(accessKeyIdNode.GetText());
      m_accessKeyIdHasBeenSet = true;
    }
    XmlNode secretAccessKeyNode = resultNode.FirstChild("SecretAccessKey");
    if(!secretAccessKeyNode.IsNull())
    {
      m_secretAccessKey = Aws::Utils::Xml::DecodeEscapedXmlText(secretAccessKeyNode.GetText());
      m_secretAccessKeyHasBeenSet = true;
    }
    XmlNode sessionTokenNode = resultNode.FirstChild("SessionToken");
    if(!sessionTokenNode.IsNull())
    {
      m_sessionToken = Aws::Utils::Xml::DecodeEscapedXmlText(sessionTokenNode.GetText());
      m_sessionTokenHasBeenSet = true;
    }
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_expirationHasBeenSet = true;
    }
  }

  return *this;
}

void Credentials::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accessKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  }

  if(m_secretAccessKeyHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  }

  if(m_sessionTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".SessionToken=" << StringUtils::URLEncode(m_sessionToken.c_str()) << "&";
  }

  if(m_expirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void Credentials::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accessKeyIdHasBeenSet)
  {
      oStream << location << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  }
  if(m_secretAccessKeyHasBeenSet)
  {
      oStream << location << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  }
  if(m_sessionTokenHasBeenSet)
  {
      oStream << location << ".SessionToken=" << StringUtils::URLEncode(m_sessionToken.c_str()) << "&";
  }
  if(m_expirationHasBeenSet)
  {
      oStream << location << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace STS
} // namespace Aws
