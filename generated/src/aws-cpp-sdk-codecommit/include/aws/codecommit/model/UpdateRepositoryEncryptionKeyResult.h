/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{
  class UpdateRepositoryEncryptionKeyResult
  {
  public:
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult();
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryId = value; }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryId = std::move(value); }

    /**
     * <p>The ID of the repository.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryId.assign(value); }

    /**
     * <p>The ID of the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID of the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}


    /**
     * <p>The ID of the encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the encryption key.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline const Aws::String& GetOriginalKmsKeyId() const{ return m_originalKmsKeyId; }

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline void SetOriginalKmsKeyId(const Aws::String& value) { m_originalKmsKeyId = value; }

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline void SetOriginalKmsKeyId(Aws::String&& value) { m_originalKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline void SetOriginalKmsKeyId(const char* value) { m_originalKmsKeyId.assign(value); }

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithOriginalKmsKeyId(const Aws::String& value) { SetOriginalKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithOriginalKmsKeyId(Aws::String&& value) { SetOriginalKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline UpdateRepositoryEncryptionKeyResult& WithOriginalKmsKeyId(const char* value) { SetOriginalKmsKeyId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateRepositoryEncryptionKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateRepositoryEncryptionKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateRepositoryEncryptionKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_repositoryId;

    Aws::String m_kmsKeyId;

    Aws::String m_originalKmsKeyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
