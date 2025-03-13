/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplication.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class UpdateSipMediaApplicationResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationResult() = default;
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateSipMediaApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated SIP media application’s details.</p>
     */
    inline const SipMediaApplication& GetSipMediaApplication() const { return m_sipMediaApplication; }
    template<typename SipMediaApplicationT = SipMediaApplication>
    void SetSipMediaApplication(SipMediaApplicationT&& value) { m_sipMediaApplicationHasBeenSet = true; m_sipMediaApplication = std::forward<SipMediaApplicationT>(value); }
    template<typename SipMediaApplicationT = SipMediaApplication>
    UpdateSipMediaApplicationResult& WithSipMediaApplication(SipMediaApplicationT&& value) { SetSipMediaApplication(std::forward<SipMediaApplicationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSipMediaApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SipMediaApplication m_sipMediaApplication;
    bool m_sipMediaApplicationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
