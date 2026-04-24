/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationSearchMetadata.h>
#include <aws/connect/model/EvaluationStatus.h>
#include <aws/connect/model/EvaluationType.h>
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
 * <p>Summary of evaluation obtained from the search operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSearchSummary">AWS
 * API Reference</a></p>
 */
class EvaluationSearchSummary {
 public:
  AWS_CONNECT_API EvaluationSearchSummary() = default;
  AWS_CONNECT_API EvaluationSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the contact evaluation.</p>
   */
  inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
  inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
  template <typename EvaluationIdT = Aws::String>
  void SetEvaluationId(EvaluationIdT&& value) {
    m_evaluationIdHasBeenSet = true;
    m_evaluationId = std::forward<EvaluationIdT>(value);
  }
  template <typename EvaluationIdT = Aws::String>
  EvaluationSearchSummary& WithEvaluationId(EvaluationIdT&& value) {
    SetEvaluationId(std::forward<EvaluationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the contact evaluation resource.</p>
   */
  inline const Aws::String& GetEvaluationArn() const { return m_evaluationArn; }
  inline bool EvaluationArnHasBeenSet() const { return m_evaluationArnHasBeenSet; }
  template <typename EvaluationArnT = Aws::String>
  void SetEvaluationArn(EvaluationArnT&& value) {
    m_evaluationArnHasBeenSet = true;
    m_evaluationArn = std::forward<EvaluationArnT>(value);
  }
  template <typename EvaluationArnT = Aws::String>
  EvaluationSearchSummary& WithEvaluationArn(EvaluationArnT&& value) {
    SetEvaluationArn(std::forward<EvaluationArnT>(value));
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
  EvaluationSearchSummary& WithEvaluationFormId(EvaluationFormIdT&& value) {
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
  inline EvaluationSearchSummary& WithEvaluationFormVersion(int value) {
    SetEvaluationFormVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Title of the evaluation form.</p>
   */
  inline const Aws::String& GetEvaluationFormTitle() const { return m_evaluationFormTitle; }
  inline bool EvaluationFormTitleHasBeenSet() const { return m_evaluationFormTitleHasBeenSet; }
  template <typename EvaluationFormTitleT = Aws::String>
  void SetEvaluationFormTitle(EvaluationFormTitleT&& value) {
    m_evaluationFormTitleHasBeenSet = true;
    m_evaluationFormTitle = std::forward<EvaluationFormTitleT>(value);
  }
  template <typename EvaluationFormTitleT = Aws::String>
  EvaluationSearchSummary& WithEvaluationFormTitle(EvaluationFormTitleT&& value) {
    SetEvaluationFormTitle(std::forward<EvaluationFormTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Summary information about the evaluation search.</p>
   */
  inline const EvaluationSearchMetadata& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = EvaluationSearchMetadata>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = EvaluationSearchMetadata>
  EvaluationSearchSummary& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the evaluation. </p>
   */
  inline EvaluationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationSearchSummary& WithStatus(EvaluationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the evaluation. </p>
   */
  inline EvaluationType GetEvaluationType() const { return m_evaluationType; }
  inline bool EvaluationTypeHasBeenSet() const { return m_evaluationTypeHasBeenSet; }
  inline void SetEvaluationType(EvaluationType value) {
    m_evaluationTypeHasBeenSet = true;
    m_evaluationType = value;
  }
  inline EvaluationSearchSummary& WithEvaluationType(EvaluationType value) {
    SetEvaluationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the evaluation was created, in UTC time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  EvaluationSearchSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the evaluation was modified last time, in UTC
   * time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  EvaluationSearchSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
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
  EvaluationSearchSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  EvaluationSearchSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluationId;

  Aws::String m_evaluationArn;

  Aws::String m_evaluationFormId;

  int m_evaluationFormVersion{0};

  Aws::String m_evaluationFormTitle;

  EvaluationSearchMetadata m_metadata;

  EvaluationStatus m_status{EvaluationStatus::NOT_SET};

  EvaluationType m_evaluationType{EvaluationType::NOT_SET};

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_evaluationIdHasBeenSet = false;
  bool m_evaluationArnHasBeenSet = false;
  bool m_evaluationFormIdHasBeenSet = false;
  bool m_evaluationFormVersionHasBeenSet = false;
  bool m_evaluationFormTitleHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_evaluationTypeHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
