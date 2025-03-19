/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class GetComponentVersionArtifactResult
  {
  public:
    AWS_GREENGRASSV2_API GetComponentVersionArtifactResult() = default;
    AWS_GREENGRASSV2_API GetComponentVersionArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API GetComponentVersionArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL of the artifact.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    GetComponentVersionArtifactResult& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComponentVersionArtifactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
