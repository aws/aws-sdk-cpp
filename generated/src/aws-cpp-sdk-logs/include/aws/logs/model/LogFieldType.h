/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LogFieldsListItem.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class LogFieldsListItem;

/**
 * <p>Defines the data type structure for a log field, including the type, element
 * information, and nested fields for complex types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogFieldType">AWS
 * API Reference</a></p>
 */
class LogFieldType {
 public:
  AWS_CLOUDWATCHLOGS_API LogFieldType() = default;
  AWS_CLOUDWATCHLOGS_API LogFieldType(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API LogFieldType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data type of the log field.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  LogFieldType& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For array or collection types, specifies the element type information.</p>
   */
  inline const LogFieldType& GetElement() const { return *m_element; }
  inline bool ElementHasBeenSet() const { return m_elementHasBeenSet; }
  template <typename ElementT = LogFieldType>
  void SetElement(ElementT&& value) {
    m_elementHasBeenSet = true;
    m_element = Aws::MakeShared<LogFieldType>("LogFieldType", std::forward<ElementT>(value));
  }
  template <typename ElementT = LogFieldType>
  LogFieldType& WithElement(ElementT&& value) {
    SetElement(std::forward<ElementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For complex types, contains the nested field definitions.</p>
   */
  inline const Aws::Vector<LogFieldsListItem>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<LogFieldsListItem>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<LogFieldsListItem>>
  LogFieldType& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = LogFieldsListItem>
  LogFieldType& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  std::shared_ptr<LogFieldType> m_element;

  Aws::Vector<LogFieldsListItem> m_fields;
  bool m_typeHasBeenSet = false;
  bool m_elementHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
