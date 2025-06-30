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
   * as a response element in the following operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateInstanceProfile.html">CreateInstanceProfile</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetInstanceProfile.html">GetInstanceProfile</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListInstanceProfiles.html">ListInstanceProfiles</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListInstanceProfilesForRole.html">ListInstanceProfilesForRole</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/InstanceProfile">AWS
   * API Reference</a></p>
   */
  class InstanceProfile
  {
  public:
    AWS_IAM_API InstanceProfile() = default;
    AWS_IAM_API InstanceProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API InstanceProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The path to the instance profile. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    InstanceProfile& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name identifying the instance profile.</p>
     */
    inline const Aws::String& GetInstanceProfileName() const { return m_instanceProfileName; }
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }
    template<typename InstanceProfileNameT = Aws::String>
    void SetInstanceProfileName(InstanceProfileNameT&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::forward<InstanceProfileNameT>(value); }
    template<typename InstanceProfileNameT = Aws::String>
    InstanceProfile& WithInstanceProfileName(InstanceProfileNameT&& value) { SetInstanceProfileName(std::forward<InstanceProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The stable and unique string identifying the instance profile. For more
     * information about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetInstanceProfileId() const { return m_instanceProfileId; }
    inline bool InstanceProfileIdHasBeenSet() const { return m_instanceProfileIdHasBeenSet; }
    template<typename InstanceProfileIdT = Aws::String>
    void SetInstanceProfileId(InstanceProfileIdT&& value) { m_instanceProfileIdHasBeenSet = true; m_instanceProfileId = std::forward<InstanceProfileIdT>(value); }
    template<typename InstanceProfileIdT = Aws::String>
    InstanceProfile& WithInstanceProfileId(InstanceProfileIdT&& value) { SetInstanceProfileId(std::forward<InstanceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) specifying the instance profile. For more
     * information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    InstanceProfile& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the instance profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    InstanceProfile& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role associated with the instance profile.</p>
     */
    inline const Aws::Vector<Role>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Vector<Role>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Vector<Role>>
    InstanceProfile& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesT = Role>
    InstanceProfile& AddRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles.emplace_back(std::forward<RolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the instance profile. For more
     * information about tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    InstanceProfile& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    InstanceProfile& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet = false;

    Aws::String m_instanceProfileId;
    bool m_instanceProfileIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Role> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
