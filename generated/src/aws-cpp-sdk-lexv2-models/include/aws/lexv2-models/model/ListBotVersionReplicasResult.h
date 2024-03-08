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


    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region used for the bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegion = value; }

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegion = std::move(value); }

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegion.assign(value); }

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The region used for the replicated bots in the list of replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline const Aws::Vector<BotVersionReplicaSummary>& GetBotVersionReplicaSummaries() const{ return m_botVersionReplicaSummaries; }

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline void SetBotVersionReplicaSummaries(const Aws::Vector<BotVersionReplicaSummary>& value) { m_botVersionReplicaSummaries = value; }

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline void SetBotVersionReplicaSummaries(Aws::Vector<BotVersionReplicaSummary>&& value) { m_botVersionReplicaSummaries = std::move(value); }

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithBotVersionReplicaSummaries(const Aws::Vector<BotVersionReplicaSummary>& value) { SetBotVersionReplicaSummaries(value); return *this;}

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& WithBotVersionReplicaSummaries(Aws::Vector<BotVersionReplicaSummary>&& value) { SetBotVersionReplicaSummaries(std::move(value)); return *this;}

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& AddBotVersionReplicaSummaries(const BotVersionReplicaSummary& value) { m_botVersionReplicaSummaries.push_back(value); return *this; }

    /**
     * <p>The information summary used for the replicated bots in the list of
     * replicated bots.</p>
     */
    inline ListBotVersionReplicasResult& AddBotVersionReplicaSummaries(BotVersionReplicaSummary&& value) { m_botVersionReplicaSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline ListBotVersionReplicasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline ListBotVersionReplicasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token used for the replicated bots in the list of replicated
     * bots.</p>
     */
    inline ListBotVersionReplicasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBotVersionReplicasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBotVersionReplicasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBotVersionReplicasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
