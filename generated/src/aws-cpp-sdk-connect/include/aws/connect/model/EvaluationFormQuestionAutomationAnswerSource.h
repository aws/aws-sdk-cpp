/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormQuestionAutomationAnswerSourceType.h>

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
 * <p>A question automation answer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormQuestionAutomationAnswerSource">AWS
 * API Reference</a></p>
 */
class EvaluationFormQuestionAutomationAnswerSource {
 public:
  AWS_CONNECT_API EvaluationFormQuestionAutomationAnswerSource() = default;
  AWS_CONNECT_API EvaluationFormQuestionAutomationAnswerSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormQuestionAutomationAnswerSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The automation answer source type.</p>
   */
  inline EvaluationFormQuestionAutomationAnswerSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(EvaluationFormQuestionAutomationAnswerSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline EvaluationFormQuestionAutomationAnswerSource& WithSourceType(EvaluationFormQuestionAutomationAnswerSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}
 private:
  EvaluationFormQuestionAutomationAnswerSourceType m_sourceType{EvaluationFormQuestionAutomationAnswerSourceType::NOT_SET};
  bool m_sourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
