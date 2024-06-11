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
  class CreateDomainRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const{ return m_defaultExpirationDays; }
    inline bool DefaultExpirationDaysHasBeenSet() const { return m_defaultExpirationDaysHasBeenSet; }
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDaysHasBeenSet = true; m_defaultExpirationDays = value; }
    inline CreateDomainRequest& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const{ return m_defaultEncryptionKey; }
    inline bool DefaultEncryptionKeyHasBeenSet() const { return m_defaultEncryptionKeyHasBeenSet; }
    inline void SetDefaultEncryptionKey(const Aws::String& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = value; }
    inline void SetDefaultEncryptionKey(Aws::String&& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = std::move(value); }
    inline void SetDefaultEncryptionKey(const char* value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey.assign(value); }
    inline CreateDomainRequest& WithDefaultEncryptionKey(const Aws::String& value) { SetDefaultEncryptionKey(value); return *this;}
    inline CreateDomainRequest& WithDefaultEncryptionKey(Aws::String&& value) { SetDefaultEncryptionKey(std::move(value)); return *this;}
    inline CreateDomainRequest& WithDefaultEncryptionKey(const char* value) { SetDefaultEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const{ return m_deadLetterQueueUrl; }
    inline bool DeadLetterQueueUrlHasBeenSet() const { return m_deadLetterQueueUrlHasBeenSet; }
    inline void SetDeadLetterQueueUrl(const Aws::String& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = value; }
    inline void SetDeadLetterQueueUrl(Aws::String&& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = std::move(value); }
    inline void SetDeadLetterQueueUrl(const char* value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl.assign(value); }
    inline CreateDomainRequest& WithDeadLetterQueueUrl(const Aws::String& value) { SetDeadLetterQueueUrl(value); return *this;}
    inline CreateDomainRequest& WithDeadLetterQueueUrl(Aws::String&& value) { SetDeadLetterQueueUrl(std::move(value)); return *this;}
    inline CreateDomainRequest& WithDeadLetterQueueUrl(const char* value) { SetDeadLetterQueueUrl(value); return *this;}
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
    inline const MatchingRequest& GetMatching() const{ return m_matching; }
    inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }
    inline void SetMatching(const MatchingRequest& value) { m_matchingHasBeenSet = true; m_matching = value; }
    inline void SetMatching(MatchingRequest&& value) { m_matchingHasBeenSet = true; m_matching = std::move(value); }
    inline CreateDomainRequest& WithMatching(const MatchingRequest& value) { SetMatching(value); return *this;}
    inline CreateDomainRequest& WithMatching(MatchingRequest&& value) { SetMatching(std::move(value)); return *this;}
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
    inline const RuleBasedMatchingRequest& GetRuleBasedMatching() const{ return m_ruleBasedMatching; }
    inline bool RuleBasedMatchingHasBeenSet() const { return m_ruleBasedMatchingHasBeenSet; }
    inline void SetRuleBasedMatching(const RuleBasedMatchingRequest& value) { m_ruleBasedMatchingHasBeenSet = true; m_ruleBasedMatching = value; }
    inline void SetRuleBasedMatching(RuleBasedMatchingRequest&& value) { m_ruleBasedMatchingHasBeenSet = true; m_ruleBasedMatching = std::move(value); }
    inline CreateDomainRequest& WithRuleBasedMatching(const RuleBasedMatchingRequest& value) { SetRuleBasedMatching(value); return *this;}
    inline CreateDomainRequest& WithRuleBasedMatching(RuleBasedMatchingRequest&& value) { SetRuleBasedMatching(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDomainRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDomainRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDomainRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDomainRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDomainRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDomainRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDomainRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    int m_defaultExpirationDays;
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
