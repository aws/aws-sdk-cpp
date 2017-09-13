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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/NeighborConnectionDetail.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsResult
  {
  public:
    ListServerNeighborsResult();
    ListServerNeighborsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListServerNeighborsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline const Aws::Vector<NeighborConnectionDetail>& GetNeighbors() const{ return m_neighbors; }

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline void SetNeighbors(const Aws::Vector<NeighborConnectionDetail>& value) { m_neighbors = value; }

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline void SetNeighbors(Aws::Vector<NeighborConnectionDetail>&& value) { m_neighbors = std::move(value); }

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline ListServerNeighborsResult& WithNeighbors(const Aws::Vector<NeighborConnectionDetail>& value) { SetNeighbors(value); return *this;}

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline ListServerNeighborsResult& WithNeighbors(Aws::Vector<NeighborConnectionDetail>&& value) { SetNeighbors(std::move(value)); return *this;}

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline ListServerNeighborsResult& AddNeighbors(const NeighborConnectionDetail& value) { m_neighbors.push_back(value); return *this; }

    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline ListServerNeighborsResult& AddNeighbors(NeighborConnectionDetail&& value) { m_neighbors.push_back(std::move(value)); return *this; }


    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline ListServerNeighborsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline ListServerNeighborsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline ListServerNeighborsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Count of distinct servers that are one hop away from the given server.</p>
     */
    inline long long GetKnownDependencyCount() const{ return m_knownDependencyCount; }

    /**
     * <p>Count of distinct servers that are one hop away from the given server.</p>
     */
    inline void SetKnownDependencyCount(long long value) { m_knownDependencyCount = value; }

    /**
     * <p>Count of distinct servers that are one hop away from the given server.</p>
     */
    inline ListServerNeighborsResult& WithKnownDependencyCount(long long value) { SetKnownDependencyCount(value); return *this;}

  private:

    Aws::Vector<NeighborConnectionDetail> m_neighbors;

    Aws::String m_nextToken;

    long long m_knownDependencyCount;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
