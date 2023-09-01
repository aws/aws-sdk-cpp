/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/SpeakerSearchTask.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  class GetSpeakerSearchTaskResult
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult();
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEDIAPIPELINES_API GetSpeakerSearchTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetSpeakerSearchTaskResult& WithSpeakerSearchTask(const SpeakerSearchTask& value) { SetSpeakerSearchTask(value); return *this;}

    /**
     * <p>The details of the speaker search task.</p>
     */
    inline GetSpeakerSearchTaskResult& WithSpeakerSearchTask(SpeakerSearchTask&& value) { SetSpeakerSearchTask(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSpeakerSearchTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSpeakerSearchTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSpeakerSearchTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SpeakerSearchTask m_speakerSearchTask;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
