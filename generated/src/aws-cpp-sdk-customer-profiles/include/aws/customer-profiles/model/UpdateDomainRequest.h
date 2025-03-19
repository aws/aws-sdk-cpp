/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchingRequest.h>
#include <aws/customer-profiles/model/RuleBasedMatchingRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class UpdateDomainRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API UpdateDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const { return m_defaultExpirationDays; }
    inline bool DefaultExpirationDaysHasBeenSet() const { return m_defaultExpirationDaysHasBeenSet; }
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDaysHasBeenSet = true; m_defaultExpirationDays = value; }
    inline UpdateDomainRequest& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const { return m_defaultEncryptionKey; }
    inline bool DefaultEncryptionKeyHasBeenSet() const { return m_defaultEncryptionKeyHasBeenSet; }
    template<typename DefaultEncryptionKeyT = Aws::String>
    void SetDefaultEncryptionKey(DefaultEncryptionKeyT&& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = std::forward<DefaultEncryptionKeyT>(value); }
    template<typename DefaultEncryptionKeyT = Aws::String>
    UpdateDomainRequest& WithDefaultEncryptionKey(DefaultEncryptionKeyT&& value) { SetDefaultEncryptionKey(std::forward<DefaultEncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const { return m_deadLetterQueueUrl; }
    inline bool DeadLetterQueueUrlHasBeenSet() const { return m_deadLetterQueueUrlHasBeenSet; }
    template<typename DeadLetterQueueUrlT = Aws::String>
    void SetDeadLetterQueueUrl(DeadLetterQueueUrlT&& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = std::forward<DeadLetterQueueUrlT>(value); }
    template<typename DeadLetterQueueUrlT = Aws::String>
    UpdateDomainRequest& WithDeadLetterQueueUrl(DeadLetterQueueUrlT&& value) { SetDeadLetterQueueUrl(std::forward<DeadLetterQueueUrlT>(value)); return *this;}
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
    inline const MatchingRequest& GetMatching() const { return m_matching; }
    inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
    template<typename MatchingT = MatchingRequest>
    void SetMatching(MatchingT&& value) { m_matchingHasBeenSet = true; m_matching = std::forward<MatchingT>(value); }
    template<typename MatchingT = MatchingRequest>
    UpdateDomainRequest& WithMatching(MatchingT&& value) { SetMatching(std::forward<MatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process of matching duplicate profiles using the rule-Based matching. If
     * <code>RuleBasedMatching</code> = true, Amazon Connect Customer Profiles will
     * start to match and merge your profiles according to your configuration in the
     * <code>RuleBasedMatchingRequest</code>. You can use the
     * <code>ListRuleBasedMatches</code> and <code>GetSimilarProfiles</code> API to
     * return and review the results. Also, if you have configured
     * <code>ExportingConfig</code> in the <code>RuleBasedMatchingRequest</code>, you
     * can download the results from S3.</p>
     */
    inline const RuleBasedMatchingRequest& GetRuleBasedMatching() const { return m_ruleBasedMatching; }
    inline bool RuleBasedMatchingHasBeenSet() const { return m_ruleBasedMatchingHasBeenSet; }
    template<typename RuleBasedMatchingT = RuleBasedMatchingRequest>
    void SetRuleBasedMatching(RuleBasedMatchingT&& value) { m_ruleBasedMatchingHasBeenSet = true; m_ruleBasedMatching = std::forward<RuleBasedMatchingT>(value); }
    template<typename RuleBasedMatchingT = RuleBasedMatchingRequest>
    UpdateDomainRequest& WithRuleBasedMatching(RuleBasedMatchingT&& value) { SetRuleBasedMatching(std::forward<RuleBasedMatchingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateDomainRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateDomainRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    MatchingRequest m_matching;
    bool m_matchingHasBeenSet = false;

    RuleBasedMatchingRequest m_ruleBasedMatching;
    bool m_ruleBasedMatchingHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
