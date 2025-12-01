/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormLanguageCode.h>

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
 * <p>Language configuration for an evaluation form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormLanguageConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationFormLanguageConfiguration {
 public:
  AWS_CONNECT_API EvaluationFormLanguageConfiguration() = default;
  AWS_CONNECT_API EvaluationFormLanguageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormLanguageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The language for the evaluation form.</p>
   */
  inline EvaluationFormLanguageCode GetFormLanguage() const { return m_formLanguage; }
  inline bool FormLanguageHasBeenSet() const { return m_formLanguageHasBeenSet; }
  inline void SetFormLanguage(EvaluationFormLanguageCode value) {
    m_formLanguageHasBeenSet = true;
    m_formLanguage = value;
  }
  inline EvaluationFormLanguageConfiguration& WithFormLanguage(EvaluationFormLanguageCode value) {
    SetFormLanguage(value);
    return *this;
  }
  ///@}
 private:
  EvaluationFormLanguageCode m_formLanguage{EvaluationFormLanguageCode::NOT_SET};
  bool m_formLanguageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
