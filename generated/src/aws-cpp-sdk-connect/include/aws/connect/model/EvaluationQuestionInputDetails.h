/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationTranscriptType.h>

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
 * <p>Details of the input data used for automated question
 * processing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationQuestionInputDetails">AWS
 * API Reference</a></p>
 */
class EvaluationQuestionInputDetails {
 public:
  AWS_CONNECT_API EvaluationQuestionInputDetails() = default;
  AWS_CONNECT_API EvaluationQuestionInputDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationQuestionInputDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Transcript type.</p>
   */
  inline EvaluationTranscriptType GetTranscriptType() const { return m_transcriptType; }
  inline bool TranscriptTypeHasBeenSet() const { return m_transcriptTypeHasBeenSet; }
  inline void SetTranscriptType(EvaluationTranscriptType value) {
    m_transcriptTypeHasBeenSet = true;
    m_transcriptType = value;
  }
  inline EvaluationQuestionInputDetails& WithTranscriptType(EvaluationTranscriptType value) {
    SetTranscriptType(value);
    return *this;
  }
  ///@}
 private:
  EvaluationTranscriptType m_transcriptType{EvaluationTranscriptType::NOT_SET};
  bool m_transcriptTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
