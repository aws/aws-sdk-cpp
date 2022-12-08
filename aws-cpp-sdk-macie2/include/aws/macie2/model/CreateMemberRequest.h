/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/AccountDetail.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class CreateMemberRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API CreateMemberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMember"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline const AccountDetail& GetAccount() const{ return m_account; }

    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline void SetAccount(const AccountDetail& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline void SetAccount(AccountDetail&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline CreateMemberRequest& WithAccount(const AccountDetail& value) { SetAccount(value); return *this;}

    /**
     * <p>The details of the account to associate with the administrator account.</p>
     */
    inline CreateMemberRequest& WithAccount(AccountDetail&& value) { SetAccount(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * account in Amazon Macie.</p> <p>An account can have a maximum of 50 tags. Each
     * tag consists of a tag key and an associated tag value. The maximum length of a
     * tag key is 128 characters. The maximum length of a tag value is 256
     * characters.</p>
     */
    inline CreateMemberRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AccountDetail m_account;
    bool m_accountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
