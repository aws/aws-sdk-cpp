/**
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


    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline void SetAnswer(const Aws::String& value) { m_answer = value; }

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline void SetAnswer(Aws::String&& value) { m_answer = std::move(value); }

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline void SetAnswer(const char* value) { m_answer.assign(value); }

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline SendAlexaOfferToMasterResult& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline SendAlexaOfferToMasterResult& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline SendAlexaOfferToMasterResult& WithAnswer(const char* value) { SetAnswer(value); return *this;}

  private:

    Aws::String m_answer;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
