/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Origination.h>
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
  class PutVoiceConnectorOriginationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult() = default;
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated origination settings.</p>
     */
    inline const Origination& GetOrigination() const { return m_origination; }
    template<typename OriginationT = Origination>
    void SetOrigination(OriginationT&& value) { m_originationHasBeenSet = true; m_origination = std::forward<OriginationT>(value); }
    template<typename OriginationT = Origination>
    PutVoiceConnectorOriginationResult& WithOrigination(OriginationT&& value) { SetOrigination(std::forward<OriginationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutVoiceConnectorOriginationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Origination m_origination;
    bool m_originationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
