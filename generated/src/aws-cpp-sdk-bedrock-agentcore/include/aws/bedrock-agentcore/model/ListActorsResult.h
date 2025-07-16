/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/ActorSummary.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class ListActorsResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API ListActorsResult() = default;
    AWS_BEDROCKAGENTCORE_API ListActorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API ListActorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of actor summaries.</p>
     */
    inline const Aws::Vector<ActorSummary>& GetActorSummaries() const { return m_actorSummaries; }
    template<typename ActorSummariesT = Aws::Vector<ActorSummary>>
    void SetActorSummaries(ActorSummariesT&& value) { m_actorSummariesHasBeenSet = true; m_actorSummaries = std::forward<ActorSummariesT>(value); }
    template<typename ActorSummariesT = Aws::Vector<ActorSummary>>
    ListActorsResult& WithActorSummaries(ActorSummariesT&& value) { SetActorSummaries(std::forward<ActorSummariesT>(value)); return *this;}
    template<typename ActorSummariesT = ActorSummary>
    ListActorsResult& AddActorSummaries(ActorSummariesT&& value) { m_actorSummariesHasBeenSet = true; m_actorSummaries.emplace_back(std::forward<ActorSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent request to get the next set of results. This
     * value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActorSummary> m_actorSummaries;
    bool m_actorSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
