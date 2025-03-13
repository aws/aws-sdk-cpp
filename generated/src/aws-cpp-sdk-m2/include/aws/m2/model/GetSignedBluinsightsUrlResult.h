/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetSignedBluinsightsUrlResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetSignedBluinsightsUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Single sign-on AWS Blu Insights URL.</p>
     */
    inline const Aws::String& GetSignedBiUrl() const { return m_signedBiUrl; }
    template<typename SignedBiUrlT = Aws::String>
    void SetSignedBiUrl(SignedBiUrlT&& value) { m_signedBiUrlHasBeenSet = true; m_signedBiUrl = std::forward<SignedBiUrlT>(value); }
    template<typename SignedBiUrlT = Aws::String>
    GetSignedBluinsightsUrlResult& WithSignedBiUrl(SignedBiUrlT&& value) { SetSignedBiUrl(std::forward<SignedBiUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSignedBluinsightsUrlResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signedBiUrl;
    bool m_signedBiUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
