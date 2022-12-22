/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/AnomalousLogGroup.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class ListAnomalousLogGroupsResult
  {
  public:
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult();
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightId = value; }

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightId = std::move(value); }

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline void SetInsightId(const char* value) { m_insightId.assign(value); }

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline ListAnomalousLogGroupsResult& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline ListAnomalousLogGroupsResult& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline ListAnomalousLogGroupsResult& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline const Aws::Vector<AnomalousLogGroup>& GetAnomalousLogGroups() const{ return m_anomalousLogGroups; }

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline void SetAnomalousLogGroups(const Aws::Vector<AnomalousLogGroup>& value) { m_anomalousLogGroups = value; }

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline void SetAnomalousLogGroups(Aws::Vector<AnomalousLogGroup>&& value) { m_anomalousLogGroups = std::move(value); }

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline ListAnomalousLogGroupsResult& WithAnomalousLogGroups(const Aws::Vector<AnomalousLogGroup>& value) { SetAnomalousLogGroups(value); return *this;}

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline ListAnomalousLogGroupsResult& WithAnomalousLogGroups(Aws::Vector<AnomalousLogGroup>&& value) { SetAnomalousLogGroups(std::move(value)); return *this;}

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline ListAnomalousLogGroupsResult& AddAnomalousLogGroups(const AnomalousLogGroup& value) { m_anomalousLogGroups.push_back(value); return *this; }

    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline ListAnomalousLogGroupsResult& AddAnomalousLogGroups(AnomalousLogGroup&& value) { m_anomalousLogGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAnomalousLogGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAnomalousLogGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAnomalousLogGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_insightId;

    Aws::Vector<AnomalousLogGroup> m_anomalousLogGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
