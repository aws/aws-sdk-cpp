/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeChannelDefinition.h>
#include <aws/connecthealth/model/MedicalScribeLanguageCode.h>
#include <aws/connecthealth/model/MedicalScribeMediaEncoding.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionSettingsResponse.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionsResult.h>
#include <aws/connecthealth/model/MedicalScribeStreamStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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

/**
 * <p>Detailed information about a Medical Scribe listening session</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeListeningSessionDetails">AWS
 * API Reference</a></p>
 */
class MedicalScribeListeningSessionDetails {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeListeningSessionDetails() = default;
  AWS_CONNECTHEALTH_API MedicalScribeListeningSessionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeListeningSessionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MedicalScribeListeningSessionDetails& WithSessionId(SessionIdT&& value) {
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
  MedicalScribeListeningSessionDetails& WithDomainId(DomainIdT&& value) {
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
  MedicalScribeListeningSessionDetails& WithSubscriptionId(SubscriptionIdT&& value) {
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
  inline MedicalScribeListeningSessionDetails& WithLanguageCode(MedicalScribeLanguageCode value) {
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
  inline MedicalScribeListeningSessionDetails& WithMediaSampleRateHertz(int value) {
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
  inline MedicalScribeListeningSessionDetails& WithMediaEncoding(MedicalScribeMediaEncoding value) {
    SetMediaEncoding(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Channel definitions for the audio stream</p>
   */
  inline const Aws::Vector<MedicalScribeChannelDefinition>& GetChannelDefinitions() const { return m_channelDefinitions; }
  inline bool ChannelDefinitionsHasBeenSet() const { return m_channelDefinitionsHasBeenSet; }
  template <typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
  void SetChannelDefinitions(ChannelDefinitionsT&& value) {
    m_channelDefinitionsHasBeenSet = true;
    m_channelDefinitions = std::forward<ChannelDefinitionsT>(value);
  }
  template <typename ChannelDefinitionsT = Aws::Vector<MedicalScribeChannelDefinition>>
  MedicalScribeListeningSessionDetails& WithChannelDefinitions(ChannelDefinitionsT&& value) {
    SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value));
    return *this;
  }
  template <typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
  MedicalScribeListeningSessionDetails& AddChannelDefinitions(ChannelDefinitionsT&& value) {
    m_channelDefinitionsHasBeenSet = true;
    m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for post-stream actions</p>
   */
  inline const MedicalScribePostStreamActionSettingsResponse& GetPostStreamActionSettings() const { return m_postStreamActionSettings; }
  inline bool PostStreamActionSettingsHasBeenSet() const { return m_postStreamActionSettingsHasBeenSet; }
  template <typename PostStreamActionSettingsT = MedicalScribePostStreamActionSettingsResponse>
  void SetPostStreamActionSettings(PostStreamActionSettingsT&& value) {
    m_postStreamActionSettingsHasBeenSet = true;
    m_postStreamActionSettings = std::forward<PostStreamActionSettingsT>(value);
  }
  template <typename PostStreamActionSettingsT = MedicalScribePostStreamActionSettingsResponse>
  MedicalScribeListeningSessionDetails& WithPostStreamActionSettings(PostStreamActionSettingsT&& value) {
    SetPostStreamActionSettings(std::forward<PostStreamActionSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Results of post-stream actions</p>
   */
  inline const MedicalScribePostStreamActionsResult& GetPostStreamActionResult() const { return m_postStreamActionResult; }
  inline bool PostStreamActionResultHasBeenSet() const { return m_postStreamActionResultHasBeenSet; }
  template <typename PostStreamActionResultT = MedicalScribePostStreamActionsResult>
  void SetPostStreamActionResult(PostStreamActionResultT&& value) {
    m_postStreamActionResultHasBeenSet = true;
    m_postStreamActionResult = std::forward<PostStreamActionResultT>(value);
  }
  template <typename PostStreamActionResultT = MedicalScribePostStreamActionsResult>
  MedicalScribeListeningSessionDetails& WithPostStreamActionResult(PostStreamActionResultT&& value) {
    SetPostStreamActionResult(std::forward<PostStreamActionResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether encounter context was provided</p>
   */
  inline bool GetEncounterContextProvided() const { return m_encounterContextProvided; }
  inline bool EncounterContextProvidedHasBeenSet() const { return m_encounterContextProvidedHasBeenSet; }
  inline void SetEncounterContextProvided(bool value) {
    m_encounterContextProvidedHasBeenSet = true;
    m_encounterContextProvided = value;
  }
  inline MedicalScribeListeningSessionDetails& WithEncounterContextProvided(bool value) {
    SetEncounterContextProvided(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the stream</p>
   */
  inline MedicalScribeStreamStatus GetStreamStatus() const { return m_streamStatus; }
  inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
  inline void SetStreamStatus(MedicalScribeStreamStatus value) {
    m_streamStatusHasBeenSet = true;
    m_streamStatus = value;
  }
  inline MedicalScribeListeningSessionDetails& WithStreamStatus(MedicalScribeStreamStatus value) {
    SetStreamStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the stream was created</p>
   */
  inline const Aws::Utils::DateTime& GetStreamCreationTime() const { return m_streamCreationTime; }
  inline bool StreamCreationTimeHasBeenSet() const { return m_streamCreationTimeHasBeenSet; }
  template <typename StreamCreationTimeT = Aws::Utils::DateTime>
  void SetStreamCreationTime(StreamCreationTimeT&& value) {
    m_streamCreationTimeHasBeenSet = true;
    m_streamCreationTime = std::forward<StreamCreationTimeT>(value);
  }
  template <typename StreamCreationTimeT = Aws::Utils::DateTime>
  MedicalScribeListeningSessionDetails& WithStreamCreationTime(StreamCreationTimeT&& value) {
    SetStreamCreationTime(std::forward<StreamCreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the stream ended</p>
   */
  inline const Aws::Utils::DateTime& GetStreamEndTime() const { return m_streamEndTime; }
  inline bool StreamEndTimeHasBeenSet() const { return m_streamEndTimeHasBeenSet; }
  template <typename StreamEndTimeT = Aws::Utils::DateTime>
  void SetStreamEndTime(StreamEndTimeT&& value) {
    m_streamEndTimeHasBeenSet = true;
    m_streamEndTime = std::forward<StreamEndTimeT>(value);
  }
  template <typename StreamEndTimeT = Aws::Utils::DateTime>
  MedicalScribeListeningSessionDetails& WithStreamEndTime(StreamEndTimeT&& value) {
    SetStreamEndTime(std::forward<StreamEndTimeT>(value));
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

  Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;

  MedicalScribePostStreamActionSettingsResponse m_postStreamActionSettings;

  MedicalScribePostStreamActionsResult m_postStreamActionResult;

  bool m_encounterContextProvided{false};

  MedicalScribeStreamStatus m_streamStatus{MedicalScribeStreamStatus::NOT_SET};

  Aws::Utils::DateTime m_streamCreationTime{};

  Aws::Utils::DateTime m_streamEndTime{};
  bool m_sessionIdHasBeenSet = false;
  bool m_domainIdHasBeenSet = false;
  bool m_subscriptionIdHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_mediaSampleRateHertzHasBeenSet = false;
  bool m_mediaEncodingHasBeenSet = false;
  bool m_channelDefinitionsHasBeenSet = false;
  bool m_postStreamActionSettingsHasBeenSet = false;
  bool m_postStreamActionResultHasBeenSet = false;
  bool m_encounterContextProvidedHasBeenSet = false;
  bool m_streamStatusHasBeenSet = false;
  bool m_streamCreationTimeHasBeenSet = false;
  bool m_streamEndTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
