/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthErrors.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeTranscriptEvent.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionInitialResponse.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class StartMedicalScribeListeningSessionEventType { INITIAL_RESPONSE, TRANSCRIPTEVENT, UNKNOWN };

class StartMedicalScribeListeningSessionHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const StartMedicalScribeListeningSessionInitialResponse&)>
      StartMedicalScribeListeningSessionInitialResponseCallback;
  typedef std::function<void(const StartMedicalScribeListeningSessionInitialResponse&, const Utils::Event::InitialResponseType)>
      StartMedicalScribeListeningSessionInitialResponseCallbackEx;
  typedef std::function<void(const MedicalScribeTranscriptEvent&)> MedicalScribeTranscriptEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<ConnectHealthErrors>& error)> ErrorCallback;

 public:
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionHandler();
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionHandler& operator=(const StartMedicalScribeListeningSessionHandler&) = default;
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionHandler(const StartMedicalScribeListeningSessionHandler&) = default;

  AWS_CONNECTHEALTH_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial StartMedicalScribeListeningSession Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const StartMedicalScribeListeningSessionInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const StartMedicalScribeListeningSessionInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const StartMedicalScribeListeningSessionInitialResponse& rs,
                                          const Utils::Event::InitialResponseType) { return noArgCallback(rs); };
  }
  ///@}
  inline void SetMedicalScribeTranscriptEventCallback(const MedicalScribeTranscriptEventCallback& callback) {
    m_onMedicalScribeTranscriptEvent = callback;
  }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline StartMedicalScribeListeningSessionInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_CONNECTHEALTH_API void HandleEventInMessage();
  AWS_CONNECTHEALTH_API void HandleErrorInMessage();
  AWS_CONNECTHEALTH_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  StartMedicalScribeListeningSessionInitialResponseCallbackEx m_onInitialResponse;
  MedicalScribeTranscriptEventCallback m_onMedicalScribeTranscriptEvent;
  ErrorCallback m_onError;
};

namespace StartMedicalScribeListeningSessionEventMapper {
AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionEventType
GetStartMedicalScribeListeningSessionEventTypeForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForStartMedicalScribeListeningSessionEventType(StartMedicalScribeListeningSessionEventType value);
}  // namespace StartMedicalScribeListeningSessionEventMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
