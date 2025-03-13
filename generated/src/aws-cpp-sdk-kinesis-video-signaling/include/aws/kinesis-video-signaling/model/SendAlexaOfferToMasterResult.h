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
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult() = default;
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOSIGNALINGCHANNELS_API SendAlexaOfferToMasterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64-encoded SDP answer content.</p>
     */
    inline const Aws::String& GetAnswer() const { return m_answer; }
    template<typename AnswerT = Aws::String>
    void SetAnswer(AnswerT&& value) { m_answerHasBeenSet = true; m_answer = std::forward<AnswerT>(value); }
    template<typename AnswerT = Aws::String>
    SendAlexaOfferToMasterResult& WithAnswer(AnswerT&& value) { SetAnswer(std::forward<AnswerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendAlexaOfferToMasterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_answer;
    bool m_answerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoSignalingChannels
} // namespace Aws
