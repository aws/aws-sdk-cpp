﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ContributorInsightsSummary.h>
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
  class AWS_DYNAMODB_API ListContributorInsightsResult
  {
  public:
    ListContributorInsightsResult();
    ListContributorInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListContributorInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline const Aws::Vector<ContributorInsightsSummary>& GetContributorInsightsSummaries() const{ return m_contributorInsightsSummaries; }

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline void SetContributorInsightsSummaries(const Aws::Vector<ContributorInsightsSummary>& value) { m_contributorInsightsSummaries = value; }

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline void SetContributorInsightsSummaries(Aws::Vector<ContributorInsightsSummary>&& value) { m_contributorInsightsSummaries = std::move(value); }

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline ListContributorInsightsResult& WithContributorInsightsSummaries(const Aws::Vector<ContributorInsightsSummary>& value) { SetContributorInsightsSummaries(value); return *this;}

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline ListContributorInsightsResult& WithContributorInsightsSummaries(Aws::Vector<ContributorInsightsSummary>&& value) { SetContributorInsightsSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline ListContributorInsightsResult& AddContributorInsightsSummaries(const ContributorInsightsSummary& value) { m_contributorInsightsSummaries.push_back(value); return *this; }

    /**
     * <p>A list of ContributorInsightsSummary.</p>
     */
    inline ListContributorInsightsResult& AddContributorInsightsSummaries(ContributorInsightsSummary&& value) { m_contributorInsightsSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline ListContributorInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline ListContributorInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to go to the next page if there is one.</p>
     */
    inline ListContributorInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ContributorInsightsSummary> m_contributorInsightsSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
