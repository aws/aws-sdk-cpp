/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotReplicaStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeBotReplicaResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeBotReplicaResult();
    AWS_LEXMODELSV2_API DescribeBotReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeBotReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegion = value; }

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegion = std::move(value); }

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegion.assign(value); }

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The creation date and time of the replicated bot being monitored.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the replicated bot being monitored.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the replicated bot being monitored.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The operational status of the replicated bot being monitored.</p>
     */
    inline const BotReplicaStatus& GetBotReplicaStatus() const{ return m_botReplicaStatus; }

    /**
     * <p>The operational status of the replicated bot being monitored.</p>
     */
    inline void SetBotReplicaStatus(const BotReplicaStatus& value) { m_botReplicaStatus = value; }

    /**
     * <p>The operational status of the replicated bot being monitored.</p>
     */
    inline void SetBotReplicaStatus(BotReplicaStatus&& value) { m_botReplicaStatus = std::move(value); }

    /**
     * <p>The operational status of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithBotReplicaStatus(const BotReplicaStatus& value) { SetBotReplicaStatus(value); return *this;}

    /**
     * <p>The operational status of the replicated bot being monitored.</p>
     */
    inline DescribeBotReplicaResult& WithBotReplicaStatus(BotReplicaStatus&& value) { SetBotReplicaStatus(std::move(value)); return *this;}


    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline DescribeBotReplicaResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline DescribeBotReplicaResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline DescribeBotReplicaResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline DescribeBotReplicaResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The failure reasons the bot being monitored failed to replicate.</p>
     */
    inline DescribeBotReplicaResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBotReplicaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBotReplicaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBotReplicaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_replicaRegion;

    Aws::String m_sourceRegion;

    Aws::Utils::DateTime m_creationDateTime;

    BotReplicaStatus m_botReplicaStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
