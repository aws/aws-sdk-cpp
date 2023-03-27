/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/VoiceProfile.h>
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
  class GetVoiceProfileResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceProfileResult();
    AWS_CHIMESDKVOICE_API GetVoiceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The voice profile details.</p>
     */
    inline const VoiceProfile& GetVoiceProfile() const{ return m_voiceProfile; }

    /**
     * <p>The voice profile details.</p>
     */
    inline void SetVoiceProfile(const VoiceProfile& value) { m_voiceProfile = value; }

    /**
     * <p>The voice profile details.</p>
     */
    inline void SetVoiceProfile(VoiceProfile&& value) { m_voiceProfile = std::move(value); }

    /**
     * <p>The voice profile details.</p>
     */
    inline GetVoiceProfileResult& WithVoiceProfile(const VoiceProfile& value) { SetVoiceProfile(value); return *this;}

    /**
     * <p>The voice profile details.</p>
     */
    inline GetVoiceProfileResult& WithVoiceProfile(VoiceProfile&& value) { SetVoiceProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceProfile m_voiceProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
