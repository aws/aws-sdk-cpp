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

#include <aws/iam/model/PolicyRole.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

PolicyRole::PolicyRole() : 
    m_roleNameHasBeenSet(false),
    m_roleIdHasBeenSet(false)
{
}

PolicyRole::PolicyRole(const XmlNode& xmlNode) : 
    m_roleNameHasBeenSet(false),
    m_roleIdHasBeenSet(false)
{
  *this = xmlNode;
}

PolicyRole& PolicyRole::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode roleNameNode = resultNode.FirstChild("RoleName");
    if(!roleNameNode.IsNull())
    {
      m_roleName = roleNameNode.GetText();
      m_roleNameHasBeenSet = true;
    }
    XmlNode roleIdNode = resultNode.FirstChild("RoleId");
    if(!roleIdNode.IsNull())
    {
      m_roleId = roleIdNode.GetText();
      m_roleIdHasBeenSet = true;
    }
  }

  return *this;
}

void PolicyRole::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_roleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }

  if(m_roleIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleId=" << StringUtils::URLEncode(m_roleId.c_str()) << "&";
  }

}

void PolicyRole::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_roleNameHasBeenSet)
  {
      oStream << location << ".RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
  }
  if(m_roleIdHasBeenSet)
  {
      oStream << location << ".RoleId=" << StringUtils::URLEncode(m_roleId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
