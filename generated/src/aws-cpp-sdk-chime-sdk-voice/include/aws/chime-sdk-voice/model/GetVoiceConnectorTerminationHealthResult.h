/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/TerminationHealth.h>
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
  class GetVoiceConnectorTerminationHealthResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorTerminationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The termination health details.</p>
     */
    inline const TerminationHealth& GetTerminationHealth() const{ return m_terminationHealth; }

    /**
     * <p>The termination health details.</p>
     */
    inline void SetTerminationHealth(const TerminationHealth& value) { m_terminationHealth = value; }

    /**
     * <p>The termination health details.</p>
     */
    inline void SetTerminationHealth(TerminationHealth&& value) { m_terminationHealth = std::move(value); }

    /**
     * <p>The termination health details.</p>
     */
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(const TerminationHealth& value) { SetTerminationHealth(value); return *this;}

    /**
     * <p>The termination health details.</p>
     */
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(TerminationHealth&& value) { SetTerminationHealth(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorTerminationHealthResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorTerminationHealthResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorTerminationHealthResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TerminationHealth m_terminationHealth;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
