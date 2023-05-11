/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/Participant.h>
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
namespace ivsrealtime
{
namespace Model
{
  class GetParticipantResult
  {
  public:
    AWS_IVSREALTIME_API GetParticipantResult();
    AWS_IVSREALTIME_API GetParticipantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetParticipantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The participant that is returned.</p>
     */
    inline const Participant& GetParticipant() const{ return m_participant; }

    /**
     * <p>The participant that is returned.</p>
     */
    inline void SetParticipant(const Participant& value) { m_participant = value; }

    /**
     * <p>The participant that is returned.</p>
     */
    inline void SetParticipant(Participant&& value) { m_participant = std::move(value); }

    /**
     * <p>The participant that is returned.</p>
     */
    inline GetParticipantResult& WithParticipant(const Participant& value) { SetParticipant(value); return *this;}

    /**
     * <p>The participant that is returned.</p>
     */
    inline GetParticipantResult& WithParticipant(Participant&& value) { SetParticipant(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetParticipantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetParticipantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetParticipantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Participant m_participant;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
