/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/MigrationStatus.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about migrating a bot from Amazon Lex V1 to Amazon Lex
   * V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/MigrationSummary">AWS
   * API Reference</a></p>
   */
  class MigrationSummary
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary() = default;
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API MigrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline const Aws::String& GetMigrationId() const { return m_migrationId; }
    inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }
    template<typename MigrationIdT = Aws::String>
    void SetMigrationId(MigrationIdT&& value) { m_migrationIdHasBeenSet = true; m_migrationId = std::forward<MigrationIdT>(value); }
    template<typename MigrationIdT = Aws::String>
    MigrationSummary& WithMigrationId(MigrationIdT&& value) { SetMigrationId(std::forward<MigrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline const Aws::String& GetV1BotName() const { return m_v1BotName; }
    inline bool V1BotNameHasBeenSet() const { return m_v1BotNameHasBeenSet; }
    template<typename V1BotNameT = Aws::String>
    void SetV1BotName(V1BotNameT&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::forward<V1BotNameT>(value); }
    template<typename V1BotNameT = Aws::String>
    MigrationSummary& WithV1BotName(V1BotNameT&& value) { SetV1BotName(std::forward<V1BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline const Aws::String& GetV1BotVersion() const { return m_v1BotVersion; }
    inline bool V1BotVersionHasBeenSet() const { return m_v1BotVersionHasBeenSet; }
    template<typename V1BotVersionT = Aws::String>
    void SetV1BotVersion(V1BotVersionT&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::forward<V1BotVersionT>(value); }
    template<typename V1BotVersionT = Aws::String>
    MigrationSummary& WithV1BotVersion(V1BotVersionT&& value) { SetV1BotVersion(std::forward<V1BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the Amazon Lex V1 bot that is the source of the migration.</p>
     */
    inline Locale GetV1BotLocale() const { return m_v1BotLocale; }
    inline bool V1BotLocaleHasBeenSet() const { return m_v1BotLocaleHasBeenSet; }
    inline void SetV1BotLocale(Locale value) { m_v1BotLocaleHasBeenSet = true; m_v1BotLocale = value; }
    inline MigrationSummary& WithV1BotLocale(Locale value) { SetV1BotLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Lex V2 that is the destination of the
     * migration.</p>
     */
    inline const Aws::String& GetV2BotId() const { return m_v2BotId; }
    inline bool V2BotIdHasBeenSet() const { return m_v2BotIdHasBeenSet; }
    template<typename V2BotIdT = Aws::String>
    void SetV2BotId(V2BotIdT&& value) { m_v2BotIdHasBeenSet = true; m_v2BotId = std::forward<V2BotIdT>(value); }
    template<typename V2BotIdT = Aws::String>
    MigrationSummary& WithV2BotId(V2BotIdT&& value) { SetV2BotId(std::forward<V2BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const { return m_v2BotRole; }
    inline bool V2BotRoleHasBeenSet() const { return m_v2BotRoleHasBeenSet; }
    template<typename V2BotRoleT = Aws::String>
    void SetV2BotRole(V2BotRoleT&& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = std::forward<V2BotRoleT>(value); }
    template<typename V2BotRoleT = Aws::String>
    MigrationSummary& WithV2BotRole(V2BotRoleT&& value) { SetV2BotRole(std::forward<V2BotRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation. When the status is <code>COMPLETE</code> the bot
     * is available in Amazon Lex V2. There may be alerts and warnings that need to be
     * resolved to complete the migration.</p>
     */
    inline MigrationStatus GetMigrationStatus() const { return m_migrationStatus; }
    inline bool MigrationStatusHasBeenSet() const { return m_migrationStatusHasBeenSet; }
    inline void SetMigrationStatus(MigrationStatus value) { m_migrationStatusHasBeenSet = true; m_migrationStatus = value; }
    inline MigrationSummary& WithMigrationStatus(MigrationStatus value) { SetMigrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline MigrationStrategy GetMigrationStrategy() const { return m_migrationStrategy; }
    inline bool MigrationStrategyHasBeenSet() const { return m_migrationStrategyHasBeenSet; }
    inline void SetMigrationStrategy(MigrationStrategy value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }
    inline MigrationSummary& WithMigrationStrategy(MigrationStrategy value) { SetMigrationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const { return m_migrationTimestamp; }
    inline bool MigrationTimestampHasBeenSet() const { return m_migrationTimestampHasBeenSet; }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    void SetMigrationTimestamp(MigrationTimestampT&& value) { m_migrationTimestampHasBeenSet = true; m_migrationTimestamp = std::forward<MigrationTimestampT>(value); }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    MigrationSummary& WithMigrationTimestamp(MigrationTimestampT&& value) { SetMigrationTimestamp(std::forward<MigrationTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_migrationId;
    bool m_migrationIdHasBeenSet = false;

    Aws::String m_v1BotName;
    bool m_v1BotNameHasBeenSet = false;

    Aws::String m_v1BotVersion;
    bool m_v1BotVersionHasBeenSet = false;

    Locale m_v1BotLocale{Locale::NOT_SET};
    bool m_v1BotLocaleHasBeenSet = false;

    Aws::String m_v2BotId;
    bool m_v2BotIdHasBeenSet = false;

    Aws::String m_v2BotRole;
    bool m_v2BotRoleHasBeenSet = false;

    MigrationStatus m_migrationStatus{MigrationStatus::NOT_SET};
    bool m_migrationStatusHasBeenSet = false;

    MigrationStrategy m_migrationStrategy{MigrationStrategy::NOT_SET};
    bool m_migrationStrategyHasBeenSet = false;

    Aws::Utils::DateTime m_migrationTimestamp{};
    bool m_migrationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
