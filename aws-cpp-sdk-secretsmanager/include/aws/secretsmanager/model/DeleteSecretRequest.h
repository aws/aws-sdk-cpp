/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline DeleteSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline DeleteSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to delete. You can specify either the
     * Amazon Resource Name (ARN) or the friendly name of the secret.</p> <note> <p>If
     * you specify an ARN, we generally recommend that you specify a complete ARN. You
     * can specify a partial ARN too—for example, if you don’t include the final hyphen
     * and six random characters that Secrets Manager adds at the end of the ARN when
     * you created the secret. A partial ARN match can work as long as it uniquely
     * matches only one secret. However, if your secret has a name that ends in a
     * hyphen followed by six characters (before Secrets Manager adds the hyphen and
     * six characters to the ARN) and you try to use that as a partial ARN, then those
     * characters cause Secrets Manager to assume that you’re specifying a complete
     * ARN. This confusion can cause unexpected results. To avoid this situation, we
     * recommend that you don’t create secret names that end with a hyphen followed by
     * six characters.</p> </note>
     */
    inline DeleteSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before it
     * can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days. The default value is 30.</p>
     */
    inline long long GetRecoveryWindowInDays() const{ return m_recoveryWindowInDays; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before it
     * can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days. The default value is 30.</p>
     */
    inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before it
     * can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days. The default value is 30.</p>
     */
    inline void SetRecoveryWindowInDays(long long value) { m_recoveryWindowInDaysHasBeenSet = true; m_recoveryWindowInDays = value; }

    /**
     * <p>(Optional) Specifies the number of days that Secrets Manager waits before it
     * can delete the secret. You can't use both this parameter and the
     * <code>ForceDeleteWithoutRecovery</code> parameter in the same API call.</p>
     * <p>This value can range from 7 to 30 days. The default value is 30.</p>
     */
    inline DeleteSecretRequest& WithRecoveryWindowInDays(long long value) { SetRecoveryWindowInDays(value); return *this;}


    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p> <important> <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. It is permanently lost.</p> </important>
     */
    inline bool GetForceDeleteWithoutRecovery() const{ return m_forceDeleteWithoutRecovery; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p> <important> <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. It is permanently lost.</p> </important>
     */
    inline bool ForceDeleteWithoutRecoveryHasBeenSet() const { return m_forceDeleteWithoutRecoveryHasBeenSet; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p> <important> <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. It is permanently lost.</p> </important>
     */
    inline void SetForceDeleteWithoutRecovery(bool value) { m_forceDeleteWithoutRecoveryHasBeenSet = true; m_forceDeleteWithoutRecovery = value; }

    /**
     * <p>(Optional) Specifies that the secret is to be deleted without any recovery
     * window. You can't use both this parameter and the
     * <code>RecoveryWindowInDays</code> parameter in the same API call.</p> <p>An
     * asynchronous background process performs the actual deletion, so there can be a
     * short delay before the operation completes. If you write code to delete and then
     * immediately recreate a secret with the same name, ensure that your code includes
     * appropriate back off and retry logic.</p> <important> <p>Use this parameter with
     * caution. This parameter causes the operation to skip the normal waiting period
     * before the permanent deletion that AWS would normally impose with the
     * <code>RecoveryWindowInDays</code> parameter. If you delete a secret with the
     * <code>ForceDeleteWithouRecovery</code> parameter, then you have no opportunity
     * to recover the secret. It is permanently lost.</p> </important>
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
