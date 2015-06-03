/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

using namespace Aws::STS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Credentials::Credentials() : 
    m_expiration(0.0)
{
}

Credentials::Credentials(const XmlNode& xmlNode) : 
    m_expiration(0.0)
{
  *this = xmlNode;
}

Credentials& Credentials::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessKeyIdNode = resultNode.FirstChild("AccessKeyId");
    m_accessKeyId = StringUtils::Trim(accessKeyIdNode.GetText().c_str());
    XmlNode secretAccessKeyNode = resultNode.FirstChild("SecretAccessKey");
    m_secretAccessKey = StringUtils::Trim(secretAccessKeyNode.GetText().c_str());
    XmlNode sessionTokenNode = resultNode.FirstChild("SessionToken");
    m_sessionToken = StringUtils::Trim(sessionTokenNode.GetText().c_str());
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    m_expiration = StringUtils::ConvertToDouble(StringUtils::Trim(expirationNode.GetText().c_str()).c_str());
  }

  return *this;
}

void Credentials::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  oStream << location << index << locationValue << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  oStream << location << index << locationValue << ".SessionToken=" << StringUtils::URLEncode(m_sessionToken.c_str()) << "&";
  oStream << location << index << locationValue << ".Expiration=" << m_expiration << "&";
}

void Credentials::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".AccessKeyId=" << StringUtils::URLEncode(m_accessKeyId.c_str()) << "&";
  oStream << location << ".SecretAccessKey=" << StringUtils::URLEncode(m_secretAccessKey.c_str()) << "&";
  oStream << location << ".SessionToken=" << StringUtils::URLEncode(m_sessionToken.c_str()) << "&";
  oStream << location << ".Expiration=" << m_expiration << "&";
}
