/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeLanguageCode.h>
#include <aws/connecthealth/model/MedicalScribeMediaEncoding.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

class StartMedicalScribeListeningSessionInitialResponse {
 public:
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionInitialResponse() = default;
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API StartMedicalScribeListeningSessionInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  StartMedicalScribeListeningSessionInitialResponse& WithSessionId(SessionIdT&& value) {
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
  StartMedicalScribeListeningSessionInitialResponse& WithDomainId(DomainIdT&& value) {
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
  StartMedicalScribeListeningSessionInitialResponse& WithSubscriptionId(SubscriptionIdT&& value) {
    SetSubscriptionId(std::forward<SubscriptionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Request identifier</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartMedicalScribeListeningSessionInitialResponse& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
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
  inline StartMedicalScribeListeningSessionInitialResponse& WithLanguageCode(MedicalScribeLanguageCode value) {
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
  inline StartMedicalScribeListeningSessionInitialResponse& WithMediaSampleRateHertz(int value) {
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
  inline StartMedicalScribeListeningSessionInitialResponse& WithMediaEncoding(MedicalScribeMediaEncoding value) {
    SetMediaEncoding(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_domainId;

  Aws::String m_subscriptionId;

  Aws::String m_requestId;

  MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};

  int m_mediaSampleRateHertz{0};

  MedicalScribeMediaEncoding m_mediaEncoding{MedicalScribeMediaEncoding::NOT_SET};
  bool m_sessionIdHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_mediaSampleRateHertzHasBeenSet = false;
  bool m_mediaEncodingHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
