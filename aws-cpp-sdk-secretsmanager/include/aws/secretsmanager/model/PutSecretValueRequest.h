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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SECRETSMANAGER_API PutSecretValueRequest : public SecretsManagerRequest
  {
  public:
    PutSecretValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSecretValue"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
    inline PutSecretValueRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
    inline PutSecretValueRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>Specifies the secret to which you want to add a new version. You can specify
     * either the Amazon Resource Name (ARN) or the friendly name of the secret. The
     * secret must already exist.</p> <note> <p>If you specify an ARN, we generally
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
    inline PutSecretValueRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline PutSecretValueRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline PutSecretValueRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies a unique identifier for the new version of the secret.
     * </p> <note> <p>If you use the AWS CLI or one of the AWS SDK to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes that in the request. If you don't use the SDK
     * and instead generate a raw HTTP request to the Secrets Manager service endpoint,
     * then you must generate a <code>ClientRequestToken</code> yourself for new
     * versions and include that value in the request. </p> </note> <p>This value helps
     * ensure idempotency. Secrets Manager uses this value to prevent the accidental
     * creation of duplicate versions if there are failures and retries during the
     * Lambda rotation function's processing. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness within the specified secret. </p> <ul> <li> <p>If the
     * <code>ClientRequestToken</code> value isn't already associated with a version of
     * the secret then a new version of the secret is created. </p> </li> <li> <p>If a
     * version with this value already exists and that version's
     * <code>SecretString</code> or <code>SecretBinary</code> values are the same as
     * those in the request then the request is ignored (the operation is idempotent).
     * </p> </li> <li> <p>If a version with this value already exists and that
     * version's <code>SecretString</code> and <code>SecretBinary</code> values are
     * different from those in the request then the request fails because you cannot
     * modify an existing secret version. You can only create new versions to store new
     * secret values.</p> </li> </ul> <p>This value becomes the <code>VersionId</code>
     * of the new version.</p>
     */
    inline PutSecretValueRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline PutSecretValueRequest& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>(Optional) Specifies binary data that you want to encrypt and store in the
     * new version of the secret. To use this parameter in the command-line tools, we
     * recommend that you store your binary data in a file and then use the appropriate
     * technique for your tool to pass the contents of the file as a parameter. Either
     * <code>SecretBinary</code> or <code>SecretString</code> must have a value, but
     * not both. They cannot both be empty.</p> <p>This parameter is not accessible if
     * the secret using the Secrets Manager console.</p> <p/>
     */
    inline PutSecretValueRequest& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline PutSecretValueRequest& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline PutSecretValueRequest& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies text data that you want to encrypt and store in this new
     * version of the secret. Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both. They cannot both be
     * empty.</p> <p>If you create this secret by using the Secrets Manager console
     * then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that the default Lambda
     * rotation function knows how to parse.</p> <p>For storing multiple values, we
     * recommend that you use a JSON text string argument and specify key/value pairs.
     * For information on how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a> in the <i>AWS CLI User Guide</i>.</p> <p> For
     * example:</p> <p> <code>[{"username":"bob"},{"password":"abc123xyz456"}]</code>
     * </p> <p>If your command-line tool or SDK requires quotation marks around the
     * parameter, you should use single quotes to avoid confusion with the double
     * quotes required in the JSON text.</p>
     */
    inline PutSecretValueRequest& WithSecretString(const char* value) { SetSecretString(value); return *this;}


    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStagesHasBeenSet = true; m_versionStages = value; }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::move(value); }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline PutSecretValueRequest& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline PutSecretValueRequest& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline PutSecretValueRequest& AddVersionStages(const Aws::String& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline PutSecretValueRequest& AddVersionStages(Aws::String&& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(std::move(value)); return *this; }

    /**
     * <p>(Optional) Specifies a list of staging labels that are attached to this
     * version of the secret. These staging labels are used to track the versions
     * through the rotation process by the Lambda rotation function.</p> <p>A staging
     * label must be unique to a single version of the secret. If you specify a staging
     * label that's already associated with a different version of the same secret then
     * that staging label is automatically removed from the other version and attached
     * to this version.</p> <p>If you do not specify a value for
     * <code>VersionStages</code> then Secrets Manager automatically moves the staging
     * label <code>AWSCURRENT</code> to this new version.</p>
     */
    inline PutSecretValueRequest& AddVersionStages(const char* value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Utils::CryptoBuffer m_secretBinary;
    bool m_secretBinaryHasBeenSet;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
