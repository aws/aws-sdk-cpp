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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/MigrationAlert.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetMigrationResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the migration. This is the same as the identifier
     * used when calling the <code>GetMigration</code> operation.</p>
     */
    inline const Aws::String& GetMigrationId() const { return m_migrationId; }
    template<typename MigrationIdT = Aws::String>
    void SetMigrationId(MigrationIdT&& value) { m_migrationIdHasBeenSet = true; m_migrationId = std::forward<MigrationIdT>(value); }
    template<typename MigrationIdT = Aws::String>
    GetMigrationResult& WithMigrationId(MigrationIdT&& value) { SetMigrationId(std::forward<MigrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetV1BotName() const { return m_v1BotName; }
    template<typename V1BotNameT = Aws::String>
    void SetV1BotName(V1BotNameT&& value) { m_v1BotNameHasBeenSet = true; m_v1BotName = std::forward<V1BotNameT>(value); }
    template<typename V1BotNameT = Aws::String>
    GetMigrationResult& WithV1BotName(V1BotNameT&& value) { SetV1BotName(std::forward<V1BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetV1BotVersion() const { return m_v1BotVersion; }
    template<typename V1BotVersionT = Aws::String>
    void SetV1BotVersion(V1BotVersionT&& value) { m_v1BotVersionHasBeenSet = true; m_v1BotVersion = std::forward<V1BotVersionT>(value); }
    template<typename V1BotVersionT = Aws::String>
    GetMigrationResult& WithV1BotVersion(V1BotVersionT&& value) { SetV1BotVersion(std::forward<V1BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline Locale GetV1BotLocale() const { return m_v1BotLocale; }
    inline void SetV1BotLocale(Locale value) { m_v1BotLocaleHasBeenSet = true; m_v1BotLocale = value; }
    inline GetMigrationResult& WithV1BotLocale(Locale value) { SetV1BotLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Lex V2 bot that the Amazon Lex V1 is
     * being migrated to.</p>
     */
    inline const Aws::String& GetV2BotId() const { return m_v2BotId; }
    template<typename V2BotIdT = Aws::String>
    void SetV2BotId(V2BotIdT&& value) { m_v2BotIdHasBeenSet = true; m_v2BotId = std::forward<V2BotIdT>(value); }
    template<typename V2BotIdT = Aws::String>
    GetMigrationResult& WithV2BotId(V2BotIdT&& value) { SetV2BotId(std::forward<V2BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const { return m_v2BotRole; }
    template<typename V2BotRoleT = Aws::String>
    void SetV2BotRole(V2BotRoleT&& value) { m_v2BotRoleHasBeenSet = true; m_v2BotRole = std::forward<V2BotRoleT>(value); }
    template<typename V2BotRoleT = Aws::String>
    GetMigrationResult& WithV2BotRole(V2BotRoleT&& value) { SetV2BotRole(std::forward<V2BotRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the migration. When the status is
     * <code>COMPLETE</code> the migration is finished and the bot is available in
     * Amazon Lex V2. There may be alerts and warnings that need to be resolved to
     * complete the migration.</p>
     */
    inline MigrationStatus GetMigrationStatus() const { return m_migrationStatus; }
    inline void SetMigrationStatus(MigrationStatus value) { m_migrationStatusHasBeenSet = true; m_migrationStatus = value; }
    inline GetMigrationResult& WithMigrationStatus(MigrationStatus value) { SetMigrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to conduct the migration.</p> <ul> <li> <p>
     * <code>CREATE_NEW</code> - Creates a new Amazon Lex V2 bot and migrates the
     * Amazon Lex V1 bot to the new bot.</p> </li> <li> <p>
     * <code>UPDATE_EXISTING</code> - Overwrites the existing Amazon Lex V2 bot
     * metadata and the locale being migrated. It doesn't change any other locales in
     * the Amazon Lex V2 bot. If the locale doesn't exist, a new locale is created in
     * the Amazon Lex V2 bot.</p> </li> </ul>
     */
    inline MigrationStrategy GetMigrationStrategy() const { return m_migrationStrategy; }
    inline void SetMigrationStrategy(MigrationStrategy value) { m_migrationStrategyHasBeenSet = true; m_migrationStrategy = value; }
    inline GetMigrationResult& WithMigrationStrategy(MigrationStrategy value) { SetMigrationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const { return m_migrationTimestamp; }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    void SetMigrationTimestamp(MigrationTimestampT&& value) { m_migrationTimestampHasBeenSet = true; m_migrationTimestamp = std::forward<MigrationTimestampT>(value); }
    template<typename MigrationTimestampT = Aws::Utils::DateTime>
    GetMigrationResult& WithMigrationTimestamp(MigrationTimestampT&& value) { SetMigrationTimestamp(std::forward<MigrationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of alerts and warnings that indicate issues with the migration for the
     * Amazon Lex V1 bot to Amazon Lex V2. You receive a warning when an Amazon Lex V1
     * feature has a different implementation if Amazon Lex V2.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/migrate.html">Migrating a
     * bot</a> in the <i>Amazon Lex V2 developer guide</i>.</p>
     */
    inline const Aws::Vector<MigrationAlert>& GetAlerts() const { return m_alerts; }
    template<typename AlertsT = Aws::Vector<MigrationAlert>>
    void SetAlerts(AlertsT&& value) { m_alertsHasBeenSet = true; m_alerts = std::forward<AlertsT>(value); }
    template<typename AlertsT = Aws::Vector<MigrationAlert>>
    GetMigrationResult& WithAlerts(AlertsT&& value) { SetAlerts(std::forward<AlertsT>(value)); return *this;}
    template<typename AlertsT = MigrationAlert>
    GetMigrationResult& AddAlerts(AlertsT&& value) { m_alertsHasBeenSet = true; m_alerts.emplace_back(std::forward<AlertsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMigrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Vector<MigrationAlert> m_alerts;
    bool m_alertsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
