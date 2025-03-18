/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListServerNeighborsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of distinct servers that are one hop away from the given server.</p>
     */
    inline const Aws::Vector<NeighborConnectionDetail>& GetNeighbors() const { return m_neighbors; }
    template<typename NeighborsT = Aws::Vector<NeighborConnectionDetail>>
    void SetNeighbors(NeighborsT&& value) { m_neighborsHasBeenSet = true; m_neighbors = std::forward<NeighborsT>(value); }
    template<typename NeighborsT = Aws::Vector<NeighborConnectionDetail>>
    ListServerNeighborsResult& WithNeighbors(NeighborsT&& value) { SetNeighbors(std::forward<NeighborsT>(value)); return *this;}
    template<typename NeighborsT = NeighborConnectionDetail>
    ListServerNeighborsResult& AddNeighbors(NeighborsT&& value) { m_neighborsHasBeenSet = true; m_neighbors.emplace_back(std::forward<NeighborsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token to retrieve the next set of results. For example, if you specified 100
     * IDs for <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with this token. Use this token in the next query to retrieve
     * the next set of 10.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServerNeighborsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Count of distinct servers that are one hop away from the given server.</p>
     */
    inline long long GetKnownDependencyCount() const { return m_knownDependencyCount; }
    inline void SetKnownDependencyCount(long long value) { m_knownDependencyCountHasBeenSet = true; m_knownDependencyCount = value; }
    inline ListServerNeighborsResult& WithKnownDependencyCount(long long value) { SetKnownDependencyCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServerNeighborsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NeighborConnectionDetail> m_neighbors;
    bool m_neighborsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_knownDependencyCount{0};
    bool m_knownDependencyCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
