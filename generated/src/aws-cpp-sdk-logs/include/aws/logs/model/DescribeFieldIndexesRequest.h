/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/IndexCategory.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class DescribeFieldIndexesRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API DescribeFieldIndexesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeFieldIndexes"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An array containing the names or ARNs of the log groups that you want to
   * retrieve field indexes for.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
  inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value);
  }
  template <typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
  DescribeFieldIndexesRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  template <typename LogGroupIdentifiersT = Aws::String>
  DescribeFieldIndexesRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) {
    m_logGroupIdentifiersHasBeenSet = true;
    m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The index categories to return. The following values are supported:</p> <ul>
   * <li> <p> <code>DEFAULT</code>: Fields that CloudWatch Logs indexes by default.
   * Examples include <code>@logStream</code> and <code>@data_format</code>.</p>
   * </li> <li> <p> <code>CUSTOM</code>: Fields that you added manually to the field
   * index policy. CloudWatch Logs always indexes these fields. These fields count
   * toward the quota of 20 fields for each log group.</p> </li> <li> <p>
   * <code>AUTO</code>: Fields that CloudWatch Logs indexes automatically based on
   * your query patterns and usage. These fields do not count toward the field index
   * quota. CloudWatch Logs might update these fields based on changes in your query
   * patterns. To keep a field indexed permanently, add it to an account-level or
   * log-group level field index policy.</p> </li> <li> <p> <code>INACTIVE</code>:
   * Fields that CloudWatch Logs indexed before but does not index now. This happens
   * if you remove a field from the field index policy or if CloudWatch Logs
   * automatically selects a different field based on your queries.</p> </li> </ul>
   * <p>If you omit this parameter, the response includes the <code>DEFAULT</code>,
   * <code>CUSTOM</code>, and <code>INACTIVE</code> categories.</p> <p>For more
   * information about automatically indexed fields and using the <code>AUTO</code>
   * category, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatchLogs-Field-Indexing-Automatic.html">Automatically
   * indexed fields</a>.</p>
   */
  inline const Aws::Vector<IndexCategory>& GetIndexCategories() const { return m_indexCategories; }
  inline bool IndexCategoriesHasBeenSet() const { return m_indexCategoriesHasBeenSet; }
  template <typename IndexCategoriesT = Aws::Vector<IndexCategory>>
  void SetIndexCategories(IndexCategoriesT&& value) {
    m_indexCategoriesHasBeenSet = true;
    m_indexCategories = std::forward<IndexCategoriesT>(value);
  }
  template <typename IndexCategoriesT = Aws::Vector<IndexCategory>>
  DescribeFieldIndexesRequest& WithIndexCategories(IndexCategoriesT&& value) {
    SetIndexCategories(std::forward<IndexCategoriesT>(value));
    return *this;
  }
  inline DescribeFieldIndexesRequest& AddIndexCategories(IndexCategory value) {
    m_indexCategoriesHasBeenSet = true;
    m_indexCategories.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeFieldIndexesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_logGroupIdentifiers;

  Aws::Vector<IndexCategory> m_indexCategories;

  Aws::String m_nextToken;
  bool m_logGroupIdentifiersHasBeenSet = false;
  bool m_indexCategoriesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
