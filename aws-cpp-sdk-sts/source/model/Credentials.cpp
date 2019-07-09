/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
      m_accessKeyId = accessKeyIdNode.GetText();
      m_accessKeyIdHasBeenSet = true;
    }
    XmlNode secretAccessKeyNode = resultNode.FirstChild("SecretAccessKey");
    if(!secretAccessKeyNode.IsNull())
    {
      m_secretAccessKey = secretAccessKeyNode.GetText();
      m_secretAccessKeyHasBeenSet = true;
    }
    XmlNode sessionTokenNode = resultNode.FirstChild("SessionToken");
    if(!sessionTokenNode.IsNull())
    {
      m_sessionToken = sessionTokenNode.GetText();
      m_sessionTokenHasBeenSet = true;
    }
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = DateTime(StringUtils::Trim(expirationNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
      oStream << location << index << locationValue << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".Expiration=" << StringUtils::URLEncode(m_expiration.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace STS
} // namespace Aws
