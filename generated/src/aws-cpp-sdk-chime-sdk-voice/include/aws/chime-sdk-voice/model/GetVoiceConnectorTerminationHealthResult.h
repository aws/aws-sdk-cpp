/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/TerminationHealth.h>
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
  class GetVoiceConnectorTerminationHealthResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult() = default;
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The termination health details.</p>
     */
    inline const TerminationHealth& GetTerminationHealth() const { return m_terminationHealth; }
    template<typename TerminationHealthT = TerminationHealth>
    void SetTerminationHealth(TerminationHealthT&& value) { m_terminationHealthHasBeenSet = true; m_terminationHealth = std::forward<TerminationHealthT>(value); }
    template<typename TerminationHealthT = TerminationHealth>
    GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(TerminationHealthT&& value) { SetTerminationHealth(std::forward<TerminationHealthT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceConnectorTerminationHealthResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TerminationHealth m_terminationHealth;
    bool m_terminationHealthHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
