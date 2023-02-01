/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackStatusDetail.h>
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
  class DescribeConformancePackStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult();
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackStatusDetail>& GetConformancePackStatusDetails() const{ return m_conformancePackStatusDetails; }

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline void SetConformancePackStatusDetails(const Aws::Vector<ConformancePackStatusDetail>& value) { m_conformancePackStatusDetails = value; }

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline void SetConformancePackStatusDetails(Aws::Vector<ConformancePackStatusDetail>&& value) { m_conformancePackStatusDetails = std::move(value); }

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline DescribeConformancePackStatusResult& WithConformancePackStatusDetails(const Aws::Vector<ConformancePackStatusDetail>& value) { SetConformancePackStatusDetails(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline DescribeConformancePackStatusResult& WithConformancePackStatusDetails(Aws::Vector<ConformancePackStatusDetail>&& value) { SetConformancePackStatusDetails(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline DescribeConformancePackStatusResult& AddConformancePackStatusDetails(const ConformancePackStatusDetail& value) { m_conformancePackStatusDetails.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline DescribeConformancePackStatusResult& AddConformancePackStatusDetails(ConformancePackStatusDetail&& value) { m_conformancePackStatusDetails.push_back(std::move(value)); return *this; }


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
    inline DescribeConformancePackStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePackStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConformancePackStatusDetail> m_conformancePackStatusDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
