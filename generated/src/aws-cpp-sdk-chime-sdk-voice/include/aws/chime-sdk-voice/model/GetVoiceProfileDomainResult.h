/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceProfileDomain.h>
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
  class GetVoiceProfileDomainResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceProfileDomainResult();
    AWS_CHIMESDKVOICE_API GetVoiceProfileDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceProfileDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the voice profile domain.</p>
     */
    inline const VoiceProfileDomain& GetVoiceProfileDomain() const{ return m_voiceProfileDomain; }

    /**
     * <p>The details of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomain(const VoiceProfileDomain& value) { m_voiceProfileDomain = value; }

    /**
     * <p>The details of the voice profile domain.</p>
     */
    inline void SetVoiceProfileDomain(VoiceProfileDomain&& value) { m_voiceProfileDomain = std::move(value); }

    /**
     * <p>The details of the voice profile domain.</p>
     */
    inline GetVoiceProfileDomainResult& WithVoiceProfileDomain(const VoiceProfileDomain& value) { SetVoiceProfileDomain(value); return *this;}

    /**
     * <p>The details of the voice profile domain.</p>
     */
    inline GetVoiceProfileDomainResult& WithVoiceProfileDomain(VoiceProfileDomain&& value) { SetVoiceProfileDomain(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceProfileDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceProfileDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceProfileDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceProfileDomain m_voiceProfileDomain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
