﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchingResponse.h>
#include <aws/core/utils/DateTime.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class AWS_CUSTOMERPROFILES_API UpdateDomainResult
  {
  public:
    UpdateDomainResult();
    UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const{ return m_defaultExpirationDays; }

    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDays = value; }

    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline UpdateDomainResult& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}


    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const{ return m_defaultEncryptionKey; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(const Aws::String& value) { m_defaultEncryptionKey = value; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(Aws::String&& value) { m_defaultEncryptionKey = std::move(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(const char* value) { m_defaultEncryptionKey.assign(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline UpdateDomainResult& WithDefaultEncryptionKey(const Aws::String& value) { SetDefaultEncryptionKey(value); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline UpdateDomainResult& WithDefaultEncryptionKey(Aws::String&& value) { SetDefaultEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline UpdateDomainResult& WithDefaultEncryptionKey(const char* value) { SetDefaultEncryptionKey(value); return *this;}


    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const{ return m_deadLetterQueueUrl; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline void SetDeadLetterQueueUrl(const Aws::String& value) { m_deadLetterQueueUrl = value; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline void SetDeadLetterQueueUrl(Aws::String&& value) { m_deadLetterQueueUrl = std::move(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline void SetDeadLetterQueueUrl(const char* value) { m_deadLetterQueueUrl.assign(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline UpdateDomainResult& WithDeadLetterQueueUrl(const Aws::String& value) { SetDeadLetterQueueUrl(value); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline UpdateDomainResult& WithDeadLetterQueueUrl(Aws::String&& value) { SetDeadLetterQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline UpdateDomainResult& WithDeadLetterQueueUrl(const char* value) { SetDeadLetterQueueUrl(value); return *this;}


    /**
     * <p>The process of matching duplicate profiles. If Matching = true, Amazon
     * Connect Customer Profiles starts a weekly batch process every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. After that batch process
     * completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. </p>
     */
    inline const MatchingResponse& GetMatching() const{ return m_matching; }

    /**
     * <p>The process of matching duplicate profiles. If Matching = true, Amazon
     * Connect Customer Profiles starts a weekly batch process every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. After that batch process
     * completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. </p>
     */
    inline void SetMatching(const MatchingResponse& value) { m_matching = value; }

    /**
     * <p>The process of matching duplicate profiles. If Matching = true, Amazon
     * Connect Customer Profiles starts a weekly batch process every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. After that batch process
     * completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. </p>
     */
    inline void SetMatching(MatchingResponse&& value) { m_matching = std::move(value); }

    /**
     * <p>The process of matching duplicate profiles. If Matching = true, Amazon
     * Connect Customer Profiles starts a weekly batch process every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. After that batch process
     * completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. </p>
     */
    inline UpdateDomainResult& WithMatching(const MatchingResponse& value) { SetMatching(value); return *this;}

    /**
     * <p>The process of matching duplicate profiles. If Matching = true, Amazon
     * Connect Customer Profiles starts a weekly batch process every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. After that batch process
     * completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. </p>
     */
    inline UpdateDomainResult& WithMatching(MatchingResponse&& value) { SetMatching(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline UpdateDomainResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline UpdateDomainResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline UpdateDomainResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline UpdateDomainResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;

    int m_defaultExpirationDays;

    Aws::String m_defaultEncryptionKey;

    Aws::String m_deadLetterQueueUrl;

    MatchingResponse m_matching;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
