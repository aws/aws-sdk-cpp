/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Configuration for constructing filter expression strings when using the
 * <code>FILTER_STRING</code> filter mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FilterStringConfiguration">AWS
 * API Reference</a></p>
 */
class FilterStringConfiguration {
 public:
  AWS_GLUE_API FilterStringConfiguration() = default;
  AWS_GLUE_API FilterStringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API FilterStringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The query parameter name used to send the constructed filter expression
   * string in API requests.</p>
   */
  inline const Aws::String& GetQueryParameterName() const { return m_queryParameterName; }
  inline bool QueryParameterNameHasBeenSet() const { return m_queryParameterNameHasBeenSet; }
  template <typename QueryParameterNameT = Aws::String>
  void SetQueryParameterName(QueryParameterNameT&& value) {
    m_queryParameterNameHasBeenSet = true;
    m_queryParameterName = std::forward<QueryParameterNameT>(value);
  }
  template <typename QueryParameterNameT = Aws::String>
  FilterStringConfiguration& WithQueryParameterName(QueryParameterNameT&& value) {
    SetQueryParameterName(std::forward<QueryParameterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether string and date values should be wrapped with a quote
   * character in the filter expression.</p>
   */
  inline bool GetQuoteStringValues() const { return m_quoteStringValues; }
  inline bool QuoteStringValuesHasBeenSet() const { return m_quoteStringValuesHasBeenSet; }
  inline void SetQuoteStringValues(bool value) {
    m_quoteStringValuesHasBeenSet = true;
    m_quoteStringValues = value;
  }
  inline FilterStringConfiguration& WithQuoteStringValues(bool value) {
    SetQuoteStringValues(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The character used to quote values when <code>QuoteStringValues</code> is
   * true. Defaults to double quotes if not specified.</p>
   */
  inline const Aws::String& GetQuoteCharacter() const { return m_quoteCharacter; }
  inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
  template <typename QuoteCharacterT = Aws::String>
  void SetQuoteCharacter(QuoteCharacterT&& value) {
    m_quoteCharacterHasBeenSet = true;
    m_quoteCharacter = std::forward<QuoteCharacterT>(value);
  }
  template <typename QuoteCharacterT = Aws::String>
  FilterStringConfiguration& WithQuoteCharacter(QuoteCharacterT&& value) {
    SetQuoteCharacter(std::forward<QuoteCharacterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryParameterName;

  bool m_quoteStringValues{false};

  Aws::String m_quoteCharacter;
  bool m_queryParameterNameHasBeenSet = false;
  bool m_quoteStringValuesHasBeenSet = false;
  bool m_quoteCharacterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
