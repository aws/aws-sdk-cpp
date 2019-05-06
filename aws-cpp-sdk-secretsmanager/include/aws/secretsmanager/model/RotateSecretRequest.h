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
#include <aws/secretsmanager/model/RotationRulesType.h>
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
  class AWS_SECRETSMANAGER_API RotateSecretRequest : public SecretsManagerRequest
  {
  public:
    RotateSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RotateSecret"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
    inline RotateSecretRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
    inline RotateSecretRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret that you want to rotate. You can specify either the
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
    inline RotateSecretRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline RotateSecretRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline RotateSecretRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret
     * that helps ensure idempotency. </p> <p>If you use the AWS CLI or one of the AWS
     * SDK to call this operation, then you can leave this parameter empty. The CLI or
     * SDK generates a random UUID for you and includes that in the request for this
     * parameter. If you don't use the SDK and instead generate a raw HTTP request to
     * the Secrets Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> yourself for new versions and include that value
     * in the request.</p> <p>You only need to specify your own value if you are
     * implementing your own retry logic and want to ensure that a given secret is not
     * created twice. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <p>Secrets Manager
     * uses this value to prevent the accidental creation of duplicate versions if
     * there are failures and retries during the function's processing. This value
     * becomes the <code>VersionId</code> of the new version.</p>
     */
    inline RotateSecretRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline const Aws::String& GetRotationLambdaARN() const{ return m_rotationLambdaARN; }

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline bool RotationLambdaARNHasBeenSet() const { return m_rotationLambdaARNHasBeenSet; }

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline void SetRotationLambdaARN(const Aws::String& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = value; }

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline void SetRotationLambdaARN(Aws::String&& value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN = std::move(value); }

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline void SetRotationLambdaARN(const char* value) { m_rotationLambdaARNHasBeenSet = true; m_rotationLambdaARN.assign(value); }

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(const Aws::String& value) { SetRotationLambdaARN(value); return *this;}

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(Aws::String&& value) { SetRotationLambdaARN(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies the ARN of the Lambda function that can rotate the
     * secret.</p>
     */
    inline RotateSecretRequest& WithRotationLambdaARN(const char* value) { SetRotationLambdaARN(value); return *this;}


    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline const RotationRulesType& GetRotationRules() const{ return m_rotationRules; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline bool RotationRulesHasBeenSet() const { return m_rotationRulesHasBeenSet; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(const RotationRulesType& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = value; }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline void SetRotationRules(RotationRulesType&& value) { m_rotationRulesHasBeenSet = true; m_rotationRules = std::move(value); }

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline RotateSecretRequest& WithRotationRules(const RotationRulesType& value) { SetRotationRules(value); return *this;}

    /**
     * <p>A structure that defines the rotation configuration for this secret.</p>
     */
    inline RotateSecretRequest& WithRotationRules(RotationRulesType&& value) { SetRotationRules(std::move(value)); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_rotationLambdaARN;
    bool m_rotationLambdaARNHasBeenSet;

    RotationRulesType m_rotationRules;
    bool m_rotationRulesHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
