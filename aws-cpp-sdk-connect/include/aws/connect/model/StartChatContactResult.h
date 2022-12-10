/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
  class StartChatContactResult
  {
  public:
    AWS_CONNECT_API StartChatContactResult();
    AWS_CONNECT_API StartChatContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API StartChatContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline StartChatContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline StartChatContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of this contact within the Amazon Connect instance. </p>
     */
    inline StartChatContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}


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
    inline StartChatContactResult& WithParticipantId(const Aws::String& value) { SetParticipantId(value); return *this;}

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline StartChatContactResult& WithParticipantId(Aws::String&& value) { SetParticipantId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a chat participant. The participantId for a chat
     * participant is the same throughout the chat lifecycle.</p>
     */
    inline StartChatContactResult& WithParticipantId(const char* value) { SetParticipantId(value); return *this;}


    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline const Aws::String& GetParticipantToken() const{ return m_participantToken; }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline void SetParticipantToken(const Aws::String& value) { m_participantToken = value; }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline void SetParticipantToken(Aws::String&& value) { m_participantToken = std::move(value); }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline void SetParticipantToken(const char* value) { m_participantToken.assign(value); }

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline StartChatContactResult& WithParticipantToken(const Aws::String& value) { SetParticipantToken(value); return *this;}

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline StartChatContactResult& WithParticipantToken(Aws::String&& value) { SetParticipantToken(std::move(value)); return *this;}

    /**
     * <p>The token used by the chat participant to call <a
     * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>.
     * The participant token is valid for the lifetime of a chat participant.</p>
     */
    inline StartChatContactResult& WithParticipantToken(const char* value) { SetParticipantToken(value); return *this;}

  private:

    Aws::String m_contactId;

    Aws::String m_participantId;

    Aws::String m_participantToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
