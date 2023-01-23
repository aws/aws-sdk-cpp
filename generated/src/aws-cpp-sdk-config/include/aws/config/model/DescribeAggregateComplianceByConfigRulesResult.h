/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateComplianceByConfigRule.h>
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
  class DescribeAggregateComplianceByConfigRulesResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult();
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConfigRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline const Aws::Vector<AggregateComplianceByConfigRule>& GetAggregateComplianceByConfigRules() const{ return m_aggregateComplianceByConfigRules; }

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline void SetAggregateComplianceByConfigRules(const Aws::Vector<AggregateComplianceByConfigRule>& value) { m_aggregateComplianceByConfigRules = value; }

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline void SetAggregateComplianceByConfigRules(Aws::Vector<AggregateComplianceByConfigRule>&& value) { m_aggregateComplianceByConfigRules = std::move(value); }

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& WithAggregateComplianceByConfigRules(const Aws::Vector<AggregateComplianceByConfigRule>& value) { SetAggregateComplianceByConfigRules(value); return *this;}

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& WithAggregateComplianceByConfigRules(Aws::Vector<AggregateComplianceByConfigRule>&& value) { SetAggregateComplianceByConfigRules(std::move(value)); return *this;}

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& AddAggregateComplianceByConfigRules(const AggregateComplianceByConfigRule& value) { m_aggregateComplianceByConfigRules.push_back(value); return *this; }

    /**
     * <p>Returns a list of AggregateComplianceByConfigRule object.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& AddAggregateComplianceByConfigRules(AggregateComplianceByConfigRule&& value) { m_aggregateComplianceByConfigRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeAggregateComplianceByConfigRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AggregateComplianceByConfigRule> m_aggregateComplianceByConfigRules;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
