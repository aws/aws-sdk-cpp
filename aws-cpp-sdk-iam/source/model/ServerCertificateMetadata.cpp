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
#include <aws/iam/model/ServerCertificateMetadata.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ServerCertificateMetadata::ServerCertificateMetadata() : 
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false),
    m_expiration(0.0),
    m_expirationHasBeenSet(false)
{
}

ServerCertificateMetadata::ServerCertificateMetadata(const XmlNode& xmlNode) : 
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false),
    m_expiration(0.0),
    m_expirationHasBeenSet(false)
{
  *this = xmlNode;
}

ServerCertificateMetadata& ServerCertificateMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    m_path = StringUtils::Trim(pathNode.GetText().c_str());
    XmlNode serverCertificateNameNode = resultNode.FirstChild("ServerCertificateName");
    m_serverCertificateName = StringUtils::Trim(serverCertificateNameNode.GetText().c_str());
    XmlNode serverCertificateIdNode = resultNode.FirstChild("ServerCertificateId");
    m_serverCertificateId = StringUtils::Trim(serverCertificateIdNode.GetText().c_str());
    XmlNode arnNode = resultNode.FirstChild("Arn");
    m_arn = StringUtils::Trim(arnNode.GetText().c_str());
    XmlNode uploadDateNode = resultNode.FirstChild("UploadDate");
    if(!uploadDateNode.IsNull())
    {
      m_uploadDate = StringUtils::ConvertToDouble(StringUtils::Trim(uploadDateNode.GetText().c_str()).c_str());
      m_uploadDateHasBeenSet = true;
    }
    XmlNode expirationNode = resultNode.FirstChild("Expiration");
    if(!expirationNode.IsNull())
    {
      m_expiration = StringUtils::ConvertToDouble(StringUtils::Trim(expirationNode.GetText().c_str()).c_str());
      m_expirationHasBeenSet = true;
    }
  }

  return *this;
}

void ServerCertificateMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << index << locationValue << ".ServerCertificateName=" << StringUtils::URLEncode(m_serverCertificateName.c_str()) << "&";
  oStream << location << index << locationValue << ".ServerCertificateId=" << StringUtils::URLEncode(m_serverCertificateId.c_str()) << "&";
  oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadDate=" << m_uploadDate << "&";
  }
  if(m_expirationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Expiration=" << m_expiration << "&";
  }
}

void ServerCertificateMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << ".ServerCertificateName=" << StringUtils::URLEncode(m_serverCertificateName.c_str()) << "&";
  oStream << location << ".ServerCertificateId=" << StringUtils::URLEncode(m_serverCertificateId.c_str()) << "&";
  oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << ".UploadDate=" << m_uploadDate << "&";
  }
  if(m_expirationHasBeenSet)
  {
      oStream << location << ".Expiration=" << m_expiration << "&";
  }
}
