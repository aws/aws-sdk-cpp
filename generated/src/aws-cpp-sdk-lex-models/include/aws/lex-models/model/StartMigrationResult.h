/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/lex-models/model/MigrationStrategy.h>
#include <aws/core/utils/DateTime.h>
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
  class StartMigrationResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult();
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API StartMigrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the Amazon Lex V1 bot that you are migrating to Amazon Lex
     * V2.</p>
     */
    inline const Aws::String& GetV1BotName() const{ return m_v1BotName; }
    inline void SetV1BotName(const Aws::String& value) { m_v1BotName = value; }
    inline void SetV1BotName(Aws::String&& value) { m_v1BotName = std::move(value); }
    inline void SetV1BotName(const char* value) { m_v1BotName.assign(value); }
    inline StartMigrationResult& WithV1BotName(const Aws::String& value) { SetV1BotName(value); return *this;}
    inline StartMigrationResult& WithV1BotName(Aws::String&& value) { SetV1BotName(std::move(value)); return *this;}
    inline StartMigrationResult& WithV1BotName(const char* value) { SetV1BotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot to migrate to Amazon Lex V2. </p>
     */
    inline const Aws::String& GetV1BotVersion() const{ return m_v1BotVersion; }
    inline void SetV1BotVersion(const Aws::String& value) { m_v1BotVersion = value; }
    inline void SetV1BotVersion(Aws::String&& value) { m_v1BotVersion = std::move(value); }
    inline void SetV1BotVersion(const char* value) { m_v1BotVersion.assign(value); }
    inline StartMigrationResult& WithV1BotVersion(const Aws::String& value) { SetV1BotVersion(value); return *this;}
    inline StartMigrationResult& WithV1BotVersion(Aws::String&& value) { SetV1BotVersion(std::move(value)); return *this;}
    inline StartMigrationResult& WithV1BotVersion(const char* value) { SetV1BotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locale used for the Amazon Lex V1 bot. </p>
     */
    inline const Locale& GetV1BotLocale() const{ return m_v1BotLocale; }
    inline void SetV1BotLocale(const Locale& value) { m_v1BotLocale = value; }
    inline void SetV1BotLocale(Locale&& value) { m_v1BotLocale = std::move(value); }
    inline StartMigrationResult& WithV1BotLocale(const Locale& value) { SetV1BotLocale(value); return *this;}
    inline StartMigrationResult& WithV1BotLocale(Locale&& value) { SetV1BotLocale(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon Lex V2 bot. </p>
     */
    inline const Aws::String& GetV2BotId() const{ return m_v2BotId; }
    inline void SetV2BotId(const Aws::String& value) { m_v2BotId = value; }
    inline void SetV2BotId(Aws::String&& value) { m_v2BotId = std::move(value); }
    inline void SetV2BotId(const char* value) { m_v2BotId.assign(value); }
    inline StartMigrationResult& WithV2BotId(const Aws::String& value) { SetV2BotId(value); return *this;}
    inline StartMigrationResult& WithV2BotId(Aws::String&& value) { SetV2BotId(std::move(value)); return *this;}
    inline StartMigrationResult& WithV2BotId(const char* value) { SetV2BotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon Lex uses to run the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetV2BotRole() const{ return m_v2BotRole; }
    inline void SetV2BotRole(const Aws::String& value) { m_v2BotRole = value; }
    inline void SetV2BotRole(Aws::String&& value) { m_v2BotRole = std::move(value); }
    inline void SetV2BotRole(const char* value) { m_v2BotRole.assign(value); }
    inline StartMigrationResult& WithV2BotRole(const Aws::String& value) { SetV2BotRole(value); return *this;}
    inline StartMigrationResult& WithV2BotRole(Aws::String&& value) { SetV2BotRole(std::move(value)); return *this;}
    inline StartMigrationResult& WithV2BotRole(const char* value) { SetV2BotRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that Amazon Lex assigned to the migration.</p>
     */
    inline const Aws::String& GetMigrationId() const{ return m_migrationId; }
    inline void SetMigrationId(const Aws::String& value) { m_migrationId = value; }
    inline void SetMigrationId(Aws::String&& value) { m_migrationId = std::move(value); }
    inline void SetMigrationId(const char* value) { m_migrationId.assign(value); }
    inline StartMigrationResult& WithMigrationId(const Aws::String& value) { SetMigrationId(value); return *this;}
    inline StartMigrationResult& WithMigrationId(Aws::String&& value) { SetMigrationId(std::move(value)); return *this;}
    inline StartMigrationResult& WithMigrationId(const char* value) { SetMigrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used to conduct the migration.</p>
     */
    inline const MigrationStrategy& GetMigrationStrategy() const{ return m_migrationStrategy; }
    inline void SetMigrationStrategy(const MigrationStrategy& value) { m_migrationStrategy = value; }
    inline void SetMigrationStrategy(MigrationStrategy&& value) { m_migrationStrategy = std::move(value); }
    inline StartMigrationResult& WithMigrationStrategy(const MigrationStrategy& value) { SetMigrationStrategy(value); return *this;}
    inline StartMigrationResult& WithMigrationStrategy(MigrationStrategy&& value) { SetMigrationStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetMigrationTimestamp() const{ return m_migrationTimestamp; }
    inline void SetMigrationTimestamp(const Aws::Utils::DateTime& value) { m_migrationTimestamp = value; }
    inline void SetMigrationTimestamp(Aws::Utils::DateTime&& value) { m_migrationTimestamp = std::move(value); }
    inline StartMigrationResult& WithMigrationTimestamp(const Aws::Utils::DateTime& value) { SetMigrationTimestamp(value); return *this;}
    inline StartMigrationResult& WithMigrationTimestamp(Aws::Utils::DateTime&& value) { SetMigrationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMigrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMigrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMigrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_v1BotName;

    Aws::String m_v1BotVersion;

    Locale m_v1BotLocale;

    Aws::String m_v2BotId;

    Aws::String m_v2BotRole;

    Aws::String m_migrationId;

    MigrationStrategy m_migrationStrategy;

    Aws::Utils::DateTime m_migrationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
