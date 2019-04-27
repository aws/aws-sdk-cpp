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

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/iam/model/PermissionsBoundaryAttachmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about an attached permissions boundary.</p> <p>An
   * attached permissions boundary is a managed policy that has been attached to a
   * user or role to set the permissions boundary.</p> <p>For more information about
   * permissions boundaries, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
   * Boundaries for IAM Identities </a> in the <i>IAM User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachedPermissionsBoundary">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API AttachedPermissionsBoundary
  {
  public:
    AttachedPermissionsBoundary();
    AttachedPermissionsBoundary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AttachedPermissionsBoundary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline const PermissionsBoundaryAttachmentType& GetPermissionsBoundaryType() const{ return m_permissionsBoundaryType; }

    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline bool PermissionsBoundaryTypeHasBeenSet() const { return m_permissionsBoundaryTypeHasBeenSet; }

    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline void SetPermissionsBoundaryType(const PermissionsBoundaryAttachmentType& value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = value; }

    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline void SetPermissionsBoundaryType(PermissionsBoundaryAttachmentType&& value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = std::move(value); }

    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryType(const PermissionsBoundaryAttachmentType& value) { SetPermissionsBoundaryType(value); return *this;}

    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryType(PermissionsBoundaryAttachmentType&& value) { SetPermissionsBoundaryType(std::move(value)); return *this;}


    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryArn() const{ return m_permissionsBoundaryArn; }

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline bool PermissionsBoundaryArnHasBeenSet() const { return m_permissionsBoundaryArnHasBeenSet; }

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline void SetPermissionsBoundaryArn(const Aws::String& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = value; }

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline void SetPermissionsBoundaryArn(Aws::String&& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = std::move(value); }

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline void SetPermissionsBoundaryArn(const char* value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn.assign(value); }

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryArn(const Aws::String& value) { SetPermissionsBoundaryArn(value); return *this;}

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryArn(Aws::String&& value) { SetPermissionsBoundaryArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryArn(const char* value) { SetPermissionsBoundaryArn(value); return *this;}

  private:

    PermissionsBoundaryAttachmentType m_permissionsBoundaryType;
    bool m_permissionsBoundaryTypeHasBeenSet;

    Aws::String m_permissionsBoundaryArn;
    bool m_permissionsBoundaryArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
