/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/ExternalSystemsConfiguration.h>
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
  class GetVoiceConnectorExternalSystemsConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorExternalSystemsConfigurationResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorExternalSystemsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorExternalSystemsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about an external systems configuration
     * for a Voice Connector.</p>
     */
    inline const ExternalSystemsConfiguration& GetExternalSystemsConfiguration() const{ return m_externalSystemsConfiguration; }
    inline void SetExternalSystemsConfiguration(const ExternalSystemsConfiguration& value) { m_externalSystemsConfiguration = value; }
    inline void SetExternalSystemsConfiguration(ExternalSystemsConfiguration&& value) { m_externalSystemsConfiguration = std::move(value); }
    inline GetVoiceConnectorExternalSystemsConfigurationResult& WithExternalSystemsConfiguration(const ExternalSystemsConfiguration& value) { SetExternalSystemsConfiguration(value); return *this;}
    inline GetVoiceConnectorExternalSystemsConfigurationResult& WithExternalSystemsConfiguration(ExternalSystemsConfiguration&& value) { SetExternalSystemsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVoiceConnectorExternalSystemsConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVoiceConnectorExternalSystemsConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVoiceConnectorExternalSystemsConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ExternalSystemsConfiguration m_externalSystemsConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
