/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
class LogFieldType;

/**
 * <p>Represents a log field with its name and data type information for a specific
 * data source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogFieldsListItem">AWS
 * API Reference</a></p>
 */
class LogFieldsListItem {
 public:
  AWS_CLOUDWATCHLOGS_API LogFieldsListItem() = default;
  AWS_CLOUDWATCHLOGS_API LogFieldsListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API LogFieldsListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the log field.</p>
   */
  inline const Aws::String& GetLogFieldName() const { return m_logFieldName; }
  inline bool LogFieldNameHasBeenSet() const { return m_logFieldNameHasBeenSet; }
  template <typename LogFieldNameT = Aws::String>
  void SetLogFieldName(LogFieldNameT&& value) {
    m_logFieldNameHasBeenSet = true;
    m_logFieldName = std::forward<LogFieldNameT>(value);
  }
  template <typename LogFieldNameT = Aws::String>
  LogFieldsListItem& WithLogFieldName(LogFieldNameT&& value) {
    SetLogFieldName(std::forward<LogFieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type information for the log field.</p>
   */
  inline const LogFieldType& GetLogFieldType() const { return *m_logFieldType; }
  inline bool LogFieldTypeHasBeenSet() const { return m_logFieldTypeHasBeenSet; }
  template <typename LogFieldTypeT = LogFieldType>
  void SetLogFieldType(LogFieldTypeT&& value) {
    m_logFieldTypeHasBeenSet = true;
    m_logFieldType = Aws::MakeShared<LogFieldType>("LogFieldsListItem", std::forward<LogFieldTypeT>(value));
  }
  template <typename LogFieldTypeT = LogFieldType>
  LogFieldsListItem& WithLogFieldType(LogFieldTypeT&& value) {
    SetLogFieldType(std::forward<LogFieldTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logFieldName;
  bool m_logFieldNameHasBeenSet = false;

  std::shared_ptr<LogFieldType> m_logFieldType;
  bool m_logFieldTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
