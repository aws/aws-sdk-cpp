/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Phrase structure for vocabulary</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/Phrase">AWS
 * API Reference</a></p>
 */
class Phrase {
 public:
  AWS_BEDROCKDATAAUTOMATION_API Phrase() = default;
  AWS_BEDROCKDATAAUTOMATION_API Phrase(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Phrase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  Phrase& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDisplayAsText() const { return m_displayAsText; }
  inline bool DisplayAsTextHasBeenSet() const { return m_displayAsTextHasBeenSet; }
  template <typename DisplayAsTextT = Aws::String>
  void SetDisplayAsText(DisplayAsTextT&& value) {
    m_displayAsTextHasBeenSet = true;
    m_displayAsText = std::forward<DisplayAsTextT>(value);
  }
  template <typename DisplayAsTextT = Aws::String>
  Phrase& WithDisplayAsText(DisplayAsTextT&& value) {
    SetDisplayAsText(std::forward<DisplayAsTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::String m_displayAsText;
  bool m_textHasBeenSet = false;
  bool m_displayAsTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
