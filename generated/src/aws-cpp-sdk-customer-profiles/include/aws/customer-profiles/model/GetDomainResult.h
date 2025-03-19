/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/DomainStats.h>
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
  class GetDomainResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetDomainResult() = default;
    AWS_CUSTOMERPROFILES_API GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetDomainResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const { return m_defaultExpirationDays; }
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDaysHasBeenSet = true; m_defaultExpirationDays = value; }
    inline GetDomainResult& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const { return m_defaultEncryptionKey; }
    template<typename DefaultEncryptionKeyT = Aws::String>
    void SetDefaultEncryptionKey(DefaultEncryptionKeyT&& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = std::forward<DefaultEncryptionKeyT>(value); }
    template<typename DefaultEncryptionKeyT = Aws::String>
    GetDomainResult& WithDefaultEncryptionKey(DefaultEncryptionKeyT&& value) { SetDefaultEncryptionKey(std::forward<DefaultEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const { return m_deadLetterQueueUrl; }
    template<typename DeadLetterQueueUrlT = Aws::String>
    void SetDeadLetterQueueUrl(DeadLetterQueueUrlT&& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = std::forward<DeadLetterQueueUrlT>(value); }
    template<typename DeadLetterQueueUrlT = Aws::String>
    GetDomainResult& WithDeadLetterQueueUrl(DeadLetterQueueUrlT&& value) { SetDeadLetterQueueUrl(std::forward<DeadLetterQueueUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage-specific statistics about the domain.</p>
     */
    inline const DomainStats& GetStats() const { return m_stats; }
    template<typename StatsT = DomainStats>
    void SetStats(StatsT&& value) { m_statsHasBeenSet = true; m_stats = std::forward<StatsT>(value); }
    template<typename StatsT = DomainStats>
    GetDomainResult& WithStats(StatsT&& value) { SetStats(std::forward<StatsT>(value)); return *this;}
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
    inline const MatchingResponse& GetMatching() const { return m_matching; }
    template<typename MatchingT = MatchingResponse>
    void SetMatching(MatchingT&& value) { m_matchingHasBeenSet = true; m_matching = std::forward<MatchingT>(value); }
    template<typename MatchingT = MatchingResponse>
    GetDomainResult& WithMatching(MatchingT&& value) { SetMatching(std::forward<MatchingT>(value)); return *this;}
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
    inline const RuleBasedMatchingResponse& GetRuleBasedMatching() const { return m_ruleBasedMatching; }
    template<typename RuleBasedMatchingT = RuleBasedMatchingResponse>
    void SetRuleBasedMatching(RuleBasedMatchingT&& value) { m_ruleBasedMatchingHasBeenSet = true; m_ruleBasedMatching = std::forward<RuleBasedMatchingT>(value); }
    template<typename RuleBasedMatchingT = RuleBasedMatchingResponse>
    GetDomainResult& WithRuleBasedMatching(RuleBasedMatchingT&& value) { SetRuleBasedMatching(std::forward<RuleBasedMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDomainResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetDomainResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDomainResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDomainResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    int m_defaultExpirationDays{0};
    bool m_defaultExpirationDaysHasBeenSet = false;

    Aws::String m_defaultEncryptionKey;
    bool m_defaultEncryptionKeyHasBeenSet = false;

    Aws::String m_deadLetterQueueUrl;
    bool m_deadLetterQueueUrlHasBeenSet = false;

    DomainStats m_stats;
    bool m_statsHasBeenSet = false;

    MatchingResponse m_matching;
    bool m_matchingHasBeenSet = false;

    RuleBasedMatchingResponse m_ruleBasedMatching;
    bool m_ruleBasedMatchingHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
