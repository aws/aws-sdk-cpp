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
    AWS_DYNAMODB_API DescribeContributorInsightsResult();
    AWS_DYNAMODB_API DescribeContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the table being described.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table being described.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeContributorInsightsResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeContributorInsightsResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table being described.</p>
     */
    inline DescribeContributorInsightsResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline DescribeContributorInsightsResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline DescribeContributorInsightsResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The name of the global secondary index being described.</p>
     */
    inline DescribeContributorInsightsResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContributorInsightsRuleList() const{ return m_contributorInsightsRuleList; }

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline void SetContributorInsightsRuleList(const Aws::Vector<Aws::String>& value) { m_contributorInsightsRuleList = value; }

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline void SetContributorInsightsRuleList(Aws::Vector<Aws::String>&& value) { m_contributorInsightsRuleList = std::move(value); }

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline DescribeContributorInsightsResult& WithContributorInsightsRuleList(const Aws::Vector<Aws::String>& value) { SetContributorInsightsRuleList(value); return *this;}

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline DescribeContributorInsightsResult& WithContributorInsightsRuleList(Aws::Vector<Aws::String>&& value) { SetContributorInsightsRuleList(std::move(value)); return *this;}

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline DescribeContributorInsightsResult& AddContributorInsightsRuleList(const Aws::String& value) { m_contributorInsightsRuleList.push_back(value); return *this; }

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline DescribeContributorInsightsResult& AddContributorInsightsRuleList(Aws::String&& value) { m_contributorInsightsRuleList.push_back(std::move(value)); return *this; }

    /**
     * <p>List of names of the associated contributor insights rules.</p>
     */
    inline DescribeContributorInsightsResult& AddContributorInsightsRuleList(const char* value) { m_contributorInsightsRuleList.push_back(value); return *this; }


    /**
     * <p>Current status of contributor insights.</p>
     */
    inline const ContributorInsightsStatus& GetContributorInsightsStatus() const{ return m_contributorInsightsStatus; }

    /**
     * <p>Current status of contributor insights.</p>
     */
    inline void SetContributorInsightsStatus(const ContributorInsightsStatus& value) { m_contributorInsightsStatus = value; }

    /**
     * <p>Current status of contributor insights.</p>
     */
    inline void SetContributorInsightsStatus(ContributorInsightsStatus&& value) { m_contributorInsightsStatus = std::move(value); }

    /**
     * <p>Current status of contributor insights.</p>
     */
    inline DescribeContributorInsightsResult& WithContributorInsightsStatus(const ContributorInsightsStatus& value) { SetContributorInsightsStatus(value); return *this;}

    /**
     * <p>Current status of contributor insights.</p>
     */
    inline DescribeContributorInsightsResult& WithContributorInsightsStatus(ContributorInsightsStatus&& value) { SetContributorInsightsStatus(std::move(value)); return *this;}


    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const{ return m_lastUpdateDateTime; }

    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline void SetLastUpdateDateTime(const Aws::Utils::DateTime& value) { m_lastUpdateDateTime = value; }

    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline void SetLastUpdateDateTime(Aws::Utils::DateTime&& value) { m_lastUpdateDateTime = std::move(value); }

    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline DescribeContributorInsightsResult& WithLastUpdateDateTime(const Aws::Utils::DateTime& value) { SetLastUpdateDateTime(value); return *this;}

    /**
     * <p>Timestamp of the last time the status was changed.</p>
     */
    inline DescribeContributorInsightsResult& WithLastUpdateDateTime(Aws::Utils::DateTime&& value) { SetLastUpdateDateTime(std::move(value)); return *this;}


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
    inline const FailureException& GetFailureException() const{ return m_failureException; }

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
    inline void SetFailureException(const FailureException& value) { m_failureException = value; }

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
    inline void SetFailureException(FailureException&& value) { m_failureException = std::move(value); }

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
    inline DescribeContributorInsightsResult& WithFailureException(const FailureException& value) { SetFailureException(value); return *this;}

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
    inline DescribeContributorInsightsResult& WithFailureException(FailureException&& value) { SetFailureException(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeContributorInsightsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeContributorInsightsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeContributorInsightsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_tableName;

    Aws::String m_indexName;

    Aws::Vector<Aws::String> m_contributorInsightsRuleList;

    ContributorInsightsStatus m_contributorInsightsStatus;

    Aws::Utils::DateTime m_lastUpdateDateTime;

    FailureException m_failureException;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
