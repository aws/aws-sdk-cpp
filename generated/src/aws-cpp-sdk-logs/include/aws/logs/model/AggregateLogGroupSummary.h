/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/GroupingIdentifier.h>

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

/**
 * <p>Contains an aggregate summary of log groups grouped by data source
 * characteristics, including the count of log groups and their grouping
 * identifiers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AggregateLogGroupSummary">AWS
 * API Reference</a></p>
 */
class AggregateLogGroupSummary {
 public:
  AWS_CLOUDWATCHLOGS_API AggregateLogGroupSummary() = default;
  AWS_CLOUDWATCHLOGS_API AggregateLogGroupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API AggregateLogGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of log groups in this aggregate summary group.</p>
   */
  inline int GetLogGroupCount() const { return m_logGroupCount; }
  inline bool LogGroupCountHasBeenSet() const { return m_logGroupCountHasBeenSet; }
  inline void SetLogGroupCount(int value) {
    m_logGroupCountHasBeenSet = true;
    m_logGroupCount = value;
  }
  inline AggregateLogGroupSummary& WithLogGroupCount(int value) {
    SetLogGroupCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key-value pairs that identify the data source characteristics
   * used to group the log groups.</p> <p>The size and content of this array depends
   * on the <code>groupBy</code> parameter specified in the request.</p>
   */
  inline const Aws::Vector<GroupingIdentifier>& GetGroupingIdentifiers() const { return m_groupingIdentifiers; }
  inline bool GroupingIdentifiersHasBeenSet() const { return m_groupingIdentifiersHasBeenSet; }
  template <typename GroupingIdentifiersT = Aws::Vector<GroupingIdentifier>>
  void SetGroupingIdentifiers(GroupingIdentifiersT&& value) {
    m_groupingIdentifiersHasBeenSet = true;
    m_groupingIdentifiers = std::forward<GroupingIdentifiersT>(value);
  }
  template <typename GroupingIdentifiersT = Aws::Vector<GroupingIdentifier>>
  AggregateLogGroupSummary& WithGroupingIdentifiers(GroupingIdentifiersT&& value) {
    SetGroupingIdentifiers(std::forward<GroupingIdentifiersT>(value));
    return *this;
  }
  template <typename GroupingIdentifiersT = GroupingIdentifier>
  AggregateLogGroupSummary& AddGroupingIdentifiers(GroupingIdentifiersT&& value) {
    m_groupingIdentifiersHasBeenSet = true;
    m_groupingIdentifiers.emplace_back(std::forward<GroupingIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  int m_logGroupCount{0};
  bool m_logGroupCountHasBeenSet = false;

  Aws::Vector<GroupingIdentifier> m_groupingIdentifiers;
  bool m_groupingIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
