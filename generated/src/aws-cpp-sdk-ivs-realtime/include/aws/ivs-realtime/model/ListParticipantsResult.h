/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/ParticipantSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListParticipantsResult
  {
  public:
    AWS_IVSREALTIME_API ListParticipantsResult() = default;
    AWS_IVSREALTIME_API ListParticipantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListParticipantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline const Aws::Vector<ParticipantSummary>& GetParticipants() const { return m_participants; }
    template<typename ParticipantsT = Aws::Vector<ParticipantSummary>>
    void SetParticipants(ParticipantsT&& value) { m_participantsHasBeenSet = true; m_participants = std::forward<ParticipantsT>(value); }
    template<typename ParticipantsT = Aws::Vector<ParticipantSummary>>
    ListParticipantsResult& WithParticipants(ParticipantsT&& value) { SetParticipants(std::forward<ParticipantsT>(value)); return *this;}
    template<typename ParticipantsT = ParticipantSummary>
    ListParticipantsResult& AddParticipants(ParticipantsT&& value) { m_participantsHasBeenSet = true; m_participants.emplace_back(std::forward<ParticipantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListParticipantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListParticipantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ParticipantSummary> m_participants;
    bool m_participantsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
