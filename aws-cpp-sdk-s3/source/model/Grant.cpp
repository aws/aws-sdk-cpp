﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/Grant.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

Grant::Grant() : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
}

Grant::Grant(const XmlNode& xmlNode) : 
    m_granteeHasBeenSet(false),
    m_permission(Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
  *this = xmlNode;
}

Grant& Grant::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode granteeNode = resultNode.FirstChild("Grantee");
    if(!granteeNode.IsNull())
    {
      m_grantee = granteeNode;
      m_granteeHasBeenSet = true;
    }
    XmlNode permissionNode = resultNode.FirstChild("Permission");
    if(!permissionNode.IsNull())
    {
      m_permission = PermissionMapper::GetPermissionForName(StringUtils::Trim(permissionNode.GetText().c_str()).c_str());
      m_permissionHasBeenSet = true;
    }
  }

  return *this;
}

void Grant::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_granteeHasBeenSet)
  {
   XmlNode granteeNode = parentNode.CreateChildElement("Grantee");
   m_grantee.AddToNode(granteeNode);
  }

  if(m_permissionHasBeenSet)
  {
   XmlNode permissionNode = parentNode.CreateChildElement("Permission");
   permissionNode.SetText(PermissionMapper::GetNameForPermission(m_permission));
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
