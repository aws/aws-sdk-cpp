﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannels_EXPORTS.h>
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
namespace KinesisVideoSignalingChannels
{
namespace Model
{
  class SendAlexaOfferToMasterResult
  {
  public:
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult();
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }
    inline void SetAnswer(const Aws::String& value) { m_answer = value; }
    inline void SetAnswer(Aws::String&& value) { m_answer = std::move(value); }
    inline void SetAnswer(const char* value) { m_answer.assign(value); }
    inline SendAlexaOfferToMasterResult& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}
    inline SendAlexaOfferToMasterResult& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}
    inline SendAlexaOfferToMasterResult& WithAnswer(const char* value) { SetAnswer(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SendAlexaOfferToMasterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SendAlexaOfferToMasterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SendAlexaOfferToMasterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_answer;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
