/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactFlowModuleState.h>
#include <aws/connect/model/ContactFlowModuleStatus.h>
#include <aws/connect/model/ExternalInvocationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains information about a flow module.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowModule">AWS
 * API Reference</a></p>
 */
class ContactFlowModule {
 public:
  AWS_CONNECT_API ContactFlowModule() = default;
  AWS_CONNECT_API ContactFlowModule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactFlowModule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ContactFlowModule& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the flow module.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ContactFlowModule& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the flow module.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ContactFlowModule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON string that represents the content of the flow. For an example, see
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language-example.html">Example
   * flow in Amazon Connect Flow language</a>. </p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  ContactFlowModule& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the flow module.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ContactFlowModule& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of flow module.</p>
   */
  inline ContactFlowModuleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ContactFlowModuleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ContactFlowModule& WithState(ContactFlowModuleState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the flow module.</p>
   */
  inline ContactFlowModuleStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ContactFlowModuleStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContactFlowModule& WithStatus(ContactFlowModuleStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource. For
   * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ContactFlowModule& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ContactFlowModule& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Hash of the module content for integrity verification.</p>
   */
  inline const Aws::String& GetFlowModuleContentSha256() const { return m_flowModuleContentSha256; }
  inline bool FlowModuleContentSha256HasBeenSet() const { return m_flowModuleContentSha256HasBeenSet; }
  template <typename FlowModuleContentSha256T = Aws::String>
  void SetFlowModuleContentSha256(FlowModuleContentSha256T&& value) {
    m_flowModuleContentSha256HasBeenSet = true;
    m_flowModuleContentSha256 = std::forward<FlowModuleContentSha256T>(value);
  }
  template <typename FlowModuleContentSha256T = Aws::String>
  ContactFlowModule& WithFlowModuleContentSha256(FlowModuleContentSha256T&& value) {
    SetFlowModuleContentSha256(std::forward<FlowModuleContentSha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow module.</p>
   */
  inline long long GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(long long value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline ContactFlowModule& WithVersion(long long value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the version.</p>
   */
  inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
  inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
  template <typename VersionDescriptionT = Aws::String>
  void SetVersionDescription(VersionDescriptionT&& value) {
    m_versionDescriptionHasBeenSet = true;
    m_versionDescription = std::forward<VersionDescriptionT>(value);
  }
  template <typename VersionDescriptionT = Aws::String>
  ContactFlowModule& WithVersionDescription(VersionDescriptionT&& value) {
    SetVersionDescription(std::forward<VersionDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the flow module.</p>
   */
  inline const Aws::String& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = Aws::String>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = Aws::String>
  ContactFlowModule& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The external invocation configuration for the flow module</p>
   */
  inline const ExternalInvocationConfiguration& GetExternalInvocationConfiguration() const { return m_externalInvocationConfiguration; }
  inline bool ExternalInvocationConfigurationHasBeenSet() const { return m_externalInvocationConfigurationHasBeenSet; }
  template <typename ExternalInvocationConfigurationT = ExternalInvocationConfiguration>
  void SetExternalInvocationConfiguration(ExternalInvocationConfigurationT&& value) {
    m_externalInvocationConfigurationHasBeenSet = true;
    m_externalInvocationConfiguration = std::forward<ExternalInvocationConfigurationT>(value);
  }
  template <typename ExternalInvocationConfigurationT = ExternalInvocationConfiguration>
  ContactFlowModule& WithExternalInvocationConfiguration(ExternalInvocationConfigurationT&& value) {
    SetExternalInvocationConfiguration(std::forward<ExternalInvocationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_content;

  Aws::String m_description;

  ContactFlowModuleState m_state{ContactFlowModuleState::NOT_SET};

  ContactFlowModuleStatus m_status{ContactFlowModuleStatus::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_flowModuleContentSha256;

  long long m_version{0};

  Aws::String m_versionDescription;

  Aws::String m_settings;

  ExternalInvocationConfiguration m_externalInvocationConfiguration;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_flowModuleContentSha256HasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_versionDescriptionHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
  bool m_externalInvocationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
