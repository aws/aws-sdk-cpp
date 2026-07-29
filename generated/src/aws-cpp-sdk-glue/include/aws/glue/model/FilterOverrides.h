/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/BetweenConfiguration.h>

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
 * <p>Configuration that defines per-field overrides for filter behavior, allowing
 * individual fields to customize how filter operations are applied.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FilterOverrides">AWS
 * API Reference</a></p>
 */
class FilterOverrides {
 public:
  AWS_GLUE_API FilterOverrides() = default;
  AWS_GLUE_API FilterOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API FilterOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An override for the field name to use in filter expressions, if different
   * from the schema field name.</p>
   */
  inline const Aws::String& GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  template <typename FieldNameT = Aws::String>
  void SetFieldName(FieldNameT&& value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = std::forward<FieldNameT>(value);
  }
  template <typename FieldNameT = Aws::String>
  FilterOverrides& WithFieldName(FieldNameT&& value) {
    SetFieldName(std::forward<FieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of logical filter operators to their field-specific API
   * representations, overriding the global operator mappings. Supported operator
   * keys are: <code>EQUAL_TO</code>, <code>NOT_EQUAL_TO</code>,
   * <code>LESS_THAN</code>, <code>GREATER_THAN</code>,
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
  FilterOverrides& WithOperatorMappings(OperatorMappingsT&& value) {
    SetOperatorMappings(std::forward<OperatorMappingsT>(value));
    return *this;
  }
  template <typename OperatorMappingsKeyT = Aws::String, typename OperatorMappingsValueT = Aws::String>
  FilterOverrides& AddOperatorMappings(OperatorMappingsKeyT&& key, OperatorMappingsValueT&& value) {
    m_operatorMappingsHasBeenSet = true;
    m_operatorMappings.emplace(std::forward<OperatorMappingsKeyT>(key), std::forward<OperatorMappingsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field-specific configuration for handling BETWEEN range filter
   * operations.</p>
   */
  inline const BetweenConfiguration& GetBetweenConfiguration() const { return m_betweenConfiguration; }
  inline bool BetweenConfigurationHasBeenSet() const { return m_betweenConfigurationHasBeenSet; }
  template <typename BetweenConfigurationT = BetweenConfiguration>
  void SetBetweenConfiguration(BetweenConfigurationT&& value) {
    m_betweenConfigurationHasBeenSet = true;
    m_betweenConfiguration = std::forward<BetweenConfigurationT>(value);
  }
  template <typename BetweenConfigurationT = BetweenConfiguration>
  FilterOverrides& WithBetweenConfiguration(BetweenConfigurationT&& value) {
    SetBetweenConfiguration(std::forward<BetweenConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time format for filter expressions on this field, overriding the
   * global <code>DateTimeFormat</code>. Accepts Java <code>DateTimeFormatter</code>
   * patterns (for example, <code>EEE, d MMM yyyy HH:mm:ss Z</code>),
   * <code>EPOCH_SECONDS</code> for Unix epoch seconds, or <code>EPOCH_MILLIS</code>
   * for Unix epoch milliseconds.</p>
   */
  inline const Aws::String& GetDateTimeFormat() const { return m_dateTimeFormat; }
  inline bool DateTimeFormatHasBeenSet() const { return m_dateTimeFormatHasBeenSet; }
  template <typename DateTimeFormatT = Aws::String>
  void SetDateTimeFormat(DateTimeFormatT&& value) {
    m_dateTimeFormatHasBeenSet = true;
    m_dateTimeFormat = std::forward<DateTimeFormatT>(value);
  }
  template <typename DateTimeFormatT = Aws::String>
  FilterOverrides& WithDateTimeFormat(DateTimeFormatT&& value) {
    SetDateTimeFormat(std::forward<DateTimeFormatT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldName;

  Aws::Map<Aws::String, Aws::String> m_operatorMappings;

  BetweenConfiguration m_betweenConfiguration;

  Aws::String m_dateTimeFormat;
  bool m_fieldNameHasBeenSet = false;
  bool m_operatorMappingsHasBeenSet = false;
  bool m_betweenConfigurationHasBeenSet = false;
  bool m_dateTimeFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
