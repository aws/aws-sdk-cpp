/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotVersionReplicaSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListBotVersionReplicasResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult() = default;
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListBotVersionReplicasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    ListBotVersionReplicasResult& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetReplicaRegion() const { return m_replicaRegion; }
    template<typename ReplicaRegionT = Aws::String>
    void SetReplicaRegion(ReplicaRegionT&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::forward<ReplicaRegionT>(value); }
    template<typename ReplicaRegionT = Aws::String>
    ListBotVersionReplicasResult& WithReplicaRegion(ReplicaRegionT&& value) { SetReplicaRegion(std::forward<ReplicaRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline const Aws::Vector<BotVersionReplicaSummary>& GetBotVersionReplicaSummaries() const { return m_botVersionReplicaSummaries; }
    template<typename BotVersionReplicaSummariesT = Aws::Vector<BotVersionReplicaSummary>>
    void SetBotVersionReplicaSummaries(BotVersionReplicaSummariesT&& value) { m_botVersionReplicaSummariesHasBeenSet = true; m_botVersionReplicaSummaries = std::forward<BotVersionReplicaSummariesT>(value); }
    template<typename BotVersionReplicaSummariesT = Aws::Vector<BotVersionReplicaSummary>>
    ListBotVersionReplicasResult& WithBotVersionReplicaSummaries(BotVersionReplicaSummariesT&& value) { SetBotVersionReplicaSummaries(std::forward<BotVersionReplicaSummariesT>(value)); return *this;}
    template<typename BotVersionReplicaSummariesT = BotVersionReplicaSummary>
    ListBotVersionReplicasResult& AddBotVersionReplicaSummaries(BotVersionReplicaSummariesT&& value) { m_botVersionReplicaSummariesHasBeenSet = true; m_botVersionReplicaSummaries.emplace_back(std::forward<BotVersionReplicaSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotVersionReplicasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotVersionReplicasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::Vector<BotVersionReplicaSummary> m_botVersionReplicaSummaries;
    bool m_botVersionReplicaSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
