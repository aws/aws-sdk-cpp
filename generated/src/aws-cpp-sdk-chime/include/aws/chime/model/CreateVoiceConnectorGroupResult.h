/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/VoiceConnectorGroup.h>
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
namespace Chime
{
namespace Model
{
  class CreateVoiceConnectorGroupResult
  {
  public:
    AWS_CHIME_API CreateVoiceConnectorGroupResult();
    AWS_CHIME_API CreateVoiceConnectorGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateVoiceConnectorGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime Voice Connector group details.</p>
     */
    inline const VoiceConnectorGroup& GetVoiceConnectorGroup() const{ return m_voiceConnectorGroup; }

    /**
     * <p>The Amazon Chime Voice Connector group details.</p>
     */
    inline void SetVoiceConnectorGroup(const VoiceConnectorGroup& value) { m_voiceConnectorGroup = value; }

    /**
     * <p>The Amazon Chime Voice Connector group details.</p>
     */
    inline void SetVoiceConnectorGroup(VoiceConnectorGroup&& value) { m_voiceConnectorGroup = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector group details.</p>
     */
    inline CreateVoiceConnectorGroupResult& WithVoiceConnectorGroup(const VoiceConnectorGroup& value) { SetVoiceConnectorGroup(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector group details.</p>
     */
    inline CreateVoiceConnectorGroupResult& WithVoiceConnectorGroup(VoiceConnectorGroup&& value) { SetVoiceConnectorGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateVoiceConnectorGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateVoiceConnectorGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateVoiceConnectorGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VoiceConnectorGroup m_voiceConnectorGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
