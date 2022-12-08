/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchingRequest.h>
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
    AWS_CUSTOMERPROFILES_API UpdateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline UpdateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline int GetDefaultExpirationDays() const{ return m_defaultExpirationDays; }

    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline bool DefaultExpirationDaysHasBeenSet() const { return m_defaultExpirationDaysHasBeenSet; }

    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline void SetDefaultExpirationDays(int value) { m_defaultExpirationDaysHasBeenSet = true; m_defaultExpirationDays = value; }

    /**
     * <p>The default number of days until the data within the domain expires.</p>
     */
    inline UpdateDomainRequest& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}


    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline const Aws::String& GetDefaultEncryptionKey() const{ return m_defaultEncryptionKey; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline bool DefaultEncryptionKeyHasBeenSet() const { return m_defaultEncryptionKeyHasBeenSet; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline void SetDefaultEncryptionKey(const Aws::String& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = value; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline void SetDefaultEncryptionKey(Aws::String&& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = std::move(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline void SetDefaultEncryptionKey(const char* value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey.assign(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline UpdateDomainRequest& WithDefaultEncryptionKey(const Aws::String& value) { SetDefaultEncryptionKey(value); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline UpdateDomainRequest& WithDefaultEncryptionKey(Aws::String&& value) { SetDefaultEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage. If specified as an
     * empty string, it will clear any existing value.</p>
     */
    inline UpdateDomainRequest& WithDefaultEncryptionKey(const char* value) { SetDefaultEncryptionKey(value); return *this;}


    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const{ return m_deadLetterQueueUrl; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline bool DeadLetterQueueUrlHasBeenSet() const { return m_deadLetterQueueUrlHasBeenSet; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(const Aws::String& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = value; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(Aws::String&& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = std::move(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(const char* value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl.assign(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline UpdateDomainRequest& WithDeadLetterQueueUrl(const Aws::String& value) { SetDeadLetterQueueUrl(value); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline UpdateDomainRequest& WithDeadLetterQueueUrl(Aws::String&& value) { SetDeadLetterQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. If specified as an
     * empty string, it will clear any existing value. You must set up a policy on the
     * DeadLetterQueue for the SendMessage operation to enable Amazon Connect Customer
     * Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline UpdateDomainRequest& WithDeadLetterQueueUrl(const char* value) { SetDeadLetterQueueUrl(value); return *this;}


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
    inline bool MatchingHasBeenSet() const { return m_matchingHasBeenSet; }

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
    inline void SetMatching(const MatchingRequest& value) { m_matchingHasBeenSet = true; m_matching = value; }

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
    inline void SetMatching(MatchingRequest&& value) { m_matchingHasBeenSet = true; m_matching = std::move(value); }

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
    inline UpdateDomainRequest& WithMatching(const MatchingRequest& value) { SetMatching(value); return *this;}

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
    inline UpdateDomainRequest& WithMatching(MatchingRequest&& value) { SetMatching(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline UpdateDomainRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
