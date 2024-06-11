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
  class CompleteLayerUploadResult
  {
  public:
    AWS_ECR_API CompleteLayerUploadResult();
    AWS_ECR_API CompleteLayerUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API CompleteLayerUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }
    inline CompleteLayerUploadResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline CompleteLayerUploadResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline CompleteLayerUploadResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline CompleteLayerUploadResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CompleteLayerUploadResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CompleteLayerUploadResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }
    inline CompleteLayerUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline CompleteLayerUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline CompleteLayerUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigest = value; }
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigest = std::move(value); }
    inline void SetLayerDigest(const char* value) { m_layerDigest.assign(value); }
    inline CompleteLayerUploadResult& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}
    inline CompleteLayerUploadResult& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}
    inline CompleteLayerUploadResult& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CompleteLayerUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CompleteLayerUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CompleteLayerUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_uploadId;

    Aws::String m_layerDigest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
