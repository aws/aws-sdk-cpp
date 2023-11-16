/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_IVSREALTIME_API ListParticipantsResult();
    AWS_IVSREALTIME_API ListParticipantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListParticipantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListParticipantsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListParticipantsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more participants than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListParticipantsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline const Aws::Vector<ParticipantSummary>& GetParticipants() const{ return m_participants; }

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline void SetParticipants(const Aws::Vector<ParticipantSummary>& value) { m_participants = value; }

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline void SetParticipants(Aws::Vector<ParticipantSummary>&& value) { m_participants = std::move(value); }

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline ListParticipantsResult& WithParticipants(const Aws::Vector<ParticipantSummary>& value) { SetParticipants(value); return *this;}

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline ListParticipantsResult& WithParticipants(Aws::Vector<ParticipantSummary>&& value) { SetParticipants(std::move(value)); return *this;}

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline ListParticipantsResult& AddParticipants(const ParticipantSummary& value) { m_participants.push_back(value); return *this; }

    /**
     * <p>List of the matching participants (summary information only).</p>
     */
    inline ListParticipantsResult& AddParticipants(ParticipantSummary&& value) { m_participants.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListParticipantsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListParticipantsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListParticipantsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ParticipantSummary> m_participants;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
