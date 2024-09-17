/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{
  class UploadLayerPartResult
  {
  public:
    AWS_ECR_API UploadLayerPartResult();
    AWS_ECR_API UploadLayerPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API UploadLayerPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline UploadLayerPartResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline UploadLayerPartResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline UploadLayerPartResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline UploadLayerPartResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline UploadLayerPartResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline UploadLayerPartResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID associated with the request.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }
    inline UploadLayerPartResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline UploadLayerPartResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline UploadLayerPartResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integer value of the last byte received in the request.</p>
     */
    inline long long GetLastByteReceived() const{ return m_lastByteReceived; }
    inline void SetLastByteReceived(long long value) { m_lastByteReceived = value; }
    inline UploadLayerPartResult& WithLastByteReceived(long long value) { SetLastByteReceived(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UploadLayerPartResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UploadLayerPartResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UploadLayerPartResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_uploadId;

    long long m_lastByteReceived;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
