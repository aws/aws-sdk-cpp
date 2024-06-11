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
  class InitiateLayerUploadResult
  {
  public:
    AWS_ECR_API InitiateLayerUploadResult();
    AWS_ECR_API InitiateLayerUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API InitiateLayerUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }
    inline InitiateLayerUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}
    inline InitiateLayerUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}
    inline InitiateLayerUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, that Amazon ECR expects future layer part uploads to
     * be.</p>
     */
    inline long long GetPartSize() const{ return m_partSize; }
    inline void SetPartSize(long long value) { m_partSize = value; }
    inline InitiateLayerUploadResult& WithPartSize(long long value) { SetPartSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateLayerUploadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateLayerUploadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateLayerUploadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_uploadId;

    long long m_partSize;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
