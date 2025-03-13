/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/AttachedPermissionsBoundary">AWS
   * API Reference</a></p>
   */
  class AttachedPermissionsBoundary
  {
  public:
    AWS_IAM_API AttachedPermissionsBoundary() = default;
    AWS_IAM_API AttachedPermissionsBoundary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API AttachedPermissionsBoundary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The permissions boundary usage type that indicates what type of IAM resource
     * is used as the permissions boundary for an entity. This data type can only have
     * a value of <code>Policy</code>.</p>
     */
    inline PermissionsBoundaryAttachmentType GetPermissionsBoundaryType() const { return m_permissionsBoundaryType; }
    inline bool PermissionsBoundaryTypeHasBeenSet() const { return m_permissionsBoundaryTypeHasBeenSet; }
    inline void SetPermissionsBoundaryType(PermissionsBoundaryAttachmentType value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = value; }
    inline AttachedPermissionsBoundary& WithPermissionsBoundaryType(PermissionsBoundaryAttachmentType value) { SetPermissionsBoundaryType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the policy used to set the permissions boundary for the user or
     * role.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryArn() const { return m_permissionsBoundaryArn; }
    inline bool PermissionsBoundaryArnHasBeenSet() const { return m_permissionsBoundaryArnHasBeenSet; }
    template<typename PermissionsBoundaryArnT = Aws::String>
    void SetPermissionsBoundaryArn(PermissionsBoundaryArnT&& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = std::forward<PermissionsBoundaryArnT>(value); }
    template<typename PermissionsBoundaryArnT = Aws::String>
    AttachedPermissionsBoundary& WithPermissionsBoundaryArn(PermissionsBoundaryArnT&& value) { SetPermissionsBoundaryArn(std::forward<PermissionsBoundaryArnT>(value)); return *this;}
    ///@}
  private:

    PermissionsBoundaryAttachmentType m_permissionsBoundaryType{PermissionsBoundaryAttachmentType::NOT_SET};
    bool m_permissionsBoundaryTypeHasBeenSet = false;

    Aws::String m_permissionsBoundaryArn;
    bool m_permissionsBoundaryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
