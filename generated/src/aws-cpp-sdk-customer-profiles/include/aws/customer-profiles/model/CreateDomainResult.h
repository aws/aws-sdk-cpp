﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchingResponse.h>
#include <aws/customer-profiles/model/RuleBasedMatchingResponse.h>
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
  class CreateDomainResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateDomainResult();
    AWS_CUSTOMERPROFILES_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline CreateDomainResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateDomainResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateDomainResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const{ return m_defaultExpirationDays; }
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDays = value; }
    inline CreateDomainResult& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const{ return m_defaultEncryptionKey; }
    inline void SetDefaultEncryptionKey(const Aws::String& value) { m_defaultEncryptionKey = value; }
    inline void SetDefaultEncryptionKey(Aws::String&& value) { m_defaultEncryptionKey = std::move(value); }
    inline void SetDefaultEncryptionKey(const char* value) { m_defaultEncryptionKey.assign(value); }
    inline CreateDomainResult& WithDefaultEncryptionKey(const Aws::String& value) { SetDefaultEncryptionKey(value); return *this;}
    inline CreateDomainResult& WithDefaultEncryptionKey(Aws::String&& value) { SetDefaultEncryptionKey(std::move(value)); return *this;}
    inline CreateDomainResult& WithDefaultEncryptionKey(const char* value) { SetDefaultEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const{ return m_deadLetterQueueUrl; }
    inline void SetDeadLetterQueueUrl(const Aws::String& value) { m_deadLetterQueueUrl = value; }
    inline void SetDeadLetterQueueUrl(Aws::String&& value) { m_deadLetterQueueUrl = std::move(value); }
    inline void SetDeadLetterQueueUrl(const char* value) { m_deadLetterQueueUrl.assign(value); }
    inline CreateDomainResult& WithDeadLetterQueueUrl(const Aws::String& value) { SetDeadLetterQueueUrl(value); return *this;}
    inline CreateDomainResult& WithDeadLetterQueueUrl(Aws::String&& value) { SetDeadLetterQueueUrl(std::move(value)); return *this;}
    inline CreateDomainResult& WithDeadLetterQueueUrl(const char* value) { SetDeadLetterQueueUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process of matching duplicate profiles. If <code>Matching</code> =
     * <code>true</code>, Amazon Connect Customer Profiles starts a weekly batch
     * process called Identity Resolution Job. If you do not specify a date and time
     * for Identity Resolution Job to run, by default it runs every Saturday at 12AM
     * UTC to detect duplicate profiles in your domains. </p> <p>After the Identity
     * Resolution Job completes, use the <a
     * href="https://docs.aws.amazon.com/customerprofiles/latest/APIReference/API_GetMatches.html">GetMatches</a>
     * API to return and review the results. Or, if you have configured
     * <code>ExportingConfig</code> in the <code>MatchingRequest</code>, you can
     * download the results from S3.</p>
     */
    inline const MatchingResponse& GetMatching() const{ return m_matching; }
    inline void SetMatching(const MatchingResponse& value) { m_matching = value; }
    inline void SetMatching(MatchingResponse&& value) { m_matching = std::move(value); }
    inline CreateDomainResult& WithMatching(const MatchingResponse& value) { SetMatching(value); return *this;}
    inline CreateDomainResult& WithMatching(MatchingResponse&& value) { SetMatching(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process of matching duplicate profiles using the Rule-Based matching. If
     * <code>RuleBasedMatching</code> = true, Amazon Connect Customer Profiles will
     * start to match and merge your profiles according to your configuration in the
     * <code>RuleBasedMatchingRequest</code>. You can use the
     * <code>ListRuleBasedMatches</code> and <code>GetSimilarProfiles</code> API to
     * return and review the results. Also, if you have configured
     * <code>ExportingConfig</code> in the <code>RuleBasedMatchingRequest</code>, you
     * can download the results from S3.</p>
     */
    inline const RuleBasedMatchingResponse& GetRuleBasedMatching() const{ return m_ruleBasedMatching; }
    inline void SetRuleBasedMatching(const RuleBasedMatchingResponse& value) { m_ruleBasedMatching = value; }
    inline void SetRuleBasedMatching(RuleBasedMatchingResponse&& value) { m_ruleBasedMatching = std::move(value); }
    inline CreateDomainResult& WithRuleBasedMatching(const RuleBasedMatchingResponse& value) { SetRuleBasedMatching(value); return *this;}
    inline CreateDomainResult& WithRuleBasedMatching(RuleBasedMatchingResponse&& value) { SetRuleBasedMatching(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateDomainResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateDomainResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline CreateDomainResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline CreateDomainResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateDomainResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDomainResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    int m_defaultExpirationDays;

    Aws::String m_defaultEncryptionKey;

    Aws::String m_deadLetterQueueUrl;

    MatchingResponse m_matching;

    RuleBasedMatchingResponse m_ruleBasedMatching;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
