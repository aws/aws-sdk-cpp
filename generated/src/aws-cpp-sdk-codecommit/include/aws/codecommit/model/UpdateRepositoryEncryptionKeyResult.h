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
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult() = default;
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API UpdateRepositoryEncryptionKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const { return m_repositoryId; }
    template<typename RepositoryIdT = Aws::String>
    void SetRepositoryId(RepositoryIdT&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::forward<RepositoryIdT>(value); }
    template<typename RepositoryIdT = Aws::String>
    UpdateRepositoryEncryptionKeyResult& WithRepositoryId(RepositoryIdT&& value) { SetRepositoryId(std::forward<RepositoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the encryption key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    UpdateRepositoryEncryptionKeyResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the encryption key formerly used to encrypt and decrypt the
     * repository.</p>
     */
    inline const Aws::String& GetOriginalKmsKeyId() const { return m_originalKmsKeyId; }
    template<typename OriginalKmsKeyIdT = Aws::String>
    void SetOriginalKmsKeyId(OriginalKmsKeyIdT&& value) { m_originalKmsKeyIdHasBeenSet = true; m_originalKmsKeyId = std::forward<OriginalKmsKeyIdT>(value); }
    template<typename OriginalKmsKeyIdT = Aws::String>
    UpdateRepositoryEncryptionKeyResult& WithOriginalKmsKeyId(OriginalKmsKeyIdT&& value) { SetOriginalKmsKeyId(std::forward<OriginalKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRepositoryEncryptionKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_originalKmsKeyId;
    bool m_originalKmsKeyIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
