/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/LogGroupClass.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeLogGroupsRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeLogGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogGroups"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>true</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const { return m_accountIdentifiers; }
    inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }
    template<typename AccountIdentifiersT = Aws::Vector<Aws::String>>
    void SetAccountIdentifiers(AccountIdentifiersT&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = std::forward<AccountIdentifiersT>(value); }
    template<typename AccountIdentifiersT = Aws::Vector<Aws::String>>
    DescribeLogGroupsRequest& WithAccountIdentifiers(AccountIdentifiersT&& value) { SetAccountIdentifiers(std::forward<AccountIdentifiersT>(value)); return *this;}
    template<typename AccountIdentifiersT = Aws::String>
    DescribeLogGroupsRequest& AddAccountIdentifiers(AccountIdentifiersT&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.emplace_back(std::forward<AccountIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline const Aws::String& GetLogGroupNamePrefix() const { return m_logGroupNamePrefix; }
    inline bool LogGroupNamePrefixHasBeenSet() const { return m_logGroupNamePrefixHasBeenSet; }
    template<typename LogGroupNamePrefixT = Aws::String>
    void SetLogGroupNamePrefix(LogGroupNamePrefixT&& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = std::forward<LogGroupNamePrefixT>(value); }
    template<typename LogGroupNamePrefixT = Aws::String>
    DescribeLogGroupsRequest& WithLogGroupNamePrefix(LogGroupNamePrefixT&& value) { SetLogGroupNamePrefix(std::forward<LogGroupNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>DataLogs</code>, log groups named
     * <code>DataLogs</code>, <code>aws/DataLogs</code>, and <code>GroupDataLogs</code>
     * would match, but <code>datalogs</code>, <code>Data/log/s</code> and
     * <code>Groupdata</code> would not match.</p> <p>If you specify
     * <code>logGroupNamePattern</code> in your request, then only <code>arn</code>,
     * <code>creationTime</code>, and <code>logGroupName</code> are included in the
     * response. </p>  <p> <code>logGroupNamePattern</code> and
     * <code>logGroupNamePrefix</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline const Aws::String& GetLogGroupNamePattern() const { return m_logGroupNamePattern; }
    inline bool LogGroupNamePatternHasBeenSet() const { return m_logGroupNamePatternHasBeenSet; }
    template<typename LogGroupNamePatternT = Aws::String>
    void SetLogGroupNamePattern(LogGroupNamePatternT&& value) { m_logGroupNamePatternHasBeenSet = true; m_logGroupNamePattern = std::forward<LogGroupNamePatternT>(value); }
    template<typename LogGroupNamePatternT = Aws::String>
    DescribeLogGroupsRequest& WithLogGroupNamePattern(LogGroupNamePatternT&& value) { SetLogGroupNamePattern(std::forward<LogGroupNamePatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLogGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeLogGroupsRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    inline void SetIncludeLinkedAccounts(bool value) { m_includeLinkedAccountsHasBeenSet = true; m_includeLinkedAccounts = value; }
    inline DescribeLogGroupsRequest& WithIncludeLinkedAccounts(bool value) { SetIncludeLinkedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to limit the results to only those log groups in the
     * specified log group class. If you omit this parameter, log groups of all classes
     * can be returned.</p> <p>Specifies the log group class for this log group. There
     * are three classes:</p> <ul> <li> <p>The <code>Standard</code> log class supports
     * all CloudWatch Logs features.</p> </li> <li> <p>The <code>Infrequent
     * Access</code> log class supports a subset of CloudWatch Logs features and incurs
     * lower costs.</p> </li> <li> <p>Use the <code>Delivery</code> log class only for
     * delivering Lambda logs to store in Amazon S3 or Amazon Data Firehose. Log events
     * in log groups in the Delivery class are kept in CloudWatch Logs for only one
     * day. This log class doesn't offer rich CloudWatch Logs capabilities such as
     * CloudWatch Logs Insights queries.</p> </li> </ul> <p>For details about the
     * features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline LogGroupClass GetLogGroupClass() const { return m_logGroupClass; }
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }
    inline void SetLogGroupClass(LogGroupClass value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }
    inline DescribeLogGroupsRequest& WithLogGroupClass(LogGroupClass value) { SetLogGroupClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this array to filter the list of log groups returned. If you specify this
     * parameter, the only other filter that you can choose to specify is
     * <code>includeLinkedAccounts</code>.</p> <p>If you are using this operation in a
     * monitoring account, you can specify the ARNs of log groups in source accounts
     * and in the monitoring account itself. If you are using this operation in an
     * account that is not a cross-account monitoring account, you can specify only log
     * group names in the same account as the operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupIdentifiers() const { return m_logGroupIdentifiers; }
    inline bool LogGroupIdentifiersHasBeenSet() const { return m_logGroupIdentifiersHasBeenSet; }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    void SetLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers = std::forward<LogGroupIdentifiersT>(value); }
    template<typename LogGroupIdentifiersT = Aws::Vector<Aws::String>>
    DescribeLogGroupsRequest& WithLogGroupIdentifiers(LogGroupIdentifiersT&& value) { SetLogGroupIdentifiers(std::forward<LogGroupIdentifiersT>(value)); return *this;}
    template<typename LogGroupIdentifiersT = Aws::String>
    DescribeLogGroupsRequest& AddLogGroupIdentifiers(LogGroupIdentifiersT&& value) { m_logGroupIdentifiersHasBeenSet = true; m_logGroupIdentifiers.emplace_back(std::forward<LogGroupIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIdentifiers;
    bool m_accountIdentifiersHasBeenSet = false;

    Aws::String m_logGroupNamePrefix;
    bool m_logGroupNamePrefixHasBeenSet = false;

    Aws::String m_logGroupNamePattern;
    bool m_logGroupNamePatternHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    bool m_includeLinkedAccounts{false};
    bool m_includeLinkedAccountsHasBeenSet = false;

    LogGroupClass m_logGroupClass{LogGroupClass::NOT_SET};
    bool m_logGroupClassHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupIdentifiers;
    bool m_logGroupIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
