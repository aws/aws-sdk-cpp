/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Termination.h>
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
  class PutVoiceConnectorTerminationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorTerminationResult() = default;
    AWS_CHIMESDKVOICE_API PutVoiceConnectorTerminationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorTerminationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated termination settings.</p>
     */
    inline const Termination& GetTermination() const { return m_termination; }
    template<typename TerminationT = Termination>
    void SetTermination(TerminationT&& value) { m_terminationHasBeenSet = true; m_termination = std::forward<TerminationT>(value); }
    template<typename TerminationT = Termination>
    PutVoiceConnectorTerminationResult& WithTermination(TerminationT&& value) { SetTermination(std::forward<TerminationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutVoiceConnectorTerminationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Termination m_termination;
    bool m_terminationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
