/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iam/model/AttachedPermissionsBoundary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/RoleLastUsed.h>
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
   * <p>Contains information about an IAM role. This structure is returned as a
   * response element in several API operations that interact with
   * roles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Role">AWS API
   * Reference</a></p>
   */
  class Role
  {
  public:
    AWS_IAM_API Role() = default;
    AWS_IAM_API Role(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API Role& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The path to the role. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    Role& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name that identifies the role.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    Role& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The stable and unique string identifying the role. For more information
     * about IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetRoleId() const { return m_roleId; }
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }
    template<typename RoleIdT = Aws::String>
    void SetRoleId(RoleIdT&& value) { m_roleIdHasBeenSet = true; m_roleId = std::forward<RoleIdT>(value); }
    template<typename RoleIdT = Aws::String>
    Role& WithRoleId(RoleIdT&& value) { SetRoleId(std::forward<RoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) specifying the role. For more information
     * about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i> guide. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Role& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the role was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    Role& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const { return m_assumeRolePolicyDocument; }
    inline bool AssumeRolePolicyDocumentHasBeenSet() const { return m_assumeRolePolicyDocumentHasBeenSet; }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    void SetAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::forward<AssumeRolePolicyDocumentT>(value); }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    Role& WithAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { SetAssumeRolePolicyDocument(std::forward<AssumeRolePolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the role that you provide.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Role& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum session duration (in seconds) for the specified role. Anyone who
     * uses the CLI, or API to assume the role can specify the duration using the
     * optional <code>DurationSeconds</code> API parameter or
     * <code>duration-seconds</code> CLI parameter.</p>
     */
    inline int GetMaxSessionDuration() const { return m_maxSessionDuration; }
    inline bool MaxSessionDurationHasBeenSet() const { return m_maxSessionDurationHasBeenSet; }
    inline void SetMaxSessionDuration(int value) { m_maxSessionDurationHasBeenSet = true; m_maxSessionDuration = value; }
    inline Role& WithMaxSessionDuration(int value) { SetMaxSessionDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the policy used to set the permissions boundary for the role.</p>
     * <p>For more information about permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline const AttachedPermissionsBoundary& GetPermissionsBoundary() const { return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    void SetPermissionsBoundary(PermissionsBoundaryT&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::forward<PermissionsBoundaryT>(value); }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    Role& WithPermissionsBoundary(PermissionsBoundaryT&& value) { SetPermissionsBoundary(std::forward<PermissionsBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the role. For more information about
     * tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Role& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Role& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the last time that an IAM role was used. This
     * includes the date and time and the Region in which the role was last used.
     * Activity is only reported for the trailing 400 days. This period can be shorter
     * if your Region began supporting these features within the last year. The role
     * might have been used more than 400 days ago. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM user Guide</i>.</p>
     */
    inline const RoleLastUsed& GetRoleLastUsed() const { return m_roleLastUsed; }
    inline bool RoleLastUsedHasBeenSet() const { return m_roleLastUsedHasBeenSet; }
    template<typename RoleLastUsedT = RoleLastUsed>
    void SetRoleLastUsed(RoleLastUsedT&& value) { m_roleLastUsedHasBeenSet = true; m_roleLastUsed = std::forward<RoleLastUsedT>(value); }
    template<typename RoleLastUsedT = RoleLastUsed>
    Role& WithRoleLastUsed(RoleLastUsedT&& value) { SetRoleLastUsed(std::forward<RoleLastUsedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_roleId;
    bool m_roleIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxSessionDuration{0};
    bool m_maxSessionDurationHasBeenSet = false;

    AttachedPermissionsBoundary m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    RoleLastUsed m_roleLastUsed;
    bool m_roleLastUsedHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
