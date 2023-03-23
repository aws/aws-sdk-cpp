/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/ParticipantToken.h>
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
  class CreateParticipantTokenResult
  {
  public:
    AWS_IVSREALTIME_API CreateParticipantTokenResult();
    AWS_IVSREALTIME_API CreateParticipantTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateParticipantTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The participant token that was created.</p>
     */
    inline const ParticipantToken& GetParticipantToken() const{ return m_participantToken; }

    /**
     * <p>The participant token that was created.</p>
     */
    inline void SetParticipantToken(const ParticipantToken& value) { m_participantToken = value; }

    /**
     * <p>The participant token that was created.</p>
     */
    inline void SetParticipantToken(ParticipantToken&& value) { m_participantToken = std::move(value); }

    /**
     * <p>The participant token that was created.</p>
     */
    inline CreateParticipantTokenResult& WithParticipantToken(const ParticipantToken& value) { SetParticipantToken(value); return *this;}

    /**
     * <p>The participant token that was created.</p>
     */
    inline CreateParticipantTokenResult& WithParticipantToken(ParticipantToken&& value) { SetParticipantToken(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateParticipantTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateParticipantTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateParticipantTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ParticipantToken m_participantToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
