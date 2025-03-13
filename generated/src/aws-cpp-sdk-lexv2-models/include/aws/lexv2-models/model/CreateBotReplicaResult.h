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
    AWS_LEXMODELSV2_API CreateBotReplicaResult() = default;
    AWS_LEXMODELSV2_API CreateBotReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique bot ID of the replicated bot generated.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotReplicaResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The region of the replicated bot generated.</p>
     */
    inline const Aws::String& GetReplicaRegion() const { return m_replicaRegion; }
    template<typename ReplicaRegionT = Aws::String>
    void SetReplicaRegion(ReplicaRegionT&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::forward<ReplicaRegionT>(value); }
    template<typename ReplicaRegionT = Aws::String>
    CreateBotReplicaResult& WithReplicaRegion(ReplicaRegionT&& value) { SetReplicaRegion(std::forward<ReplicaRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source region for the source bot used for the replicated bot
     * generated.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CreateBotReplicaResult& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the replicated bot generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    CreateBotReplicaResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational status of the replicated bot generated.</p>
     */
    inline BotReplicaStatus GetBotReplicaStatus() const { return m_botReplicaStatus; }
    inline void SetBotReplicaStatus(BotReplicaStatus value) { m_botReplicaStatusHasBeenSet = true; m_botReplicaStatus = value; }
    inline CreateBotReplicaResult& WithBotReplicaStatus(BotReplicaStatus value) { SetBotReplicaStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBotReplicaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    BotReplicaStatus m_botReplicaStatus{BotReplicaStatus::NOT_SET};
    bool m_botReplicaStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
