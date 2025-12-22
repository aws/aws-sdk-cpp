/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAutoEvaluationConfiguration.h>
#include <aws/connect/model/EvaluationFormItem.h>
#include <aws/connect/model/EvaluationFormLanguageConfiguration.h>
#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/connect/model/EvaluationFormTargetConfiguration.h>
#include <aws/connect/model/EvaluationFormVersionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect {
namespace Model {

/**
 * <p>Information about the evaluation form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationForm">AWS
 * API Reference</a></p>
 */
class EvaluationForm {
 public:
  AWS_CONNECT_API EvaluationForm() = default;
  AWS_CONNECT_API EvaluationForm(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationForm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the evaluation form.</p>
   */
  inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
  inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
  template <typename EvaluationFormIdT = Aws::String>
  void SetEvaluationFormId(EvaluationFormIdT&& value) {
    m_evaluationFormIdHasBeenSet = true;
    m_evaluationFormId = std::forward<EvaluationFormIdT>(value);
  }
  template <typename EvaluationFormIdT = Aws::String>
  EvaluationForm& WithEvaluationFormId(EvaluationFormIdT&& value) {
    SetEvaluationFormId(std::forward<EvaluationFormIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A version of the evaluation form.</p>
   */
  inline int GetEvaluationFormVersion() const { return m_evaluationFormVersion; }
  inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
  inline void SetEvaluationFormVersion(int value) {
    m_evaluationFormVersionHasBeenSet = true;
    m_evaluationFormVersion = value;
  }
  inline EvaluationForm& WithEvaluationFormVersion(int value) {
    SetEvaluationFormVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag indicating whether the evaluation form is locked for changes.</p>
   */
  inline bool GetLocked() const { return m_locked; }
  inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }
  inline void SetLocked(bool value) {
    m_lockedHasBeenSet = true;
    m_locked = value;
  }
  inline EvaluationForm& WithLocked(bool value) {
    SetLocked(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
   */
  inline const Aws::String& GetEvaluationFormArn() const { return m_evaluationFormArn; }
  inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
  template <typename EvaluationFormArnT = Aws::String>
  void SetEvaluationFormArn(EvaluationFormArnT&& value) {
    m_evaluationFormArnHasBeenSet = true;
    m_evaluationFormArn = std::forward<EvaluationFormArnT>(value);
  }
  template <typename EvaluationFormArnT = Aws::String>
  EvaluationForm& WithEvaluationFormArn(EvaluationFormArnT&& value) {
    SetEvaluationFormArn(std::forward<EvaluationFormArnT>(value));
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
  EvaluationForm& WithTitle(TitleT&& value) {
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
  EvaluationForm& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the evaluation form.</p>
   */
  inline EvaluationFormVersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationFormVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationForm& WithStatus(EvaluationFormVersionStatus value) {
    SetStatus(value);
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
  EvaluationForm& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = EvaluationFormItem>
  EvaluationForm& AddItems(ItemsT&& value) {
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
  EvaluationForm& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the evaluation form was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  EvaluationForm& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user who created the evaluation
   * form.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  EvaluationForm& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for when the evaluation form was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  EvaluationForm& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user who last updated the evaluation
   * form.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  EvaluationForm& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The automatic evaluation configuration of an evaluation form.</p>
   */
  inline const EvaluationFormAutoEvaluationConfiguration& GetAutoEvaluationConfiguration() const { return m_autoEvaluationConfiguration; }
  inline bool AutoEvaluationConfigurationHasBeenSet() const { return m_autoEvaluationConfigurationHasBeenSet; }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  void SetAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    m_autoEvaluationConfigurationHasBeenSet = true;
    m_autoEvaluationConfiguration = std::forward<AutoEvaluationConfigurationT>(value);
  }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  EvaluationForm& WithAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    SetAutoEvaluationConfiguration(std::forward<AutoEvaluationConfigurationT>(value));
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
  EvaluationForm& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  EvaluationForm& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that specifies the target for this evaluation form.</p>
   */
  inline const EvaluationFormTargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
  inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  void SetTargetConfiguration(TargetConfigurationT&& value) {
    m_targetConfigurationHasBeenSet = true;
    m_targetConfiguration = std::forward<TargetConfigurationT>(value);
  }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  EvaluationForm& WithTargetConfiguration(TargetConfigurationT&& value) {
    SetTargetConfiguration(std::forward<TargetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for language settings of this evaluation form.</p>
   */
  inline const EvaluationFormLanguageConfiguration& GetLanguageConfiguration() const { return m_languageConfiguration; }
  inline bool LanguageConfigurationHasBeenSet() const { return m_languageConfigurationHasBeenSet; }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  void SetLanguageConfiguration(LanguageConfigurationT&& value) {
    m_languageConfigurationHasBeenSet = true;
    m_languageConfiguration = std::forward<LanguageConfigurationT>(value);
  }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  EvaluationForm& WithLanguageConfiguration(LanguageConfigurationT&& value) {
    SetLanguageConfiguration(std::forward<LanguageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluationFormId;

  int m_evaluationFormVersion{0};

  bool m_locked{false};

  Aws::String m_evaluationFormArn;

  Aws::String m_title;

  Aws::String m_description;

  EvaluationFormVersionStatus m_status{EvaluationFormVersionStatus::NOT_SET};

  Aws::Vector<EvaluationFormItem> m_items;

  EvaluationFormScoringStrategy m_scoringStrategy;

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_createdBy;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedBy;

  EvaluationFormAutoEvaluationConfiguration m_autoEvaluationConfiguration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  EvaluationFormTargetConfiguration m_targetConfiguration;

  EvaluationFormLanguageConfiguration m_languageConfiguration;
  bool m_evaluationFormIdHasBeenSet = false;
  bool m_evaluationFormVersionHasBeenSet = false;
  bool m_lockedHasBeenSet = false;
  bool m_evaluationFormArnHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
  bool m_scoringStrategyHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_autoEvaluationConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_targetConfigurationHasBeenSet = false;
  bool m_languageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
