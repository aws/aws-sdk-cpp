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
#include <aws/iam/model/SSHPublicKeyMetadata.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SSHPublicKeyMetadata::SSHPublicKeyMetadata() : 
    m_userNameHasBeenSet(false),
    m_sSHPublicKeyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false)
{
}

SSHPublicKeyMetadata::SSHPublicKeyMetadata(const XmlNode& xmlNode) : 
    m_userNameHasBeenSet(false),
    m_sSHPublicKeyIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_uploadDate(0.0),
    m_uploadDateHasBeenSet(false)
{
  *this = xmlNode;
}

SSHPublicKeyMetadata& SSHPublicKeyMetadata::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    if(!userNameNode.IsNull())
    {
      m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
      m_userNameHasBeenSet = true;
    }
    XmlNode sSHPublicKeyIdNode = resultNode.FirstChild("SSHPublicKeyId");
    if(!sSHPublicKeyIdNode.IsNull())
    {
      m_sSHPublicKeyId = StringUtils::Trim(sSHPublicKeyIdNode.GetText().c_str());
      m_sSHPublicKeyIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StatusTypeMapper::GetStatusTypeForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode uploadDateNode = resultNode.FirstChild("UploadDate");
    if(!uploadDateNode.IsNull())
    {
      m_uploadDate = StringUtils::ConvertToDouble(StringUtils::Trim(uploadDateNode.GetText().c_str()).c_str());
      m_uploadDateHasBeenSet = true;
    }
  }

  return *this;
}

void SSHPublicKeyMetadata::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_sSHPublicKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SSHPublicKeyId=" << StringUtils::URLEncode(m_sSHPublicKeyId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".UploadDate=" << m_uploadDate << "&";
  }
}

void SSHPublicKeyMetadata::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userNameHasBeenSet)
  {
      oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  }
  if(m_sSHPublicKeyIdHasBeenSet)
  {
      oStream << location << ".SSHPublicKeyId=" << StringUtils::URLEncode(m_sSHPublicKeyId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StatusTypeMapper::GetNameForStatusType(m_status) << "&";
  }
  if(m_uploadDateHasBeenSet)
  {
      oStream << location << ".UploadDate=" << m_uploadDate << "&";
  }
}
