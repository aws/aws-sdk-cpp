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
    AWS_CLOUDWATCHLOGS_API DescribeLogGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLogGroups"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const{ return m_accountIdentifiers; }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline void SetAccountIdentifiers(const Aws::Vector<Aws::String>& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = value; }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline void SetAccountIdentifiers(Aws::Vector<Aws::String>&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = std::move(value); }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline DescribeLogGroupsRequest& WithAccountIdentifiers(const Aws::Vector<Aws::String>& value) { SetAccountIdentifiers(value); return *this;}

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline DescribeLogGroupsRequest& WithAccountIdentifiers(Aws::Vector<Aws::String>&& value) { SetAccountIdentifiers(std::move(value)); return *this;}

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline DescribeLogGroupsRequest& AddAccountIdentifiers(const Aws::String& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline DescribeLogGroupsRequest& AddAccountIdentifiers(Aws::String&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>When <code>includeLinkedAccounts</code> is set to <code>True</code>, use this
     * parameter to specify the list of accounts to search. You can specify as many as
     * 20 account IDs in the array. </p>
     */
    inline DescribeLogGroupsRequest& AddAccountIdentifiers(const char* value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }


    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline const Aws::String& GetLogGroupNamePrefix() const{ return m_logGroupNamePrefix; }

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline bool LogGroupNamePrefixHasBeenSet() const { return m_logGroupNamePrefixHasBeenSet; }

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePrefix(const Aws::String& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = value; }

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePrefix(Aws::String&& value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix = std::move(value); }

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePrefix(const char* value) { m_logGroupNamePrefixHasBeenSet = true; m_logGroupNamePrefix.assign(value); }

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(const Aws::String& value) { SetLogGroupNamePrefix(value); return *this;}

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(Aws::String&& value) { SetLogGroupNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix to match.</p>  <p> <code>logGroupNamePrefix</code> and
     * <code>logGroupNamePattern</code> are mutually exclusive. Only one of these
     * parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePrefix(const char* value) { SetLogGroupNamePrefix(value); return *this;}


    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline const Aws::String& GetLogGroupNamePattern() const{ return m_logGroupNamePattern; }

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline bool LogGroupNamePatternHasBeenSet() const { return m_logGroupNamePatternHasBeenSet; }

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePattern(const Aws::String& value) { m_logGroupNamePatternHasBeenSet = true; m_logGroupNamePattern = value; }

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePattern(Aws::String&& value) { m_logGroupNamePatternHasBeenSet = true; m_logGroupNamePattern = std::move(value); }

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline void SetLogGroupNamePattern(const char* value) { m_logGroupNamePatternHasBeenSet = true; m_logGroupNamePattern.assign(value); }

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePattern(const Aws::String& value) { SetLogGroupNamePattern(value); return *this;}

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePattern(Aws::String&& value) { SetLogGroupNamePattern(std::move(value)); return *this;}

    /**
     * <p>If you specify a string for this parameter, the operation returns only log
     * groups that have names that match the string based on a case-sensitive substring
     * search. For example, if you specify <code>Foo</code>, log groups named
     * <code>FooBar</code>, <code>aws/Foo</code>, and <code>GroupFoo</code> would
     * match, but <code>foo</code>, <code>F/o/o</code> and <code>Froo</code> would not
     * match.</p> <p>If you specify <code>logGroupNamePattern</code> in your request,
     * then only <code>arn</code>, <code>creationTime</code>, and
     * <code>logGroupName</code> are included in the response. </p>  <p>
     * <code>logGroupNamePattern</code> and <code>logGroupNamePrefix</code> are
     * mutually exclusive. Only one of these parameters can be passed. </p> 
     */
    inline DescribeLogGroupsRequest& WithLogGroupNamePattern(const char* value) { SetLogGroupNamePattern(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeLogGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items returned. If you don't specify a value, the
     * default is up to 50 items.</p>
     */
    inline DescribeLogGroupsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>If you are using a monitoring account, set this to <code>True</code> to have
     * the operation return log groups in the accounts listed in
     * <code>accountIdentifiers</code>.</p> <p>If this parameter is set to
     * <code>true</code> and <code>accountIdentifiers</code> contains a null value, the
     * operation returns all log groups in the monitoring account and all log groups in
     * all source accounts that are linked to the monitoring account. </p>
     */
    inline bool GetIncludeLinkedAccounts() const{ return m_includeLinkedAccounts; }

    /**
     * <p>If you are using a monitoring account, set this to <code>True</code> to have
     * the operation return log groups in the accounts listed in
     * <code>accountIdentifiers</code>.</p> <p>If this parameter is set to
     * <code>true</code> and <code>accountIdentifiers</code> contains a null value, the
     * operation returns all log groups in the monitoring account and all log groups in
     * all source accounts that are linked to the monitoring account. </p>
     */
    inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }

    /**
     * <p>If you are using a monitoring account, set this to <code>True</code> to have
     * the operation return log groups in the accounts listed in
     * <code>accountIdentifiers</code>.</p> <p>If this parameter is set to
     * <code>true</code> and <code>accountIdentifiers</code> contains a null value, the
     * operation returns all log groups in the monitoring account and all log groups in
     * all source accounts that are linked to the monitoring account. </p>
     */
    inline void SetIncludeLinkedAccounts(bool value) { m_includeLinkedAccountsHasBeenSet = true; m_includeLinkedAccounts = value; }

    /**
     * <p>If you are using a monitoring account, set this to <code>True</code> to have
     * the operation return log groups in the accounts listed in
     * <code>accountIdentifiers</code>.</p> <p>If this parameter is set to
     * <code>true</code> and <code>accountIdentifiers</code> contains a null value, the
     * operation returns all log groups in the monitoring account and all log groups in
     * all source accounts that are linked to the monitoring account. </p>
     */
    inline DescribeLogGroupsRequest& WithIncludeLinkedAccounts(bool value) { SetIncludeLinkedAccounts(value); return *this;}


    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline const LogGroupClass& GetLogGroupClass() const{ return m_logGroupClass; }

    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline bool LogGroupClassHasBeenSet() const { return m_logGroupClassHasBeenSet; }

    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(const LogGroupClass& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = value; }

    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline void SetLogGroupClass(LogGroupClass&& value) { m_logGroupClassHasBeenSet = true; m_logGroupClass = std::move(value); }

    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline DescribeLogGroupsRequest& WithLogGroupClass(const LogGroupClass& value) { SetLogGroupClass(value); return *this;}

    /**
     * <p>Specifies the log group class for this log group. There are two classes:</p>
     * <ul> <li> <p>The <code>Standard</code> log class supports all CloudWatch Logs
     * features.</p> </li> <li> <p>The <code>Infrequent Access</code> log class
     * supports a subset of CloudWatch Logs features and incurs lower costs.</p> </li>
     * </ul> <p>For details about the features supported by each class, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch_Logs_Log_Classes.html">Log
     * classes</a> </p>
     */
    inline DescribeLogGroupsRequest& WithLogGroupClass(LogGroupClass&& value) { SetLogGroupClass(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_accountIdentifiers;
    bool m_accountIdentifiersHasBeenSet = false;

    Aws::String m_logGroupNamePrefix;
    bool m_logGroupNamePrefixHasBeenSet = false;

    Aws::String m_logGroupNamePattern;
    bool m_logGroupNamePatternHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_includeLinkedAccounts;
    bool m_includeLinkedAccountsHasBeenSet = false;

    LogGroupClass m_logGroupClass;
    bool m_logGroupClassHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
