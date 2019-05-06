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
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API UpdateSecretRequest : public SecretsManagerRequest
  {
  public:
    UpdateSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecret"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline UpdateSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline UpdateSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to modify or to which you want to add a
     * new version. You can specify either the Amazon Resource Name (ARN) or the
     * friendly name of the secret.</p> <note> <p>If you specify an ARN, we generally
     * recommend that you specify a complete ARN. You can specify a partial ARN too—for
     * example, if you don’t include the final hyphen and six random characters that
     * Secrets Manager adds at the end of the ARN when you created the secret. A
     * partial ARN match can work as long as it uniquely matches only one secret.
     * However, if your secret has a name that ends in a hyphen followed by six
     * characters (before Secrets Manager adds the hyphen and six characters to the
     * ARN) and you try to use that as a partial ARN, then those characters cause
     * Secrets Manager to assume that you’re specifying a complete ARN. This confusion
     * can cause unexpected results. To avoid this situation, we recommend that you
     * don’t create secret names that end with a hyphen followed by six characters.</p>
     * </note>
     */
    inline UpdateSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline UpdateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline UpdateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) If you want to add a new version to the secret, this parameter
     * specifies a unique identifier for the new version that helps ensure idempotency.
     * </p> <p>If you use the AWS CLI or one of the AWS SDK to call this operation,
     * then you can leave this parameter empty. The CLI or SDK generates a random UUID
     * for you and includes that in the request. If you don't use the SDK and instead
     * generate a raw HTTP request to the Secrets Manager service endpoint, then you
     * must generate a <code>ClientRequestToken</code> yourself for new versions and
     * include that value in the request.</p> <p>You typically only need to interact
     * with this value if you implement your own retry logic and want to ensure that a
     * given secret is not created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the Lambda rotation function's
     * processing.</p> <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't
     * already associated with a version of the secret then a new version of the secret
     * is created. </p> </li> <li> <p>If a version with this value already exists and
     * that version's <code>SecretString</code> and <code>SecretBinary</code> values
     * are the same as those in the request then the request is ignored (the operation
     * is idempotent). </p> </li> <li> <p>If a version with this value already exists
     * and that version's <code>SecretString</code> and <code>SecretBinary</code>
     * values are different from the request then an error occurs because you cannot
     * modify an existing secret value.</p> </li> </ul> <p>This value becomes the
     * <code>VersionId</code> of the new version.</p>
     */
    inline UpdateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline UpdateSecretRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline UpdateSecretRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies an updated user-provided description of the secret.</p>
     */
    inline UpdateSecretRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline UpdateSecretRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline UpdateSecretRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies an updated ARN or alias of the AWS KMS customer master
     * key (CMK) to be used to encrypt the protected text in new versions of this
     * secret.</p> <important> <p>You can only use the account's default CMK to encrypt
     * and decrypt if you call this operation using credentials from the same account
     * that owns the secret. If the secret is in a different account, then you must
     * create a custom CMK and provide the ARN of that CMK in this field. The user
     * making the call must have permissions to both the secret and the CMK in their
     * respective accounts.</p> </important>
     */
    inline UpdateSecretRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }

    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }

    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }

    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline UpdateSecretRequest& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>(Optional) Specifies updated binary data that you want to encrypt and store
     * in the new version of the secret. To use this parameter in the command-line
     * tools, we recommend that you store your binary data in a file and then use the
     * appropriate technique for your tool to pass the contents of the file as a
     * parameter. Either <code>SecretBinary</code> or <code>SecretString</code> must
     * have a value, but not both. They cannot both be empty.</p> <p>This parameter is
     * not accessible using the Secrets Manager console.</p>
     */
    inline UpdateSecretRequest& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline UpdateSecretRequest& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline UpdateSecretRequest& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies updated text data that you want to encrypt and store in
     * this new version of the secret. Either <code>SecretBinary</code> or
     * <code>SecretString</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>. For example:</p> <p>
     * <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code> </p> <p>If your
     * command-line tool or SDK requires quotation marks around the parameter, you
     * should use single quotes to avoid confusion with the double quotes required in
     * the JSON text. You can also 'escape' the double quote character in the embedded
     * JSON text by prefacing each with a backslash. For example, the following string
     * is surrounded by double-quotes. All of the embedded double quotes are
     * escaped:</p> <p>
     * <code>"[{\"username\":\"bob\"},{\"password\":\"abc123xyz456\"}]"</code> </p>
     */
    inline UpdateSecretRequest& WithSecretString(const char* value) { SetSecretString(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Utils::CryptoBuffer m_secretBinary;
    bool m_secretBinaryHasBeenSet;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
