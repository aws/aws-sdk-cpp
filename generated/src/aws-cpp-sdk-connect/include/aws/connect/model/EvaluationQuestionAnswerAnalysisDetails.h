/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationContactLensAnswerAnalysisDetails.h>
#include <aws/connect/model/EvaluationGenAIAnswerAnalysisDetails.h>

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
 * <p>Detailed analysis results of the automated answer to the evaluation
 * question.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationQuestionAnswerAnalysisDetails">AWS
 * API Reference</a></p>
 */
class EvaluationQuestionAnswerAnalysisDetails {
 public:
  AWS_CONNECT_API EvaluationQuestionAnswerAnalysisDetails() = default;
  AWS_CONNECT_API EvaluationQuestionAnswerAnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationQuestionAnswerAnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Analysis results from the generative AI automation for the question.</p>
   */
  inline const EvaluationGenAIAnswerAnalysisDetails& GetGenAI() const { return m_genAI; }
  inline bool GenAIHasBeenSet() const { return m_genAIHasBeenSet; }
  template <typename GenAIT = EvaluationGenAIAnswerAnalysisDetails>
  void SetGenAI(GenAIT&& value) {
    m_genAIHasBeenSet = true;
    m_genAI = std::forward<GenAIT>(value);
  }
  template <typename GenAIT = EvaluationGenAIAnswerAnalysisDetails>
  EvaluationQuestionAnswerAnalysisDetails& WithGenAI(GenAIT&& value) {
    SetGenAI(std::forward<GenAIT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Analysis results from the Contact Lens automation for the question.</p>
   */
  inline const EvaluationContactLensAnswerAnalysisDetails& GetContactLens() const { return m_contactLens; }
  inline bool ContactLensHasBeenSet() const { return m_contactLensHasBeenSet; }
  template <typename ContactLensT = EvaluationContactLensAnswerAnalysisDetails>
  void SetContactLens(ContactLensT&& value) {
    m_contactLensHasBeenSet = true;
    m_contactLens = std::forward<ContactLensT>(value);
  }
  template <typename ContactLensT = EvaluationContactLensAnswerAnalysisDetails>
  EvaluationQuestionAnswerAnalysisDetails& WithContactLens(ContactLensT&& value) {
    SetContactLens(std::forward<ContactLensT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationGenAIAnswerAnalysisDetails m_genAI;

  EvaluationContactLensAnswerAnalysisDetails m_contactLens;
  bool m_genAIHasBeenSet = false;
  bool m_contactLensHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
