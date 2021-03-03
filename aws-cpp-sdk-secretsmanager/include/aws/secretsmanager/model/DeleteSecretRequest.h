/**
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
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline DeleteSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline DeleteSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret to delete. You can specify either the Amazon Resource
     * Name (ARN) or the friendly name of the secret.</p>  <p>If you specify an
     * ARN, we generally recommend that you specify a complete ARN. You can specify a
     * partial ARN too—for example, if you don’t include the final hyphen and six
     * random characters that Secrets Manager adds at the end of the ARN when you
     * created the secret. A partial ARN match can work as long as it uniquely matches
     * only one secret. However, if your secret has a name that ends in a hyphen
     * followed by six characters (before Secrets Manager adds the hyphen and six
     * characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names ending with a hyphen followed by
     * six characters.</p> <p>If you specify an incomplete ARN without the random
     * suffix, and instead provide the 'friendly name', you <i>must</i> not include the
     * random suffix. If you do include the random suffix added by Secrets Manager, you
     * receive either a <i>ResourceNotFoundException</i> or an
     * <i>AccessDeniedException</i> error, depending on your permissions.</p> 
     */
    inline DeleteSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before
     * Secrets Manager can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days with a default value of 30.</p>
     */
    inline long long GetRecoveryWindowInDays() const{ return m_recoveryWindowInDays; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before
     * Secrets Manager can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days with a default value of 30.</p>
     */
    inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before
     * Secrets Manager can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days with a default value of 30.</p>
     */
    inline void SetRecoveryWindowInDays(long long value) { m_recoveryWindowInDaysHasBeenSet = true; m_recoveryWindowInDays = value; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before
     * Secrets Manager can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days with a default value of 30.</p>
     */
    inline DeleteSecretRequest& WithRecoveryWindowInDays(long long value) { SetRecoveryWindowInDays(value); return *this;}


    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p>  <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. You lose the secret permanently.</p> 
     *  <p>If you use this parameter and include a previously deleted or
     * nonexistent secret, the operation does not return the error
     * <code>ResourceNotFoundException</code> in order to correctly handle retries.</p>
     * 
     */
    inline bool GetForceDeleteWithoutRecovery() const{ return m_forceDeleteWithoutRecovery; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p>  <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. You lose the secret permanently.</p> 
     *  <p>If you use this parameter and include a previously deleted or
     * nonexistent secret, the operation does not return the error
     * <code>ResourceNotFoundException</code> in order to correctly handle retries.</p>
     * 
     */
    inline bool ForceDeleteWithoutRecoveryHasBeenSet() const { return m_forceDeleteWithoutRecoveryHasBeenSet; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p>  <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. You lose the secret permanently.</p> 
     *  <p>If you use this parameter and include a previously deleted or
     * nonexistent secret, the operation does not return the error
     * <code>ResourceNotFoundException</code> in order to correctly handle retries.</p>
     * 
     */
    inline void SetForceDeleteWithoutRecovery(bool value) { m_forceDeleteWithoutRecoveryHasBeenSet = true; m_forceDeleteWithoutRecovery = value; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p>  <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. You lose the secret permanently.</p> 
     *  <p>If you use this parameter and include a previously deleted or
     * nonexistent secret, the operation does not return the error
     * <code>ResourceNotFoundException</code> in order to correctly handle retries.</p>
     * 
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
