/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackRuleCompliance.h>
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
  class DescribeConformancePackComplianceResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult();
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePackComplianceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackName() const{ return m_conformancePackName; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const Aws::String& value) { m_conformancePackName = value; }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(Aws::String&& value) { m_conformancePackName = std::move(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline void SetConformancePackName(const char* value) { m_conformancePackName.assign(value); }

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceResult& WithConformancePackName(const Aws::String& value) { SetConformancePackName(value); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceResult& WithConformancePackName(Aws::String&& value) { SetConformancePackName(std::move(value)); return *this;}

    /**
     * <p>Name of the conformance pack.</p>
     */
    inline DescribeConformancePackComplianceResult& WithConformancePackName(const char* value) { SetConformancePackName(value); return *this;}


    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackRuleCompliance>& GetConformancePackRuleComplianceList() const{ return m_conformancePackRuleComplianceList; }

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline void SetConformancePackRuleComplianceList(const Aws::Vector<ConformancePackRuleCompliance>& value) { m_conformancePackRuleComplianceList = value; }

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline void SetConformancePackRuleComplianceList(Aws::Vector<ConformancePackRuleCompliance>&& value) { m_conformancePackRuleComplianceList = std::move(value); }

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline DescribeConformancePackComplianceResult& WithConformancePackRuleComplianceList(const Aws::Vector<ConformancePackRuleCompliance>& value) { SetConformancePackRuleComplianceList(value); return *this;}

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline DescribeConformancePackComplianceResult& WithConformancePackRuleComplianceList(Aws::Vector<ConformancePackRuleCompliance>&& value) { SetConformancePackRuleComplianceList(std::move(value)); return *this;}

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline DescribeConformancePackComplianceResult& AddConformancePackRuleComplianceList(const ConformancePackRuleCompliance& value) { m_conformancePackRuleComplianceList.push_back(value); return *this; }

    /**
     * <p>Returns a list of <code>ConformancePackRuleCompliance</code> objects.</p>
     */
    inline DescribeConformancePackComplianceResult& AddConformancePackRuleComplianceList(ConformancePackRuleCompliance&& value) { m_conformancePackRuleComplianceList.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackComplianceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_conformancePackName;

    Aws::Vector<ConformancePackRuleCompliance> m_conformancePackRuleComplianceList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
