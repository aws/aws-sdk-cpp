/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/healthlake/HealthLakeErrors.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/EndOfOutputEvent.h>
#include <aws/healthlake/model/ErrorEvent.h>
#include <aws/healthlake/model/ProgressEvent.h>
#include <aws/healthlake/model/TextMessageEvent.h>
#include <aws/healthlake/model/UpdateProfileWithAgentInitialResponse.h>

namespace Aws {
namespace HealthLake {
namespace Model {
enum class UpdateProfileWithAgentEventType {
  INITIAL_RESPONSE,
  TEXTMESSAGEEVENT,
  PROGRESSEVENT,
  HEARTBEATEVENT,
  ERROREVENT,
  ENDOFOUTPUTEVENT,
  UNKNOWN
};

class UpdateProfileWithAgentHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const UpdateProfileWithAgentInitialResponse&)> UpdateProfileWithAgentInitialResponseCallback;
  typedef std::function<void(const UpdateProfileWithAgentInitialResponse&, const Utils::Event::InitialResponseType)>
      UpdateProfileWithAgentInitialResponseCallbackEx;
  typedef std::function<void(const TextMessageEvent&)> TextMessageEventCallback;
  typedef std::function<void(const ProgressEvent&)> ProgressEventCallback;
  typedef std::function<void()> HeartbeatEventCallback;
  typedef std::function<void(const ErrorEvent&)> ErrorEventCallback;
  typedef std::function<void(const EndOfOutputEvent&)> EndOfOutputEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<HealthLakeErrors>& error)> ErrorCallback;

 public:
  AWS_HEALTHLAKE_API UpdateProfileWithAgentHandler();
  AWS_HEALTHLAKE_API UpdateProfileWithAgentHandler& operator=(const UpdateProfileWithAgentHandler&) = default;
  AWS_HEALTHLAKE_API UpdateProfileWithAgentHandler(const UpdateProfileWithAgentHandler&) = default;

  AWS_HEALTHLAKE_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial UpdateProfileWithAgent Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const UpdateProfileWithAgentInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const UpdateProfileWithAgentInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const UpdateProfileWithAgentInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetTextMessageEventCallback(const TextMessageEventCallback& callback) { m_onTextMessageEvent = callback; }
  inline void SetProgressEventCallback(const ProgressEventCallback& callback) { m_onProgressEvent = callback; }
  inline void SetHeartbeatEventCallback(const HeartbeatEventCallback& callback) { m_onHeartbeatEvent = callback; }
  inline void SetErrorEventCallback(const ErrorEventCallback& callback) { m_onErrorEvent = callback; }
  inline void SetEndOfOutputEventCallback(const EndOfOutputEventCallback& callback) { m_onEndOfOutputEvent = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline UpdateProfileWithAgentInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_HEALTHLAKE_API void HandleEventInMessage();
  AWS_HEALTHLAKE_API void HandleErrorInMessage();
  AWS_HEALTHLAKE_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  UpdateProfileWithAgentInitialResponseCallbackEx m_onInitialResponse;
  TextMessageEventCallback m_onTextMessageEvent;
  ProgressEventCallback m_onProgressEvent;
  HeartbeatEventCallback m_onHeartbeatEvent;
  ErrorEventCallback m_onErrorEvent;
  EndOfOutputEventCallback m_onEndOfOutputEvent;
  ErrorCallback m_onError;
};

namespace UpdateProfileWithAgentEventMapper {
AWS_HEALTHLAKE_API UpdateProfileWithAgentEventType GetUpdateProfileWithAgentEventTypeForName(const Aws::String& name);

AWS_HEALTHLAKE_API Aws::String GetNameForUpdateProfileWithAgentEventType(UpdateProfileWithAgentEventType value);
}  // namespace UpdateProfileWithAgentEventMapper
}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
