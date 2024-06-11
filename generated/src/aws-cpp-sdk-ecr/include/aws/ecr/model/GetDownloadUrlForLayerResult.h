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
  class GetDownloadUrlForLayerResult
  {
  public:
    AWS_ECR_API GetDownloadUrlForLayerResult();
    AWS_ECR_API GetDownloadUrlForLayerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetDownloadUrlForLayerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigest = value; }
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigest = std::move(value); }
    inline void SetLayerDigest(const char* value) { m_layerDigest.assign(value); }
    inline GetDownloadUrlForLayerResult& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}
    inline GetDownloadUrlForLayerResult& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}
    inline GetDownloadUrlForLayerResult& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDownloadUrlForLayerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDownloadUrlForLayerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDownloadUrlForLayerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_downloadUrl;

    Aws::String m_layerDigest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
