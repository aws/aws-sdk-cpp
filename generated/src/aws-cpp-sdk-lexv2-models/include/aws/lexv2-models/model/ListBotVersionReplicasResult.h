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
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult();
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotVersionReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline void SetBotId(const Aws::String& value) { m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botId.assign(value); }
    inline ListBotVersionReplicasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline ListBotVersionReplicasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }
    inline ListBotVersionReplicasResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}
    inline ListBotVersionReplicasResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegion = value; }
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegion = std::move(value); }
    inline void SetReplicaRegion(const char* value) { m_replicaRegion.assign(value); }
    inline ListBotVersionReplicasResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}
    inline ListBotVersionReplicasResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline const Aws::Vector<BotVersionReplicaSummary>& GetBotVersionReplicaSummaries() const{ return m_botVersionReplicaSummaries; }
    inline void SetBotVersionReplicaSummaries(const Aws::Vector<BotVersionReplicaSummary>& value) { m_botVersionReplicaSummaries = value; }
    inline void SetBotVersionReplicaSummaries(Aws::Vector<BotVersionReplicaSummary>&& value) { m_botVersionReplicaSummaries = std::move(value); }
    inline ListBotVersionReplicasResult& WithBotVersionReplicaSummaries(const Aws::Vector<BotVersionReplicaSummary>& value) { SetBotVersionReplicaSummaries(value); return *this;}
    inline ListBotVersionReplicasResult& WithBotVersionReplicaSummaries(Aws::Vector<BotVersionReplicaSummary>&& value) { SetBotVersionReplicaSummaries(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& AddBotVersionReplicaSummaries(const BotVersionReplicaSummary& value) { m_botVersionReplicaSummaries.push_back(value); return *this; }
    inline ListBotVersionReplicasResult& AddBotVersionReplicaSummaries(BotVersionReplicaSummary&& value) { m_botVersionReplicaSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBotVersionReplicasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBotVersionReplicasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBotVersionReplicasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBotVersionReplicasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBotVersionReplicasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;

    Aws::String m_sourceRegion;

    Aws::String m_replicaRegion;

    Aws::Vector<BotVersionReplicaSummary> m_botVersionReplicaSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
