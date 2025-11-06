/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormVersionStatus.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Information about the returned evaluation forms.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSearchSummary">AWS
 * API Reference</a></p>
 */
class EvaluationFormSearchSummary {
 public:
  AWS_CONNECT_API EvaluationFormSearchSummary() = default;
  AWS_CONNECT_API EvaluationFormSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  EvaluationFormSearchSummary& WithEvaluationFormId(EvaluationFormIdT&& value) {
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
  EvaluationFormSearchSummary& WithEvaluationFormArn(EvaluationFormArnT&& value) {
    SetEvaluationFormArn(std::forward<EvaluationFormArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the evaluation form.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  EvaluationFormSearchSummary& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
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
  inline EvaluationFormSearchSummary& WithStatus(EvaluationFormVersionStatus value) {
    SetStatus(value);
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
  EvaluationFormSearchSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the evaluation form was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  EvaluationFormSearchSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who created the evaluation form.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  EvaluationFormSearchSummary& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the evaluation form was last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  EvaluationFormSearchSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Who changed the evaluation form.</p>
   */
  inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
  inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
  template <typename LastModifiedByT = Aws::String>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = Aws::String>
  EvaluationFormSearchSummary& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the evaluation format was last activated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastActivatedTime() const { return m_lastActivatedTime; }
  inline bool LastActivatedTimeHasBeenSet() const { return m_lastActivatedTimeHasBeenSet; }
  template <typename LastActivatedTimeT = Aws::Utils::DateTime>
  void SetLastActivatedTime(LastActivatedTimeT&& value) {
    m_lastActivatedTimeHasBeenSet = true;
    m_lastActivatedTime = std::forward<LastActivatedTimeT>(value);
  }
  template <typename LastActivatedTimeT = Aws::Utils::DateTime>
  EvaluationFormSearchSummary& WithLastActivatedTime(LastActivatedTimeT&& value) {
    SetLastActivatedTime(std::forward<LastActivatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of user who last activated evaluation form.</p>
   */
  inline const Aws::String& GetLastActivatedBy() const { return m_lastActivatedBy; }
  inline bool LastActivatedByHasBeenSet() const { return m_lastActivatedByHasBeenSet; }
  template <typename LastActivatedByT = Aws::String>
  void SetLastActivatedBy(LastActivatedByT&& value) {
    m_lastActivatedByHasBeenSet = true;
    m_lastActivatedBy = std::forward<LastActivatedByT>(value);
  }
  template <typename LastActivatedByT = Aws::String>
  EvaluationFormSearchSummary& WithLastActivatedBy(LastActivatedByT&& value) {
    SetLastActivatedBy(std::forward<LastActivatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Latest version of the evaluation form.</p>
   */
  inline int GetLatestVersion() const { return m_latestVersion; }
  inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
  inline void SetLatestVersion(int value) {
    m_latestVersionHasBeenSet = true;
    m_latestVersion = value;
  }
  inline EvaluationFormSearchSummary& WithLatestVersion(int value) {
    SetLatestVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Active version of the evaluation form.</p>
   */
  inline int GetActiveVersion() const { return m_activeVersion; }
  inline bool ActiveVersionHasBeenSet() const { return m_activeVersionHasBeenSet; }
  inline void SetActiveVersion(int value) {
    m_activeVersionHasBeenSet = true;
    m_activeVersion = value;
  }
  inline EvaluationFormSearchSummary& WithActiveVersion(int value) {
    SetActiveVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether automated evaluation is enabled.</p>
   */
  inline bool GetAutoEvaluationEnabled() const { return m_autoEvaluationEnabled; }
  inline bool AutoEvaluationEnabledHasBeenSet() const { return m_autoEvaluationEnabledHasBeenSet; }
  inline void SetAutoEvaluationEnabled(bool value) {
    m_autoEvaluationEnabledHasBeenSet = true;
    m_autoEvaluationEnabled = value;
  }
  inline EvaluationFormSearchSummary& WithAutoEvaluationEnabled(bool value) {
    SetAutoEvaluationEnabled(value);
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
  EvaluationFormSearchSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  EvaluationFormSearchSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluationFormId;
  bool m_evaluationFormIdHasBeenSet = false;

  Aws::String m_evaluationFormArn;
  bool m_evaluationFormArnHasBeenSet = false;

  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  EvaluationFormVersionStatus m_status{EvaluationFormVersionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Utils::DateTime m_createdTime{};
  bool m_createdTimeHasBeenSet = false;

  Aws::String m_createdBy;
  bool m_createdByHasBeenSet = false;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_lastModifiedTimeHasBeenSet = false;

  Aws::String m_lastModifiedBy;
  bool m_lastModifiedByHasBeenSet = false;

  Aws::Utils::DateTime m_lastActivatedTime{};
  bool m_lastActivatedTimeHasBeenSet = false;

  Aws::String m_lastActivatedBy;
  bool m_lastActivatedByHasBeenSet = false;

  int m_latestVersion{0};
  bool m_latestVersionHasBeenSet = false;

  int m_activeVersion{0};
  bool m_activeVersionHasBeenSet = false;

  bool m_autoEvaluationEnabled{false};
  bool m_autoEvaluationEnabledHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
