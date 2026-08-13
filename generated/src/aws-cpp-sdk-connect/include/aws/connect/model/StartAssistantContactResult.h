/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class StartAssistantContactResult {
 public:
  AWS_CONNECT_API StartAssistantContactResult() = default;
  AWS_CONNECT_API StartAssistantContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API StartAssistantContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the contact within the Connect Customer instance.</p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  StartAssistantContactResult& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the chat participant. The participant identifier remains
   * the same throughout the chat lifecycle.</p>
   */
  inline const Aws::String& GetParticipantId() const { return m_participantId; }
  template <typename ParticipantIdT = Aws::String>
  void SetParticipantId(ParticipantIdT&& value) {
    m_participantIdHasBeenSet = true;
    m_participantId = std::forward<ParticipantIdT>(value);
  }
  template <typename ParticipantIdT = Aws::String>
  StartAssistantContactResult& WithParticipantId(ParticipantIdT&& value) {
    SetParticipantId(std::forward<ParticipantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that the chat participant uses to call the <a
   * href="https://docs.aws.amazon.com/connect-participant/latest/APIReference/API_CreateParticipantConnection.html">CreateParticipantConnection</a>
   * API. The token remains valid for the lifetime of the chat participant.</p>
   */
  inline const Aws::String& GetParticipantToken() const { return m_participantToken; }
  template <typename ParticipantTokenT = Aws::String>
  void SetParticipantToken(ParticipantTokenT&& value) {
    m_participantTokenHasBeenSet = true;
    m_participantToken = std::forward<ParticipantTokenT>(value);
  }
  template <typename ParticipantTokenT = Aws::String>
  StartAssistantContactResult& WithParticipantToken(ParticipantTokenT&& value) {
    SetParticipantToken(std::forward<ParticipantTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a persistent chat, the identifier of the contact from which the chat
   * continues. Amazon Connect returns this field only for persistent chats.</p>
   */
  inline const Aws::String& GetContinuedFromContactId() const { return m_continuedFromContactId; }
  template <typename ContinuedFromContactIdT = Aws::String>
  void SetContinuedFromContactId(ContinuedFromContactIdT&& value) {
    m_continuedFromContactIdHasBeenSet = true;
    m_continuedFromContactId = std::forward<ContinuedFromContactIdT>(value);
  }
  template <typename ContinuedFromContactIdT = Aws::String>
  StartAssistantContactResult& WithContinuedFromContactId(ContinuedFromContactIdT&& value) {
    SetContinuedFromContactId(std::forward<ContinuedFromContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartAssistantContactResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_contactId;

  Aws::String m_participantId;

  Aws::String m_participantToken;

  Aws::String m_continuedFromContactId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contactIdHasBeenSet = false;
  bool m_participantIdHasBeenSet = false;
  bool m_participantTokenHasBeenSet = false;
  bool m_continuedFromContactIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
