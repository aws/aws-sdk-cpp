/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotVersionReplicationStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains summary information for all the version replication statuses
   * applicable for Global resiliency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotVersionReplicaSummary">AWS
   * API Reference</a></p>
   */
  class BotVersionReplicaSummary
  {
  public:
    AWS_LEXMODELSV2_API BotVersionReplicaSummary();
    AWS_LEXMODELSV2_API BotVersionReplicaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotVersionReplicaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline BotVersionReplicaSummary& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline BotVersionReplicaSummary& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version for the summary information for all the version replication
     * statuses.</p>
     */
    inline BotVersionReplicaSummary& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline const BotVersionReplicationStatus& GetBotVersionReplicationStatus() const{ return m_botVersionReplicationStatus; }

    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline bool BotVersionReplicationStatusHasBeenSet() const { return m_botVersionReplicationStatusHasBeenSet; }

    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline void SetBotVersionReplicationStatus(const BotVersionReplicationStatus& value) { m_botVersionReplicationStatusHasBeenSet = true; m_botVersionReplicationStatus = value; }

    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline void SetBotVersionReplicationStatus(BotVersionReplicationStatus&& value) { m_botVersionReplicationStatusHasBeenSet = true; m_botVersionReplicationStatus = std::move(value); }

    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& WithBotVersionReplicationStatus(const BotVersionReplicationStatus& value) { SetBotVersionReplicationStatus(value); return *this;}

    /**
     * <p>The version replication status for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& WithBotVersionReplicationStatus(BotVersionReplicationStatus&& value) { SetBotVersionReplicationStatus(std::move(value)); return *this;}


    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline BotVersionReplicaSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the replication status for all the replicated
     * bots.</p>
     */
    inline BotVersionReplicaSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The reasons for replication failure for all the replicated bots.</p>
     */
    inline BotVersionReplicaSummary& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

  private:

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    BotVersionReplicationStatus m_botVersionReplicationStatus;
    bool m_botVersionReplicationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
