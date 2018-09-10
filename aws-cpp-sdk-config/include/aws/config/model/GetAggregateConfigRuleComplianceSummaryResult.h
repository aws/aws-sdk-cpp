﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/AggregateComplianceCount.h>
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
namespace ConfigService
{
namespace Model
{
  class AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryResult
  {
  public:
    GetAggregateConfigRuleComplianceSummaryResult();
    GetAggregateConfigRuleComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAggregateConfigRuleComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline const Aws::String& GetGroupByKey() const{ return m_groupByKey; }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline void SetGroupByKey(const Aws::String& value) { m_groupByKey = value; }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline void SetGroupByKey(Aws::String&& value) { m_groupByKey = std::move(value); }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline void SetGroupByKey(const char* value) { m_groupByKey.assign(value); }

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithGroupByKey(const Aws::String& value) { SetGroupByKey(value); return *this;}

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithGroupByKey(Aws::String&& value) { SetGroupByKey(std::move(value)); return *this;}

    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithGroupByKey(const char* value) { SetGroupByKey(value); return *this;}


    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline const Aws::Vector<AggregateComplianceCount>& GetAggregateComplianceCounts() const{ return m_aggregateComplianceCounts; }

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline void SetAggregateComplianceCounts(const Aws::Vector<AggregateComplianceCount>& value) { m_aggregateComplianceCounts = value; }

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline void SetAggregateComplianceCounts(Aws::Vector<AggregateComplianceCount>&& value) { m_aggregateComplianceCounts = std::move(value); }

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithAggregateComplianceCounts(const Aws::Vector<AggregateComplianceCount>& value) { SetAggregateComplianceCounts(value); return *this;}

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithAggregateComplianceCounts(Aws::Vector<AggregateComplianceCount>&& value) { SetAggregateComplianceCounts(std::move(value)); return *this;}

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& AddAggregateComplianceCounts(const AggregateComplianceCount& value) { m_aggregateComplianceCounts.push_back(value); return *this; }

    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& AddAggregateComplianceCounts(AggregateComplianceCount&& value) { m_aggregateComplianceCounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string returned on a previous page that you use to get the next
     * page of results in a paginated response.</p>
     */
    inline GetAggregateConfigRuleComplianceSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_groupByKey;

    Aws::Vector<AggregateComplianceCount> m_aggregateComplianceCounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
