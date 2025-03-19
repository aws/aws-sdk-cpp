/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorAwsRegion.h>
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
  class ListAvailableVoiceConnectorRegionsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult() = default;
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListAvailableVoiceConnectorRegionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of AWS Regions.</p>
     */
    inline const Aws::Vector<VoiceConnectorAwsRegion>& GetVoiceConnectorRegions() const { return m_voiceConnectorRegions; }
    template<typename VoiceConnectorRegionsT = Aws::Vector<VoiceConnectorAwsRegion>>
    void SetVoiceConnectorRegions(VoiceConnectorRegionsT&& value) { m_voiceConnectorRegionsHasBeenSet = true; m_voiceConnectorRegions = std::forward<VoiceConnectorRegionsT>(value); }
    template<typename VoiceConnectorRegionsT = Aws::Vector<VoiceConnectorAwsRegion>>
    ListAvailableVoiceConnectorRegionsResult& WithVoiceConnectorRegions(VoiceConnectorRegionsT&& value) { SetVoiceConnectorRegions(std::forward<VoiceConnectorRegionsT>(value)); return *this;}
    inline ListAvailableVoiceConnectorRegionsResult& AddVoiceConnectorRegions(VoiceConnectorAwsRegion value) { m_voiceConnectorRegionsHasBeenSet = true; m_voiceConnectorRegions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableVoiceConnectorRegionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceConnectorAwsRegion> m_voiceConnectorRegions;
    bool m_voiceConnectorRegionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
