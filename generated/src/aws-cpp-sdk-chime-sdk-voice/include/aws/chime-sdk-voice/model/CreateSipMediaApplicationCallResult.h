/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationCall.h>
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
  class CreateSipMediaApplicationCallResult
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationCallResult() = default;
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationCallResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationCallResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The actual call.</p>
     */
    inline const SipMediaApplicationCall& GetSipMediaApplicationCall() const { return m_sipMediaApplicationCall; }
    template<typename SipMediaApplicationCallT = SipMediaApplicationCall>
    void SetSipMediaApplicationCall(SipMediaApplicationCallT&& value) { m_sipMediaApplicationCallHasBeenSet = true; m_sipMediaApplicationCall = std::forward<SipMediaApplicationCallT>(value); }
    template<typename SipMediaApplicationCallT = SipMediaApplicationCall>
    CreateSipMediaApplicationCallResult& WithSipMediaApplicationCall(SipMediaApplicationCallT&& value) { SetSipMediaApplicationCall(std::forward<SipMediaApplicationCallT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSipMediaApplicationCallResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SipMediaApplicationCall m_sipMediaApplicationCall;
    bool m_sipMediaApplicationCallHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
