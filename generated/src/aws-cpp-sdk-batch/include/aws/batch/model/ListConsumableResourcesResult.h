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
    AWS_BATCH_API ListConsumableResourcesResult();
    AWS_BATCH_API ListConsumableResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListConsumableResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of consumable resources that match the request.</p>
     */
    inline const Aws::Vector<ConsumableResourceSummary>& GetConsumableResources() const{ return m_consumableResources; }
    inline void SetConsumableResources(const Aws::Vector<ConsumableResourceSummary>& value) { m_consumableResources = value; }
    inline void SetConsumableResources(Aws::Vector<ConsumableResourceSummary>&& value) { m_consumableResources = std::move(value); }
    inline ListConsumableResourcesResult& WithConsumableResources(const Aws::Vector<ConsumableResourceSummary>& value) { SetConsumableResources(value); return *this;}
    inline ListConsumableResourcesResult& WithConsumableResources(Aws::Vector<ConsumableResourceSummary>&& value) { SetConsumableResources(std::move(value)); return *this;}
    inline ListConsumableResourcesResult& AddConsumableResources(const ConsumableResourceSummary& value) { m_consumableResources.push_back(value); return *this; }
    inline ListConsumableResourcesResult& AddConsumableResources(ConsumableResourceSummary&& value) { m_consumableResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListConsumableResources</code> request. When the results of a
     * <code>ListConsumableResources</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConsumableResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConsumableResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConsumableResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConsumableResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConsumableResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConsumableResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConsumableResourceSummary> m_consumableResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
