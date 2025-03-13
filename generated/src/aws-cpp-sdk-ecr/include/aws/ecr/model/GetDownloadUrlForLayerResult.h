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
    AWS_ECR_API GetDownloadUrlForLayerResult() = default;
    AWS_ECR_API GetDownloadUrlForLayerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetDownloadUrlForLayerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline const Aws::String& GetDownloadUrl() const { return m_downloadUrl; }
    template<typename DownloadUrlT = Aws::String>
    void SetDownloadUrl(DownloadUrlT&& value) { m_downloadUrlHasBeenSet = true; m_downloadUrl = std::forward<DownloadUrlT>(value); }
    template<typename DownloadUrlT = Aws::String>
    GetDownloadUrlForLayerResult& WithDownloadUrl(DownloadUrlT&& value) { SetDownloadUrl(std::forward<DownloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline const Aws::String& GetLayerDigest() const { return m_layerDigest; }
    template<typename LayerDigestT = Aws::String>
    void SetLayerDigest(LayerDigestT&& value) { m_layerDigestHasBeenSet = true; m_layerDigest = std::forward<LayerDigestT>(value); }
    template<typename LayerDigestT = Aws::String>
    GetDownloadUrlForLayerResult& WithLayerDigest(LayerDigestT&& value) { SetLayerDigest(std::forward<LayerDigestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDownloadUrlForLayerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_downloadUrl;
    bool m_downloadUrlHasBeenSet = false;

    Aws::String m_layerDigest;
    bool m_layerDigestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
