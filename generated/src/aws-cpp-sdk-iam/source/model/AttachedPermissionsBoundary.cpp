/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/AttachedPermissionsBoundary.h>
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

AttachedPermissionsBoundary::AttachedPermissionsBoundary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AttachedPermissionsBoundary& AttachedPermissionsBoundary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode permissionsBoundaryTypeNode = resultNode.FirstChild("PermissionsBoundaryType");
    if(!permissionsBoundaryTypeNode.IsNull())
    {
      m_permissionsBoundaryType = PermissionsBoundaryAttachmentTypeMapper::GetPermissionsBoundaryAttachmentTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permissionsBoundaryTypeNode.GetText()).c_str()));
      m_permissionsBoundaryTypeHasBeenSet = true;
    }
    XmlNode permissionsBoundaryArnNode = resultNode.FirstChild("PermissionsBoundaryArn");
    if(!permissionsBoundaryArnNode.IsNull())
    {
      m_permissionsBoundaryArn = Aws::Utils::Xml::DecodeEscapedXmlText(permissionsBoundaryArnNode.GetText());
      m_permissionsBoundaryArnHasBeenSet = true;
    }
  }

  return *this;
}

void AttachedPermissionsBoundary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_permissionsBoundaryTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PermissionsBoundaryType=" << StringUtils::URLEncode(PermissionsBoundaryAttachmentTypeMapper::GetNameForPermissionsBoundaryAttachmentType(m_permissionsBoundaryType)) << "&";
  }

  if(m_permissionsBoundaryArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PermissionsBoundaryArn=" << StringUtils::URLEncode(m_permissionsBoundaryArn.c_str()) << "&";
  }

}

void AttachedPermissionsBoundary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_permissionsBoundaryTypeHasBeenSet)
  {
      oStream << location << ".PermissionsBoundaryType=" << StringUtils::URLEncode(PermissionsBoundaryAttachmentTypeMapper::GetNameForPermissionsBoundaryAttachmentType(m_permissionsBoundaryType)) << "&";
  }
  if(m_permissionsBoundaryArnHasBeenSet)
  {
      oStream << location << ".PermissionsBoundaryArn=" << StringUtils::URLEncode(m_permissionsBoundaryArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
