/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackDetail.h>
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
  class DescribeConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult();
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackDetail>& GetConformancePackDetails() const{ return m_conformancePackDetails; }

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline void SetConformancePackDetails(const Aws::Vector<ConformancePackDetail>& value) { m_conformancePackDetails = value; }

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline void SetConformancePackDetails(Aws::Vector<ConformancePackDetail>&& value) { m_conformancePackDetails = std::move(value); }

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline DescribeConformancePacksResult& WithConformancePackDetails(const Aws::Vector<ConformancePackDetail>& value) { SetConformancePackDetails(value); return *this;}

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline DescribeConformancePacksResult& WithConformancePackDetails(Aws::Vector<ConformancePackDetail>&& value) { SetConformancePackDetails(std::move(value)); return *this;}

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline DescribeConformancePacksResult& AddConformancePackDetails(const ConformancePackDetail& value) { m_conformancePackDetails.push_back(value); return *this; }

    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline DescribeConformancePacksResult& AddConformancePackDetails(ConformancePackDetail&& value) { m_conformancePackDetails.push_back(std::move(value)); return *this; }


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
    inline DescribeConformancePacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline DescribeConformancePacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConformancePackDetail> m_conformancePackDetails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
