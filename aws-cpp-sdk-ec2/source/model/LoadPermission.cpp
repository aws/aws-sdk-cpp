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

#include <aws/ec2/model/LoadPermission.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

LoadPermission::LoadPermission() : 
    m_userIdHasBeenSet(false),
    m_group(PermissionGroup::NOT_SET),
    m_groupHasBeenSet(false)
{
}

LoadPermission::LoadPermission(const XmlNode& xmlNode) : 
    m_userIdHasBeenSet(false),
    m_group(PermissionGroup::NOT_SET),
    m_groupHasBeenSet(false)
{
  *this = xmlNode;
}

LoadPermission& LoadPermission::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode userIdNode = resultNode.FirstChild("userId");
    if(!userIdNode.IsNull())
    {
      m_userId = userIdNode.GetText();
      m_userIdHasBeenSet = true;
    }
    XmlNode groupNode = resultNode.FirstChild("group");
    if(!groupNode.IsNull())
    {
      m_group = PermissionGroupMapper::GetPermissionGroupForName(StringUtils::Trim(groupNode.GetText().c_str()).c_str());
      m_groupHasBeenSet = true;
    }
  }

  return *this;
}

void LoadPermission::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_userIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }

  if(m_groupHasBeenSet)
  {
      oStream << location << index << locationValue << ".Group=" << PermissionGroupMapper::GetNameForPermissionGroup(m_group) << "&";
  }

}

void LoadPermission::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_userIdHasBeenSet)
  {
      oStream << location << ".UserId=" << StringUtils::URLEncode(m_userId.c_str()) << "&";
  }
  if(m_groupHasBeenSet)
  {
      oStream << location << ".Group=" << PermissionGroupMapper::GetNameForPermissionGroup(m_group) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
