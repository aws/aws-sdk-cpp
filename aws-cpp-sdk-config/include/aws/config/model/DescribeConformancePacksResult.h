/*
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
  class AWS_CONFIGSERVICE_API DescribeConformancePacksResult
  {
  public:
    DescribeConformancePacksResult();
    DescribeConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
