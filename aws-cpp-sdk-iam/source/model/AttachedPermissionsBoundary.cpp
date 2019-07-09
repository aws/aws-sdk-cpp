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

AttachedPermissionsBoundary::AttachedPermissionsBoundary() : 
    m_permissionsBoundaryType(PermissionsBoundaryAttachmentType::NOT_SET),
    m_permissionsBoundaryTypeHasBeenSet(false),
    m_permissionsBoundaryArnHasBeenSet(false)
{
}

AttachedPermissionsBoundary::AttachedPermissionsBoundary(const XmlNode& xmlNode) : 
    m_permissionsBoundaryType(PermissionsBoundaryAttachmentType::NOT_SET),
    m_permissionsBoundaryTypeHasBeenSet(false),
    m_permissionsBoundaryArnHasBeenSet(false)
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
      m_permissionsBoundaryType = PermissionsBoundaryAttachmentTypeMapper::GetPermissionsBoundaryAttachmentTypeForName(StringUtils::Trim(permissionsBoundaryTypeNode.GetText().c_str()).c_str());
      m_permissionsBoundaryTypeHasBeenSet = true;
    }
    XmlNode permissionsBoundaryArnNode = resultNode.FirstChild("PermissionsBoundaryArn");
    if(!permissionsBoundaryArnNode.IsNull())
    {
      m_permissionsBoundaryArn = permissionsBoundaryArnNode.GetText();
      m_permissionsBoundaryArnHasBeenSet = true;
    }
  }

  return *this;
}

void AttachedPermissionsBoundary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_permissionsBoundaryTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PermissionsBoundaryType=" << PermissionsBoundaryAttachmentTypeMapper::GetNameForPermissionsBoundaryAttachmentType(m_permissionsBoundaryType) << "&";
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
      oStream << location << ".PermissionsBoundaryType=" << PermissionsBoundaryAttachmentTypeMapper::GetNameForPermissionsBoundaryAttachmentType(m_permissionsBoundaryType) << "&";
  }
  if(m_permissionsBoundaryArnHasBeenSet)
  {
      oStream << location << ".PermissionsBoundaryArn=" << StringUtils::URLEncode(m_permissionsBoundaryArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
