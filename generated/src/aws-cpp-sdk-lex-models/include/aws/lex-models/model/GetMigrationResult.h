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
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the migration. This is the same as the identifier
     * used when calling the <code>GetMigration</code> operation.</p>
     */
    inline const Aws::String& GetMigrationId() const{ return m_migrationId; }
    inline void SetMigrationId(const Aws::String& value) { m_migrationId = value; }
    inline void SetMigrationId(Aws::String&& value) { m_migrationId = std::move(value); }
    inline void SetMigrationId(const char* value) { m_migrationId.assign(value); }
    inline GetMigrationResult& WithMigrationId(const Aws::String& value) { SetMigrationId(value); return *this;}
    inline GetMigrationResult& WithMigrationId(Aws::String&& value) { SetMigrationId(std::move(value)); return *this;}
    inline GetMigrationResult& WithMigrationId(const char* value) { SetMigrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetV1BotName() const{ return m_v1BotName; }
    inline void SetV1BotName(const Aws::String& value) { m_v1BotName = value; }
    inline void SetV1BotName(Aws::String&& value) { m_v1BotName = std::move(value); }
    inline void SetV1BotName(const char* value) { m_v1BotName.assign(value); }
    inline GetMigrationResult& WithV1BotName(const Aws::String& value) { SetV1BotName(value); return *this;}
    inline GetMigrationResult& WithV1BotName(Aws::String&& value) { SetV1BotName(std::move(value)); return *this;}
    inline GetMigrationResult& WithV1BotName(const char* value) { SetV1BotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline const Aws::String& GetV1BotVersion() const{ return m_v1BotVersion; }
    inline void SetV1BotVersion(const Aws::String& value) { m_v1BotVersion = value; }
    inline void SetV1BotVersion(Aws::String&& value) { m_v1BotVersion = std::move(value); }
    inline void SetV1BotVersion(const char* value) { m_v1BotVersion.assign(value); }
    inline GetMigrationResult& WithV1BotVersion(const Aws::String& value) { SetV1BotVersion(value); return *this;}
    inline GetMigrationResult& WithV1BotVersion(Aws::String&& value) { SetV1BotVersion(std::move(value)); return *this;}
    inline GetMigrationResult& WithV1BotVersion(const char* value) { SetV1BotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale of the Amazon Lex V1 bot migrated to Amazon Lex V2.</p>
     */
    inline const Locale& GetV1BotLocale() const{ return m_v1BotLocale; }
    inline void SetV1BotLocale(const Locale& value) { m_v1BotLocale = value; }
    inline void SetV1BotLocale(Locale&& value) { m_v1BotLocale = std::move(value); }
    inline GetMigrationResult& WithV1BotLocale(const Locale& value) { SetV1BotLocale(value); return *this;}
    inline GetMigrationResult& WithV1BotLocale(Locale&& value) { SetV1BotLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Lex V2 bot that the Amazon Lex V1 is
     * being migrated to.</p>
     */
    inline const Aws::String& GetV2BotId() const{ return m_v2BotId; }
    inline void SetV2BotId(const Aws::String& value) { m_v2BotId = value; }
    inline void SetV2BotId(Aws::String&& value) { m_v2BotId = std::move(value); }
    inline void SetV2BotId(const char* value) { m_v2BotId.assign(value); }
    inline GetMigrationResult& WithV2BotId(const Aws::String& value) { SetV2BotId(value); return *this;}
    inline GetMigrationResult& WithV2BotId(Aws::String&& value) { SetV2BotId(std::move(value)); return *this;}
    inline GetMigrationResult& WithV2BotId(const char* value) { SetV2BotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const{ return m_v2BotRole; }
    inline void SetV2BotRole(const Aws::String& value) { m_v2BotRole = value; }
    inline void SetV2BotRole(Aws::String&& value) { m_v2BotRole = std::move(value); }
    inline void SetV2BotRole(const char* value) { m_v2BotRole.assign(value); }
    inline GetMigrationResult& WithV2BotRole(const Aws::String& value) { SetV2BotRole(value); return *this;}
    inline GetMigrationResult& WithV2BotRole(Aws::String&& value) { SetV2BotRole(std::move(value)); return *this;}
    inline GetMigrationResult& WithV2BotRole(const char* value) { SetV2BotRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the migration. When the status is
     * <code>COMPLETE</code> the migration is finished and the bot is available in
     * Amazon Lex V2. There may be alerts and warnings that need to be resolved to
     * complete the migration.</p>
     */
    inline const MigrationStatus& GetMigrationStatus() const{ return m_migrationStatus; }
    inline void SetMigrationStatus(const MigrationStatus& value) { m_migrationStatus = value; }
    inline void SetMigrationStatus(MigrationStatus&& value) { m_migrationStatus = std::move(value); }
    inline GetMigrationResult& WithMigrationStatus(const MigrationStatus& value) { SetMigrationStatus(value); return *this;}
    inline GetMigrationResult& WithMigrationStatus(MigrationStatus&& value) { SetMigrationStatus(std::move(value)); return *this;}
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
    inline const MigrationStrategy& GetMigrationStrategy() const{ return m_migrationStrategy; }
    inline void SetMigrationStrategy(const MigrationStrategy& value) { m_migrationStrategy = value; }
    inline void SetMigrationStrategy(MigrationStrategy&& value) { m_migrationStrategy = std::move(value); }
    inline GetMigrationResult& WithMigrationStrategy(const MigrationStrategy& value) { SetMigrationStrategy(value); return *this;}
    inline GetMigrationResult& WithMigrationStrategy(MigrationStrategy&& value) { SetMigrationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const{ return m_migrationTimestamp; }
    inline void SetMigrationTimestamp(const Aws::Utils::DateTime& value) { m_migrationTimestamp = value; }
    inline void SetMigrationTimestamp(Aws::Utils::DateTime&& value) { m_migrationTimestamp = std::move(value); }
    inline GetMigrationResult& WithMigrationTimestamp(const Aws::Utils::DateTime& value) { SetMigrationTimestamp(value); return *this;}
    inline GetMigrationResult& WithMigrationTimestamp(Aws::Utils::DateTime&& value) { SetMigrationTimestamp(std::move(value)); return *this;}
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
    inline const Aws::Vector<MigrationAlert>& GetAlerts() const{ return m_alerts; }
    inline void SetAlerts(const Aws::Vector<MigrationAlert>& value) { m_alerts = value; }
    inline void SetAlerts(Aws::Vector<MigrationAlert>&& value) { m_alerts = std::move(value); }
    inline GetMigrationResult& WithAlerts(const Aws::Vector<MigrationAlert>& value) { SetAlerts(value); return *this;}
    inline GetMigrationResult& WithAlerts(Aws::Vector<MigrationAlert>&& value) { SetAlerts(std::move(value)); return *this;}
    inline GetMigrationResult& AddAlerts(const MigrationAlert& value) { m_alerts.push_back(value); return *this; }
    inline GetMigrationResult& AddAlerts(MigrationAlert&& value) { m_alerts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMigrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMigrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMigrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_migrationId;

    Aws::String m_v1BotName;

    Aws::String m_v1BotVersion;

    Locale m_v1BotLocale;

    Aws::String m_v2BotId;

    Aws::String m_v2BotRole;

    MigrationStatus m_migrationStatus;

    MigrationStrategy m_migrationStrategy;

    Aws::Utils::DateTime m_migrationTimestamp;

    Aws::Vector<MigrationAlert> m_alerts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
