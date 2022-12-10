/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/TerminationHealth.h>
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
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TerminationHealth& GetTerminationHealth() const{ return m_terminationHealth; }

    
    inline void SetTerminationHealth(const TerminationHealth& value) { m_terminationHealth = value; }

    
    inline void SetTerminationHealth(TerminationHealth&& value) { m_terminationHealth = std::move(value); }

    
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(const TerminationHealth& value) { SetTerminationHealth(value); return *this;}

    
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(TerminationHealth&& value) { SetTerminationHealth(std::move(value)); return *this;}

  private:

    TerminationHealth m_terminationHealth;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
