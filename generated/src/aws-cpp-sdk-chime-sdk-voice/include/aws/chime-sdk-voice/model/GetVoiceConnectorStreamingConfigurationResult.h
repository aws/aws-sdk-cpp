/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/StreamingConfiguration.h>
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
  class GetVoiceConnectorStreamingConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult() = default;
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline const StreamingConfiguration& GetStreamingConfiguration() const { return m_streamingConfiguration; }
    template<typename StreamingConfigurationT = StreamingConfiguration>
    void SetStreamingConfiguration(StreamingConfigurationT&& value) { m_streamingConfigurationHasBeenSet = true; m_streamingConfiguration = std::forward<StreamingConfigurationT>(value); }
    template<typename StreamingConfigurationT = StreamingConfiguration>
    GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(StreamingConfigurationT&& value) { SetStreamingConfiguration(std::forward<StreamingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetVoiceConnectorStreamingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StreamingConfiguration m_streamingConfiguration;
    bool m_streamingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
