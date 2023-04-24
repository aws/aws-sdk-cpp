/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantTokenCredentials.h>
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
namespace Connect
{
namespace Model
{
  class CreateParticipantResult
  {
  public:
    AWS_CONNECT_API CreateParticipantResult();
    AWS_CONNECT_API CreateParticipantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateParticipantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline const ParticipantTokenCredentials& GetParticipantCredentials() const{ return m_participantCredentials; }

    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline void SetParticipantCredentials(const ParticipantTokenCredentials& value) { m_participantCredentials = value; }

    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline void SetParticipantCredentials(ParticipantTokenCredentials&& value) { m_participantCredentials = std::move(value); }

    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline CreateParticipantResult& WithParticipantCredentials(const ParticipantTokenCredentials& value) { SetParticipantCredentials(value); return *this;}

    /**
     * <p>The token used by the chat participant to call
     * <code>CreateParticipantConnection</code>. The participant token is valid for the
     * lifetime of a chat participant.</p>
     */
    inline CreateParticipantResult& WithParticipantCredentials(ParticipantTokenCredentials&& value) { SetParticipantCredentials(std::move(value)); return *this;}


    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantId = value; }

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantId = std::move(value); }

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantId.assign(value); }

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline CreateParticipantResult& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline CreateParticipantResult& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline CreateParticipantResult& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateParticipantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateParticipantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateParticipantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ParticipantTokenCredentials m_participantCredentials;

    Aws::String m_participantId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
