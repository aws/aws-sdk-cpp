/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{
  class InitiateLayerUploadResult
  {
  public:
    AWS_ECRPUBLIC_API InitiateLayerUploadResult() = default;
    AWS_ECRPUBLIC_API InitiateLayerUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API InitiateLayerUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The upload ID for the layer upload. This parameter is passed to further
     * <a>UploadLayerPart</a> and <a>CompleteLayerUpload</a> operations.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    InitiateLayerUploadResult& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, that Amazon ECR expects future layer part uploads to
     * be.</p>
     */
    inline long long GetPartSize() const { return m_partSize; }
    inline void SetPartSize(long long value) { m_partSizeHasBeenSet = true; m_partSize = value; }
    inline InitiateLayerUploadResult& WithPartSize(long long value) { SetPartSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InitiateLayerUploadResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    long long m_partSize{0};
    bool m_partSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
