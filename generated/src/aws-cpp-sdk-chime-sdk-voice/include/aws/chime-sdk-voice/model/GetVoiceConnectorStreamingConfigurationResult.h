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
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorStreamingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline const StreamingConfiguration& GetStreamingConfiguration() const{ return m_streamingConfiguration; }

    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline void SetStreamingConfiguration(const StreamingConfiguration& value) { m_streamingConfiguration = value; }

    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline void SetStreamingConfiguration(StreamingConfiguration&& value) { m_streamingConfiguration = std::move(value); }

    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(const StreamingConfiguration& value) { SetStreamingConfiguration(value); return *this;}

    /**
     * <p>The details of the streaming configuration.</p>
     */
    inline GetVoiceConnectorStreamingConfigurationResult& WithStreamingConfiguration(StreamingConfiguration&& value) { SetStreamingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorStreamingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorStreamingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorStreamingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StreamingConfiguration m_streamingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
