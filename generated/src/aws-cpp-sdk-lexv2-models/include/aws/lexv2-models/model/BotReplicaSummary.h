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
    AWS_LEXMODELSV2_API BotReplicaSummary();
    AWS_LEXMODELSV2_API BotReplicaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotReplicaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline const Aws::String& GetReplicaRegion() const{ return m_replicaRegion; }

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline bool ReplicaRegionHasBeenSet() const { return m_replicaRegionHasBeenSet; }

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline void SetReplicaRegion(const Aws::String& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = value; }

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline void SetReplicaRegion(Aws::String&& value) { m_replicaRegionHasBeenSet = true; m_replicaRegion = std::move(value); }

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline void SetReplicaRegion(const char* value) { m_replicaRegionHasBeenSet = true; m_replicaRegion.assign(value); }

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline BotReplicaSummary& WithReplicaRegion(const Aws::String& value) { SetReplicaRegion(value); return *this;}

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline BotReplicaSummary& WithReplicaRegion(Aws::String&& value) { SetReplicaRegion(std::move(value)); return *this;}

    /**
     * <p>The replica region used in the replication statuses summary.</p>
     */
    inline BotReplicaSummary& WithReplicaRegion(const char* value) { SetReplicaRegion(value); return *this;}


    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline BotReplicaSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation time and date for the replicated bots.</p>
     */
    inline BotReplicaSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline const BotReplicaStatus& GetBotReplicaStatus() const{ return m_botReplicaStatus; }

    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline bool BotReplicaStatusHasBeenSet() const { return m_botReplicaStatusHasBeenSet; }

    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline void SetBotReplicaStatus(const BotReplicaStatus& value) { m_botReplicaStatusHasBeenSet = true; m_botReplicaStatus = value; }

    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline void SetBotReplicaStatus(BotReplicaStatus&& value) { m_botReplicaStatusHasBeenSet = true; m_botReplicaStatus = std::move(value); }

    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline BotReplicaSummary& WithBotReplicaStatus(const BotReplicaStatus& value) { SetBotReplicaStatus(value); return *this;}

    /**
     * <p>The operation status for the replicated bot applicable.</p>
     */
    inline BotReplicaSummary& WithBotReplicaStatus(BotReplicaStatus&& value) { SetBotReplicaStatus(std::move(value)); return *this;}


    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline BotReplicaSummary& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline BotReplicaSummary& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline BotReplicaSummary& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline BotReplicaSummary& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The reasons for the failure for the replicated bot.</p>
     */
    inline BotReplicaSummary& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

  private:

    Aws::String m_replicaRegion;
    bool m_replicaRegionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    BotReplicaStatus m_botReplicaStatus;
    bool m_botReplicaStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
