/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/BotReplicaSummary.h>
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
  class ListBotReplicasResult
  {
  public:
    AWS_LEXMODELSV2_API ListBotReplicasResult() = default;
    AWS_LEXMODELSV2_API ListBotReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    ListBotReplicasResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    ListBotReplicasResult& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline const Aws::Vector<BotReplicaSummary>& GetBotReplicaSummaries() const { return m_botReplicaSummaries; }
    template<typename BotReplicaSummariesT = Aws::Vector<BotReplicaSummary>>
    void SetBotReplicaSummaries(BotReplicaSummariesT&& value) { m_botReplicaSummariesHasBeenSet = true; m_botReplicaSummaries = std::forward<BotReplicaSummariesT>(value); }
    template<typename BotReplicaSummariesT = Aws::Vector<BotReplicaSummary>>
    ListBotReplicasResult& WithBotReplicaSummaries(BotReplicaSummariesT&& value) { SetBotReplicaSummaries(std::forward<BotReplicaSummariesT>(value)); return *this;}
    template<typename BotReplicaSummariesT = BotReplicaSummary>
    ListBotReplicasResult& AddBotReplicaSummaries(BotReplicaSummariesT&& value) { m_botReplicaSummariesHasBeenSet = true; m_botReplicaSummaries.emplace_back(std::forward<BotReplicaSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBotReplicasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::Vector<BotReplicaSummary> m_botReplicaSummaries;
    bool m_botReplicaSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
