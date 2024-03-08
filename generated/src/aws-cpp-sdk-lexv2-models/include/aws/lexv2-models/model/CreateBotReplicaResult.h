/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotReplicaStatus.h>
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
  class CreateBotReplicaResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotReplicaResult();
    AWS_LEXMODELSV2_API CreateBotReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegion = value; }

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegion = std::move(value); }

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegion.assign(value); }

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegion = value; }

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegion = std::move(value); }

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegion.assign(value); }

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline CreateBotReplicaResult& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline CreateBotReplicaResult& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline CreateBotReplicaResult& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline const BotReplicaStatus& GetBotReplicaStatus() const{ return m_botReplicaStatus; }

    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline void SetBotReplicaStatus(const BotReplicaStatus& value) { m_botReplicaStatus = value; }

    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline void SetBotReplicaStatus(BotReplicaStatus&& value) { m_botReplicaStatus = std::move(value); }

    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithBotReplicaStatus(const BotReplicaStatus& value) { SetBotReplicaStatus(value); return *this;}

    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline CreateBotReplicaResult& WithBotReplicaStatus(BotReplicaStatus&& value) { SetBotReplicaStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateBotReplicaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateBotReplicaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateBotReplicaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_replicaRegion;

    Aws::String m_sourceRegion;

    Aws::Utils::DateTime m_creationDateTime;

    BotReplicaStatus m_botReplicaStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
