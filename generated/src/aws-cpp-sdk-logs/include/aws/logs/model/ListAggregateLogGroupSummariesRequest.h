/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DataSourceFilter.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesGroupBy.h>
#include <aws/logs/model/LogGroupClass.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class ListAggregateLogGroupSummariesRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API ListAggregateLogGroupSummariesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAggregateLogGroupSummaries"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>When <code>includeLinkedAccounts</code> is set to <code>true</code>, use this
   * parameter to specify the list of accounts to search. You can specify as many as
   * 20 account IDs in the array.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const { return m_accountIdentifiers; }
  inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }
  template <typename AccountIdentifiersT = Aws::Vector<Aws::String>>
  void SetAccountIdentifiers(AccountIdentifiersT&& value) {
    m_accountIdentifiersHasBeenSet = true;
    m_accountIdentifiers = std::forward<AccountIdentifiersT>(value);
  }
  template <typename AccountIdentifiersT = Aws::Vector<Aws::String>>
  ListAggregateLogGroupSummariesRequest& WithAccountIdentifiers(AccountIdentifiersT&& value) {
    SetAccountIdentifiers(std::forward<AccountIdentifiersT>(value));
    return *this;
  }
  template <typename AccountIdentifiersT = Aws::String>
  ListAggregateLogGroupSummariesRequest& AddAccountIdentifiers(AccountIdentifiersT&& value) {
    m_accountIdentifiersHasBeenSet = true;
    m_accountIdentifiers.emplace_back(std::forward<AccountIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If you are using a monitoring account, set this to <code>true</code> to have
   * the operation return log groups in the accounts listed in
   * <code>accountIdentifiers</code>.</p> <p>If this parameter is set to
   * <code>true</code> and <code>accountIdentifiers</code> contains a null value, the
   * operation returns all log groups in the monitoring account and all log groups in
   * all source accounts that are linked to the monitoring account. </p> <p>The
   * default for this parameter is <code>false</code>.</p>
   */
  inline bool GetIncludeLinkedAccounts() const { return m_includeLinkedAccounts; }
  inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }
  inline void SetIncludeLinkedAccounts(bool value) {
    m_includeLinkedAccountsHasBeenSet = true;
    m_includeLinkedAccounts = value;
  }
  inline ListAggregateLogGroupSummariesRequest& WithIncludeLinkedAccounts(bool value) {
    SetIncludeLinkedAccounts(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results by log group class to include only log groups of the
   * specified class.</p>
   */
  inline LogGroupClass GetLogGroupClass() const { return m_logGroupClass; }
  inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }
  inline void SetLogGroupClass(LogGroupClass value) {
    m_logGroupClassHasBeenSet = true;
    m_logGroupClass = value;
  }
  inline ListAggregateLogGroupSummariesRequest& WithLogGroupClass(LogGroupClass value) {
    SetLogGroupClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter to limit the returned log groups to only those with names
   * that match the pattern that you specify. This parameter is a regular expression
   * that can match prefixes and substrings, and supports wildcard matching and
   * matching multiple patterns, as in the following examples. </p> <ul> <li> <p>Use
   * <code>^</code> to match log group names by prefix.</p> </li> <li> <p>For a
   * substring match, specify the string to match. All matches are case sensitive</p>
   * </li> <li> <p>To match multiple patterns, separate them with a <code>|</code> as
   * in the example <code>^/aws/lambda|discovery</code> </p> </li> </ul> <p>You can
   * specify as many as five different regular expression patterns in this field,
   * each of which must be between 3 and 24 characters. You can include the
   * <code>^</code> symbol as many as five times, and include the <code>|</code>
   * symbol as many as four times.</p>
   */
  inline const Aws::String& GetLogGroupNamePattern() const { return m_logGroupNamePattern; }
  inline bool LogGroupNamePatternHasBeenSet() const { return m_logGroupNamePatternHasBeenSet; }
  template <typename LogGroupNamePatternT = Aws::String>
  void SetLogGroupNamePattern(LogGroupNamePatternT&& value) {
    m_logGroupNamePatternHasBeenSet = true;
    m_logGroupNamePattern = std::forward<LogGroupNamePatternT>(value);
  }
  template <typename LogGroupNamePatternT = Aws::String>
  ListAggregateLogGroupSummariesRequest& WithLogGroupNamePattern(LogGroupNamePatternT&& value) {
    SetLogGroupNamePattern(std::forward<LogGroupNamePatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results by data source characteristics to include only log groups
   * associated with the specified data sources.</p>
   */
  inline const Aws::Vector<DataSourceFilter>& GetDataSources() const { return m_dataSources; }
  inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
  template <typename DataSourcesT = Aws::Vector<DataSourceFilter>>
  void SetDataSources(DataSourcesT&& value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources = std::forward<DataSourcesT>(value);
  }
  template <typename DataSourcesT = Aws::Vector<DataSourceFilter>>
  ListAggregateLogGroupSummariesRequest& WithDataSources(DataSourcesT&& value) {
    SetDataSources(std::forward<DataSourcesT>(value));
    return *this;
  }
  template <typename DataSourcesT = DataSourceFilter>
  ListAggregateLogGroupSummariesRequest& AddDataSources(DataSourcesT&& value) {
    m_dataSourcesHasBeenSet = true;
    m_dataSources.emplace_back(std::forward<DataSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how to group the log groups in the summary.</p>
   */
  inline ListAggregateLogGroupSummariesGroupBy GetGroupBy() const { return m_groupBy; }
  inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
  inline void SetGroupBy(ListAggregateLogGroupSummariesGroupBy value) {
    m_groupByHasBeenSet = true;
    m_groupBy = value;
  }
  inline ListAggregateLogGroupSummariesRequest& WithGroupBy(ListAggregateLogGroupSummariesGroupBy value) {
    SetGroupBy(value);
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
  ListAggregateLogGroupSummariesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of aggregated summaries to return. If you omit this
   * parameter, the default is up to 50 aggregated summaries.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListAggregateLogGroupSummariesRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIdentifiers;

  bool m_includeLinkedAccounts{false};

  LogGroupClass m_logGroupClass{LogGroupClass::NOT_SET};

  Aws::String m_logGroupNamePattern;

  Aws::Vector<DataSourceFilter> m_dataSources;

  ListAggregateLogGroupSummariesGroupBy m_groupBy{ListAggregateLogGroupSummariesGroupBy::NOT_SET};

  Aws::String m_nextToken;

  int m_limit{0};
  bool m_accountIdentifiersHasBeenSet = false;
  bool m_includeLinkedAccountsHasBeenSet = false;
  bool m_logGroupClassHasBeenSet = false;
  bool m_logGroupNamePatternHasBeenSet = false;
  bool m_dataSourcesHasBeenSet = false;
  bool m_groupByHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_limitHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
