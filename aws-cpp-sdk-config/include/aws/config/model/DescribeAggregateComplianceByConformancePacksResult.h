/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateComplianceByConformancePack.h>
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
  class DescribeAggregateComplianceByConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult();
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeAggregateComplianceByConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline const Aws::Vector<AggregateComplianceByConformancePack>& GetAggregateComplianceByConformancePacks() const{ return m_aggregateComplianceByConformancePacks; }

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline void SetAggregateComplianceByConformancePacks(const Aws::Vector<AggregateComplianceByConformancePack>& value) { m_aggregateComplianceByConformancePacks = value; }

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline void SetAggregateComplianceByConformancePacks(Aws::Vector<AggregateComplianceByConformancePack>&& value) { m_aggregateComplianceByConformancePacks = std::move(value); }

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& WithAggregateComplianceByConformancePacks(const Aws::Vector<AggregateComplianceByConformancePack>& value) { SetAggregateComplianceByConformancePacks(value); return *this;}

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& WithAggregateComplianceByConformancePacks(Aws::Vector<AggregateComplianceByConformancePack>&& value) { SetAggregateComplianceByConformancePacks(std::move(value)); return *this;}

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& AddAggregateComplianceByConformancePacks(const AggregateComplianceByConformancePack& value) { m_aggregateComplianceByConformancePacks.push_back(value); return *this; }

    /**
     * <p>Returns the <code>AggregateComplianceByConformancePack</code> object.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& AddAggregateComplianceByConformancePacks(AggregateComplianceByConformancePack&& value) { m_aggregateComplianceByConformancePacks.push_back(std::move(value)); return *this; }


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
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeAggregateComplianceByConformancePacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AggregateComplianceByConformancePack> m_aggregateComplianceByConformancePacks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
