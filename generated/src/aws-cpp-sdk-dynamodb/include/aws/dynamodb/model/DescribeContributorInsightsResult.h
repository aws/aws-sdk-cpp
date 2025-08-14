/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ContributorInsightsStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/FailureException.h>
#include <aws/dynamodb/model/ContributorInsightsMode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class DescribeContributorInsightsResult
  {
  public:
    AWS_DYNAMODB_API DescribeContributorInsightsResult() = default;
    AWS_DYNAMODB_API DescribeContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table being described.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DescribeContributorInsightsResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    DescribeContributorInsightsResult& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContributorInsightsRuleList() const { return m_contributorInsightsRuleList; }
    template<typename ContributorInsightsRuleListT = Aws::Vector<Aws::String>>
    void SetContributorInsightsRuleList(ContributorInsightsRuleListT&& value) { m_contributorInsightsRuleListHasBeenSet = true; m_contributorInsightsRuleList = std::forward<ContributorInsightsRuleListT>(value); }
    template<typename ContributorInsightsRuleListT = Aws::Vector<Aws::String>>
    DescribeContributorInsightsResult& WithContributorInsightsRuleList(ContributorInsightsRuleListT&& value) { SetContributorInsightsRuleList(std::forward<ContributorInsightsRuleListT>(value)); return *this;}
    template<typename ContributorInsightsRuleListT = Aws::String>
    DescribeContributorInsightsResult& AddContributorInsightsRuleList(ContributorInsightsRuleListT&& value) { m_contributorInsightsRuleListHasBeenSet = true; m_contributorInsightsRuleList.emplace_back(std::forward<ContributorInsightsRuleListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Current status of contributor insights.</p>
     */
    inline ContributorInsightsStatus GetContributorInsightsStatus() const { return m_contributorInsightsStatus; }
    inline void SetContributorInsightsStatus(ContributorInsightsStatus value) { m_contributorInsightsStatusHasBeenSet = true; m_contributorInsightsStatus = value; }
    inline DescribeContributorInsightsResult& WithContributorInsightsStatus(ContributorInsightsStatus value) { SetContributorInsightsStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const { return m_lastUpdateDateTime; }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateDateTime(LastUpdateDateTimeT&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::forward<LastUpdateDateTimeT>(value); }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    DescribeContributorInsightsResult& WithLastUpdateDateTime(LastUpdateDateTimeT&& value) { SetLastUpdateDateTime(std::forward<LastUpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns information about the last failure that was encountered.</p> <p>The
     * most common exceptions for a FAILED status are:</p> <ul> <li>
     * <p>LimitExceededException - Per-account Amazon CloudWatch Contributor Insights
     * rule limit reached. Please disable Contributor Insights for other tables/indexes
     * OR disable Contributor Insights rules before retrying.</p> </li> <li>
     * <p>AccessDeniedException - Amazon CloudWatch Contributor Insights rules cannot
     * be modified due to insufficient permissions.</p> </li> <li>
     * <p>AccessDeniedException - Failed to create service-linked role for Contributor
     * Insights due to insufficient permissions.</p> </li> <li> <p>InternalServerError
     * - Failed to create Amazon CloudWatch Contributor Insights rules. Please retry
     * request.</p> </li> </ul>
     */
    inline const FailureException& GetFailureException() const { return m_failureException; }
    template<typename FailureExceptionT = FailureException>
    void SetFailureException(FailureExceptionT&& value) { m_failureExceptionHasBeenSet = true; m_failureException = std::forward<FailureExceptionT>(value); }
    template<typename FailureExceptionT = FailureException>
    DescribeContributorInsightsResult& WithFailureException(FailureExceptionT&& value) { SetFailureException(std::forward<FailureExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of CloudWatch Contributor Insights for DynamoDB that determines
     * which events are emitted. Can be set to track all access and throttled events or
     * throttled events only.</p>
     */
    inline ContributorInsightsMode GetContributorInsightsMode() const { return m_contributorInsightsMode; }
    inline void SetContributorInsightsMode(ContributorInsightsMode value) { m_contributorInsightsModeHasBeenSet = true; m_contributorInsightsMode = value; }
    inline DescribeContributorInsightsResult& WithContributorInsightsMode(ContributorInsightsMode value) { SetContributorInsightsMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContributorInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_contributorInsightsRuleList;
    bool m_contributorInsightsRuleListHasBeenSet = false;

    ContributorInsightsStatus m_contributorInsightsStatus{ContributorInsightsStatus::NOT_SET};
    bool m_contributorInsightsStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDateTime{};
    bool m_lastUpdateDateTimeHasBeenSet = false;

    FailureException m_failureException;
    bool m_failureExceptionHasBeenSet = false;

    ContributorInsightsMode m_contributorInsightsMode{ContributorInsightsMode::NOT_SET};
    bool m_contributorInsightsModeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
