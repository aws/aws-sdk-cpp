/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>The language configuration for conversational analytics.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/LanguageConfiguration">AWS
 * API Reference</a></p>
 */
class LanguageConfiguration {
 public:
  AWS_CONNECT_API LanguageConfiguration() = default;
  AWS_CONNECT_API LanguageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API LanguageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The language locale setting for conversational analytics.</p>
   */
  inline const Aws::String& GetLanguageLocale() const { return m_languageLocale; }
  inline bool LanguageLocaleHasBeenSet() const { return m_languageLocaleHasBeenSet; }
  template <typename LanguageLocaleT = Aws::String>
  void SetLanguageLocale(LanguageLocaleT&& value) {
    m_languageLocaleHasBeenSet = true;
    m_languageLocale = std::forward<LanguageLocaleT>(value);
  }
  template <typename LanguageLocaleT = Aws::String>
  LanguageConfiguration& WithLanguageLocale(LanguageLocaleT&& value) {
    SetLanguageLocale(std::forward<LanguageLocaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_languageLocale;
  bool m_languageLocaleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
