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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Contains summary information about all the replication statuses applicable
   * for global resiliency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotReplicaSummary">AWS
   * API Reference</a></p>
   */
  class BotReplicaSummary
  {
  public:
    AWS_LEXMODELSV2_API BotReplicaSummary() = default;
    AWS_LEXMODELSV2_API BotReplicaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotReplicaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline const Aws::String& GetReplicaRegion() const { return m_replicaRegion; }
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }
    template<typename ReplicaRegionT = Aws::String>
    void SetReplicaRegion(ReplicaRegionT&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::forward<ReplicaRegionT>(value); }
    template<typename ReplicaRegionT = Aws::String>
    BotReplicaSummary& WithReplicaRegion(ReplicaRegionT&& value) { SetReplicaRegion(std::forward<ReplicaRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    BotReplicaSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline BotReplicaStatus GetBotReplicaStatus() const { return m_botReplicaStatus; }
    inline bool BotReplicaStatusHasBeenSet() const { return m_botReplicaStatusHasBeenSet; }
    inline void SetBotReplicaStatus(BotReplicaStatus value) { m_botReplicaStatusHasBeenSet = true; m_botReplicaStatus = value; }
    inline BotReplicaSummary& WithBotReplicaStatus(BotReplicaStatus value) { SetBotReplicaStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    BotReplicaSummary& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    BotReplicaSummary& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    BotReplicaStatus m_botReplicaStatus{BotReplicaStatus::NOT_SET};
    bool m_botReplicaStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
