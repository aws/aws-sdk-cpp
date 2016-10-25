/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>The input values for <code>AddTagsToVault</code>.</p>
   */
  class AWS_GLACIER_API AddTagsToVaultRequest : public GlacierRequest
  {
  public:
    AddTagsToVaultRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline AddTagsToVaultRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline AddTagsToVaultRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline AddTagsToVaultRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline AddTagsToVaultRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline AddTagsToVaultRequest& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline AddTagsToVaultRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The tags to add to the vault. Each tag is composed of a key and a value. The
     * value can be an empty string.</p>
     */
    inline AddTagsToVaultRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
