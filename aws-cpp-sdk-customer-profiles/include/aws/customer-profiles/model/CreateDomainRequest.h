/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CUSTOMERPROFILES_API CreateDomainRequest : public CustomerProfilesRequest
  {
  public:
    CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    Aws::String SerializePayload() const override;


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
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline CreateDomainRequest& WithDefaultExpirationDays(int value) { SetDefaultExpirationDays(value); return *this;}


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
    inline bool DefaultEncryptionKeyHasBeenSet() const { return m_defaultEncryptionKeyHasBeenSet; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(const Aws::String& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = value; }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(Aws::String&& value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey = std::move(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline void SetDefaultEncryptionKey(const char* value) { m_defaultEncryptionKeyHasBeenSet = true; m_defaultEncryptionKey.assign(value); }

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline CreateDomainRequest& WithDefaultEncryptionKey(const Aws::String& value) { SetDefaultEncryptionKey(value); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline CreateDomainRequest& WithDefaultEncryptionKey(Aws::String&& value) { SetDefaultEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The default encryption key, which is an AWS managed key, is used when no
     * specific type of encryption key is specified. It is used to encrypt all data
     * before it is placed in permanent or semi-permanent storage.</p>
     */
    inline CreateDomainRequest& WithDefaultEncryptionKey(const char* value) { SetDefaultEncryptionKey(value); return *this;}


    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline const Aws::String& GetDeadLetterQueueUrl() const{ return m_deadLetterQueueUrl; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline bool DeadLetterQueueUrlHasBeenSet() const { return m_deadLetterQueueUrlHasBeenSet; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(const Aws::String& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = value; }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(Aws::String&& value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl = std::move(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline void SetDeadLetterQueueUrl(const char* value) { m_deadLetterQueueUrlHasBeenSet = true; m_deadLetterQueueUrl.assign(value); }

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline CreateDomainRequest& WithDeadLetterQueueUrl(const Aws::String& value) { SetDeadLetterQueueUrl(value); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline CreateDomainRequest& WithDeadLetterQueueUrl(Aws::String&& value) { SetDeadLetterQueueUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the SQS dead letter queue, which is used for reporting errors
     * associated with ingesting data from third party applications. You must set up a
     * policy on the DeadLetterQueue for the SendMessage operation to enable Amazon
     * Connect Customer Profiles to send messages to the DeadLetterQueue.</p>
     */
    inline CreateDomainRequest& WithDeadLetterQueueUrl(const char* value) { SetDeadLetterQueueUrl(value); return *this;}


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
    inline CreateDomainRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateDomainRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    int m_defaultExpirationDays;
    bool m_defaultExpirationDaysHasBeenSet;

    Aws::String m_defaultEncryptionKey;
    bool m_defaultEncryptionKeyHasBeenSet;

    Aws::String m_deadLetterQueueUrl;
    bool m_deadLetterQueueUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
