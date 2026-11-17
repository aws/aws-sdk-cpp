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
 * <p>An option in a yesNoPerOption question or a chooseOne question.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/QuestionOption">AWS
 * API Reference</a></p>
 */
class QuestionOption {
 public:
  AWS_ELEMENTALINFERENCE_API QuestionOption() = default;
  AWS_ELEMENTALINFERENCE_API QuestionOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API QuestionOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name for the option. The name must be unique among the options of the
   * question. The name can be up to 64 characters. It must start with a letter or an
   * underscore, and can contain only the letters A-Z and a-z, the digits 0-9, and
   * underscores. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  QuestionOption& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text of the option. The text must be unique among the options of the
   * question, ignoring case. The text can be up to 16 bytes, encoded in UTF-8. It
   * can contain the same characters as the text of a question. </p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  QuestionOption& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_text;
  bool m_nameHasBeenSet = false;
  bool m_textHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
