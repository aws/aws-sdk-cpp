﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API DeleteSecretRequest : public SecretsManagerRequest
  {
  public:
    DeleteSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSecret"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline DeleteSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline DeleteSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN.</p>
     */
    inline DeleteSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The number of days from 7 to 30 that Secrets Manager waits before permanently
     * deleting the secret. You can't use both this parameter and
     * <code>ForceDeleteWithoutRecovery</code> in the same call. If you don't use
     * either, then Secrets Manager defaults to a 30 day recovery window.</p>
     */
    inline long long GetRecoveryWindowInDays() const{ return m_recoveryWindowInDays; }

    /**
     * <p>The number of days from 7 to 30 that Secrets Manager waits before permanently
     * deleting the secret. You can't use both this parameter and
     * <code>ForceDeleteWithoutRecovery</code> in the same call. If you don't use
     * either, then Secrets Manager defaults to a 30 day recovery window.</p>
     */
    inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }

    /**
     * <p>The number of days from 7 to 30 that Secrets Manager waits before permanently
     * deleting the secret. You can't use both this parameter and
     * <code>ForceDeleteWithoutRecovery</code> in the same call. If you don't use
     * either, then Secrets Manager defaults to a 30 day recovery window.</p>
     */
    inline void SetRecoveryWindowInDays(long long value) { m_recoveryWindowInDaysHasBeenSet = true; m_recoveryWindowInDays = value; }

    /**
     * <p>The number of days from 7 to 30 that Secrets Manager waits before permanently
     * deleting the secret. You can't use both this parameter and
     * <code>ForceDeleteWithoutRecovery</code> in the same call. If you don't use
     * either, then Secrets Manager defaults to a 30 day recovery window.</p>
     */
    inline DeleteSecretRequest& WithRecoveryWindowInDays(long long value) { SetRecoveryWindowInDays(value); return *this;}


    /**
     * <p>Specifies whether to delete the secret without any recovery window. You can't
     * use both this parameter and <code>RecoveryWindowInDays</code> in the same call.
     * If you don't use either, then Secrets Manager defaults to a 30 day recovery
     * window.</p> <p>Secrets Manager performs the actual deletion with an asynchronous
     * background process, so there might be a short delay before the secret is
     * permanently deleted. If you delete a secret and then immediately create a secret
     * with the same name, use appropriate back off and retry logic.</p> 
     * <p>Use this parameter with caution. This parameter causes the operation to skip
     * the normal recovery window before the permanent deletion that Secrets Manager
     * would normally impose with the <code>RecoveryWindowInDays</code> parameter. If
     * you delete a secret with the <code>ForceDeleteWithouRecovery</code> parameter,
     * then you have no opportunity to recover the secret. You lose the secret
     * permanently.</p> 
     */
    inline bool GetForceDeleteWithoutRecovery() const{ return m_forceDeleteWithoutRecovery; }

    /**
     * <p>Specifies whether to delete the secret without any recovery window. You can't
     * use both this parameter and <code>RecoveryWindowInDays</code> in the same call.
     * If you don't use either, then Secrets Manager defaults to a 30 day recovery
     * window.</p> <p>Secrets Manager performs the actual deletion with an asynchronous
     * background process, so there might be a short delay before the secret is
     * permanently deleted. If you delete a secret and then immediately create a secret
     * with the same name, use appropriate back off and retry logic.</p> 
     * <p>Use this parameter with caution. This parameter causes the operation to skip
     * the normal recovery window before the permanent deletion that Secrets Manager
     * would normally impose with the <code>RecoveryWindowInDays</code> parameter. If
     * you delete a secret with the <code>ForceDeleteWithouRecovery</code> parameter,
     * then you have no opportunity to recover the secret. You lose the secret
     * permanently.</p> 
     */
    inline bool ForceDeleteWithoutRecoveryHasBeenSet() const { return m_forceDeleteWithoutRecoveryHasBeenSet; }

    /**
     * <p>Specifies whether to delete the secret without any recovery window. You can't
     * use both this parameter and <code>RecoveryWindowInDays</code> in the same call.
     * If you don't use either, then Secrets Manager defaults to a 30 day recovery
     * window.</p> <p>Secrets Manager performs the actual deletion with an asynchronous
     * background process, so there might be a short delay before the secret is
     * permanently deleted. If you delete a secret and then immediately create a secret
     * with the same name, use appropriate back off and retry logic.</p> 
     * <p>Use this parameter with caution. This parameter causes the operation to skip
     * the normal recovery window before the permanent deletion that Secrets Manager
     * would normally impose with the <code>RecoveryWindowInDays</code> parameter. If
     * you delete a secret with the <code>ForceDeleteWithouRecovery</code> parameter,
     * then you have no opportunity to recover the secret. You lose the secret
     * permanently.</p> 
     */
    inline void SetForceDeleteWithoutRecovery(bool value) { m_forceDeleteWithoutRecoveryHasBeenSet = true; m_forceDeleteWithoutRecovery = value; }

    /**
     * <p>Specifies whether to delete the secret without any recovery window. You can't
     * use both this parameter and <code>RecoveryWindowInDays</code> in the same call.
     * If you don't use either, then Secrets Manager defaults to a 30 day recovery
     * window.</p> <p>Secrets Manager performs the actual deletion with an asynchronous
     * background process, so there might be a short delay before the secret is
     * permanently deleted. If you delete a secret and then immediately create a secret
     * with the same name, use appropriate back off and retry logic.</p> 
     * <p>Use this parameter with caution. This parameter causes the operation to skip
     * the normal recovery window before the permanent deletion that Secrets Manager
     * would normally impose with the <code>RecoveryWindowInDays</code> parameter. If
     * you delete a secret with the <code>ForceDeleteWithouRecovery</code> parameter,
     * then you have no opportunity to recover the secret. You lose the secret
     * permanently.</p> 
     */
    inline DeleteSecretRequest& WithForceDeleteWithoutRecovery(bool value) { SetForceDeleteWithoutRecovery(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    long long m_recoveryWindowInDays;
    bool m_recoveryWindowInDaysHasBeenSet;

    bool m_forceDeleteWithoutRecovery;
    bool m_forceDeleteWithoutRecoveryHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
