/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/SyncResourceSummary.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ListSyncResourcesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListSyncResourcesResult() = default;
    AWS_IOTTWINMAKER_API ListSyncResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListSyncResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The sync resources.</p>
     */
    inline const Aws::Vector<SyncResourceSummary>& GetSyncResources() const { return m_syncResources; }
    template<typename SyncResourcesT = Aws::Vector<SyncResourceSummary>>
    void SetSyncResources(SyncResourcesT&& value) { m_syncResourcesHasBeenSet = true; m_syncResources = std::forward<SyncResourcesT>(value); }
    template<typename SyncResourcesT = Aws::Vector<SyncResourceSummary>>
    ListSyncResourcesResult& WithSyncResources(SyncResourcesT&& value) { SetSyncResources(std::forward<SyncResourcesT>(value)); return *this;}
    template<typename SyncResourcesT = SyncResourceSummary>
    ListSyncResourcesResult& AddSyncResources(SyncResourcesT&& value) { m_syncResourcesHasBeenSet = true; m_syncResources.emplace_back(std::forward<SyncResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSyncResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSyncResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SyncResourceSummary> m_syncResources;
    bool m_syncResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
