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
   * <p>Contains information about a role that a managed policy is attached to.</p>
   * <p>This data type is used as a response element in the
   * <a>ListEntitiesForPolicy</a> operation. </p> <p>For more information about
   * managed policies, refer to <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-vs-inline.html">Managed
   * Policies and Inline Policies</a> in the <i>Using IAM</i> guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/PolicyRole">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API PolicyRole
  {
  public:
    PolicyRole();
    PolicyRole(const Aws::Utils::Xml::XmlNode& xmlNode);
    PolicyRole& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline PolicyRole& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline PolicyRole& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name (friendly name, not ARN) identifying the role.</p>
     */
    inline PolicyRole& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetRoleId() const{ return m_roleId; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRoleId(const Aws::String& value) { m_roleIdHasBeenSet = true; m_roleId = value; }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRoleId(Aws::String&& value) { m_roleIdHasBeenSet = true; m_roleId = std::move(value); }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetRoleId(const char* value) { m_roleIdHasBeenSet = true; m_roleId.assign(value); }

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline PolicyRole& WithRoleId(const Aws::String& value) { SetRoleId(value); return *this;}

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline PolicyRole& WithRoleId(Aws::String&& value) { SetRoleId(std::move(value)); return *this;}

    /**
     * <p>The stable and unique string identifying the role. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline PolicyRole& WithRoleId(const char* value) { SetRoleId(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_roleId;
    bool m_roleIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
