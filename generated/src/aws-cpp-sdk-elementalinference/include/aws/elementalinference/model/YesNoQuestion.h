/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>A question that you ask Elemental Inference, which answers with yes or no.
 * You specify it in the yesNo array of a question set. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/YesNoQuestion">AWS
 * API Reference</a></p>
 */
class YesNoQuestion {
 public:
  AWS_ELEMENTALINFERENCE_API YesNoQuestion() = default;
  AWS_ELEMENTALINFERENCE_API YesNoQuestion(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API YesNoQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name for the question. The name must be unique among all the questions in
   * the version, across all question types. The name can be up to 64 characters. It
   * must start with a letter or an underscore, and can contain only the letters A-Z
   * and a-z, the digits 0-9, and underscores. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  YesNoQuestion& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text of the question. The text can be up to 256 bytes, encoded in UTF-8.
   * It can contain letters in any language, combining marks, digits, spaces, and the
   * following characters: <code>. , ? ! ' " ( ) - : ; / &amp; %</code>, plus the
   * curly apostrophe and quotation marks (U+2019, U+201C, and U+201D). </p>
   */
  inline const Aws::String& GetQuestion() const { return m_question; }
  inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
  template <typename QuestionT = Aws::String>
  void SetQuestion(QuestionT&& value) {
    m_questionHasBeenSet = true;
    m_question = std::forward<QuestionT>(value);
  }
  template <typename QuestionT = Aws::String>
  YesNoQuestion& WithQuestion(QuestionT&& value) {
    SetQuestion(std::forward<QuestionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_question;
  bool m_nameHasBeenSet = false;
  bool m_questionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
