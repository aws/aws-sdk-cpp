/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SpeakerSearchTask.h>
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
  class StartSpeakerSearchTaskResult
  {
  public:
    AWS_CHIMESDKVOICE_API StartSpeakerSearchTaskResult();
    AWS_CHIMESDKVOICE_API StartSpeakerSearchTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API StartSpeakerSearchTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the speaker search task.</p>
     */
    inline const SpeakerSearchTask& GetSpeakerSearchTask() const{ return m_speakerSearchTask; }

    /**
     * <p>The details of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTask(const SpeakerSearchTask& value) { m_speakerSearchTask = value; }

    /**
     * <p>The details of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTask(SpeakerSearchTask&& value) { m_speakerSearchTask = std::move(value); }

    /**
     * <p>The details of the speaker search task.</p>
     */
    inline StartSpeakerSearchTaskResult& WithSpeakerSearchTask(const SpeakerSearchTask& value) { SetSpeakerSearchTask(value); return *this;}

    /**
     * <p>The details of the speaker search task.</p>
     */
    inline StartSpeakerSearchTaskResult& WithSpeakerSearchTask(SpeakerSearchTask&& value) { SetSpeakerSearchTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartSpeakerSearchTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartSpeakerSearchTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartSpeakerSearchTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SpeakerSearchTask m_speakerSearchTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
