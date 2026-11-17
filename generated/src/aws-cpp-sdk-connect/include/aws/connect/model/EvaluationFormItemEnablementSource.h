/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAiMetricsField.h>
#include <aws/connect/model/EvaluationFormContactField.h>
#include <aws/connect/model/EvaluationFormEvaluationMetadataField.h>
#include <aws/connect/model/EvaluationFormItemEnablementSourceType.h>
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
 * <p>An enablement expression source item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementSource">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementSource {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementSource() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A type of source item. Valid values:</p> <ul> <li> <p>
   * <code>QUESTION_REF_ID</code> - The answer to another question in the evaluation
   * form.</p> </li> <li> <p> <code>CONTACT</code> - Data from the evaluated
   * contact.</p> </li> <li> <p> <code>EVALUATION_METADATA</code> - Metadata of the
   * evaluation, such as the evaluation type.</p> </li> <li> <p>
   * <code>AI_METRICS</code> - Metrics about AI agents, AI sessions, and AI tools on
   * the contact.</p> </li> </ul>
   */
  inline EvaluationFormItemEnablementSourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EvaluationFormItemEnablementSourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EvaluationFormItemEnablementSource& WithType(EvaluationFormItemEnablementSourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A referenceId of the source item. Use when <code>Type</code> is
   * <code>QUESTION_REF_ID</code>.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormItemEnablementSource& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contact field to use as the source, such as <code>CHANNEL</code>,
   * <code>QUEUE_ARN</code>, <code>OVERALL_CUSTOMER_SENTIMENT_SCORE</code>, or
   * <code>RECORDING_MEDIA_STREAM_TYPES</code>. Use when <code>Type</code> is
   * <code>CONTACT</code>.</p>
   */
  inline EvaluationFormContactField GetContactField() const { return m_contactField; }
  inline bool ContactFieldHasBeenSet() const { return m_contactFieldHasBeenSet; }
  inline void SetContactField(EvaluationFormContactField value) {
    m_contactFieldHasBeenSet = true;
    m_contactField = value;
  }
  inline EvaluationFormItemEnablementSource& WithContactField(EvaluationFormContactField value) {
    SetContactField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the contact attribute to use as the source. Use when
   * <code>Type</code> is <code>CONTACT</code>.</p>
   */
  inline const Aws::String& GetContactAttributeKey() const { return m_contactAttributeKey; }
  inline bool ContactAttributeKeyHasBeenSet() const { return m_contactAttributeKeyHasBeenSet; }
  template <typename ContactAttributeKeyT = Aws::String>
  void SetContactAttributeKey(ContactAttributeKeyT&& value) {
    m_contactAttributeKeyHasBeenSet = true;
    m_contactAttributeKey = std::forward<ContactAttributeKeyT>(value);
  }
  template <typename ContactAttributeKeyT = Aws::String>
  EvaluationFormItemEnablementSource& WithContactAttributeKey(ContactAttributeKeyT&& value) {
    SetContactAttributeKey(std::forward<ContactAttributeKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key of the contact segment attribute to use as the source. Use when
   * <code>Type</code> is <code>CONTACT</code>.</p>
   */
  inline const Aws::String& GetSegmentAttributeKey() const { return m_segmentAttributeKey; }
  inline bool SegmentAttributeKeyHasBeenSet() const { return m_segmentAttributeKeyHasBeenSet; }
  template <typename SegmentAttributeKeyT = Aws::String>
  void SetSegmentAttributeKey(SegmentAttributeKeyT&& value) {
    m_segmentAttributeKeyHasBeenSet = true;
    m_segmentAttributeKey = std::forward<SegmentAttributeKeyT>(value);
  }
  template <typename SegmentAttributeKeyT = Aws::String>
  EvaluationFormItemEnablementSource& WithSegmentAttributeKey(SegmentAttributeKeyT&& value) {
    SetSegmentAttributeKey(std::forward<SegmentAttributeKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation metadata field to use as the source. Use when
   * <code>Type</code> is <code>EVALUATION_METADATA</code>.</p>
   */
  inline EvaluationFormEvaluationMetadataField GetEvaluationMetadataField() const { return m_evaluationMetadataField; }
  inline bool EvaluationMetadataFieldHasBeenSet() const { return m_evaluationMetadataFieldHasBeenSet; }
  inline void SetEvaluationMetadataField(EvaluationFormEvaluationMetadataField value) {
    m_evaluationMetadataFieldHasBeenSet = true;
    m_evaluationMetadataField = value;
  }
  inline EvaluationFormItemEnablementSource& WithEvaluationMetadataField(EvaluationFormEvaluationMetadataField value) {
    SetEvaluationMetadataField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI metrics field to use as the source. Use when <code>Type</code> is
   * <code>AI_METRICS</code>.</p>
   */
  inline EvaluationFormAiMetricsField GetAiMetricsField() const { return m_aiMetricsField; }
  inline bool AiMetricsFieldHasBeenSet() const { return m_aiMetricsFieldHasBeenSet; }
  inline void SetAiMetricsField(EvaluationFormAiMetricsField value) {
    m_aiMetricsFieldHasBeenSet = true;
    m_aiMetricsField = value;
  }
  inline EvaluationFormItemEnablementSource& WithAiMetricsField(EvaluationFormAiMetricsField value) {
    SetAiMetricsField(value);
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementSourceType m_type{EvaluationFormItemEnablementSourceType::NOT_SET};

  Aws::String m_refId;

  EvaluationFormContactField m_contactField{EvaluationFormContactField::NOT_SET};

  Aws::String m_contactAttributeKey;

  Aws::String m_segmentAttributeKey;

  EvaluationFormEvaluationMetadataField m_evaluationMetadataField{EvaluationFormEvaluationMetadataField::NOT_SET};

  EvaluationFormAiMetricsField m_aiMetricsField{EvaluationFormAiMetricsField::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_refIdHasBeenSet = false;
  bool m_contactFieldHasBeenSet = false;
  bool m_contactAttributeKeyHasBeenSet = false;
  bool m_segmentAttributeKeyHasBeenSet = false;
  bool m_evaluationMetadataFieldHasBeenSet = false;
  bool m_aiMetricsFieldHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
