/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/EncounterContext.h>
#include <aws/connecthealth/model/MedicalScribeChannelDefinition.h>
#include <aws/connecthealth/model/MedicalScribePostStreamActionSettings.h>
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
 * <p>An event containing configuration for the Medical Scribe
 * session</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeConfigurationEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeConfigurationEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeConfigurationEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeConfigurationEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeConfigurationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Settings for actions to perform after the stream ends</p>
   */
  inline const MedicalScribePostStreamActionSettings& GetPostStreamActionSettings() const { return m_postStreamActionSettings; }
  inline bool PostStreamActionSettingsHasBeenSet() const { return m_postStreamActionSettingsHasBeenSet; }
  template <typename PostStreamActionSettingsT = MedicalScribePostStreamActionSettings>
  void SetPostStreamActionSettings(PostStreamActionSettingsT&& value) {
    m_postStreamActionSettingsHasBeenSet = true;
    m_postStreamActionSettings = std::forward<PostStreamActionSettingsT>(value);
  }
  template <typename PostStreamActionSettingsT = MedicalScribePostStreamActionSettings>
  MedicalScribeConfigurationEvent& WithPostStreamActionSettings(PostStreamActionSettingsT&& value) {
    SetPostStreamActionSettings(std::forward<PostStreamActionSettingsT>(value));
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
  MedicalScribeConfigurationEvent& WithChannelDefinitions(ChannelDefinitionsT&& value) {
    SetChannelDefinitions(std::forward<ChannelDefinitionsT>(value));
    return *this;
  }
  template <typename ChannelDefinitionsT = MedicalScribeChannelDefinition>
  MedicalScribeConfigurationEvent& AddChannelDefinitions(ChannelDefinitionsT&& value) {
    m_channelDefinitionsHasBeenSet = true;
    m_channelDefinitions.emplace_back(std::forward<ChannelDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Context information about the clinical encounter</p>
   */
  inline const EncounterContext& GetEncounterContext() const { return m_encounterContext; }
  inline bool EncounterContextHasBeenSet() const { return m_encounterContextHasBeenSet; }
  template <typename EncounterContextT = EncounterContext>
  void SetEncounterContext(EncounterContextT&& value) {
    m_encounterContextHasBeenSet = true;
    m_encounterContext = std::forward<EncounterContextT>(value);
  }
  template <typename EncounterContextT = EncounterContext>
  MedicalScribeConfigurationEvent& WithEncounterContext(EncounterContextT&& value) {
    SetEncounterContext(std::forward<EncounterContextT>(value));
    return *this;
  }
  ///@}
 private:
  MedicalScribePostStreamActionSettings m_postStreamActionSettings;

  Aws::Vector<MedicalScribeChannelDefinition> m_channelDefinitions;

  EncounterContext m_encounterContext;
  bool m_postStreamActionSettingsHasBeenSet = false;
  bool m_channelDefinitionsHasBeenSet = false;
  bool m_encounterContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
