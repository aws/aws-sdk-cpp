/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/QuestionOption.h>

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
 * <p>A question that you ask Elemental Inference, which answers by choosing one of
 * its options. You specify it in the chooseOne array of a question set.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ChooseOneQuestion">AWS
 * API Reference</a></p>
 */
class ChooseOneQuestion {
 public:
  AWS_ELEMENTALINFERENCE_API ChooseOneQuestion() = default;
  AWS_ELEMENTALINFERENCE_API ChooseOneQuestion(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ChooseOneQuestion& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ChooseOneQuestion& WithName(NameT&& value) {
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
  ChooseOneQuestion& WithQuestion(QuestionT&& value) {
    SetQuestion(std::forward<QuestionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The options that Elemental Inference chooses from. You can specify from 2 to
   * 26 options. The question counts as one item toward the limit of 100 scored items
   * in a version, regardless of how many options it has. </p>
   */
  inline const Aws::Vector<QuestionOption>& GetOptions() const { return m_options; }
  inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
  template <typename OptionsT = Aws::Vector<QuestionOption>>
  void SetOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options = std::forward<OptionsT>(value);
  }
  template <typename OptionsT = Aws::Vector<QuestionOption>>
  ChooseOneQuestion& WithOptions(OptionsT&& value) {
    SetOptions(std::forward<OptionsT>(value));
    return *this;
  }
  template <typename OptionsT = QuestionOption>
  ChooseOneQuestion& AddOptions(OptionsT&& value) {
    m_optionsHasBeenSet = true;
    m_options.emplace_back(std::forward<OptionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_question;

  Aws::Vector<QuestionOption> m_options;
  bool m_nameHasBeenSet = false;
  bool m_questionHasBeenSet = false;
  bool m_optionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
