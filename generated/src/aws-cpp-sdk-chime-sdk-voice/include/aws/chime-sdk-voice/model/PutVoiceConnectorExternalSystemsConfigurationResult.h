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
  class PutVoiceConnectorExternalSystemsConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorExternalSystemsConfigurationResult() = default;
    AWS_CHIMESDKVOICE_API PutVoiceConnectorExternalSystemsConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorExternalSystemsConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about an external systems configuration
     * for a Voice Connector.</p>
     */
    inline const ExternalSystemsConfiguration& GetExternalSystemsConfiguration() const { return m_externalSystemsConfiguration; }
    template<typename ExternalSystemsConfigurationT = ExternalSystemsConfiguration>
    void SetExternalSystemsConfiguration(ExternalSystemsConfigurationT&& value) { m_externalSystemsConfigurationHasBeenSet = true; m_externalSystemsConfiguration = std::forward<ExternalSystemsConfigurationT>(value); }
    template<typename ExternalSystemsConfigurationT = ExternalSystemsConfiguration>
    PutVoiceConnectorExternalSystemsConfigurationResult& WithExternalSystemsConfiguration(ExternalSystemsConfigurationT&& value) { SetExternalSystemsConfiguration(std::forward<ExternalSystemsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutVoiceConnectorExternalSystemsConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ExternalSystemsConfiguration m_externalSystemsConfiguration;
    bool m_externalSystemsConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
