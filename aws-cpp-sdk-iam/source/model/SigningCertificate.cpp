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
#include <aws/iam/model/SigningCertificate.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SigningCertificate::SigningCertificate() : 
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false)
{
}

SigningCertificate::SigningCertificate(const XmlNode& xmlNode) : 
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false)
{
  *this = xmlNode;
}

SigningCertificate& SigningCertificate::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
    XmlNode certificateIdNode = resultNode.FirstChild("CertificateId");
    m_certificateId = StringUtils::Trim(certificateIdNode.GetText().c_str());
    XmlNode certificateBodyNode = resultNode.FirstChild("CertificateBody");
    m_certificateBody = StringUtils::Trim(certificateBodyNode.GetText().c_str());
    XmlNode statusNode = resultNode.FirstChild("Status");
    m_status = statusTypeMapper::GetstatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    XmlNode uploadDateNode = resultNode.FirstChild("UploadDate");
    if(!uploadDateNode.IsNull())
    {
      m_uploadDate = StringUtils::ConvertToDouble(StringUtils::Trim(uploadDateNode.GetText().c_str()).c_str());
      m_uploadDateHasBeenSet = true;
    }
  }

  return *this;
}

void SigningCertificate::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << index << locationValue << ".CertificateId=" << StringUtils::URLEncode(m_certificateId.c_str()) << "&";
  oStream << location << index << locationValue << ".CertificateBody=" << StringUtils::URLEncode(m_certificateBody.c_str()) << "&";
  oStream << location << index << locationValue << ".Status=" << statusTypeMapper::GetNameForstatusType(m_status) << "&";
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadDate=" << m_uploadDate << "&";
  }
}

void SigningCertificate::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << ".CertificateId=" << StringUtils::URLEncode(m_certificateId.c_str()) << "&";
  oStream << location << ".CertificateBody=" << StringUtils::URLEncode(m_certificateBody.c_str()) << "&";
  oStream << location << ".Status=" << statusTypeMapper::GetNameForstatusType(m_status) << "&";
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << ".UploadDate=" << m_uploadDate << "&";
  }
}
