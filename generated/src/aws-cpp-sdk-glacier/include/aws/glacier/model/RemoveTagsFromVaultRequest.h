﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>The input value for <code>RemoveTagsFromVaultInput</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/RemoveTagsFromVaultInput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsFromVaultRequest : public GlacierRequest
  {
  public:
    AWS_GLACIER_API RemoveTagsFromVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromVault"; }

    AWS_GLACIER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon S3 Glacier uses the AWS account
     * ID associated with the credentials used to sign the request. If you use an
     * account ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RemoveTagsFromVaultRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RemoveTagsFromVaultRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RemoveTagsFromVaultRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }
    inline RemoveTagsFromVaultRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}
    inline RemoveTagsFromVaultRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}
    inline RemoveTagsFromVaultRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag keys. Each corresponding tag is removed from the vault.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }
    inline RemoveTagsFromVaultRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}
    inline RemoveTagsFromVaultRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}
    inline RemoveTagsFromVaultRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    inline RemoveTagsFromVaultRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }
    inline RemoveTagsFromVaultRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
