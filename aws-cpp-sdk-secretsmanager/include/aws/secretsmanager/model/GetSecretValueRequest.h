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
  class GetSecretValueRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API GetSecretValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSecretValue"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline GetSecretValueRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline GetSecretValueRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of the secret to retrieve.</p> <p>For an ARN, we recommend
     * that you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline GetSecretValueRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}


    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the version of the secret to retrieve. If you
     * include both this parameter and <code>VersionStage</code>, the two parameters
     * must refer to the same secret version. If you don't specify either a
     * <code>VersionStage</code> or <code>VersionId</code>, then Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p> <p>This value is typically a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value with 32 hexadecimal digits.</p>
     */
    inline GetSecretValueRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline const Aws::String& GetVersionStage() const{ return m_versionStage; }

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline bool VersionStageHasBeenSet() const { return m_versionStageHasBeenSet; }

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline void SetVersionStage(const Aws::String& value) { m_versionStageHasBeenSet = true; m_versionStage = value; }

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline void SetVersionStage(Aws::String&& value) { m_versionStageHasBeenSet = true; m_versionStage = std::move(value); }

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline void SetVersionStage(const char* value) { m_versionStageHasBeenSet = true; m_versionStage.assign(value); }

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(const Aws::String& value) { SetVersionStage(value); return *this;}

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(Aws::String&& value) { SetVersionStage(std::move(value)); return *this;}

    /**
     * <p>The staging label of the version of the secret to retrieve. </p> <p>Secrets
     * Manager uses staging labels to keep track of different versions during the
     * rotation process. If you include both this parameter and <code>VersionId</code>,
     * the two parameters must refer to the same secret version. If you don't specify
     * either a <code>VersionStage</code> or <code>VersionId</code>, Secrets Manager
     * returns the <code>AWSCURRENT</code> version.</p>
     */
    inline GetSecretValueRequest& WithVersionStage(const char* value) { SetVersionStage(value); return *this;}

  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_versionStage;
    bool m_versionStageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
