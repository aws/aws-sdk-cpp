/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeInputStream.h>
#include <aws/connecthealth/model/MedicalScribeLanguageCode.h>
#include <aws/connecthealth/model/MedicalScribeMediaEncoding.h>
#include <aws/connecthealth/model/StartMedicalScribeListeningSessionHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <memory>
#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 */
class StartMedicalScribeListeningSessionRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMedicalScribeListeningSession"; }

  inline virtual bool IsEventStreamRequest() const override { return true; }
  inline virtual bool HasEventStreamResponse() const override { return true; }
  // SerializePayload will not be invoked.
  // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
  AWS_CONNECTHEALTH_API Aws::String SerializePayload() const override { return {}; }
  AWS_CONNECTHEALTH_API std::shared_ptr<Aws::IOStream> GetBody() const override;
  AWS_CONNECTHEALTH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline StartMedicalScribeListeningSessionHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const StartMedicalScribeListeningSessionHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline StartMedicalScribeListeningSessionRequest& WithEventStreamHandler(const StartMedicalScribeListeningSessionHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>The Session identifier</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  StartMedicalScribeListeningSessionRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Domain identifier</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  StartMedicalScribeListeningSessionRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Subscription identifier</p>
   */
  inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
  inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
  template <typename SubscriptionIdT = Aws::String>
  void SetSubscriptionId(SubscriptionIdT&& value) {
    m_subscriptionIdHasBeenSet = true;
    m_subscriptionId = std::forward<SubscriptionIdT>(value);
  }
  template <typename SubscriptionIdT = Aws::String>
  StartMedicalScribeListeningSessionRequest& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Language Code for the audio in the session</p>
   */
  inline MedicalScribeLanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(MedicalScribeLanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline StartMedicalScribeListeningSessionRequest& WithLanguageCode(MedicalScribeLanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sample rate of the input audio</p>
   */
  inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
  inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
  inline void SetMediaSampleRateHertz(int value) {
    m_mediaSampleRateHertzHasBeenSet = true;
    m_mediaSampleRateHertz = value;
  }
  inline StartMedicalScribeListeningSessionRequest& WithMediaSampleRateHertz(int value) {
    SetMediaSampleRateHertz(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encoding for the input audio</p>
   */
  inline MedicalScribeMediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
  inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
  inline void SetMediaEncoding(MedicalScribeMediaEncoding value) {
    m_mediaEncodingHasBeenSet = true;
    m_mediaEncoding = value;
  }
  inline StartMedicalScribeListeningSessionRequest& WithMediaEncoding(MedicalScribeMediaEncoding value) {
    SetMediaEncoding(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  AWS_CONNECTHEALTH_API std::shared_ptr<MedicalScribeInputStream> GetInputStream() const { return m_inputStream; }
  AWS_CONNECTHEALTH_API void SetInputStream(const std::shared_ptr<MedicalScribeInputStream>& value) {
    m_inputStreamHasBeenSet = true;
    m_inputStream = value;
  }
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionRequest& WithInputStream(const std::shared_ptr<MedicalScribeInputStream>& value) {
    SetInputStream(value);
    return *this;
  }

  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_domainId;

  Aws::String m_subscriptionId;

  MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};

  int m_mediaSampleRateHertz{0};

  MedicalScribeMediaEncoding m_mediaEncoding{MedicalScribeMediaEncoding::NOT_SET};

  std::shared_ptr<MedicalScribeInputStream> m_inputStream;
  StartMedicalScribeListeningSessionHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_sessionIdHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_mediaSampleRateHertzHasBeenSet = false;
  bool m_mediaEncodingHasBeenSet = false;
  bool m_inputStreamHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
