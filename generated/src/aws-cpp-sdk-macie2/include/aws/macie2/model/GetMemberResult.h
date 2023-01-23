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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class GetMemberResult
  {
  public:
    AWS_MACIE2_API GetMemberResult();
    AWS_MACIE2_API GetMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline GetMemberResult& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline GetMemberResult& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the account.</p>
     */
    inline GetMemberResult& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline const Aws::String& GetAdministratorAccountId() const{ return m_administratorAccountId; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(const Aws::String& value) { m_administratorAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(Aws::String&& value) { m_administratorAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline void SetAdministratorAccountId(const char* value) { m_administratorAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline GetMemberResult& WithAdministratorAccountId(const Aws::String& value) { SetAdministratorAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline GetMemberResult& WithAdministratorAccountId(Aws::String&& value) { SetAdministratorAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the administrator account.</p>
     */
    inline GetMemberResult& WithAdministratorAccountId(const char* value) { SetAdministratorAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline GetMemberResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline GetMemberResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p>
     */
    inline GetMemberResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The email address for the account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_email = value; }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline void SetEmail(const char* value) { m_email.assign(value); }

    /**
     * <p>The email address for the account.</p>
     */
    inline GetMemberResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline GetMemberResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address for the account.</p>
     */
    inline GetMemberResult& WithEmail(const char* value) { SetEmail(value); return *this;}


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
    inline void SetInvitedAt(const Aws::Utils::DateTime& value) { m_invitedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline void SetInvitedAt(Aws::Utils::DateTime&& value) { m_invitedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline GetMemberResult& WithInvitedAt(const Aws::Utils::DateTime& value) { SetInvitedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when an Amazon Macie
     * membership invitation was last sent to the account. This value is null if an
     * invitation hasn't been sent to the account.</p>
     */
    inline GetMemberResult& WithInvitedAt(Aws::Utils::DateTime&& value) { SetInvitedAt(std::move(value)); return *this;}


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
    inline void SetMasterAccountId(const Aws::String& value) { m_masterAccountId = value; }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline void SetMasterAccountId(Aws::String&& value) { m_masterAccountId = std::move(value); }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline void SetMasterAccountId(const char* value) { m_masterAccountId.assign(value); }

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline GetMemberResult& WithMasterAccountId(const Aws::String& value) { SetMasterAccountId(value); return *this;}

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline GetMemberResult& WithMasterAccountId(Aws::String&& value) { SetMasterAccountId(std::move(value)); return *this;}

    /**
     * <p>(Deprecated) The Amazon Web Services account ID for the administrator
     * account. This property has been replaced by the administratorAccountId property
     * and is retained only for backward compatibility.</p>
     */
    inline GetMemberResult& WithMasterAccountId(const char* value) { SetMasterAccountId(value); return *this;}


    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline const RelationshipStatus& GetRelationshipStatus() const{ return m_relationshipStatus; }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetRelationshipStatus(const RelationshipStatus& value) { m_relationshipStatus = value; }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetRelationshipStatus(RelationshipStatus&& value) { m_relationshipStatus = std::move(value); }

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline GetMemberResult& WithRelationshipStatus(const RelationshipStatus& value) { SetRelationshipStatus(value); return *this;}

    /**
     * <p>The current status of the relationship between the account and the
     * administrator account.</p>
     */
    inline GetMemberResult& WithRelationshipStatus(RelationshipStatus&& value) { SetRelationshipStatus(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the account in Amazon Macie.</p>
     */
    inline GetMemberResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline GetMemberResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, of the most recent
     * change to the status of the relationship between the account and the
     * administrator account.</p>
     */
    inline GetMemberResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;

    Aws::String m_administratorAccountId;

    Aws::String m_arn;

    Aws::String m_email;

    Aws::Utils::DateTime m_invitedAt;

    Aws::String m_masterAccountId;

    RelationshipStatus m_relationshipStatus;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
