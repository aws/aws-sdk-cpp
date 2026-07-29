/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FieldDataType.h>
#include <aws/glue/model/FilterOverrides.h>

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
 * <p>Defines a field in an entity schema for REST connector data sources,
 * specifying the field name and data type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FieldDefinition">AWS
 * API Reference</a></p>
 */
class FieldDefinition {
 public:
  AWS_GLUE_API FieldDefinition() = default;
  AWS_GLUE_API FieldDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API FieldDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field in the entity schema.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FieldDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the field.</p>
   */
  inline FieldDataType GetFieldDataType() const { return m_fieldDataType; }
  inline bool FieldDataTypeHasBeenSet() const { return m_fieldDataTypeHasBeenSet; }
  inline void SetFieldDataType(FieldDataType value) {
    m_fieldDataTypeHasBeenSet = true;
    m_fieldDataType = value;
  }
  inline FieldDefinition& WithFieldDataType(FieldDataType value) {
    SetFieldDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format pattern for parsing date values from API responses. Required when
   * the API uses a non-ISO-8601 format. Accepts Java <code>DateTimeFormatter</code>
   * patterns (for example, <code>EEE, d MMM yyyy HH:mm:ss Z</code>),
   * <code>EPOCH_SECONDS</code> for Unix epoch seconds, or <code>EPOCH_MILLIS</code>
   * for Unix epoch milliseconds.</p>
   */
  inline const Aws::String& GetResponseDateFormat() const { return m_responseDateFormat; }
  inline bool ResponseDateFormatHasBeenSet() const { return m_responseDateFormatHasBeenSet; }
  template <typename ResponseDateFormatT = Aws::String>
  void SetResponseDateFormat(ResponseDateFormatT&& value) {
    m_responseDateFormatHasBeenSet = true;
    m_responseDateFormat = std::forward<ResponseDateFormatT>(value);
  }
  template <typename ResponseDateFormatT = Aws::String>
  FieldDefinition& WithResponseDateFormat(ResponseDateFormatT&& value) {
    SetResponseDateFormat(std::forward<ResponseDateFormatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this field can be used for partitioning queries to the data
   * source.</p>
   */
  inline bool GetIsPartitionable() const { return m_isPartitionable; }
  inline bool IsPartitionableHasBeenSet() const { return m_isPartitionableHasBeenSet; }
  inline void SetIsPartitionable(bool value) {
    m_isPartitionableHasBeenSet = true;
    m_isPartitionable = value;
  }
  inline FieldDefinition& WithIsPartitionable(bool value) {
    SetIsPartitionable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this field can contain null values.</p>
   */
  inline bool GetIsNullable() const { return m_isNullable; }
  inline bool IsNullableHasBeenSet() const { return m_isNullableHasBeenSet; }
  inline void SetIsNullable(bool value) {
    m_isNullableHasBeenSet = true;
    m_isNullable = value;
  }
  inline FieldDefinition& WithIsNullable(bool value) {
    SetIsNullable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this field can be used in filter predicates when querying
   * data.</p>
   */
  inline bool GetIsQueryable() const { return m_isQueryable; }
  inline bool IsQueryableHasBeenSet() const { return m_isQueryableHasBeenSet; }
  inline void SetIsQueryable(bool value) {
    m_isQueryableHasBeenSet = true;
    m_isQueryable = value;
  }
  inline FieldDefinition& WithIsQueryable(bool value) {
    SetIsQueryable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this field can be used for ordering results.</p>
   */
  inline bool GetIsOrderable() const { return m_isOrderable; }
  inline bool IsOrderableHasBeenSet() const { return m_isOrderableHasBeenSet; }
  inline void SetIsOrderable(bool value) {
    m_isOrderableHasBeenSet = true;
    m_isOrderable = value;
  }
  inline FieldDefinition& WithIsOrderable(bool value) {
    SetIsOrderable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-field overrides for filter behavior, allowing customization of how
   * filters are applied to this specific field.</p>
   */
  inline const FilterOverrides& GetFilterOverrides() const { return m_filterOverrides; }
  inline bool FilterOverridesHasBeenSet() const { return m_filterOverridesHasBeenSet; }
  template <typename FilterOverridesT = FilterOverrides>
  void SetFilterOverrides(FilterOverridesT&& value) {
    m_filterOverridesHasBeenSet = true;
    m_filterOverrides = std::forward<FilterOverridesT>(value);
  }
  template <typename FilterOverridesT = FilterOverrides>
  FieldDefinition& WithFilterOverrides(FilterOverridesT&& value) {
    SetFilterOverrides(std::forward<FilterOverridesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  FieldDataType m_fieldDataType{FieldDataType::NOT_SET};

  Aws::String m_responseDateFormat;

  bool m_isPartitionable{false};

  bool m_isNullable{false};

  bool m_isQueryable{false};

  bool m_isOrderable{false};

  FilterOverrides m_filterOverrides;
  bool m_nameHasBeenSet = false;
  bool m_fieldDataTypeHasBeenSet = false;
  bool m_responseDateFormatHasBeenSet = false;
  bool m_isPartitionableHasBeenSet = false;
  bool m_isNullableHasBeenSet = false;
  bool m_isQueryableHasBeenSet = false;
  bool m_isOrderableHasBeenSet = false;
  bool m_filterOverridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
