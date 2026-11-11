/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ClassifierEvaluationMetrics.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Comprehend {
namespace Model {

/**
 * <p>Provides information about a document classifier.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifierMetadata">AWS
 * API Reference</a></p>
 */
class ClassifierMetadata {
 public:
  AWS_COMPREHEND_API ClassifierMetadata() = default;
  AWS_COMPREHEND_API ClassifierMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API ClassifierMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHEND_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of labels in the input data. </p>
   */
  inline int64_t GetNumberOfLabels() const { return m_numberOfLabels; }
  inline bool NumberOfLabelsHasBeenSet() const { return m_numberOfLabelsHasBeenSet; }
  inline void SetNumberOfLabels(int64_t value) {
    m_numberOfLabelsHasBeenSet = true;
    m_numberOfLabels = value;
  }
  inline ClassifierMetadata& WithNumberOfLabels(int64_t value) {
    SetNumberOfLabels(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of documents in the input data that were used to train the
   * classifier. Typically this is 80 to 90 percent of the input documents.</p>
   */
  inline int64_t GetNumberOfTrainedDocuments() const { return m_numberOfTrainedDocuments; }
  inline bool NumberOfTrainedDocumentsHasBeenSet() const { return m_numberOfTrainedDocumentsHasBeenSet; }
  inline void SetNumberOfTrainedDocuments(int64_t value) {
    m_numberOfTrainedDocumentsHasBeenSet = true;
    m_numberOfTrainedDocuments = value;
  }
  inline ClassifierMetadata& WithNumberOfTrainedDocuments(int64_t value) {
    SetNumberOfTrainedDocuments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of documents in the input data that were used to test the
   * classifier. Typically this is 10 to 20 percent of the input documents, up to
   * 10,000 documents.</p>
   */
  inline int64_t GetNumberOfTestDocuments() const { return m_numberOfTestDocuments; }
  inline bool NumberOfTestDocumentsHasBeenSet() const { return m_numberOfTestDocumentsHasBeenSet; }
  inline void SetNumberOfTestDocuments(int64_t value) {
    m_numberOfTestDocumentsHasBeenSet = true;
    m_numberOfTestDocuments = value;
  }
  inline ClassifierMetadata& WithNumberOfTestDocuments(int64_t value) {
    SetNumberOfTestDocuments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Describes the result metrics for the test data associated with an
   * documentation classifier.</p>
   */
  inline const ClassifierEvaluationMetrics& GetEvaluationMetrics() const { return m_evaluationMetrics; }
  inline bool EvaluationMetricsHasBeenSet() const { return m_evaluationMetricsHasBeenSet; }
  template <typename EvaluationMetricsT = ClassifierEvaluationMetrics>
  void SetEvaluationMetrics(EvaluationMetricsT&& value) {
    m_evaluationMetricsHasBeenSet = true;
    m_evaluationMetrics = std::forward<EvaluationMetricsT>(value);
  }
  template <typename EvaluationMetricsT = ClassifierEvaluationMetrics>
  ClassifierMetadata& WithEvaluationMetrics(EvaluationMetricsT&& value) {
    SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_numberOfLabels{0};

  int64_t m_numberOfTrainedDocuments{0};

  int64_t m_numberOfTestDocuments{0};

  ClassifierEvaluationMetrics m_evaluationMetrics;
  bool m_numberOfLabelsHasBeenSet = false;
  bool m_numberOfTrainedDocumentsHasBeenSet = false;
  bool m_numberOfTestDocumentsHasBeenSet = false;
  bool m_evaluationMetricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Comprehend
}  // namespace Aws
