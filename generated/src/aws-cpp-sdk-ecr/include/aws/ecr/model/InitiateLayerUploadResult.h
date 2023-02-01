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


    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline InitiateLayerUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline InitiateLayerUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline InitiateLayerUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The size, in bytes, that Amazon ECR expects future layer part uploads to
     * be.</p>
     */
    inline long long GetPartSize() const{ return m_partSize; }

    /**
     * <p>The size, in bytes, that Amazon ECR expects future layer part uploads to
     * be.</p>
     */
    inline void SetPartSize(long long value) { m_partSize = value; }

    /**
     * <p>The size, in bytes, that Amazon ECR expects future layer part uploads to
     * be.</p>
     */
    inline InitiateLayerUploadResult& WithPartSize(long long value) { SetPartSize(value); return *this;}

  private:

    Aws::String m_uploadId;

    long long m_partSize;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
