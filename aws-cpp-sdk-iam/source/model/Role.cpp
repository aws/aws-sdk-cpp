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
#include <aws/iam/model/Role.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Role::Role() : 
    m_createDate(0.0),
    m_assumeRolePolicyDocumentHasBeenSet(false)
{
}

Role::Role(const XmlNode& xmlNode) : 
    m_createDate(0.0),
    m_assumeRolePolicyDocumentHasBeenSet(false)
{
  *this = xmlNode;
}

Role& Role::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pathNode = resultNode.FirstChild("Path");
    m_path = StringUtils::Trim(pathNode.GetText().c_str());
    XmlNode roleNameNode = resultNode.FirstChild("RoleName");
    m_roleName = StringUtils::Trim(roleNameNode.GetText().c_str());
    XmlNode roleIdNode = resultNode.FirstChild("RoleId");
    m_roleId = StringUtils::Trim(roleIdNode.GetText().c_str());
    XmlNode arnNode = resultNode.FirstChild("Arn");
    m_arn = StringUtils::Trim(arnNode.GetText().c_str());
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    m_createDate = StringUtils::ConvertToDouble(StringUtils::Trim(createDateNode.GetText().c_str()).c_str());
    XmlNode assumeRolePolicyDocumentNode = resultNode.FirstChild("AssumeRolePolicyDocument");
    if(!assumeRolePolicyDocumentNode.IsNull())
    {
      m_assumeRolePolicyDocument = StringUtils::Trim(assumeRolePolicyDocumentNode.GetText().c_str());
      m_assumeRolePolicyDocumentHasBeenSet = true;
    }
  }

  return *this;
}

void Role::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << index << locationValue << ".RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  oStream << location << index << locationValue << ".RoleId=" << StringUtils::URLEncode(m_roleId.c_str()) << "&";
  oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << index << locationValue << ".CreateDate=" << m_createDate << "&";
  if(m_assumeRolePolicyDocumentHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssumeRolePolicyDocument=" << StringUtils::URLEncode(m_assumeRolePolicyDocument.c_str()) << "&";
  }
}

void Role::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Path=" << StringUtils::URLEncode(m_path.c_str()) << "&";
  oStream << location << ".RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  oStream << location << ".RoleId=" << StringUtils::URLEncode(m_roleId.c_str()) << "&";
  oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  oStream << location << ".CreateDate=" << m_createDate << "&";
  if(m_assumeRolePolicyDocumentHasBeenSet)
  {
      oStream << location << ".AssumeRolePolicyDocument=" << StringUtils::URLEncode(m_assumeRolePolicyDocument.c_str()) << "&";
  }
}
