/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class UpdateRepositoryEncryptionKeyRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRepositoryEncryptionKey"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository for which you want to update the KMS encryption
     * key used to encrypt and decrypt the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the encryption key. You can view the ID of an encryption key in the
     * KMS console, or use the KMS APIs to programmatically retrieve a key ID. For more
     * information about acceptable values for keyID, see <a
     * href="https://docs.aws.amazon.com/APIReference/API_Decrypt.html#KMS-Decrypt-request-KeyId">KeyId</a>
     * in the Decrypt API description in the <i>Key Management Service API
     * Reference</i>.</p>
     */
    inline UpdateRepositoryEncryptionKeyRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
