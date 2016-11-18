﻿/*
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
#include <aws/glacier/model/VaultLockPolicy.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>The input values for <code>InitiateVaultLock</code>.</p>
   */
  class AWS_GLACIER_API InitiateVaultLockRequest : public GlacierRequest
  {
  public:
    InitiateVaultLockRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline InitiateVaultLockRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline InitiateVaultLockRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you
     * specify your account ID, do not include any hyphens (apos-apos) in the ID.</p>
     */
    inline InitiateVaultLockRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

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
    inline InitiateVaultLockRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline InitiateVaultLockRequest& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline InitiateVaultLockRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline const VaultLockPolicy& GetPolicy() const{ return m_policy; }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline void SetPolicy(const VaultLockPolicy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline void SetPolicy(VaultLockPolicy&& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline InitiateVaultLockRequest& WithPolicy(const VaultLockPolicy& value) { SetPolicy(value); return *this;}

    /**
     * <p>The vault lock policy as a JSON string, which uses "\" as an escape
     * character.</p>
     */
    inline InitiateVaultLockRequest& WithPolicy(VaultLockPolicy&& value) { SetPolicy(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    VaultLockPolicy m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
