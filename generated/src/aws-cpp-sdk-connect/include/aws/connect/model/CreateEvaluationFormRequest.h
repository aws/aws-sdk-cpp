/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAutoEvaluationConfiguration.h>
#include <aws/connect/model/EvaluationFormItem.h>
#include <aws/connect/model/EvaluationFormLanguageConfiguration.h>
#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/connect/model/EvaluationFormTargetConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class CreateEvaluationFormRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateEvaluationFormRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEvaluationForm"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateEvaluationFormRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A title of the evaluation form.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateEvaluationFormRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the evaluation form.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateEvaluationFormRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Items that are part of the evaluation form. The total number of sections and
   * questions must not exceed 100 each. Questions must be contained in a
   * section.</p>
   */
  inline const Aws::Vector<EvaluationFormItem>& GetItems() const { return m_items; }
  inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
  template <typename ItemsT = Aws::Vector<EvaluationFormItem>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<EvaluationFormItem>>
  CreateEvaluationFormRequest& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = EvaluationFormItem>
  CreateEvaluationFormRequest& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A scoring strategy of the evaluation form.</p>
   */
  inline const EvaluationFormScoringStrategy& GetScoringStrategy() const { return m_scoringStrategy; }
  inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
  template <typename ScoringStrategyT = EvaluationFormScoringStrategy>
  void SetScoringStrategy(ScoringStrategyT&& value) {
    m_scoringStrategyHasBeenSet = true;
    m_scoringStrategy = std::forward<ScoringStrategyT>(value);
  }
  template <typename ScoringStrategyT = EvaluationFormScoringStrategy>
  CreateEvaluationFormRequest& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration information about automated evaluations.</p>
   */
  inline const EvaluationFormAutoEvaluationConfiguration& GetAutoEvaluationConfiguration() const { return m_autoEvaluationConfiguration; }
  inline bool AutoEvaluationConfigurationHasBeenSet() const { return m_autoEvaluationConfigurationHasBeenSet; }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  void SetAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    m_autoEvaluationConfigurationHasBeenSet = true;
    m_autoEvaluationConfiguration = std::forward<AutoEvaluationConfigurationT>(value);
  }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  CreateEvaluationFormRequest& WithAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    SetAutoEvaluationConfiguration(std::forward<AutoEvaluationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the Amazon Web Services SDK
   * populates this field. For more information about idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateEvaluationFormRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean flag indicating whether to create evaluation form in draft
   * state.</p>
   */
  inline bool GetAsDraft() const { return m_asDraft; }
  inline bool AsDraftHasBeenSet() const { return m_asDraftHasBeenSet; }
  inline void SetAsDraft(bool value) {
    m_asDraftHasBeenSet = true;
    m_asDraft = value;
  }
  inline CreateEvaluationFormRequest& WithAsDraft(bool value) {
    SetAsDraft(value);
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
  CreateEvaluationFormRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateEvaluationFormRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that specifies the target for the evaluation form.</p>
   */
  inline const EvaluationFormTargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
  inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  void SetTargetConfiguration(TargetConfigurationT&& value) {
    m_targetConfigurationHasBeenSet = true;
    m_targetConfiguration = std::forward<TargetConfigurationT>(value);
  }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  CreateEvaluationFormRequest& WithTargetConfiguration(TargetConfigurationT&& value) {
    SetTargetConfiguration(std::forward<TargetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for language settings of the evaluation form.</p>
   */
  inline const EvaluationFormLanguageConfiguration& GetLanguageConfiguration() const { return m_languageConfiguration; }
  inline bool LanguageConfigurationHasBeenSet() const { return m_languageConfigurationHasBeenSet; }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  void SetLanguageConfiguration(LanguageConfigurationT&& value) {
    m_languageConfigurationHasBeenSet = true;
    m_languageConfiguration = std::forward<LanguageConfigurationT>(value);
  }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  CreateEvaluationFormRequest& WithLanguageConfiguration(LanguageConfigurationT&& value) {
    SetLanguageConfiguration(std::forward<LanguageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<EvaluationFormItem> m_items;
  bool m_itemsHasBeenSet = false;

  EvaluationFormScoringStrategy m_scoringStrategy;
  bool m_scoringStrategyHasBeenSet = false;

  EvaluationFormAutoEvaluationConfiguration m_autoEvaluationConfiguration;
  bool m_autoEvaluationConfigurationHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  bool m_asDraft{false};
  bool m_asDraftHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  EvaluationFormTargetConfiguration m_targetConfiguration;
  bool m_targetConfigurationHasBeenSet = false;

  EvaluationFormLanguageConfiguration m_languageConfiguration;
  bool m_languageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
