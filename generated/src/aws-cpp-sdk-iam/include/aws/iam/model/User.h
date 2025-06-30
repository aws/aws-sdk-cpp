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
   * <p>Contains information about an IAM user entity.</p> <p>This data type is used
   * as a response element in the following operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateUser.html">CreateUser</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetUser.html">GetUser</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListUsers.html">ListUsers</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_IAM_API User() = default;
    AWS_IAM_API User(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API User& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The path to the user. For more information about paths, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p> <p>The ARN of the policy used
     * to set the permissions boundary for the user.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    User& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name identifying the user.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    User& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stable and unique string identifying the user. For more information about
     * IDs, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * identifiers</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    User& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the user. For more information
     * about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    User& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    User& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a>, when the user's password was last used to sign in to an
     * Amazon Web Services website. For a list of Amazon Web Services websites that
     * capture a user's last sign-in time, see the <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/credential-reports.html">Credential
     * reports</a> topic in the <i>IAM User Guide</i>. If a password is used more than
     * once in a five-minute span, only the first use is returned in this field. If the
     * field is null (no value), then it indicates that they never signed in with a
     * password. This can be because:</p> <ul> <li> <p>The user never had a
     * password.</p> </li> <li> <p>A password exists but has not been used since IAM
     * started tracking this information on October 20, 2014.</p> </li> </ul> <p>A null
     * value does not mean that the user <i>never</i> had a password. Also, if the user
     * does not currently have a password but had one in the past, then this field
     * contains the date and time the most recent password was used.</p> <p>This value
     * is returned only in the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetUser.html">GetUser</a>
     * and <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListUsers.html">ListUsers</a>
     * operations. </p>
     */
    inline const Aws::Utils::DateTime& GetPasswordLastUsed() const { return m_passwordLastUsed; }
    inline bool PasswordLastUsedHasBeenSet() const { return m_passwordLastUsedHasBeenSet; }
    template<typename PasswordLastUsedT = Aws::Utils::DateTime>
    void SetPasswordLastUsed(PasswordLastUsedT&& value) { m_passwordLastUsedHasBeenSet = true; m_passwordLastUsed = std::forward<PasswordLastUsedT>(value); }
    template<typename PasswordLastUsedT = Aws::Utils::DateTime>
    User& WithPasswordLastUsed(PasswordLastUsedT&& value) { SetPasswordLastUsed(std::forward<PasswordLastUsedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For more information about permissions boundaries, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_boundaries.html">Permissions
     * boundaries for IAM identities </a> in the <i>IAM User Guide</i>.</p>
     */
    inline const AttachedPermissionsBoundary& GetPermissionsBoundary() const { return m_permissionsBoundary; }
    inline bool PermissionsBoundaryHasBeenSet() const { return m_permissionsBoundaryHasBeenSet; }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    void SetPermissionsBoundary(PermissionsBoundaryT&& value) { m_permissionsBoundaryHasBeenSet = true; m_permissionsBoundary = std::forward<PermissionsBoundaryT>(value); }
    template<typename PermissionsBoundaryT = AttachedPermissionsBoundary>
    User& WithPermissionsBoundary(PermissionsBoundaryT&& value) { SetPermissionsBoundary(std::forward<PermissionsBoundaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are associated with the user. For more information about
     * tagging, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    User& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    User& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Utils::DateTime m_passwordLastUsed{};
    bool m_passwordLastUsedHasBeenSet = false;

    AttachedPermissionsBoundary m_permissionsBoundary;
    bool m_permissionsBoundaryHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
