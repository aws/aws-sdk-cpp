/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3Grant.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3Grant::S3Grant() : 
    m_granteeHasBeenSet(false),
    m_permission(S3Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
}

S3Grant::S3Grant(const XmlNode& xmlNode) : 
    m_granteeHasBeenSet(false),
    m_permission(S3Permission::NOT_SET),
    m_permissionHasBeenSet(false)
{
  *this = xmlNode;
}

S3Grant& S3Grant::operator =(const XmlNode& xmlNode)
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
      m_permission = S3PermissionMapper::GetS3PermissionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionNode.GetText()).c_str()).c_str());
      m_permissionHasBeenSet = true;
    }
  }

  return *this;
}

void S3Grant::AddToNode(XmlNode& parentNode) const
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
   permissionNode.SetText(S3PermissionMapper::GetNameForS3Permission(m_permission));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
