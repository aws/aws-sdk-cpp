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
#include <aws/iam/model/User.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

User::User() : 
    m_createDate(0.0),
    m_passwordLastUsed(0.0),
    m_passwordLastUsedHasBeenSet(false)
{
}

User::User(const XmlNode& xmlNode) : 
    m_createDate(0.0),
    m_passwordLastUsed(0.0),
    m_passwordLastUsedHasBeenSet(false)
{
  *this = xmlNode;
}

User& User::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    m_path = StringUtils::Trim(pathNode.GetText().c_str());
    XmlNode userNameNode = resultNode.FirstChild("UserName");
    m_userName = StringUtils::Trim(userNameNode.GetText().c_str());
    XmlNode userIdNode = resultNode.FirstChild("UserId");
    m_userId = StringUtils::Trim(userIdNode.GetText().c_str());
    XmlNode arnNode = resultNode.FirstChild("Arn");
    m_arn = StringUtils::Trim(arnNode.GetText().c_str());
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
    XmlNode passwordLastUsedNode = resultNode.FirstChild("PasswordLastUsed");
    if(!passwordLastUsedNode.IsNull())
    {
      m_passwordLastUsed = StringUtils::ConvertToDouble(StringUtils::Trim(passwordLastUsedNode.GetText().c_str()).c_str());
      m_passwordLastUsedHasBeenSet = true;
    }
  }

  return *this;
}

void User::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << index << locationValue << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  if(m_passwordLastUsedHasBeenSet)
  {
      oStream << location << index << locationValue << ".PasswordLastUsed=" << m_passwordLastUsed << "&";
  }
}

void User::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << ".UserName=" << StringUtils::URLEncode(m_userName.c_str()) << "&";
  oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << ".CreateDate=" << m_createDate << "&";
  if(m_passwordLastUsedHasBeenSet)
  {
      oStream << location << ".PasswordLastUsed=" << m_passwordLastUsed << "&";
  }
}
