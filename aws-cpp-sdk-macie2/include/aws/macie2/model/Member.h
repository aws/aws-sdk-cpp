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
    AWS_MACIE2_API Member();
    AWS_MACIE2_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline const Aws::String& GetAdministratorAccountId() const{ return m_administratorAccountId; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline bool AdministratorAccountIdHasBeenSet() const { return m_administratorAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(const Aws::String& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(Aws::String&& value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(const char* value) { m_administratorAccountIdHasBeenSet = true; m_administratorAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline Member& WithAdministratorAccountId(const Aws::String& value) { SetAdministratorAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline Member& WithAdministratorAccountId(Aws::String&& value) { SetAdministratorAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline Member& WithAdministratorAccountId(const char* value) { SetAdministratorAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline Member& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline Member& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline Member& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The email address for the account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address for the account.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline Member& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline Member& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline Member& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedAt() const{ return m_invitedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline bool InvitedAtHasBeenSet() const { return m_invitedAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline void SetInvitedAt(const Aws::Utils::DateTime& value) { m_invitedAtHasBeenSet = true; m_invitedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline void SetInvitedAt(Aws::Utils::DateTime&& value) { m_invitedAtHasBeenSet = true; m_invitedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline Member& WithInvitedAt(const Aws::Utils::DateTime& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline Member& WithInvitedAt(Aws::Utils::DateTime&& value) { SetInvitedAt(std::move(value)); return *this;}


    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline const Aws::String& GetMasterAccountId() const{ return m_masterAccountId; }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline bool MasterAccountIdHasBeenSet() const { return m_masterAccountIdHasBeenSet; }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline void SetMasterAccountId(const Aws::String& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = value; }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline void SetMasterAccountId(Aws::String&& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = std::move(value); }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline void SetMasterAccountId(const char* value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId.assign(value); }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline Member& WithMasterAccountId(const Aws::String& value) { SetMasterAccountId(value); return *this;}

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline Member& WithMasterAccountId(Aws::String&& value) { SetMasterAccountId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline Member& WithMasterAccountId(const char* value) { SetMasterAccountId(value); return *this;}


    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline const RelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline bool RelationshipStatusHasBeenSet() const { return m_relationshipStatusHasBeenSet; }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetRelationshipStatus(const RelationshipStatus& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = value; }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetRelationshipStatus(RelationshipStatus&& value) { m_relationshipStatusHasBeenSet = true; m_relationshipStatus = std::move(value); }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline Member& WithRelationshipStatus(const RelationshipStatus& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline Member& WithRelationshipStatus(RelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline Member& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline Member& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline Member& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_administratorAccountId;
    bool m_administratorAccountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::Utils::DateTime m_invitedAt;
    bool m_invitedAtHasBeenSet = false;

    Aws::String m_masterAccountId;
    bool m_masterAccountIdHasBeenSet = false;

    RelationshipStatus m_relationshipStatus;
    bool m_relationshipStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
