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
#include <aws/iam/model/LoginProfile.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

LoginProfile::LoginProfile() : 
    m_createDate(0.0),
    m_passwordResetRequired(false),
    m_passwordResetRequiredHasBeenSet(false)
{
}

LoginProfile::LoginProfile(const XmlNode& xmlNode) : 
    m_createDate(0.0),
    m_passwordResetRequired(false),
    m_passwordResetRequiredHasBeenSet(false)
{
  *this = xmlNode;
}

LoginProfile& LoginProfile::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
    XmlNode passwordResetRequiredNode = resultNode.FirstChild("PasswordResetRequired");
    if(!passwordResetRequiredNode.IsNull())
    {
      m_passwordResetRequired = StringUtils::ConvertToBool(StringUtils::Trim(passwordResetRequiredNode.GetText().c_str()).c_str());
      m_passwordResetRequiredHasBeenSet = true;
    }
  }

  return *this;
}

void LoginProfile::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  if(m_passwordResetRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".PasswordResetRequired=" << m_passwordResetRequired << "&";
  }
}

void LoginProfile::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << ".CreateDate=" << m_createDate << "&";
  if(m_passwordResetRequiredHasBeenSet)
  {
      oStream << location << ".PasswordResetRequired=" << m_passwordResetRequired << "&";
  }
}
