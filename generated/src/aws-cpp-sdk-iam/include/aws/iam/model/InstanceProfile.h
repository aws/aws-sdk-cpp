/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Role.h>
#include <aws/iam/model/Tag.h>
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
  class InstanceProfile
  {
  public:
    AWS_IAM_API InstanceProfile();
    AWS_IAM_API InstanceProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API InstanceProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
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
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetInstanceProfileId() const{ return m_instanceProfileId; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline bool InstanceProfileIdHasBeenSet() const { return m_instanceProfileIdHasBeenSet; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetInstanceProfileId(const Aws::String& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = value; }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetInstanceProfileId(Aws::String&& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = std::move(value); }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetInstanceProfileId(const char* value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId.assign(value); }

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(const Aws::String& value) { SetInstanceProfileId(value); return *this;}

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(Aws::String&& value) { SetInstanceProfileId(std::move(value)); return *this;}

    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithInstanceProfileId(const char* value) { SetInstanceProfileId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline InstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
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


    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline InstanceProfile& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline InstanceProfile& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline InstanceProfile& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline InstanceProfile& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_instanceProfileId;
    bool m_instanceProfileIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
