/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotAliasReplicaSummary.h>
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
  class ListBotAliasReplicasResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult() = default;
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListBotAliasReplicasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    ListBotAliasReplicasResult& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetReplicaRegion() const { return m_replicaRegion; }
    template<typename ReplicaRegionT = Aws::String>
    void SetReplicaRegion(ReplicaRegionT&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::forward<ReplicaRegionT>(value); }
    template<typename ReplicaRegionT = Aws::String>
    ListBotAliasReplicasResult& WithReplicaRegion(ReplicaRegionT&& value) { SetReplicaRegion(std::forward<ReplicaRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::Vector<BotAliasReplicaSummary>& GetBotAliasReplicaSummaries() const { return m_botAliasReplicaSummaries; }
    template<typename BotAliasReplicaSummariesT = Aws::Vector<BotAliasReplicaSummary>>
    void SetBotAliasReplicaSummaries(BotAliasReplicaSummariesT&& value) { m_botAliasReplicaSummariesHasBeenSet = true; m_botAliasReplicaSummaries = std::forward<BotAliasReplicaSummariesT>(value); }
    template<typename BotAliasReplicaSummariesT = Aws::Vector<BotAliasReplicaSummary>>
    ListBotAliasReplicasResult& WithBotAliasReplicaSummaries(BotAliasReplicaSummariesT&& value) { SetBotAliasReplicaSummaries(std::forward<BotAliasReplicaSummariesT>(value)); return *this;}
    template<typename BotAliasReplicaSummariesT = BotAliasReplicaSummary>
    ListBotAliasReplicasResult& AddBotAliasReplicaSummaries(BotAliasReplicaSummariesT&& value) { m_botAliasReplicaSummariesHasBeenSet = true; m_botAliasReplicaSummaries.emplace_back(std::forward<BotAliasReplicaSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBotAliasReplicasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotAliasReplicasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::Vector<BotAliasReplicaSummary> m_botAliasReplicaSummaries;
    bool m_botAliasReplicaSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
