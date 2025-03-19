/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/DiscoveredResource.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListDiscoveredResourcesResult
  {
  public:
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult() = default;
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListDiscoveredResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more discovered resources than the max result, return the next
     * token to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDiscoveredResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned list of discovered resources associated with the given
     * MigrationTask.</p>
     */
    inline const Aws::Vector<DiscoveredResource>& GetDiscoveredResourceList() const { return m_discoveredResourceList; }
    template<typename DiscoveredResourceListT = Aws::Vector<DiscoveredResource>>
    void SetDiscoveredResourceList(DiscoveredResourceListT&& value) { m_discoveredResourceListHasBeenSet = true; m_discoveredResourceList = std::forward<DiscoveredResourceListT>(value); }
    template<typename DiscoveredResourceListT = Aws::Vector<DiscoveredResource>>
    ListDiscoveredResourcesResult& WithDiscoveredResourceList(DiscoveredResourceListT&& value) { SetDiscoveredResourceList(std::forward<DiscoveredResourceListT>(value)); return *this;}
    template<typename DiscoveredResourceListT = DiscoveredResource>
    ListDiscoveredResourcesResult& AddDiscoveredResourceList(DiscoveredResourceListT&& value) { m_discoveredResourceListHasBeenSet = true; m_discoveredResourceList.emplace_back(std::forward<DiscoveredResourceListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDiscoveredResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DiscoveredResource> m_discoveredResourceList;
    bool m_discoveredResourceListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
