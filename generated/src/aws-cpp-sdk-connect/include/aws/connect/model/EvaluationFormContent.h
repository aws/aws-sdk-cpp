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
 * <p>Information about an evaluation form used in a contact
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormContent">AWS
 * API Reference</a></p>
 */
class EvaluationFormContent {
 public:
  AWS_CONNECT_API EvaluationFormContent() = default;
  AWS_CONNECT_API EvaluationFormContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline EvaluationFormContent& WithEvaluationFormVersion(int value) {
    SetEvaluationFormVersion(value);
    return *this;
  }
  ///@}

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
  EvaluationFormContent& WithEvaluationFormId(EvaluationFormIdT&& value) {
    SetEvaluationFormId(std::forward<EvaluationFormIdT>(value));
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
  EvaluationFormContent& WithEvaluationFormArn(EvaluationFormArnT&& value) {
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
  EvaluationFormContent& WithTitle(TitleT&& value) {
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
  EvaluationFormContent& WithDescription(DescriptionT&& value) {
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
  EvaluationFormContent& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = EvaluationFormItem>
  EvaluationFormContent& AddItems(ItemsT&& value) {
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
  EvaluationFormContent& WithScoringStrategy(ScoringStrategyT&& value) {
    SetScoringStrategy(std::forward<ScoringStrategyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the automated evaluation.</p>
   */
  inline const EvaluationFormAutoEvaluationConfiguration& GetAutoEvaluationConfiguration() const { return m_autoEvaluationConfiguration; }
  inline bool AutoEvaluationConfigurationHasBeenSet() const { return m_autoEvaluationConfigurationHasBeenSet; }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  void SetAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    m_autoEvaluationConfigurationHasBeenSet = true;
    m_autoEvaluationConfiguration = std::forward<AutoEvaluationConfigurationT>(value);
  }
  template <typename AutoEvaluationConfigurationT = EvaluationFormAutoEvaluationConfiguration>
  EvaluationFormContent& WithAutoEvaluationConfiguration(AutoEvaluationConfigurationT&& value) {
    SetAutoEvaluationConfiguration(std::forward<AutoEvaluationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that specifies the target for this evaluation form content.</p>
   */
  inline const EvaluationFormTargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
  inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  void SetTargetConfiguration(TargetConfigurationT&& value) {
    m_targetConfigurationHasBeenSet = true;
    m_targetConfiguration = std::forward<TargetConfigurationT>(value);
  }
  template <typename TargetConfigurationT = EvaluationFormTargetConfiguration>
  EvaluationFormContent& WithTargetConfiguration(TargetConfigurationT&& value) {
    SetTargetConfiguration(std::forward<TargetConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for language settings of this evaluation form content.</p>
   */
  inline const EvaluationFormLanguageConfiguration& GetLanguageConfiguration() const { return m_languageConfiguration; }
  inline bool LanguageConfigurationHasBeenSet() const { return m_languageConfigurationHasBeenSet; }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  void SetLanguageConfiguration(LanguageConfigurationT&& value) {
    m_languageConfigurationHasBeenSet = true;
    m_languageConfiguration = std::forward<LanguageConfigurationT>(value);
  }
  template <typename LanguageConfigurationT = EvaluationFormLanguageConfiguration>
  EvaluationFormContent& WithLanguageConfiguration(LanguageConfigurationT&& value) {
    SetLanguageConfiguration(std::forward<LanguageConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  int m_evaluationFormVersion{0};

  Aws::String m_evaluationFormId;

  Aws::String m_evaluationFormArn;

  Aws::String m_title;

  Aws::String m_description;

  Aws::Vector<EvaluationFormItem> m_items;

  EvaluationFormScoringStrategy m_scoringStrategy;

  EvaluationFormAutoEvaluationConfiguration m_autoEvaluationConfiguration;

  EvaluationFormTargetConfiguration m_targetConfiguration;

  EvaluationFormLanguageConfiguration m_languageConfiguration;
  bool m_evaluationFormVersionHasBeenSet = false;
  bool m_evaluationFormIdHasBeenSet = false;
  bool m_evaluationFormArnHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_itemsHasBeenSet = false;
  bool m_scoringStrategyHasBeenSet = false;
  bool m_autoEvaluationConfigurationHasBeenSet = false;
  bool m_targetConfigurationHasBeenSet = false;
  bool m_languageConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
