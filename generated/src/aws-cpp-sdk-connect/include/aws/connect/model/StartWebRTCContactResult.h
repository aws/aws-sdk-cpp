/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ConnectionData.h>
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
  class StartWebRTCContactResult
  {
  public:
    AWS_CONNECT_API StartWebRTCContactResult();
    AWS_CONNECT_API StartWebRTCContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartWebRTCContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline const ConnectionData& GetConnectionData() const{ return m_connectionData; }

    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline void SetConnectionData(const ConnectionData& value) { m_connectionData = value; }

    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline void SetConnectionData(ConnectionData&& value) { m_connectionData = std::move(value); }

    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline StartWebRTCContactResult& WithConnectionData(const ConnectionData& value) { SetConnectionData(value); return *this;}

    /**
     * <p>Information required for the client application (mobile application or
     * website) to connect to the call.</p>
     */
    inline StartWebRTCContactResult& WithConnectionData(ConnectionData&& value) { SetConnectionData(std::move(value)); return *this;}


    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline StartWebRTCContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline StartWebRTCContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline StartWebRTCContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline const Aws::String& GetParticipantId() const{ return m_participantId; }

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline void SetParticipantId(const Aws::String& value) { m_participantId = value; }

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline void SetParticipantId(Aws::String&& value) { m_participantId = std::move(value); }

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline void SetParticipantId(const char* value) { m_participantId.assign(value); }

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline StartWebRTCContactResult& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline StartWebRTCContactResult& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a contact participant. The <code>ParticipantId</code> for
     * a contact participant is the same throughout the contact lifecycle.</p>
     */
    inline StartWebRTCContactResult& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline void SetParticipantToken(const Aws::String& value) { m_participantToken = value; }

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline void SetParticipantToken(Aws::String&& value) { m_participantToken = std::move(value); }

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline void SetParticipantToken(const char* value) { m_participantToken.assign(value); }

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline StartWebRTCContactResult& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline StartWebRTCContactResult& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}

    /**
     * <p>The token used by the contact participant to call the <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
     * API. The participant token is valid for the lifetime of a contact
     * participant.</p>
     */
    inline StartWebRTCContactResult& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartWebRTCContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartWebRTCContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartWebRTCContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConnectionData m_connectionData;

    Aws::String m_contactId;

    Aws::String m_participantId;

    Aws::String m_participantToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
