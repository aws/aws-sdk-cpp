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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Role.h>
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
   * <p>Contains information about an instance profile.</p> <p>This data type is used
   * as a response element in the following operations:</p> <ul> <li> <p>
   * <a>CreateInstanceProfile</a> </p> </li> <li> <p> <a>GetInstanceProfile</a> </p>
   * </li> <li> <p> <a>ListInstanceProfiles</a> </p> </li> <li> <p>
   * <a>ListInstanceProfilesForRole</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/InstanceProfile">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API InstanceProfile
  {
  public:
    InstanceProfile();
    InstanceProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline InstanceProfile& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline InstanceProfile& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline InstanceProfile& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetInstanceProfileId() const{ return m_instanceProfileId; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline bool InstanceProfileIdHasBeenSet() const { return m_instanceProfileIdHasBeenSet; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetInstanceProfileId(const Aws::String& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = value; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetInstanceProfileId(Aws::String&& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = std::move(value); }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetInstanceProfileId(const char* value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId.assign(value); }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(const Aws::String& value) { SetInstanceProfileId(value); return *this;}

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(Aws::String&& value) { SetInstanceProfileId(std::move(value)); return *this;}

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(const char* value) { SetInstanceProfileId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>Using IAM</i> guide. </p>
     */
    inline InstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const{ return m_createDate; }

    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }

    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline void SetCreateDate(const Aws::Utils::DateTime& value) { m_createDateHasBeenSet = true; m_createDate = value; }

    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline void SetCreateDate(Aws::Utils::DateTime&& value) { m_createDateHasBeenSet = true; m_createDate = std::move(value); }

    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline InstanceProfile& WithCreateDate(const Aws::Utils::DateTime& value) { SetCreateDate(value); return *this;}

    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline InstanceProfile& WithCreateDate(Aws::Utils::DateTime&& value) { SetCreateDate(std::move(value)); return *this;}


    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline const Aws::Vector<Role>& GetRoles() const{ return m_roles; }

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline void SetRoles(const Aws::Vector<Role>& value) { m_rolesHasBeenSet = true; m_roles = value; }

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline void SetRoles(Aws::Vector<Role>&& value) { m_rolesHasBeenSet = true; m_roles = std::move(value); }

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline InstanceProfile& WithRoles(const Aws::Vector<Role>& value) { SetRoles(value); return *this;}

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline InstanceProfile& WithRoles(Aws::Vector<Role>&& value) { SetRoles(std::move(value)); return *this;}

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline InstanceProfile& AddRoles(const Role& value) { m_rolesHasBeenSet = true; m_roles.push_back(value); return *this; }

    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline InstanceProfile& AddRoles(Role&& value) { m_rolesHasBeenSet = true; m_roles.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet;

    Aws::String m_instanceProfileId;
    bool m_instanceProfileIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
