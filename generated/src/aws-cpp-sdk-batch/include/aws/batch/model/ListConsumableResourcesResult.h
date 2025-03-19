/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ConsumableResourceSummary.h>
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
namespace Batch
{
namespace Model
{
  class ListConsumableResourcesResult
  {
  public:
    AWS_BATCH_API ListConsumableResourcesResult() = default;
    AWS_BATCH_API ListConsumableResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListConsumableResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of consumable resources that match the request.</p>
     */
    inline const Aws::Vector<ConsumableResourceSummary>& GetConsumableResources() const { return m_consumableResources; }
    template<typename ConsumableResourcesT = Aws::Vector<ConsumableResourceSummary>>
    void SetConsumableResources(ConsumableResourcesT&& value) { m_consumableResourcesHasBeenSet = true; m_consumableResources = std::forward<ConsumableResourcesT>(value); }
    template<typename ConsumableResourcesT = Aws::Vector<ConsumableResourceSummary>>
    ListConsumableResourcesResult& WithConsumableResources(ConsumableResourcesT&& value) { SetConsumableResources(std::forward<ConsumableResourcesT>(value)); return *this;}
    template<typename ConsumableResourcesT = ConsumableResourceSummary>
    ListConsumableResourcesResult& AddConsumableResources(ConsumableResourcesT&& value) { m_consumableResourcesHasBeenSet = true; m_consumableResources.emplace_back(std::forward<ConsumableResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListConsumableResources</code> request. When the results of a
     * <code>ListConsumableResources</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConsumableResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConsumableResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConsumableResourceSummary> m_consumableResources;
    bool m_consumableResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
