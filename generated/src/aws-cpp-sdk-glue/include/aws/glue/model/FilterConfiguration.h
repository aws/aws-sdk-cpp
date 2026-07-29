/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/BetweenConfiguration.h>
#include <aws/glue/model/FilterMode.h>
#include <aws/glue/model/FilterStringConfiguration.h>

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
 * <p>Configuration that defines how filter predicates are applied to REST API
 * requests, supporting both query parameter and filter string
 * strategies.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FilterConfiguration">AWS
 * API Reference</a></p>
 */
class FilterConfiguration {
 public:
  AWS_GLUE_API FilterConfiguration() = default;
  AWS_GLUE_API FilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API FilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy for applying filters to requests. Use <code>QUERY_PARAMS</code>
   * to pass filters as individual query parameters, or <code>FILTER_STRING</code> to
   * construct a single filter expression string.</p>
   */
  inline FilterMode GetFilterMode() const { return m_filterMode; }
  inline bool FilterModeHasBeenSet() const { return m_filterModeHasBeenSet; }
  inline void SetFilterMode(FilterMode value) {
    m_filterModeHasBeenSet = true;
    m_filterMode = value;
  }
  inline FilterConfiguration& WithFilterMode(FilterMode value) {
    SetFilterMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of logical filter operators to their API-specific string
   * representations. Supported operator keys are: <code>EQUAL_TO</code>,
   * <code>NOT_EQUAL_TO</code>, <code>LESS_THAN</code>, <code>GREATER_THAN</code>,
   * <code>LESS_THAN_OR_EQUAL_TO</code>, <code>GREATER_THAN_OR_EQUAL_TO</code>,
   * <code>CONTAINS</code>, <code>BETWEEN</code>, <code>AND</code>, and
   * <code>OR</code>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOperatorMappings() const { return m_operatorMappings; }
  inline bool OperatorMappingsHasBeenSet() const { return m_operatorMappingsHasBeenSet; }
  template <typename OperatorMappingsT = Aws::Map<Aws::String, Aws::String>>
  void SetOperatorMappings(OperatorMappingsT&& value) {
    m_operatorMappingsHasBeenSet = true;
    m_operatorMappings = std::forward<OperatorMappingsT>(value);
  }
  template <typename OperatorMappingsT = Aws::Map<Aws::String, Aws::String>>
  FilterConfiguration& WithOperatorMappings(OperatorMappingsT&& value) {
    SetOperatorMappings(std::forward<OperatorMappingsT>(value));
    return *this;
  }
  template <typename OperatorMappingsKeyT = Aws::String, typename OperatorMappingsValueT = Aws::String>
  FilterConfiguration& AddOperatorMappings(OperatorMappingsKeyT&& key, OperatorMappingsValueT&& value) {
    m_operatorMappingsHasBeenSet = true;
    m_operatorMappings.emplace(std::forward<OperatorMappingsKeyT>(key), std::forward<OperatorMappingsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The global date and time format for filter expressions. Accepts Java
   * <code>DateTimeFormatter</code> patterns (for example, <code>EEE, d MMM yyyy
   * HH:mm:ss Z</code>), <code>EPOCH_SECONDS</code> for Unix epoch seconds, or
   * <code>EPOCH_MILLIS</code> for Unix epoch milliseconds. If not specified, values
   * are passed as-is in ISO-8601 format.</p>
   */
  inline const Aws::String& GetDateTimeFormat() const { return m_dateTimeFormat; }
  inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
  template <typename DateTimeFormatT = Aws::String>
  void SetDateTimeFormat(DateTimeFormatT&& value) {
    m_dateTimeFormatHasBeenSet = true;
    m_dateTimeFormat = std::forward<DateTimeFormatT>(value);
  }
  template <typename DateTimeFormatT = Aws::String>
  FilterConfiguration& WithDateTimeFormat(DateTimeFormatT&& value) {
    SetDateTimeFormat(std::forward<DateTimeFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether surrounding double quotes should be stripped from filter
   * values before processing.</p>
   */
  inline bool GetStripQuotes() const { return m_stripQuotes; }
  inline bool StripQuotesHasBeenSet() const { return m_stripQuotesHasBeenSet; }
  inline void SetStripQuotes(bool value) {
    m_stripQuotesHasBeenSet = true;
    m_stripQuotes = value;
  }
  inline FilterConfiguration& WithStripQuotes(bool value) {
    SetStripQuotes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for handling BETWEEN range filter operations.</p>
   */
  inline const BetweenConfiguration& GetBetweenConfiguration() const { return m_betweenConfiguration; }
  inline bool BetweenConfigurationHasBeenSet() const { return m_betweenConfigurationHasBeenSet; }
  template <typename BetweenConfigurationT = BetweenConfiguration>
  void SetBetweenConfiguration(BetweenConfigurationT&& value) {
    m_betweenConfigurationHasBeenSet = true;
    m_betweenConfiguration = std::forward<BetweenConfigurationT>(value);
  }
  template <typename BetweenConfigurationT = BetweenConfiguration>
  FilterConfiguration& WithBetweenConfiguration(BetweenConfigurationT&& value) {
    SetBetweenConfiguration(std::forward<BetweenConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for constructing filter expressions when
   * <code>FilterMode</code> is set to <code>FILTER_STRING</code>.</p>
   */
  inline const FilterStringConfiguration& GetFilterStringConfiguration() const { return m_filterStringConfiguration; }
  inline bool FilterStringConfigurationHasBeenSet() const { return m_filterStringConfigurationHasBeenSet; }
  template <typename FilterStringConfigurationT = FilterStringConfiguration>
  void SetFilterStringConfiguration(FilterStringConfigurationT&& value) {
    m_filterStringConfigurationHasBeenSet = true;
    m_filterStringConfiguration = std::forward<FilterStringConfigurationT>(value);
  }
  template <typename FilterStringConfigurationT = FilterStringConfiguration>
  FilterConfiguration& WithFilterStringConfiguration(FilterStringConfigurationT&& value) {
    SetFilterStringConfiguration(std::forward<FilterStringConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  FilterMode m_filterMode{FilterMode::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_operatorMappings;

  Aws::String m_dateTimeFormat;

  bool m_stripQuotes{false};

  BetweenConfiguration m_betweenConfiguration;

  FilterStringConfiguration m_filterStringConfiguration;
  bool m_filterModeHasBeenSet = false;
  bool m_operatorMappingsHasBeenSet = false;
  bool m_dateTimeFormatHasBeenSet = false;
  bool m_stripQuotesHasBeenSet = false;
  bool m_betweenConfigurationHasBeenSet = false;
  bool m_filterStringConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
