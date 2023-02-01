/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/StreamingConfiguration.h>
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
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const StreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    
    inline void SetStreamingConfiguration(const StreamingConfiguration& value) { m_streamingConfiguration = value; }

    
    inline void SetStreamingConfiguration(StreamingConfiguration&& value) { m_streamingConfiguration = std::move(value); }

    
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(const StreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(StreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}

  private:

    StreamingConfiguration m_streamingConfiguration;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
