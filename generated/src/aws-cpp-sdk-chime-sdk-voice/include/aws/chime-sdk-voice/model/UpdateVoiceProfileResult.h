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
  class UpdateVoiceProfileResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileResult();
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateVoiceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated voice profile settings.</p>
     */
    inline const VoiceProfile& GetVoiceProfile() const{ return m_voiceProfile; }

    /**
     * <p>The updated voice profile settings.</p>
     */
    inline void SetVoiceProfile(const VoiceProfile& value) { m_voiceProfile = value; }

    /**
     * <p>The updated voice profile settings.</p>
     */
    inline void SetVoiceProfile(VoiceProfile&& value) { m_voiceProfile = std::move(value); }

    /**
     * <p>The updated voice profile settings.</p>
     */
    inline UpdateVoiceProfileResult& WithVoiceProfile(const VoiceProfile& value) { SetVoiceProfile(value); return *this;}

    /**
     * <p>The updated voice profile settings.</p>
     */
    inline UpdateVoiceProfileResult& WithVoiceProfile(VoiceProfile&& value) { SetVoiceProfile(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVoiceProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVoiceProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVoiceProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceProfile m_voiceProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
