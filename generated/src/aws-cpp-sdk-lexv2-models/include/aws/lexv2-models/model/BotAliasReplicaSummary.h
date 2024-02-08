/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotAliasReplicationStatus.h>
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
   * <p>Contains information about all the aliases replication statuses applicable
   * for global resiliency.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAliasReplicaSummary">AWS
   * API Reference</a></p>
   */
  class BotAliasReplicaSummary
  {
  public:
    AWS_LEXMODELSV2_API BotAliasReplicaSummary();
    AWS_LEXMODELSV2_API BotAliasReplicaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotAliasReplicaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline const Aws::String& GetBotAliasId() const{ return m_botAliasId; }

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline bool BotAliasIdHasBeenSet() const { return m_botAliasIdHasBeenSet; }

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline void SetBotAliasId(const Aws::String& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = value; }

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline void SetBotAliasId(Aws::String&& value) { m_botAliasIdHasBeenSet = true; m_botAliasId = std::move(value); }

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline void SetBotAliasId(const char* value) { m_botAliasIdHasBeenSet = true; m_botAliasId.assign(value); }

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotAliasId(const Aws::String& value) { SetBotAliasId(value); return *this;}

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotAliasId(Aws::String&& value) { SetBotAliasId(std::move(value)); return *this;}

    /**
     * <p>The bot alias ID for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotAliasId(const char* value) { SetBotAliasId(value); return *this;}


    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline const BotAliasReplicationStatus& GetBotAliasReplicationStatus() const{ return m_botAliasReplicationStatus; }

    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline bool BotAliasReplicationStatusHasBeenSet() const { return m_botAliasReplicationStatusHasBeenSet; }

    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline void SetBotAliasReplicationStatus(const BotAliasReplicationStatus& value) { m_botAliasReplicationStatusHasBeenSet = true; m_botAliasReplicationStatus = value; }

    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline void SetBotAliasReplicationStatus(BotAliasReplicationStatus&& value) { m_botAliasReplicationStatusHasBeenSet = true; m_botAliasReplicationStatus = std::move(value); }

    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotAliasReplicationStatus(const BotAliasReplicationStatus& value) { SetBotAliasReplicationStatus(value); return *this;}

    /**
     * <p>The replication statuses for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotAliasReplicationStatus(BotAliasReplicationStatus&& value) { SetBotAliasReplicationStatus(std::move(value)); return *this;}


    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The bot version for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation time and date for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The last time and date updated for all the alias bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline BotAliasReplicaSummary& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline BotAliasReplicaSummary& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline BotAliasReplicaSummary& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The reasons for failure for the aliases bot replications.</p>
     */
    inline BotAliasReplicaSummary& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

  private:

    Aws::String m_botAliasId;
    bool m_botAliasIdHasBeenSet = false;

    BotAliasReplicationStatus m_botAliasReplicationStatus;
    bool m_botAliasReplicationStatusHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
