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
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult();
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotAliasReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegion = value; }

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegion = std::move(value); }

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegion.assign(value); }

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The secondary region of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline const Aws::Vector<BotAliasReplicaSummary>& GetBotAliasReplicaSummaries() const{ return m_botAliasReplicaSummaries; }

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetBotAliasReplicaSummaries(const Aws::Vector<BotAliasReplicaSummary>& value) { m_botAliasReplicaSummaries = value; }

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline void SetBotAliasReplicaSummaries(Aws::Vector<BotAliasReplicaSummary>&& value) { m_botAliasReplicaSummaries = std::move(value); }

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithBotAliasReplicaSummaries(const Aws::Vector<BotAliasReplicaSummary>& value) { SetBotAliasReplicaSummaries(value); return *this;}

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& WithBotAliasReplicaSummaries(Aws::Vector<BotAliasReplicaSummary>&& value) { SetBotAliasReplicaSummaries(std::move(value)); return *this;}

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& AddBotAliasReplicaSummaries(const BotAliasReplicaSummary& value) { m_botAliasReplicaSummaries.push_back(value); return *this; }

    /**
     * <p>The summary information of the replicated bot created from the source bot
     * alias.</p>
     */
    inline ListBotAliasReplicasResult& AddBotAliasReplicaSummaries(BotAliasReplicaSummary&& value) { m_botAliasReplicaSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline ListBotAliasReplicasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline ListBotAliasReplicasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token for the replicated bots created from the source bot alias.</p>
     */
    inline ListBotAliasReplicasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBotAliasReplicasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBotAliasReplicasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBotAliasReplicasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_sourceRegion;

    Aws::String m_replicaRegion;

    Aws::Vector<BotAliasReplicaSummary> m_botAliasReplicaSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
