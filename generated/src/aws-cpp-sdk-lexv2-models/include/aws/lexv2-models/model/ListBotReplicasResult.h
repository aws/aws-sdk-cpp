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
    AWS_LEXMODELSV2_API ListBotReplicasResult();
    AWS_LEXMODELSV2_API ListBotReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListBotReplicasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>the unique bot IDs in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region of the source bots in the list of replicated bots.</p>
     */
    inline ListBotReplicasResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline const Aws::Vector<BotReplicaSummary>& GetBotReplicaSummaries() const{ return m_botReplicaSummaries; }

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline void SetBotReplicaSummaries(const Aws::Vector<BotReplicaSummary>& value) { m_botReplicaSummaries = value; }

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline void SetBotReplicaSummaries(Aws::Vector<BotReplicaSummary>&& value) { m_botReplicaSummaries = std::move(value); }

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline ListBotReplicasResult& WithBotReplicaSummaries(const Aws::Vector<BotReplicaSummary>& value) { SetBotReplicaSummaries(value); return *this;}

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline ListBotReplicasResult& WithBotReplicaSummaries(Aws::Vector<BotReplicaSummary>&& value) { SetBotReplicaSummaries(std::move(value)); return *this;}

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline ListBotReplicasResult& AddBotReplicaSummaries(const BotReplicaSummary& value) { m_botReplicaSummaries.push_back(value); return *this; }

    /**
     * <p>The summary details for the replicated bots.</p>
     */
    inline ListBotReplicasResult& AddBotReplicaSummaries(BotReplicaSummary&& value) { m_botReplicaSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBotReplicasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBotReplicasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBotReplicasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_sourceRegion;

    Aws::Vector<BotReplicaSummary> m_botReplicaSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
