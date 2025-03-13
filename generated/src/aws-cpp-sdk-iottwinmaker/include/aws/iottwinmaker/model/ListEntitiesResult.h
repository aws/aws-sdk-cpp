/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/EntitySummary.h>
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
  class ListEntitiesResult
  {
  public:
    AWS_IOTTWINMAKER_API ListEntitiesResult() = default;
    AWS_IOTTWINMAKER_API ListEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ListEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain information about the entities.</p>
     */
    inline const Aws::Vector<EntitySummary>& GetEntitySummaries() const { return m_entitySummaries; }
    template<typename EntitySummariesT = Aws::Vector<EntitySummary>>
    void SetEntitySummaries(EntitySummariesT&& value) { m_entitySummariesHasBeenSet = true; m_entitySummaries = std::forward<EntitySummariesT>(value); }
    template<typename EntitySummariesT = Aws::Vector<EntitySummary>>
    ListEntitiesResult& WithEntitySummaries(EntitySummariesT&& value) { SetEntitySummaries(std::forward<EntitySummariesT>(value)); return *this;}
    template<typename EntitySummariesT = EntitySummary>
    ListEntitiesResult& AddEntitySummaries(EntitySummariesT&& value) { m_entitySummariesHasBeenSet = true; m_entitySummaries.emplace_back(std::forward<EntitySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEntitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntitySummary> m_entitySummaries;
    bool m_entitySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
