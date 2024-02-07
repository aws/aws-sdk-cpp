/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteBotReplicaResult
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotReplicaResult();
    AWS_LEXMODELSV2_API DeleteBotReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DeleteBotReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteBotReplicaResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline DeleteBotReplicaResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline DeleteBotReplicaResult& WithBotId(const char* value) { SetBotId(value); return *this;}


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
    inline DeleteBotReplicaResult& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline DeleteBotReplicaResult& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline DeleteBotReplicaResult& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


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
    inline DeleteBotReplicaResult& WithBotReplicaStatus(const BotReplicaStatus& value) { SetBotReplicaStatus(value); return *this;}

    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline DeleteBotReplicaResult& WithBotReplicaStatus(BotReplicaStatus&& value) { SetBotReplicaStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteBotReplicaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteBotReplicaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteBotReplicaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_replicaRegion;

    BotReplicaStatus m_botReplicaStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
