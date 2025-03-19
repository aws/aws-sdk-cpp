/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/BusinessCallingSettings.h>
#include <aws/chime/model/VoiceConnectorSettings.h>
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
namespace Chime
{
namespace Model
{
  class GetGlobalSettingsResult
  {
  public:
    AWS_CHIME_API GetGlobalSettingsResult() = default;
    AWS_CHIME_API GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline const BusinessCallingSettings& GetBusinessCalling() const { return m_businessCalling; }
    template<typename BusinessCallingT = BusinessCallingSettings>
    void SetBusinessCalling(BusinessCallingT&& value) { m_businessCallingHasBeenSet = true; m_businessCalling = std::forward<BusinessCallingT>(value); }
    template<typename BusinessCallingT = BusinessCallingSettings>
    GetGlobalSettingsResult& WithBusinessCalling(BusinessCallingT&& value) { SetBusinessCalling(std::forward<BusinessCallingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline const VoiceConnectorSettings& GetVoiceConnector() const { return m_voiceConnector; }
    template<typename VoiceConnectorT = VoiceConnectorSettings>
    void SetVoiceConnector(VoiceConnectorT&& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = std::forward<VoiceConnectorT>(value); }
    template<typename VoiceConnectorT = VoiceConnectorSettings>
    GetGlobalSettingsResult& WithVoiceConnector(VoiceConnectorT&& value) { SetVoiceConnector(std::forward<VoiceConnectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGlobalSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BusinessCallingSettings m_businessCalling;
    bool m_businessCallingHasBeenSet = false;

    VoiceConnectorSettings m_voiceConnector;
    bool m_voiceConnectorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
