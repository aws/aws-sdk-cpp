/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/RelationshipStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an account that's associated with an Amazon Macie
   * administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Member">AWS API
   * Reference</a></p>
   */
  class Member
  {
  public:
    AWS_MACIE2_API Member() = default;
    AWS_MACIE2_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Member& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline const Aws::String& GetAdministratorAccountId() const { return m_administratorAccountId; }
    inline bool AdministratorAccountIdHasBeenSet() const { return m_administratorAccountIdHasBeenSet; }
    template<typename AdministratorAccountIdT = Aws::String>
    void SetAdministratorAccountId(AdministratorAccountIdT&& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = std::forward<AdministratorAccountIdT>(value); }
    template<typename AdministratorAccountIdT = Aws::String>
    Member& WithAdministratorAccountId(AdministratorAccountIdT&& value) { SetAdministratorAccountId(std::forward<AdministratorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Member& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the account. This value is null if the account is
     * associated with the administrator account through Organizations.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Member& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if a
     * Macie membership invitation hasn't been sent to the account.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const { return m_invitedAt; }
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    void SetInvitedAt(InvitedAtT&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::forward<InvitedAtT>(value); }
    template<typename InvitedAtT = Aws::Utils::DateTime>
    Member& WithInvitedAt(InvitedAtT&& value) { SetInvitedAt(std::forward<InvitedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline const Aws::String& GetMasterAccountId() const { return m_masterAccountId; }
    inline bool MasterAccountIdHasBeenSet() const { return m_masterAccountIdHasBeenSet; }
    template<typename MasterAccountIdT = Aws::String>
    void SetMasterAccountId(MasterAccountIdT&& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = std::forward<MasterAccountIdT>(value); }
    template<typename MasterAccountIdT = Aws::String>
    Member& WithMasterAccountId(MasterAccountIdT&& value) { SetMasterAccountId(std::forward<MasterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline RelationshipStatus GetRelationshipStatus() const { return m_relationshipStatus; }
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }
    inline void SetRelationshipStatus(RelationshipStatus value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }
    inline Member& WithRelationshipStatus(RelationshipStatus value) { SetRelationshipStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Member& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Member& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Member& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_administratorAccountId;
    bool m_administratorAccountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt{};
    bool m_invitedAtHasBeenSet = false;

    Aws::String m_masterAccountId;
    bool m_masterAccountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus{RelationshipStatus::NOT_SET};
    bool m_relationshipStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
