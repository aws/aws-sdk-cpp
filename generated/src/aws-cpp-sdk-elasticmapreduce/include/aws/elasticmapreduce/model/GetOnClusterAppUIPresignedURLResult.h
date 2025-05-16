/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{
  class GetOnClusterAppUIPresignedURLResult
  {
  public:
    AWS_EMR_API GetOnClusterAppUIPresignedURLResult() = default;
    AWS_EMR_API GetOnClusterAppUIPresignedURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetOnClusterAppUIPresignedURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Used to determine if the presigned URL is ready.</p>
     */
    inline bool GetPresignedURLReady() const { return m_presignedURLReady; }
    inline void SetPresignedURLReady(bool value) { m_presignedURLReadyHasBeenSet = true; m_presignedURLReady = value; }
    inline GetOnClusterAppUIPresignedURLResult& WithPresignedURLReady(bool value) { SetPresignedURLReady(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster's generated presigned URL.</p>
     */
    inline const Aws::String& GetPresignedURL() const { return m_presignedURL; }
    template<typename PresignedURLT = Aws::String>
    void SetPresignedURL(PresignedURLT&& value) { m_presignedURLHasBeenSet = true; m_presignedURL = std::forward<PresignedURLT>(value); }
    template<typename PresignedURLT = Aws::String>
    GetOnClusterAppUIPresignedURLResult& WithPresignedURL(PresignedURLT&& value) { SetPresignedURL(std::forward<PresignedURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOnClusterAppUIPresignedURLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_presignedURLReady{false};
    bool m_presignedURLReadyHasBeenSet = false;

    Aws::String m_presignedURL;
    bool m_presignedURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
